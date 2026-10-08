void __thiscall NiSwitchStringExtraData::~NiSwitchStringExtraData(NiSwitchStringExtraData *this)
{
  unsigned int v2; // edi
  bool v3; // zf

  v2 = 0; /*0x73c5e4*/
  v3 = *((_DWORD *)this + 3) == 0; /*0x73c5e6*/
  *(_DWORD *)this = &NiSwitchStringExtraData::`vftable'; /*0x73c5e9*/
  if ( !v3 ) /*0x73c5ef*/
  {
    do /*0x73c606*/
      FormHeapFree(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v2++)); /*0x73c5f8*/
    while ( v2 < *((_DWORD *)this + 3) ); /*0x73c606*/
  }
  FormHeapFree(*((_DWORD *)this + 4)); /*0x73c60c*/
  *((_DWORD *)this + 4) = 0; /*0x73c615*/
  NiExtraData_dtor((unsigned int *)this); /*0x73c61f*/
}
