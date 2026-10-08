int __thiscall sub_7120F0(_DWORD *this, int a2)
{
  int result; // eax
  int (__thiscall *v4)(_DWORD *); // edx

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x7120ff*/
  if ( (_BYTE)result ) /*0x712103*/
  {
    v4 = *(int (__thiscall **)(_DWORD *))(*this + 0x3C); /*0x712116*/
    *(this + 0x87) = a2; /*0x71211b*/
    result = v4(this); /*0x712121*/
  }
  *(this + 0x87) = 0; /*0x712106*/
  return result; /*0x712105*/
}
