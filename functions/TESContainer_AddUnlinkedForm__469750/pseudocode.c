void __thiscall TESContainer_AddUnlinkedForm(_BYTE *this, _DWORD *a2)
{
  if ( !a2 || (*(this + 4) & 1) != 0 ) /*0x46975d*/
    JUMPOUT(0x4697C0); /*0x4697c0*/
  if ( this == (_BYTE *)0xFFFFFFF8 ) /*0x469767*/
    JUMPOUT(0x469784); /*0x469784*/
  TESContainer_AddUnlinkedForm_::ContentLoop((int)(this + 8), (_DWORD *)this + 2, a2, (int)a2); /*0x46976a*/
}
