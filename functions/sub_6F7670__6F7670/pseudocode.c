void __thiscall sub_6F7670(std::_Lockit *this)
{
  std::_Locinfo::_Locinfo_dtor(this);
  if ( *((_DWORD *)this + 0x1C) >= 0x10u )
    FormHeapFree(*((_DWORD *)this + 0x17));
  *((_DWORD *)this + 0x1C) = 0xF;
  *((_DWORD *)this + 0x1B) = 0;
  *((_BYTE *)this + 0x5C) = 0;
  if ( *((_DWORD *)this + 0x15) >= 0x10u )
    FormHeapFree(*((_DWORD *)this + 0x10));
  *((_DWORD *)this + 0x15) = 0xF;
  *((_DWORD *)this + 0x14) = 0;
  *((_BYTE *)this + 0x40) = 0;
  if ( *((_DWORD *)this + 0xE) >= 0x10u )
    FormHeapFree(*((_DWORD *)this + 9));
  *((_DWORD *)this + 0xE) = 0xF;
  *((_DWORD *)this + 0xD) = 0;
  *((_BYTE *)this + 0x24) = 0;
  if ( *((_DWORD *)this + 7) >= 0x10u )
    FormHeapFree(*((_DWORD *)this + 2));
  *((_DWORD *)this + 7) = 0xF;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 8) = 0;
  std::_Lockit::~_Lockit(this);
}
