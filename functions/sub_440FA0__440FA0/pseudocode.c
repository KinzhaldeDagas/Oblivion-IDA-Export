void __thiscall sub_440FA0(int *this, int a2, __int16 a3)
{
  int *v3; // esi
  int *v4; // eax
  int v5; // ecx
  int v6; // eax

  v3 = this + 0x23; /*0x440fa1*/
  v4 = this + 0x23; /*0x440fa7*/
  if ( this != (int *)0xFFFFFF74 ) /*0x440fb0*/
  {
    do /*0x440fb2*/
    {
      v5 = *v4; /*0x440fb2*/
      if ( !*v4 ) /*0x440fb2*/
        break; /*0x440fb2*/
      if ( *(_DWORD *)v5 == a2 ) /*0x440fba*/
      {
        *(_WORD *)(v5 + 4) += a3; /*0x440fea*/
        return; /*0x440fea*/
      }
      v4 = (int *)v4[1]; /*0x440fbc*/
    }
    while ( v4 ); /*0x440fb2*/
  }
  v6 = FormHeapAlloc(8u); /*0x440fc3*/
  *(_WORD *)(v6 + 4) = a3; /*0x440fd2*/
  *(_DWORD *)v6 = a2; /*0x440fd9*/
  BSSimpleList_PushFront(v3, v6); /*0x440fdb*/
}
