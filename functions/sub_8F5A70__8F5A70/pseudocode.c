int __thiscall sub_8F5A70(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi

  v3 = *(this + 5) - *(this + 4); /*0x8f5a7b*/
  v4 = a2; /*0x8f5a81*/
  if ( a2 <= v3 ) /*0x8f5a83*/
  {
LABEL_4:
    *(this + 4) += v4; /*0x8f5a9c*/
    return a2; /*0x8f5aa6*/
  }
  else
  {
    while ( 1 ) /*0x8f5a85*/
    {
      v4 -= v3; /*0x8f5a85*/
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x2C))(this) ) /*0x8f5a8b*/
        return a2 - v4; /*0x8f5aae*/
      v3 = *(this + 5) - *(this + 4); /*0x8f5a95*/
      if ( v4 <= v3 ) /*0x8f5a9a*/
        goto LABEL_4; /*0x8f5a9a*/
    }
  }
}
