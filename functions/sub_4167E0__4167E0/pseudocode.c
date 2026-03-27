_DWORD *sub_4167E0()
{
  int v0; // eax
  _DWORD *result; // eax
  _DWORD *v2; // ecx
  int v3; // edi
  unsigned int v4; // eax

  v0 = 0;
  if ( dword_B3350C )
  {
    while ( !*(_DWORD *)(dword_B33510 + 4 * v0) )
    {
      if ( ++v0 >= (unsigned int)dword_B3350C )
        goto LABEL_4;
    }
    result = *(_DWORD **)(dword_B33510 + 4 * v0);
  }
  else
  {
LABEL_4:
    result = 0;
  }
  while ( result )
  {
    v2 = (_DWORD *)*result;
    v3 = result[2];
    if ( !*result )
    {
      v4 = (*(int (__thiscall **)(int *, _DWORD))(EffectSettingCollection + 4))(&EffectSettingCollection, result[1]) + 1;
      if ( v4 >= dword_B3350C )
      {
LABEL_12:
        result = 0;
        goto LABEL_13;
      }
      while ( 1 )
      {
        v2 = *(_DWORD **)(dword_B33510 + 4 * v4);
        if ( v2 )
          break;
        if ( ++v4 >= dword_B3350C )
          goto LABEL_12;
      }
    }
    result = v2;
LABEL_13:
    if ( v3 )
      *(_DWORD *)(v3 + 0x58) &= ~0x200000u;
  }
  return result;
}
