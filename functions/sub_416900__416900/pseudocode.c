_DWORD *sub_416900()
{
  int v0; // eax
  _DWORD *result; // eax
  _DWORD *i; // esi
  int v3; // edi
  unsigned int v4; // eax

  v0 = 0; /*0x416906*/
  if ( unk_B3350C ) /*0x41690a*/
  {
    while ( !*(_DWORD *)(unk_B33510 + 4 * v0) ) /*0x416916*/
    {
      if ( ++v0 >= (unsigned int)unk_B3350C ) /*0x41691d*/
        goto LABEL_4; /*0x41691d*/
    }
    result = *(_DWORD **)(unk_B33510 + 4 * v0); /*0x41693d*/
  }
  else
  {
LABEL_4:
    result = 0; /*0x41691f*/
  }
  for ( i = result; i; result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x6C))(v3) ) /*0x416926*/
  {
    v3 = i[2]; /*0x416934*/
    if ( *i ) /*0x416930*/
    {
      i = (_DWORD *)*i; /*0x416939*/
    }
    else
    {
      v4 = (*(int (__thiscall **)(void *, _DWORD))(MEMORY[0xB33508] + 4))(&MEMORY[0xB33508], i[1]) + 1; /*0x41695c*/
      if ( v4 >= unk_B3350C ) /*0x416961*/
      {
LABEL_12:
        i = 0; /*0x41697e*/
      }
      else
      {
        while ( 1 ) /*0x416970*/
        {
          i = *(_DWORD **)(unk_B33510 + 4 * v4); /*0x416970*/
          if ( i ) /*0x416975*/
            break; /*0x416975*/
          if ( ++v4 >= unk_B3350C ) /*0x41697c*/
            goto LABEL_12; /*0x41697c*/
        }
      }
    }
  }
  return result; /*0x41698f*/
}
