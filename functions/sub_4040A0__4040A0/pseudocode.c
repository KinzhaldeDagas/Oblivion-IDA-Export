int __thiscall sub_4040A0(_BYTE *this, char *a2, int a3)
{
  char *v3; // eax
  char v4; // dl
  int (__stdcall *v6)(int); // eax

  v3 = a2; /*0x4040a0*/
  if ( a2 ) /*0x4040a6*/
  {
    do /*0x4040ba*/
    {
      v4 = *v3; /*0x4040b0*/
      v3[this + 4 - a2] = *v3; /*0x4040b2*/
      ++v3; /*0x4040b5*/
    }
    while ( v4 ); /*0x4040ba*/
    return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x14))(this, a3); /*0x4040c7*/
  }
  else
  {
    v6 = *(int (__stdcall **)(int))(*(_DWORD *)this + 0x14); /*0x4040d2*/
    *(this + 4) = 0; /*0x4040d6*/
    return v6(a3); /*0x4040da*/
  }
}
