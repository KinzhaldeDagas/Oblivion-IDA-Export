void __thiscall NiStringsExtraData::~NiStringsExtraData(NiStringsExtraData *this)
{
  unsigned int v2; // edi
  bool v3; // zf

  v2 = 0; /*0x73cc24*/
  v3 = *((_DWORD *)this + 3) == 0; /*0x73cc26*/
  *(_DWORD *)this = &NiStringsExtraData::`vftable'; /*0x73cc29*/
  if ( !v3 ) /*0x73cc2f*/
  {
    do /*0x73cc46*/
      FormHeapFree(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v2++)); /*0x73cc38*/
    while ( v2 < *((_DWORD *)this + 3) ); /*0x73cc46*/
  }
  FormHeapFree(*((_DWORD *)this + 4)); /*0x73cc4c*/
  *((_DWORD *)this + 4) = 0; /*0x73cc55*/
  NiExtraData_dtor((unsigned int *)this); /*0x73cc5f*/
}
