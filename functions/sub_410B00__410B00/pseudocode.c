_DWORD *sub_410B00()
{
  unsigned int v0; // esi
  _DWORD *result; // eax

  v0 = MEMORY[0xB33428]; /*0x410b02*/
  if ( MEMORY[0xB33428] ) /*0x410b0c*/
  {
    if ( *(_DWORD *)MEMORY[0xB33428] ) /*0x410b0e*/
      BinkClose(*(_DWORD *)MEMORY[0xB33428]); /*0x410b15*/
    if ( *(_DWORD *)(v0 + 8) ) /*0x410b1b*/
      sub_410110(*(_DWORD **)(v0 + 8)); /*0x410b23*/
    *(float *)(v0 + 0x14) = 1.0; /*0x410b2e*/
    *(_DWORD *)v0 = 0; /*0x410b31*/
    *(_DWORD *)(v0 + 4) = 0; /*0x410b35*/
    *(float *)(v0 + 0x18) = 0.0; /*0x410b38*/
    *(_DWORD *)(v0 + 8) = 0; /*0x410b3b*/
    *(float *)(v0 + 0x1C) = 0.0; /*0x410b3e*/
    *(_DWORD *)(v0 + 0xC) = 0; /*0x410b41*/
    *(_DWORD *)(v0 + 0x10) = 0; /*0x410b44*/
    *(_DWORD *)(v0 + 0x20) = 0; /*0x410b47*/
    *(_BYTE *)(v0 + 0x24) = 0; /*0x410b4a*/
    FormHeapFree(v0); /*0x410b4d*/
    MEMORY[0xB33428] = 0; /*0x410b55*/
  }
  result = (_DWORD *)unk_B3342C; /*0x410b5b*/
  if ( unk_B3342C ) /*0x410b62*/
  {
    MEMORY[0xB33428] = unk_B3342C; /*0x410b64*/
    unk_B3342C = 0; /*0x410b69*/
    return (_DWORD *)BinkPause(*result, 0); /*0x410b73*/
  }
  return result; /*0x410b79*/
}
