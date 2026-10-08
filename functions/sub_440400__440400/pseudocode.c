void __thiscall sub_440400(TESObjectCELL **this)
{
  TESObjectCELL *v2; // ecx
  int v3; // edi
  unsigned int v4; // eax
  unsigned int i; // ebx
  unsigned int j; // esi
  TESObjectCELL *v7; // ecx

  unk_B33C28 = 0; /*0x440402*/
  v2 = *(this + 0xD); /*0x44040c*/
  if ( v2 ) /*0x440411*/
  {
    sub_4CCC50(v2); /*0x440413*/
  }
  else
  {
    v3 = (int)*(this + 2); /*0x482472*/
    v4 = *(_DWORD *)(v3 + 0xC); /*0x482474*/
    for ( i = 0; i < v4; ++i ) /*0x48247b*/
    {
      for ( j = 0; j < v4; ++j ) /*0x482484*/
      {
        v7 = *(TESObjectCELL **)(*(_DWORD *)(v3 + 0x10) + 8 * (j + i * v4)); /*0x482491*/
        if ( v7 ) /*0x482495*/
          sub_4CCC50(v7); /*0x482497*/
        v4 = *(_DWORD *)(v3 + 0xC); /*0x48249c*/
      }
      v4 = *(_DWORD *)(v3 + 0xC); /*0x4824a6*/
    }
  }
}
