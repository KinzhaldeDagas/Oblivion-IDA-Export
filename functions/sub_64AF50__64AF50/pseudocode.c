void __thiscall sub_64AF50(HighProcess *this, Actor *a2)
{
  this->follow = a2;
  if ( a2 )
    Actor::SetCompressedFlag(a2, 1);
  if ( !this->follow && !this->unk0D0 )
    ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_64)(this, a2);
}
