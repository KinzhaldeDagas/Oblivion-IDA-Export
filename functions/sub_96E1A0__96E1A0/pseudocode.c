int __thiscall sub_96E1A0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax
  int v5; // eax

  v2 = a2;
  sub_711C90(this, a2);
  if ( v2[0x36] < 0xA000106 )
  {
    sub_96DE60((int)v2, (int *)&this->members.pad014[4]);
  }
  else
  {
    sub_96DE60((int)v2, (int *)&this->members.pad014[4]);
    sub_96DE60((int)v2, (int *)&this->members.pad014[5]);
  }
  result = sub_6BDED0((signed int)v2, (int)&a2);
  if ( (_BYTE)a2 )
  {
    v5 = sub_95DB10((signed int)v2);
    this->members.pad014[6] = v5;
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x18))(v5);
    this->members.pad014[7] = result;
  }
  return result;
}
