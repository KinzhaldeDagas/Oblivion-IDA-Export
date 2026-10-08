void __thiscall NiTLargeArray_Resize32(unsigned int *this, unsigned int a2)
{
  unsigned int v3; // edx
  int v4; // ecx
  bool v5; // zf
  _DWORD *v6; // ecx
  unsigned int v7; // edi
  unsigned int i; // eax
  unsigned int j; // eax

  if ( a2 != *(this + 2) )
  {
    if ( a2 < *(this + 3) ) /*0x452924*/
    {
      v3 = a2; /*0x452926*/
      do /*0x45294b*/
      {
        v4 = *(this + 1); /*0x452930*/
        v5 = *(_DWORD *)(v4 + 4 * v3) == 0; /*0x452933*/
        v6 = (_DWORD *)(v4 + 4 * v3); /*0x452937*/
        if ( !v5 ) /*0x45293a*/
        {
          *v6 = 0; /*0x45293c*/
          --*(this + 4); /*0x452942*/
        }
        ++v3; /*0x452945*/
      }
      while ( v3 < *(this + 3) ); /*0x45294b*/
      *(this + 3) = a2; /*0x45294d*/
    }
    v7 = *(this + 1); /*0x452952*/
    *(this + 2) = a2; /*0x452955*/
    if ( a2 )
    {
      *(this + 1) = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
      for ( i = 0; i < *(this + 3); ++i ) /*0x452978*/
        *(_DWORD *)(*(this + 1) + 4 * i) = *(_DWORD *)(v7 + 4 * i); /*0x452986*/
      for ( j = *(this + 3); j < *(this + 2); ++j ) /*0x452997*/
        *(_DWORD *)(*(this + 1) + 4 * j) = 0; /*0x4529a3*/
    }
    else
    {
      *(this + 1) = 0; /*0x4529c0*/
    }
    FormHeapFree(v7); /*0x4529c8*/
  }
}
