// 3DTheft decode: Actor_ClearMovementFlag wrapper calls process vfunc +0x2C4 with enabled=false.
int __thiscall sub_5E05F0(Actor *this, int a2)
{
  int result; // eax

  if ( this->members.super.process ) /*0x5e05f0*/
    return ((int (__thiscall *)(LowProcess *, int, _DWORD))this->members.super.process->Unk_B0)( /*0x5e0608*/
             this->members.super.process,
             a2,
             0);
  return result; /*0x5e060a*/
}
