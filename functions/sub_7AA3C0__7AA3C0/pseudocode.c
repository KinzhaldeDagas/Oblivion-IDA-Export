char __thiscall sub_7AA3C0(int this, int a2, int a3)
{
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax

  if ( a2 == *(_DWORD *)(this + 0x223C) )
    return *(_BYTE *)(this + 0x2240);
  v5 = *(_DWORD **)(this + 0x2230);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v6 = v5[2];
    v5 = (_DWORD *)*v5;
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 0x10) == a2 )
        break;
    }
    if ( !v5 )
      return 0;
  }
  if ( !*(_BYTE *)(v6 + 0x19) )
    goto LABEL_20;
  if ( (_BYTE)a3 )
  {
    if ( byte_B42CDE && *(_DWORD *)(v6 + 0x14) )
    {
      do
      {
        v7 = (*(int (__stdcall **)(_DWORD, int *, int, int))(**(_DWORD **)(v6 + 0x14) + 0x1C))(
               *(_DWORD *)(v6 + 0x14),
               &a3,
               4,
               1);
        ++dword_B42CAC;
      }
      while ( v7 == 1 );
      if ( !v7 )
      {
        v8 = a3;
        *(_BYTE *)(v6 + 0x18) = a3 == 0;
        *(_DWORD *)(v6 + 0x1C) = v8;
LABEL_18:
        *(_BYTE *)(v6 + 0x19) = 0;
        goto LABEL_19;
      }
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v6 + 0x14) + 8))(*(_DWORD *)(v6 + 0x14));
      *(_DWORD *)(v6 + 0x14) = 0;
    }
    else if ( !byte_B42CDF )
    {
      goto LABEL_18;
    }
    *(_DWORD *)(v6 + 0x1C) = 0xF423F;
    *(_BYTE *)(v6 + 0x18) = 0;
    goto LABEL_18;
  }
LABEL_19:
  if ( !*(_BYTE *)(v6 + 0x19) )
  {
LABEL_20:
    *(_DWORD *)(this + 0x223C) = a2;
    *(_BYTE *)(this + 0x2240) = *(_BYTE *)(v6 + 0x18);
  }
  return *(_BYTE *)(v6 + 0x18);
}
