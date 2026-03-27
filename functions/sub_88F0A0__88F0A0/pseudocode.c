void __thiscall sub_88F0A0(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = (_DWORD *)*(this + 4);
  if ( v2 )
  {
    v3 = v2[2];
    if ( v3 && (v4 = v3 + 0x14) != 0 )
      v5 = *(_DWORD *)(v4 + 0x1C);
    else
      LOBYTE(v5) = 0;
    if ( (v5 & 0x3F) == 8 )
    {
      v6 = *(this + 8);
      if ( v6 )
        (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x5C))(v2, v6);
    }
  }
}
