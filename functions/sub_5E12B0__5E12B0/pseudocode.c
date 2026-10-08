UInt32 __thiscall sub_5E12B0(Actor *this)
{
  if ( this->members.super.process ) /*0x5e12b0*/
    return this->members.super.process->Unk_39(this->members.super.process, (UInt32)this); /*0x5e12c4*/
  else
    return 0; /*0x5e12c7*/
}
