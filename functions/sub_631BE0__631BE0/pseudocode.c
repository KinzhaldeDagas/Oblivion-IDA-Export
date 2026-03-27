Actor **__thiscall sub_631BE0(HighProcess *this, Actor *a2, Actor *a3, char a4, Actor *a5)
{
  Actor **v6; // esi
  int v7; // eax

  v6 = (Actor **)this->GetDetectionState(this, a2);
  if ( !v6 )
  {
    v7 = FormHeapAlloc(0x10u);
    if ( v7 )
    {
      *(_DWORD *)v7 = 0;
      *(_DWORD *)(v7 + 4) = 0;
      *(_BYTE *)(v7 + 8) = 0;
      *(_DWORD *)(v7 + 0xC) = 0;
    }
    else
    {
      v7 = 0;
    }
    v6 = (Actor **)v7;
    BSSimpleList_PushFront(&this->detectionList->data, v7);
  }
  v6[1] = a3;
  *v6 = a2;
  *((_BYTE *)v6 + 8) = a4;
  v6[3] = a5;
  return v6;
}
