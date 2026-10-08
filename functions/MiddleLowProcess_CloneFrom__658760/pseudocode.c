// Verified copy relationship: maxAVModifiers +0x94 copied through AVCollection_CopyFrom. This preserves storage ownership via new nodes rather than sharing source payload pointers.
void __thiscall MiddleLowProcess::CloneFrom(MiddleLowProcess *this, MiddleLowProcess *a2)
{
  this->unk090 = a2->unk090; /*0x65876f*/
  AVCollection_CopyFrom(&this->maxAVModifiers, &a2->maxAVModifiers); /*0x65877f*/
}
