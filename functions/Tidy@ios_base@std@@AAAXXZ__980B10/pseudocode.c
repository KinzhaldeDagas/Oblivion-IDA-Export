void __cdecl std::ios_base::_Tidy(int ***this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // edi

  std::ios_base::_Callfns(this, 0); /*0x980b1a*/
  v1 = *(this + 7); /*0x980b1f*/
  if ( v1 ) /*0x980b24*/
  {
    do /*0x980b33*/
    {
      v2 = (_DWORD *)*v1; /*0x980b26*/
      FormHeapFree((unsigned int)v1); /*0x980b29*/
      v1 = v2; /*0x980b31*/
    }
    while ( v2 ); /*0x980b33*/
  }
  v3 = *(this + 8); /*0x980b35*/
  *(this + 7) = 0; /*0x980b38*/
  if ( v3 ) /*0x980b3e*/
  {
    do /*0x980b4d*/
    {
      v4 = (_DWORD *)*v3; /*0x980b40*/
      FormHeapFree((unsigned int)v3); /*0x980b43*/
      v3 = v4; /*0x980b4b*/
    }
    while ( v4 ); /*0x980b4d*/
  }
  *(this + 8) = 0; /*0x980b4f*/
}
