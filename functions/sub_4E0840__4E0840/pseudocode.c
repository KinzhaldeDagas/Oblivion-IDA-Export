__int16 __thiscall sub_4E0840(_BYTE *this)
{
  int v3; // esi
  NiObject *v4; // eax
  int v5; // ecx
  int v6; // eax
  signed __int16 v7; // di
  NiObject *v8; // esi
  NiObject *v9; // eax

  if ( sub_4211C0((ExtraDataList *)(this + 0x44)) )
    return 0;
  v3 = *((_DWORD *)this + 0xF);
  v4 = 0;
  if ( v3 )
  {
    if ( *(_WORD *)(v3 + 0xB6) )
    {
      v5 = **(_DWORD **)(v3 + 0xB0);
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 0xC) )
        {
          v6 = sub_405790(v3, 0);
          v4 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v6 + 0xC));
        }
      }
    }
  }
  v7 = sub_4DA760((int)v4);
  if ( v3 )
    v8 = *(NiObject **)(v3 + 0xC);
  else
    v8 = 0;
  v9 = NiRTTI_Cast(&stru_B3CAC0, v8);
  return v7 + sub_4DA760((int)v9);
}
