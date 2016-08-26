#
# Copyright 2016 The Android Open-Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

#
# Input Device Configuration File for the Stingray touch screen.
#

# Basic Parameters
touch.deviceType = touchScreen
touch.orientationAware = 1

# Size
# Based on empirical measurements, we estimate the size of the contact
# using size = sqrt(area) * 28 + 0.
touch.size.calibration = area
touch.size.scale = 28
touch.size.bias = 0
touch.size.isSummed = 0

# Pressure
# Driver reports signal strength as pressure.
#
# A normal index finger touch typically registers about 80 signal strength
# units although we don't expect these values to be accurate.
touch.pressure.calibration = amplitude
touch.pressure.scale = 0.0125

# Orientation
touch.orientation.calibration = vector

