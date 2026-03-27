int __thiscall sub_5E05F0(Actor *this, int a2)
{
  int result; // eax

  if ( this->members.super.process )
    return ((int (__thiscall *)(LowProcess *, int, _DWORD))this->members.super.process->Unk_B0)(
             this->members.super.process,
             a2,
             0);
  return result;
}
