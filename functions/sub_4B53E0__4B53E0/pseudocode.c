void __thiscall sub_4B53E0(TESForm *this)
{
  int AVFromGroupOffset; // eax

  if ( (this->member.flags & 8) == 0 )
  {
    TESScriptableForm_Link((int)this + 0x54, this);
    TESEnchantableForm_LinkComponent((_DWORD *)this + 0x18, this);
    if ( *((_BYTE *)this + 0x89) != 0xFF )
    {
      AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, *((_BYTE *)this + 0x89));
      if ( AVFromGroupOffset < 0xC || AVFromGroupOffset > 0x21 )
        *((_BYTE *)this + 0x89) = 0xFF;
    }
    TESForm_SetIsLinked(this, 1);
  }
}
