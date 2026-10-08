int __thiscall sub_4D6F40(_DWORD *this, char a2)
{
  int result; // eax
  int v4; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x190))(this); /*0x4d6f4b*/
  if ( !(_BYTE)result ) /*0x4d6f4f*/
  {
    v4 = *(this + 2); /*0x4d6f56*/
    if ( a2 ) /*0x4d6f59*/
      result = v4 | 0x100000; /*0x4d6f5b*/
    else
      result = v4 & 0xFFEFFFFF; /*0x4d6f67*/
    *(this + 2) = result; /*0x4d6f60*/
  }
  return result; /*0x4d6f63*/
}
