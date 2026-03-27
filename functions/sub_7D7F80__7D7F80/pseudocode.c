unsigned __int16 *__thiscall sub_7D7F80(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  unsigned __int16 *v3; // esi
  int v4; // edi
  NiObject *v5; // eax
  NiObjectNET *v6; // ecx
  int v7; // eax
  int v8; // ebp
  NiExtraData *v9; // ecx
  unsigned int v10; // eax
  NiExtraDataVtbl *vftable; // eax
  NiExtraData *ExtraData; // [esp+14h] [ebp-18h]

  v2 = this;
  v3 = 0;
  ExtraData = 0;
  v4 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 0xB4) + 8);
  v5 = (NiObject *)FormHeapAlloc(0x2Cu);
  if ( v5 )
    v3 = (unsigned __int16 *)sub_4C14D0(v5, v4);
  v6 = *(NiObjectNET **)(a2 + 0x1C);
  if ( v6 )
    ExtraData = NiObjectNET_GetExtraData(v6, "tex %");
  v7 = v2[0x35];
  v8 = 0;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 0xC) )
    {
      if ( *(_DWORD *)(v7 + 0x10) )
        v8 = 2;
    }
  }
  v9 = ExtraData;
  if ( ExtraData )
    v8 += 2;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 0xC) )
    {
      if ( *(_DWORD *)(v7 + 0x10) )
      {
        v10 = v8 - 1;
        if ( v8 <= 2 )
          v10 = v8;
        sub_7263B0(v3, v10);
        sub_726B80(v3, v8);
        sub_7260B0((int)v3, v4, 0, *(void **)(*(this + 0x35) + 0xC), (_DWORD *)(0xC * v4), 0);
        sub_7262A0((int)v3, 0, 0, 0, 3, v4, 0xC, 0xC);
        sub_7260B0((int)v3, v4, 1u, *(void **)(*(this + 0x35) + 0x10), (_DWORD *)(0xC * v4), 0);
        sub_7262A0((int)v3, 1u, 1u, 0, 3, v4, 0xC, 0xC);
        v2 = this;
        v9 = ExtraData;
      }
    }
  }
  if ( v9 )
  {
    vftable = v9[1].__vftable;
    v2[0x36] = vftable;
    if ( vftable )
      v2[7] |= 0x4000u;
    else
      v2[7] &= ~0x4000u;
    v2[9] = 0;
    sub_7260B0((int)v3, v4, v8 - 1, vftable, (_DWORD *)(0x20 * v4), 0);
    sub_7262A0((int)v3, v8 - 2, v8 - 1, 0, 4, v4, 0x10, 0x20);
    sub_7262A0((int)v3, v8 - 1, v8 - 1, 0x10, 4, v4, 0x10, 0x20);
    ExtraData[1].member.super.m_uiRefCount = 0;
    ExtraData[1].__vftable = 0;
    sub_6FFAC0((_WORD *)a2, "tex %");
  }
  return v3;
}
