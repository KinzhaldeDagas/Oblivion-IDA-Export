int __thiscall sub_6AC9F0(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int v5; // [esp+4h] [ebp-4h] BYREF

  v3 = (_DWORD *)*(this + 0xC0); /*0x6ac9fe*/
  v5 = 0; /*0x6aca04*/
  NiTMap_GetAt(v3, a2, &v5); /*0x6aca0c*/
  a2 = v5; /*0x6aca17*/
  if ( v5 ) /*0x6aca1b*/
    return sub_6AA9C0(this, (unsigned int **)&a2); /*0x6aca2e*/
  else
    return 0x80004005; /*0x6aca1d*/
}
