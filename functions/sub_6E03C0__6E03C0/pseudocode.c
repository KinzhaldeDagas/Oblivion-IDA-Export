int __thiscall sub_6E03C0(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  NiTimeController_LinkObject(this, a2); /*0x6e03c9*/
  result = sub_7124A0(a2); /*0x6e03d0*/
  *(this + 0x10) = result; /*0x6e03d6*/
  return result; /*0x6e03d5*/
}
