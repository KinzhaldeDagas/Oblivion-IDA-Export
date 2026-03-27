void __thiscall NiTextKeyExtraData::~NiTextKeyExtraData(NiTextKeyExtraData *this)
{
  int *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &NiTextKeyExtraData::`vftable';
  v2 = *((int **)this + 4);
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 8u, v2[0xFFFFFFFF], sub_6EC6B0);
    FormHeapFree(v3);
  }
  NiExtraData_dtor(this);
}
