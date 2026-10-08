void __thiscall sub_536D30(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // edx
  _DWORD *v4; // eax

  if ( a2 ) /*0x536d37*/
  {
    v2 = (_DWORD *)*(this + 6); /*0x536d3a*/
    if ( a2 == v2 ) /*0x536d3f*/
    {
      v2 = (_DWORD *)a2[1]; /*0x536d41*/
    }
    else
    {
      v3 = *(this + 6); /*0x536d48*/
      if ( v2 ) /*0x536d4a*/
      {
        while ( 1 ) /*0x536d50*/
        {
          v4 = *(_DWORD **)(v3 + 4); /*0x536d50*/
          if ( a2 == v4 ) /*0x536d55*/
            break; /*0x536d55*/
          v3 = *(_DWORD *)(v3 + 4); /*0x536d59*/
          if ( !v4 ) /*0x536d5b*/
            goto LABEL_9; /*0x536d5b*/
        }
        *(_DWORD *)(v3 + 4) = v4[1]; /*0x536d62*/
      }
    }
LABEL_9:
    *(this + 6) = v2; /*0x536d65*/
    sub_5369D0(a2); /*0x536d6a*/
    FormHeapFree((unsigned int)a2); /*0x536d70*/
  }
}
