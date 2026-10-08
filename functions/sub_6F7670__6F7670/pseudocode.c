void __thiscall sub_6F7670(std::_Lockit *this)
{
  std::_Locinfo::_Locinfo_dtor(this); /*0x6f76a4*/
  if ( *((_DWORD *)this + 0x1C) >= 0x10u ) /*0x6f76b4*/
    FormHeapFree(*((_DWORD *)this + 0x17)); /*0x6f76ba*/
  *((_DWORD *)this + 0x1C) = 0xF; /*0x6f76c9*/
  *((_DWORD *)this + 0x1B) = 0; /*0x6f76cc*/
  *((_BYTE *)this + 0x5C) = 0; /*0x6f76cf*/
  if ( *((_DWORD *)this + 0x15) >= 0x10u ) /*0x6f76d5*/
    FormHeapFree(*((_DWORD *)this + 0x10)); /*0x6f76db*/
  *((_DWORD *)this + 0x15) = 0xF; /*0x6f76e3*/
  *((_DWORD *)this + 0x14) = 0; /*0x6f76e6*/
  *((_BYTE *)this + 0x40) = 0; /*0x6f76e9*/
  if ( *((_DWORD *)this + 0xE) >= 0x10u ) /*0x6f76ef*/
    FormHeapFree(*((_DWORD *)this + 9)); /*0x6f76f5*/
  *((_DWORD *)this + 0xE) = 0xF; /*0x6f76fd*/
  *((_DWORD *)this + 0xD) = 0; /*0x6f7700*/
  *((_BYTE *)this + 0x24) = 0; /*0x6f7703*/
  if ( *((_DWORD *)this + 7) >= 0x10u ) /*0x6f7709*/
    FormHeapFree(*((_DWORD *)this + 2)); /*0x6f770f*/
  *((_DWORD *)this + 7) = 0xF; /*0x6f7717*/
  *((_DWORD *)this + 6) = 0; /*0x6f771a*/
  *((_BYTE *)this + 8) = 0; /*0x6f771f*/
  std::_Lockit::~_Lockit(this); /*0x6f772a*/
}
