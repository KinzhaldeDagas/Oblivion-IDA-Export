char __thiscall sub_4A60E0(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  if ( a2 ) /*0x4a60e9*/
  {
    v3 = this + 1; /*0x4a60eb*/
    v4 = this + 1; /*0x4a60ee*/
    if ( this == (_DWORD *)0xFFFFFFFC ) /*0x4a60f2*/
    {
LABEL_5:
      BSSimpleList_PushBack(v3, a2); /*0x4a60ff*/
      ++*(this + 4); /*0x4a610a*/
      return 1; /*0x4a610e*/
    }
    while ( *v4 != a2 ) /*0x4a60f6*/
    {
      v4 = (_DWORD *)v4[1]; /*0x4a60f8*/
      if ( !v4 ) /*0x4a60fd*/
        goto LABEL_5; /*0x4a60fd*/
    }
  }
  return 0; /*0x4a610d*/
}
