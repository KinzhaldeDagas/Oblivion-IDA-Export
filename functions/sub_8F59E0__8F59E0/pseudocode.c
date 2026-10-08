int __thiscall sub_8F59E0(_DWORD *this, char *a2, signed int a3)
{
  signed int v3; // ebx
  int v6; // eax
  signed int v7; // edi

  v3 = a3; /*0x8f59e1*/
  v6 = *(this + 4); /*0x8f59ed*/
  v7 = *(this + 5) - v6; /*0x8f59f4*/
  if ( a3 <= v7 ) /*0x8f59f8*/
  {
LABEL_4:
    sub_8B1890(a2, (const void *)(*(this + 4) + *(this + 3)), v3); /*0x8f5a2e*/
    *(this + 4) += v3; /*0x8f5a47*/
    return a3; /*0x8f5a4a*/
  }
  else
  {
    while ( 1 ) /*0x8f5a08*/
    {
      sub_8B1890(a2, (const void *)(v6 + *(this + 3)), v7); /*0x8f5a08*/
      *(this + 4) += v7; /*0x8f5a0d*/
      a2 += v7; /*0x8f5a17*/
      v3 -= v7; /*0x8f5a19*/
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x2C))(this) ) /*0x8f5a1b*/
        return a3 - v3; /*0x8f5a5b*/
      v6 = *(this + 4); /*0x8f5a22*/
      v7 = *(this + 5) - v6; /*0x8f5a28*/
      if ( v3 <= v7 ) /*0x8f5a2c*/
        goto LABEL_4; /*0x8f5a2c*/
    }
  }
}
