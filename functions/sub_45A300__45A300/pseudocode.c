void __thiscall sub_45A300(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // eax
  _DWORD **i; // edx
  _DWORD *v6; // edi
  int v7; // edx
  int v8; // esi
  int v9; // edx

  v2 = (_DWORD *)*(this + 7); /*0x45a300*/
  if ( v2 ) /*0x45a305*/
  {
    v3 = v2[3]; /*0x45a308*/
    v4 = 0; /*0x45a30b*/
    if ( v3 ) /*0x45a30f*/
    {
      for ( i = (_DWORD **)v2[1]; ; ++i ) /*0x45a311*/
      {
        v6 = *i; /*0x45a320*/
        if ( *i ) /*0x45a320*/
        {
          if ( *v6 == a2 ) /*0x45a328*/
            break; /*0x45a328*/
        }
        if ( ++v4 >= v3 ) /*0x45a332*/
          return; /*0x45a332*/
      }
      if ( v4 < v3 ) /*0x45a33c*/
      {
        v7 = v2[1]; /*0x45a33e*/
        v8 = *(_DWORD *)(v7 + 4 * v4); /*0x45a341*/
        *(_DWORD *)(v7 + 4 * v4) = 0; /*0x45a349*/
        if ( v8 ) /*0x45a34f*/
          --v2[4]; /*0x45a351*/
        v9 = v2[3] - 1; /*0x45a358*/
        if ( v4 == v9 ) /*0x45a35d*/
          v2[3] = v9; /*0x45a35f*/
      }
      FormHeapFree((unsigned int)v6); /*0x45a363*/
    }
  }
}
