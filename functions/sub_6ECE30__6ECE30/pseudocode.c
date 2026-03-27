char __thiscall sub_6ECE30(void *this, int a2)
{
  int v3; // eax
  int v5; // esi
  NiAVObject *v6; // eax

  if ( !a2 )
    return 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( !v3 )
    return 0;
  while ( (char *)v3 != dword_B3F584 )
  {
    v3 = *(_DWORD *)(v3 + 4);
    if ( !v3 )
      return 0;
  }
  if ( !*((_DWORD *)this + 0x10) )
    return 0;
  v5 = 0;
  if ( !*(_WORD *)(a2 + 0x14) )
    return 0;
  while ( 1 )
  {
    v6 = sub_452A60(*(Atmosphere **)(*(_DWORD *)(a2 + 0x10) + 4 * (unsigned __int16)v5));
    if ( v6 )
    {
      if ( !strcmp(*((const char **)this + 0x10), (const char *)v6) )
        break;
    }
    if ( ++v5 >= (unsigned int)*(unsigned __int16 *)(a2 + 0x14) )
      return 0;
  }
  return 1;
}
