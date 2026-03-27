int *__thiscall sub_52FC40(int **this, int a2, int a3)
{
  int **v4; // ebp
  int **v5; // ecx
  int *v6; // esi
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  int v11; // eax

  if ( !a2 )
    return 0;
  v4 = this + 0xA;
  v5 = this + 0xA;
  v6 = 0;
  if ( !v5 )
    goto LABEL_17;
  do
  {
    v7 = *v5;
    if ( !*v5 )
      break;
    if ( v6 )
      return v6;
    v5 = (int **)v5[1];
    v6 = v7;
    if ( *((_BYTE *)v7 + 0x20) )
    {
      v8 = *v7;
      if ( *v6 && *(_DWORD *)(v8 + 0xC) == a2 )
        continue;
      v9 = v6[7];
      if ( !v9 )
      {
LABEL_14:
        v6 = 0;
        continue;
      }
      v10 = *(_DWORD *)(v9 + 0xC) == a2;
    }
    else
    {
      if ( *v7 == a2 )
        continue;
      v10 = v7[7] == a2;
    }
    if ( !v10 )
      goto LABEL_14;
  }
  while ( v5 );
  if ( !v6 )
  {
LABEL_17:
    v11 = FormHeapAlloc(0x24u);
    if ( v11 )
    {
      *(_DWORD *)(v11 + 0xC) = 0;
      *(_DWORD *)(v11 + 0x18) = 1;
      *(_DWORD *)(v11 + 0x10) = 0;
      *(_DWORD *)(v11 + 0x14) = 0;
      *(_DWORD *)(v11 + 8) = 0;
      *(_DWORD *)(v11 + 4) = &TopicInfoArray::`vftable';
      *(_DWORD *)v11 = 0;
      *(_DWORD *)(v11 + 0x1C) = 0;
      *(_BYTE *)(v11 + 0x20) = 0;
    }
    else
    {
      v11 = 0;
    }
    v6 = (int *)v11;
    *(_DWORD *)v11 = a2;
    BSSimpleList_PushBack(v4, v11);
  }
  return v6;
}
