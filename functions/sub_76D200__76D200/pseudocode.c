unsigned int __thiscall sub_76D200(
        unsigned __int16 *this,
        int a2,
        int a3,
        NiGeometryBufferData *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v10; // ecx
  unsigned int v11; // ebp
  int v12; // eax
  unsigned __int16 Flags_high; // ax
  BOOL v14; // esi
  int v15; // ecx
  bool v16; // bl
  unsigned __int16 v17; // ax
  int v18; // esi
  _DWORD *v19; // ecx

  if ( a2 )
  {
    if ( !a4 )
      return 0xFFFFFFFF;
  }
  else if ( !a4 || !sub_777F10(a4) || !a5 )
  {
    return 0xFFFFFFFF;
  }
  v10 = *(_DWORD *)(a5 + 0x20);
  v11 = 0;
  if ( !a2 || (v12 = *(_DWORD *)(a2 + 0xB4), (*(_WORD *)(v12 + 0x2E) & 0xF000) == 0x4000) )
    Flags_high = HIBYTE(a4->Flags);
  else
    Flags_high = *(_BYTE *)(v12 + 0x2C) & 0x3F;
  *((_DWORD *)this + 0x15) = 0;
  v14 = 0;
  if ( Flags_high )
  {
    v11 = **(_DWORD **)(v10 + 0x20);
    *((_DWORD *)this + 0x15) = Flags_high - 1;
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 8) )
        v14 = 1;
    }
  }
  v15 = (*(unsigned __int8 *)(v10 + 0x18) >> 1) & 7;
  v16 = v15 != 0;
  if ( v15 || v14 )
  {
    sub_76D0A0(this, 1, 3, 0, 0);
    if ( v14 )
    {
      v17 = *(unsigned __int8 *)(v11 + 4);
      if ( (unsigned int)*(unsigned __int8 *)(v11 + 4) > *((_DWORD *)this + 0x15) )
        v17 = *(this + 0x2A);
      v18 = sub_76CA10(this, (unsigned int *)v11, v17);
      v19 = *(_DWORD **)(v18 + 0xC);
      if ( v16 )
      {
        sub_772FF0(v19, 1, 4, 0);
        sub_772FF0(*(_DWORD **)(v18 + 0xC), 3, 0, 0);
        sub_772FF0(*(_DWORD **)(v18 + 0xC), 4, 4, 0);
        sub_772FF0(*(_DWORD **)(v18 + 0xC), 6, 0, 0);
LABEL_26:
        sub_76CEF0((int)this, v11);
        return 0;
      }
    }
    else
    {
      v18 = sub_76CA10(this, 0, 0);
      v19 = *(_DWORD **)(v18 + 0xC);
    }
    sub_772FF0(v19, 1, 2, 0);
    sub_772FF0(*(_DWORD **)(v18 + 0xC), 4, 2, 0);
    goto LABEL_26;
  }
  return 0;
}
