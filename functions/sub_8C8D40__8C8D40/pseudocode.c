int __thiscall sub_8C8D40(char **this, _BYTE *a2)
{
  int v3; // eax
  bool v4; // zf

  if ( *(this + 3) ) /*0x8c8d46*/
  {
    *a2 = 0; /*0x8c8da2*/
    return (int)*(this + 3); /*0x8c8da4*/
  }
  else
  {
    v3 = FormHeapAlloc(0x20u); /*0x8c8d4d*/
    if ( v3 ) /*0x8c8d57*/
    {
      *(_DWORD *)v3 = 0; /*0x8c8d59*/
      *(float *)(v3 + 4) = flt_B2EFC4; /*0x8c8d61*/
      *(_DWORD *)(v3 + 8) = 0; /*0x8c8d69*/
      *(_DWORD *)(v3 + 0xC) = 0; /*0x8c8d6c*/
      *(_DWORD *)(v3 + 0x10) = 0x80000000; /*0x8c8d6f*/
      *(_DWORD *)(v3 + 0x14) = 0; /*0x8c8d72*/
      *(_DWORD *)(v3 + 0x18) = 0; /*0x8c8d75*/
      *(_DWORD *)(v3 + 0x1C) = 0x80000000; /*0x8c8d78*/
    }
    else
    {
      v3 = 0; /*0x8c8d7d*/
    }
    v4 = *(this + 2) == 0; /*0x8c8d7f*/
    *(this + 3) = (char *)v3; /*0x8c8d82*/
    if ( !v4 ) /*0x8c8d85*/
      sub_8C8C50(this, v3); /*0x8c8d8a*/
    *a2 = 1; /*0x8c8d93*/
    return (int)*(this + 3); /*0x8c8d96*/
  }
}
