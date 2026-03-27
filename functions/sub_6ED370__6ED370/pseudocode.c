char __thiscall sub_6ED370(float *this, int a2)
{
  int v4; // ecx
  int v5; // ecx

  if ( !(unsigned __int8)sub_89D6F0(a2) )
    return 0;
  if ( *(float *)(a2 + 0xC) == *(this + 3) && *(float *)(a2 + 0x10) == *(this + 4) )
    return 1;
  v4 = *((_DWORD *)this + 5);
  if ( v4 )
  {
    if ( !*(_DWORD *)(a2 + 0x14)
      || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x14)) )
    {
      return 0;
    }
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(a2 + 0x14) )
  {
LABEL_11:
    v5 = *((_DWORD *)this + 6);
    if ( v5 )
    {
      if ( *(_DWORD *)(a2 + 0x18) )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 0x2C))(v5, *(_DWORD *)(a2 + 0x18));
    }
  }
  return 0;
}
