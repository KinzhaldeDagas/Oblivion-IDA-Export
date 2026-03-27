void __thiscall bhkExtraData::~bhkExtraData(bhkExtraData *this)
{
  _DWORD *v2; // esi
  int *v3; // esi

  *(_DWORD *)this = &bhkExtraData::`vftable';
  v2 = (_DWORD *)((char *)this + 0xC);
  sub_8BCC50((_DWORD *)this + 3);
  *v2 = &NiTLargeArray<NiPointer<NiTimeController>>::`vftable';
  v3 = (int *)v2[1];
  if ( v3 )
  {
    _LN21(v3, 4u, v3[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF));
  }
  NiExtraData_dtor((unsigned int *)this);
}
