void __thiscall MiddleLowProcess::CloneFrom(MiddleLowProcess *this, MiddleLowProcess *a2)
{
  this->unk090 = a2->unk090;
  AVCollection_CopyFrom(&this->maxAVModifiers.avList.entry, (int *)&a2->maxAVModifiers);
}
