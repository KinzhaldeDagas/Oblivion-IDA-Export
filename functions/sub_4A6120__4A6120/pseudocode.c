int __thiscall sub_4A6120(_DWORD *this, int a2)
{
  int *v3; // ebp
  int v4; // esi
  int v5; // eax
  char v6; // cl
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // edx
  _DWORD *v10; // eax

  if ( this )
    v3 = this + 1;
  else
    v3 = 0;
  v4 = a2;
  if ( !a2 )
  {
    v5 = FormHeapAlloc(0x14u);
    if ( v5 )
    {
      v6 = *((_BYTE *)this + 0xC);
      *(_DWORD *)(v5 + 4) = 0;
      *(_DWORD *)(v5 + 8) = 0;
      *(_DWORD *)v5 = &TESRegionGrassObjectList::`vftable';
      *(_BYTE *)(v5 + 0xC) = v6;
      *(_DWORD *)(v5 + 0x10) = 0;
    }
    else
    {
      v5 = 0;
    }
    v4 = v5;
  }
  if ( v3 )
  {
    while ( 1 )
    {
      v7 = *v3;
      if ( !*v3 )
        return v4;
      if ( !*(_BYTE *)(v4 + 0xC) )
        break;
      v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x14))(v7, 0);
      if ( v8 )
      {
        v9 = (_DWORD *)(v4 + 4);
        if ( v4 != 0xFFFFFFFC )
        {
          while ( *v9 != v8 )
          {
            v9 = (_DWORD *)v9[1];
            if ( !v9 )
              goto LABEL_16;
          }
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 8))(v8, 1);
          goto LABEL_23;
        }
LABEL_16:
        BSSimpleList_PushBack((_DWORD *)(v4 + 4), v8);
        goto LABEL_22;
      }
LABEL_23:
      v3 = (int *)v3[1];
      if ( !v3 )
        return v4;
    }
    v10 = (_DWORD *)(v4 + 4);
    if ( v4 != 0xFFFFFFFC )
    {
      while ( *v10 != v7 )
      {
        v10 = (_DWORD *)v10[1];
        if ( !v10 )
          goto LABEL_21;
      }
      goto LABEL_23;
    }
LABEL_21:
    BSSimpleList_PushBack((_DWORD *)(v4 + 4), *v3);
LABEL_22:
    ++*(_DWORD *)(v4 + 0x10);
    goto LABEL_23;
  }
  return v4;
}
