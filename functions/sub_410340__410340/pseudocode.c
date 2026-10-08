int sub_410340()
{
  int result; // eax

  if ( MEMORY[0xB33428] ) /*0x410347*/
  {
    if ( unk_B3342C ) /*0x410350*/
      PrintError("Trying to pause a movie while another movie is already paused.  This is not currently supported."); /*0x410357*/
    result = BinkPause(*(_DWORD *)MEMORY[0xB33428], 1); /*0x410369*/
    unk_B3342C = MEMORY[0xB33428]; /*0x410375*/
    MEMORY[0xB33428] = 0; /*0x41037b*/
  }
  return result; /*0x410385*/
}
