int __thiscall sub_4D89A0(int *this, int a2, int a3, int a4)
{
  int v4; // edx

  *(this + 8) = a2; /*0x4d89a8*/
  *(this + 9) = a3; /*0x4d89af*/
  v4 = *this; /*0x4d89b2*/
  *(this + 0xA) = a4; /*0x4d89b4*/
  return (*(int (__stdcall **)(int))(v4 + 0x40))(4); /*0x4d89be*/
}
