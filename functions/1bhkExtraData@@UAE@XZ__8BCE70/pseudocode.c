void __thiscall bhkExtraData::~bhkExtraData(bhkExtraData *this)
{
  _DWORD *v2; // esi
  char *v3; // esi

  *(_DWORD *)this = &bhkExtraData::`vftable'; /*0x8bce9a*/
  v2 = (_DWORD *)((char *)this + 0xC); /*0x8bcea0*/
  sub_8BCC50((_DWORD *)this + 3); /*0x8bcead*/
  *v2 = &NiTLargeArray<NiPointer<NiTimeController>>::`vftable'; /*0x8bceb2*/
  v3 = (char *)v2[1]; /*0x8bceb8*/
  if ( v3 ) /*0x8bcec2*/
  {
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x8bced3*/
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFC)); /*0x8bced9*/
  }
  NiExtraData_dtor((unsigned int *)this); /*0x8bceeb*/
}
