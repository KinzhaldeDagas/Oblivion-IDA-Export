void __thiscall ExtraEditorID::~ExtraEditorID(ExtraEditorID *this)
{
  FormHeapFree(*((_DWORD *)this + 3));
  *((_DWORD *)this + 3) = 0;
  *((_WORD *)this + 9) = 0;
  *((_WORD *)this + 8) = 0;
  *(_DWORD *)this = &BSExtraData::`vftable';
}
