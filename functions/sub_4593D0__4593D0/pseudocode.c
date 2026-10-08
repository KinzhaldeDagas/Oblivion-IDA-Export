void __thiscall sub_4593D0(_DWORD *this, int a2)
{
  bool v2; // zf
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  v2 = this + 0x19 == 0; /*0x4593d4*/
  v3 = this + 0x19; /*0x4593d4*/
  v4 = v3; /*0x4593d7*/
  if ( v2 ) /*0x4593d9*/
  {
LABEL_4:
    BSSimpleList_PushFront(v3, a2); /*0x4593eb*/
  }
  else
  {
    while ( *v4 != a2 ) /*0x4593e2*/
    {
      v4 = (_DWORD *)v4[1]; /*0x4593e4*/
      if ( !v4 ) /*0x4593e9*/
        goto LABEL_4; /*0x4593e9*/
    }
  }
}
