// Fog decode: copies default RGB globals into renderer startup color vector; fixed/default boundary, not dynamic world fog upload.
int sub_9DF290()
{
  *(float *)&MEMORY[0xB33E90][0x124C] = MEMORY[0xB3F9B0][0x38];// Fog fixed/default decode: renderer startup color vector red = B3FA90; startup/default cache only, not active B333E4 shader fog. /*0x9df2a1*/
  *(float *)&MEMORY[0xB33E90][0x1250] = MEMORY[0xB3F9B0][0x39];// Fog fixed/default decode: renderer startup color vector green = B3FA94; startup/default cache only, not active B333E4 shader fog. /*0x9df2a6*/
  *(float *)&MEMORY[0xB33E90][0x1254] = MEMORY[0xB3F9B0][0x3A];// Fog fixed/default decode: renderer startup color vector blue = B3FA98; startup/default cache only, not active B333E4 shader fog. /*0x9df2ac*/
  return LODWORD(MEMORY[0xB3F9B0][0x38]); /*0x9df2b2*/
}
