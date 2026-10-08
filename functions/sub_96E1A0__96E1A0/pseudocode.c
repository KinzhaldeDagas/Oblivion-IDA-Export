int __thiscall sub_96E1A0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax
  int v5; // eax

  v2 = a2; /*0x96e1a2*/
  sub_711C90(this, a2); /*0x96e1a9*/
  if ( v2[0x36] < 0xA000106 ) /*0x96e1b8*/
  {
    sub_96DE60((int)v2, (int *)&this->members.pad014[4]); /*0x96e1d8*/
  }
  else
  {
    sub_96DE60((int)v2, (int *)&this->members.pad014[4]); /*0x96e1bf*/
    sub_96DE60((int)v2, (int *)&this->members.pad014[5]); /*0x96e1c9*/
  }
  result = sub_6BDED0((signed int)v2, (int)&a2); /*0x96e1e6*/
  if ( (_BYTE)a2 ) /*0x96e1f3*/
  {
    v5 = sub_95DB10((signed int)v2); /*0x96e1f6*/
    this->members.pad014[6] = v5; /*0x96e1fb*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x18))(v5); /*0x96e208*/
    this->members.pad014[7] = result; /*0x96e20a*/
  }
  return result; /*0x96e20d*/
}
