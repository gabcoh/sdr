set(OPENSSL_INCLUDE_DIR /usr/include/openssl-1.0/)
set(OPENSSL_CRYPTO_LIBRARY /usr/lib/openssl-1.0/libcrypto.so)
set(OPENSSL_SSL_LIBRARY /usr/lib/openssl-1.0/libssl.so)

set(OPENSSL_LIBRARIES ${OPENSSL_CRYPTO_LIBRARY} ${OPENSSL_SSL_LIBRARY})

set(OF_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../external/of/" CACHE PATH "THE root director of ofnode/of project.")
include(${OF_ROOT}/openFrameworks.cmake)

include_directories(../external/librtlsdr/include)

add_executable(test main.cpp ofApp.cpp ${OFXADDONS_SOURCES})

include_directories(${openFrameworks_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../external/liblinkedlist/src)

#message("openssl version: ${OPENFRAMEWORKS_LIBRARIES}")

#message("${OPENFRAMEWORKS_LIBRARIES}")
target_link_libraries(test ${OPENFRAMEWORKS_LIBRARIES} )
target_link_libraries(test ${CMAKE_SOURCE_DIR}/external/librtlsdr/build/src/librtlsdr.so)
ofSetTargetProperties()
