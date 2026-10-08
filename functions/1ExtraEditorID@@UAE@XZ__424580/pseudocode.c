void __thiscall ExtraEditorID::~ExtraEditorID(ExtraEditorID *this)
{
  FormHeapFree(*((_DWORD *)this + 3)); /*0x4245a8*/
  *((_DWORD *)this + 3) = 0; /*0x4245b2*/
  *((_WORD *)this + 9) = 0; /*0x4245b5*/
  *((_WORD *)this + 8) = 0; /*0x4245b9*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x4245bd*/
}
