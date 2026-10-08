void __thiscall sub_4B53E0(TESForm *this)
{
  int AVFromGroupOffset; // eax

  if ( (this->member.flags & 8) == 0 ) /*0x4b53eb*/
  {
    TESScriptableForm_Link((int)this + 0x54, this); /*0x4b53f1*/
    TESEnchantableForm_LinkComponent((_DWORD *)this + 0x18, this); /*0x4b53fa*/
    if ( *((_BYTE *)this + 0x89) != 0xFF ) /*0x4b5408*/
    {
      AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, *((_BYTE *)this + 0x89)); /*0x4b540d*/
      if ( AVFromGroupOffset < 0xC || AVFromGroupOffset > 0x21 ) /*0x4b541d*/
        *((_BYTE *)this + 0x89) = 0xFF; /*0x4b541f*/
    }
    TESForm_SetIsLinked(this, 1); /*0x4b542a*/
  }
}
