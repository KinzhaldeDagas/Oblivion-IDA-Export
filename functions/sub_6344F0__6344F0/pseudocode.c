int __thiscall sub_6344F0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int (__thiscall *v5)(_DWORD *); // eax

  *(this + a2 + 0xB2) = a3; /*0x6344fb*/
  *((_BYTE *)this + a2 + 0x2DC) = 1; /*0x634502*/
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x4CC))(this); /*0x634514*/
  if ( *(this + 0xB9) != result ) /*0x63451c*/
  {
    v5 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x634520*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x634528*/
    result = v5(this); /*0x63452f*/
    *(this + 0xB9) = result; /*0x634531*/
  }
  return result; /*0x634537*/
}
