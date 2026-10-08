void __thiscall DebugTextExtraData::~DebugTextExtraData(DebugTextExtraData *this)
{
  FormHeapFree(*((_DWORD *)this + 4)); /*0x571d08*/
  *((_DWORD *)this + 4) = 0; /*0x571d14*/
  *((_WORD *)this + 0xB) = 0; /*0x571d17*/
  *((_WORD *)this + 0xA) = 0; /*0x571d1b*/
  NiExtraData_dtor((unsigned int *)this); /*0x571d27*/
}
