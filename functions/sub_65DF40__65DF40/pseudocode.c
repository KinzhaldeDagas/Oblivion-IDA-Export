void __thiscall sub_65DF40(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( !*(this + 0x16B) ) /*0x65df43*/
  {
    v3 = (_DWORD *)FormHeapAlloc(8u); /*0x65df4e*/
    if ( v3 ) /*0x65df58*/
    {
      *v3 = 0; /*0x65df5a*/
      v3[1] = 0; /*0x65df60*/
    }
    else
    {
      v3 = 0; /*0x65df69*/
    }
    *(this + 0x16B) = v3; /*0x65df6b*/
  }
  v4 = (_DWORD *)*(this + 0x16B); /*0x65df7b*/
  if ( v4 ) /*0x65df80*/
  {
    while ( *v4 != a2 ) /*0x65df84*/
    {
      v4 = (_DWORD *)v4[1]; /*0x65df86*/
      if ( !v4 ) /*0x65df8b*/
        goto LABEL_9; /*0x65df8b*/
    }
  }
  else
  {
LABEL_9:
    BSSimpleList_PushFront((_DWORD *)*(this + 0x16B), a2); /*0x65df8d*/
  }
}
