int __thiscall sub_8F59E0(_DWORD *this, char *a2, signed int a3)
{
  signed int v3; // ebx
  int v6; // eax
  signed int v7; // edi

  v3 = a3;
  v6 = *(this + 4);
  v7 = *(this + 5) - v6;
  if ( a3 <= v7 )
  {
LABEL_4:
    sub_8B1890(a2, (const void *)(*(this + 4) + *(this + 3)), v3);
    *(this + 4) += v3;
    return a3;
  }
  else
  {
    while ( 1 )
    {
      sub_8B1890(a2, (const void *)(v6 + *(this + 3)), v7);
      *(this + 4) += v7;
      a2 += v7;
      v3 -= v7;
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x2C))(this) )
        return a3 - v3;
      v6 = *(this + 4);
      v7 = *(this + 5) - v6;
      if ( v3 <= v7 )
        goto LABEL_4;
    }
  }
}
