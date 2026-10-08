_DWORD *__thiscall ContainerEntryExtraData_constr(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // eax

  *(this + 2) = a2; /*0x484429*/
  v4 = (_DWORD *)FormHeapAlloc(8u); /*0x48442c*/
  if ( v4 ) /*0x484436*/
  {
    *v4 = 0; /*0x48443c*/
    v4[1] = 0; /*0x484442*/
    *this = v4; /*0x484449*/
  }
  else
  {
    *this = 0; /*0x48445a*/
  }
  *(this + 1) = a3; /*0x48444b*/
  return this; /*0x484450*/
}
