UInt32 __thiscall sub_5E12B0(Actor *this)
{
  if ( this->members.super.process )
    return this->members.super.process->Unk_39(this->members.super.process, (UInt32)this);
  else
    return 0;
}
