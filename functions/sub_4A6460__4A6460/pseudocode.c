int __thiscall sub_4A6460(int *this, int a2, float *a3, int a4)
{
  int *v4; // ebp
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // eax
  void (__thiscall ***v10)(_DWORD, int); // esi
  int v11; // edi
  _DWORD *v12; // ecx
  void (__thiscall ***v14)(_DWORD, int); // ecx
  _DWORD *v15; // esi
  _DWORD *v16; // edi
  _BYTE *v17; // eax
  _BYTE *v18; // esi
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // edi
  void (__thiscall ***v22)(_DWORD, int); // eax
  bool v23; // zf
  char v24; // [esp+1Bh] [ebp-1Dh]
  _DWORD *v25; // [esp+1Ch] [ebp-1Ch]
  int v26; // [esp+20h] [ebp-18h]
  unsigned __int16 v27; // [esp+24h] [ebp-14h]
  _BYTE *v28; // [esp+28h] [ebp-10h]
  int *v29; // [esp+44h] [ebp+Ch]

  v24 = 0;
  v27 = 0;
  v28 = 0;
  v26 = 0;
  if ( this )
    v4 = this + 1;
  else
    v4 = 0;
  v5 = FormHeapAlloc(0x10u);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)v5 = &TESRegionList::`vftable';
    *(_BYTE *)(v5 + 0xC) = 0;
    v25 = (_DWORD *)v5;
  }
  else
  {
    v25 = 0;
  }
  for ( ; v4; v4 = (int *)v4[1] )
  {
    v6 = *v4;
    if ( !*v4 )
      break;
    if ( (*(_DWORD *)(v6 + 8) & 0x20) == 0 && (!a4 || a4 == *(_DWORD *)(v6 + 0x20)) )
    {
      v7 = sub_4A4460(*(int **)(v6 + 0x18), a2);
      if ( v7 )
      {
        if ( !*(_BYTE *)(v7 + 5) )
        {
          if ( a3 )
          {
            v8 = *(_DWORD *)(v6 + 0x1C);
            if ( v8 )
            {
              while ( *(_DWORD *)v8 )
              {
                if ( sub_4A7330(*(float **)v8, a3) )
                {
                  sub_4A6350(v25, v6);
                  break;
                }
                v8 = *(_DWORD *)(v8 + 4);
                if ( !v8 )
                  break;
              }
            }
          }
          else
          {
            v9 = v25 + 1;
            if ( v25 == (_DWORD *)0xFFFFFFFC )
            {
LABEL_24:
              BSSimpleList_PushFront(v25 + 1, v6);
            }
            else
            {
              while ( *v9 != v6 )
              {
                v9 = (_DWORD *)v9[1];
                if ( !v9 )
                  goto LABEL_24;
              }
            }
          }
        }
      }
    }
  }
  v10 = *(void (__thiscall ****)(_DWORD, int))(8 * a2 + 0xB35420);
  v11 = 8 * a2 + 0xB35420;
  v29 = (int *)v11;
  if ( v10 )
  {
    v12 = *(_DWORD **)(8 * a2 + 0xB35424);
    if ( v12 && sub_4A6410(v12, (int)v25) )
    {
      BSSimpleList_Clear(v25 + 1);
      if ( v25 )
        (*(void (__thiscall **)(_DWORD *, int))*v25)(v25, 1);
      return *(_DWORD *)v11;
    }
    *(_DWORD *)v11 = 0;
    (**v10)(v10, 1);
  }
  v14 = *(void (__thiscall ****)(_DWORD, int))(8 * a2 + 0xB35424);
  v15 = (_DWORD *)(8 * a2 + 0xB35424);
  if ( v14 )
  {
    *v15 = 0;
    (**v14)(v14, 1);
  }
  if ( v25 )
  {
    v16 = v25 + 1;
    if ( v25 == (_DWORD *)0xFFFFFFFC )
      goto LABEL_63;
    do
    {
      if ( !*v16 )
        break;
      v17 = (_BYTE *)sub_4A4460(*(int **)(*v16 + 0x18), a2);
      v18 = v17;
      if ( v17 )
      {
        if ( v17[4] )
        {
          v24 = 1;
          if ( v26 )
          {
            (**(void (__thiscall ***)(int, int))v26)(v26, 1);
            v26 = 0;
          }
          if ( (unsigned __int8)v18[6] > v27 )
          {
            v28 = v18;
            v27 = (unsigned __int8)v18[6];
          }
        }
        else if ( !v24 )
        {
          if ( v26 )
          {
            v19 = v25 + 1;
            v20 = 0;
            do
            {
              if ( *v19 )
                ++v20;
              v19 = (_DWORD *)v19[1];
            }
            while ( v19 );
            (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v26 + 0x18))(v26, v18, v20);
          }
          else
          {
            v26 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v17 + 0x10))(v17);
          }
        }
      }
      v16 = (_DWORD *)v16[1];
      v15 = (_DWORD *)(8 * a2 + 0xB35424);
    }
    while ( v16 );
    if ( v24 )
    {
      v21 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v28 + 0x10))(v28);
      v26 = v21;
    }
    else
    {
      v21 = v26;
    }
    if ( !v21 )
    {
LABEL_63:
      BSSimpleList_Clear(v25 + 1);
      (*(void (__thiscall **)(_DWORD *, int))*v25)(v25, 1);
    }
    else
    {
      if ( *v29 )
        (**(void (__thiscall ***)(int, int))*v29)(*v29, 1);
      v22 = (void (__thiscall ***)(_DWORD, int))*v15;
      v23 = *v15 == 0;
      *v29 = v21;
      if ( !v23 )
      {
        BSSimpleList_Clear(v22 + 1);
        if ( *v15 )
          (**(void (__thiscall ***)(_DWORD, int))*v15)(*v15, 1);
      }
      *v15 = v25;
    }
  }
  return v26;
}
