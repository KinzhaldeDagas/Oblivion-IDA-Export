void __thiscall sub_67BEC0(unsigned int *this)
{
  _DWORD *v2; // esi
  int v3; // edi

  v2 = (_DWORD *)*this; /*0x67bec4*/
  if ( *(_DWORD *)(*this + 4) ) /*0x67bec6*/
  {
    do /*0x67bee4*/
    {
      v3 = *(_DWORD *)(v2[1] + 4); /*0x67bed3*/
      FormHeapFree(v2[1]); /*0x67bed7*/
      v2[1] = v3; /*0x67bee1*/
    }
    while ( v3 ); /*0x67bee4*/
  }
  *v2 = 0; /*0x67bee7*/
  FormHeapFree(*this); /*0x67bef0*/
}
