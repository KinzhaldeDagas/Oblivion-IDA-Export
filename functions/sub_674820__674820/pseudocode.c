void __thiscall sub_674820(_DWORD *this, int a2, int a3)
{
  bool v3; // zf
  _DWORD *v4; // ecx
  _DWORD *v5; // eax

  if ( a2 ) /*0x674826*/
  {
    v3 = this + 0x18 == 0; /*0x674828*/
    v4 = this + 0x18; /*0x674828*/
    v5 = v4; /*0x67482b*/
    if ( v3 ) /*0x67482d*/
    {
LABEL_5:
      BSSimpleList_PushFront(v4, a2); /*0x67483b*/
    }
    else
    {
      while ( *v5 != a2 ) /*0x674832*/
      {
        v5 = (_DWORD *)v5[1]; /*0x674834*/
        if ( !v5 ) /*0x674839*/
          goto LABEL_5; /*0x674839*/
      }
    }
  }
}
