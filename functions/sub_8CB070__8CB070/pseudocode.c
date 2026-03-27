int __thiscall sub_8CB070(const void **this, _DWORD *a2)
{
  int v3; // ecx
  _DWORD ***v4; // esi
  int result; // eax
  _DWORD **v6; // edx
  _DWORD *v7; // eax
  int i; // esi
  void (__thiscall ***v9)(_DWORD, _DWORD *); // ecx

  v3 = (int)*(this + 0x18);
  v4 = (_DWORD ***)(this + 0x17);
  result = 0;
  if ( v3 <= 0 )
    goto LABEL_7;
  v6 = *v4;
  while ( *v6 != a2 )
  {
    ++result;
    ++v6;
    if ( result >= v3 )
      goto LABEL_7;
  }
  if ( result < 0 )
  {
LABEL_7:
    if ( this )
      v7 = this + 0x12;
    else
      v7 = 0;
    sub_899DA0(a2, (int)v7);
    if ( *(this + 0x18) == (const void *)((unsigned int)*(this + 0x19) & 0x3FFFFFFF) )
      sub_8A6EE0(this + 0x17, 4);
    (*v4)[(_DWORD)*(this + 0x18)] = a2;
    *(this + 0x18) = (char *)*(this + 0x18) + 1;
    for ( i = 0; i < (int)*(this + 0x1B); ++i )
    {
      v9 = *((void (__thiscall ****)(_DWORD, _DWORD *))*(this + 0x1A) + i);
      (**v9)(v9, a2);
    }
    return sub_8CAD40(this, a2);
  }
  return result;
}
