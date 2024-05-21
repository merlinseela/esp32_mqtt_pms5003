# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/TZimm/esp/v5.2.1/esp-idf/components/bootloader/subproject"
  "C:/Uni/M_TI1/IOT/U2/PartikelMQTT/build/bootloader"
  "C:/Uni/M_TI1/IOT/U2/PartikelMQTT/build/bootloader-prefix"
  "C:/Uni/M_TI1/IOT/U2/PartikelMQTT/build/bootloader-prefix/tmp"
  "C:/Uni/M_TI1/IOT/U2/PartikelMQTT/build/bootloader-prefix/src/bootloader-stamp"
  "C:/Uni/M_TI1/IOT/U2/PartikelMQTT/build/bootloader-prefix/src"
  "C:/Uni/M_TI1/IOT/U2/PartikelMQTT/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Uni/M_TI1/IOT/U2/PartikelMQTT/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Uni/M_TI1/IOT/U2/PartikelMQTT/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
