Actor **__thiscall sub_631BE0(HighProcess *this, Actor *a2, Actor *a3, char a4, Actor *a5)
{
  _DWORD *v6; // esi
  int v7; // eax

  v6 = this->GetDetectionState(this, a2); /*0x631bf4*/
  if ( !v6 ) /*0x631bf8*/
  {
    v7 = FormHeapAlloc(0x10u); /*0x631bfc*/
    if ( v7 ) /*0x631c06*/
    {
      *(_DWORD *)v7 = 0; /*0x631c08*/
      *(_DWORD *)(v7 + 4) = 0; /*0x631c0a*/
      *(_BYTE *)(v7 + 8) = 0; /*0x631c0d*/
      *(_DWORD *)(v7 + 0xC) = 0; /*0x631c11*/
    }
    else
    {
      v7 = 0; /*0x631c16*/
    }
    v6 = (_DWORD *)v7; /*0x631c1f*/
    BSSimpleList_PushFront(&this->detectionList->data, v7); /*0x631c21*/
  }
  v6[1] = a3; /*0x631c32*/
  *v6 = a2; /*0x631c36*/
  *((_BYTE *)v6 + 8) = a4; /*0x631c38*/
  v6[3] = a5; /*0x631c3b*/
  return (Actor **)v6; /*0x631c35*/
}
