int __thiscall sub_8B7C70(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  bool v4; // zf

  if ( *(this + 3) ) /*0x8b7c73*/
  {
    *a2 = 0; /*0x8b7cc9*/
    return *(this + 3); /*0x8b7ccc*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x10u); /*0x8b7c7b*/
    if ( v3 ) /*0x8b7c85*/
    {
      *v3 = 0; /*0x8b7c87*/
      v3[1] = 0; /*0x8b7c8d*/
      v3[2] = 0; /*0x8b7c94*/
      v3[3] = 0x80000000; /*0x8b7c9b*/
    }
    else
    {
      v3 = 0; /*0x8b7ca4*/
    }
    v4 = *(this + 2) == 0; /*0x8b7ca6*/
    *(this + 3) = v3; /*0x8b7caa*/
    if ( !v4 ) /*0x8b7cad*/
      sub_8B77A0(this, v3); /*0x8b7cb2*/
    *a2 = 1; /*0x8b7cbb*/
    return *(this + 3); /*0x8b7cbe*/
  }
}
