void __thiscall BSSimpleList_PushBack(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  bool v4; // zf
  _DWORD *v5; // eax

  if ( a2 ) /*0x67b1e7*/
  {
    v2 = this + 1; /*0x67b1ed*/
    v3 = this; /*0x67b1f1*/
    if ( *(this + 1) ) /*0x67b1e9*/
    {
      do /*0x67b1fe*/
      {
        v3 = (_DWORD *)*v2; /*0x67b1f5*/
        v4 = *(_DWORD *)(*v2 + 4) == 0; /*0x67b1f7*/
        v2 = (_DWORD *)(*v2 + 4); /*0x67b1fb*/
      }
      while ( !v4 ); /*0x67b1fe*/
    }
    if ( *v3 ) /*0x67b200*/
    {
      v5 = (_DWORD *)FormHeapAlloc(8u); /*0x67b207*/
      if ( v5 ) /*0x67b211*/
      {
        *v5 = a2; /*0x67b213*/
        v5[1] = 0; /*0x67b215*/
        v3[1] = v5; /*0x67b21c*/
      }
      else
      {
        v3[1] = 0; /*0x67b226*/
      }
    }
    else
    {
      *v3 = a2; /*0x67b22e*/
    }
  }
}
