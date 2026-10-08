// RadiantAI 2026-07-12: HighProcess vtable +0xD0 target setter. Stores target in follow, sets compressed flag, and invokes fallback when follow and unk0D0 are null.
void __thiscall sub_64AF50(HighProcess *this, Actor *a2)
{
  this->follow = a2; /*0x64af5a*/
  if ( a2 ) /*0x64af5d*/
    Actor::SetCompressedFlag(a2, 1); /*0x64af63*/
  if ( !this->follow && !this->unk0D0 ) /*0x64af6e*/
    ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_64)(this, a2); /*0x64af82*/
}
