void __thiscall sub_67BF80(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax

  v2 = (_DWORD *)*this; /*0x67bf81*/
  if ( a2 ) /*0x67bf8a*/
  {
    if ( *v2 ) /*0x67bf8c*/
    {
      v3 = (_DWORD *)FormHeapAlloc(8u); /*0x67bf93*/
      if ( v3 ) /*0x67bf9d*/
      {
        *v3 = *v2; /*0x67bfa1*/
        v3[1] = 0; /*0x67bfa3*/
        v3[1] = v2[1]; /*0x67bfad*/
        *v2 = a2; /*0x67bfb0*/
        v2[1] = v3; /*0x67bfb3*/
        return; /*0x67bfb7*/
      }
      *(_DWORD *)4 = v2[1]; /*0x67bfbf*/
      v2[1] = 0; /*0x67bfc2*/
    }
    *v2 = a2; /*0x67bfc5*/
  }
}
