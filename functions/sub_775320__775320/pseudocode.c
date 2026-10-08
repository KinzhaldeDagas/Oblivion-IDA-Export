int __thiscall sub_775320(_WORD *this, int a2, int a3, int a4, int *a5)
{
  unsigned int v6; // esi
  int i; // ebp
  _DWORD *v8; // ecx

  v6 = 0; /*0x775325*/
  for ( i = 0; v6 < (unsigned __int16)*(this + 0x22D); ++v6 ) /*0x775329*/
  {
    v8 = *(_DWORD **)(*((_DWORD *)this + 0x115) + 4 * v6); /*0x775346*/
    if ( v8 ) /*0x77534b*/
    {
      if ( v8[3] == a2 && *v8 == a3 && v8[1] == a4 ) /*0x775365*/
      {
        i = *(_DWORD *)(*((_DWORD *)this + 0x115) + 4 * v6); /*0x77536a*/
        *a5 = sub_775090(v8, *a5); /*0x775371*/
      }
    }
  }
  return i; /*0x775382*/
}
