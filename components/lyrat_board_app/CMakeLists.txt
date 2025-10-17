file(GLOB TONE_FILES "spiffs/*.wav")

idf_component_register() 

target_add_binary_data(${COMPONENT_LIB} ${TONE_FILES} "flash_tone")