void __thiscall DebugTextExtraData::~DebugTextExtraData(DebugTextExtraData *this)
{
  FormHeapFree(*((_DWORD *)this + 4));
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 0xB) = 0;
  *((_WORD *)this + 0xA) = 0;
  NiExtraData_dtor(this);
}
