bool *__thiscall sub_8DE0C0(_DWORD *this, bool *a2, int **a3)
{
  int v3; // ebp
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int j; // ebx
  int v11; // esi
  int v12; // ebp
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebp
  _DWORD *v20; // edx
  int v21; // esi
  int v22; // eax
  int v23; // edi
  _DWORD *v24; // eax
  signed int v25; // ecx
  signed int v26; // esi
  unsigned int v27; // edi
  int v28; // eax
  int v29; // ecx
  int v31; // eax
  bool v32; // sf
  int v33; // ecx
  _DWORD *i; // [esp+10h] [ebp-38h]
  _DWORD *v35; // [esp+14h] [ebp-34h] BYREF
  signed int v36; // [esp+18h] [ebp-30h]
  int v37; // [esp+1Ch] [ebp-2Ch]
  _BYTE v38[40]; // [esp+20h] [ebp-28h] BYREF

  v3 = 0;
  for ( i = this; v3 < *(this + 0xE); ++v3 )
  {
    v4 = *(_DWORD *)(*(this + 0xD) + 4 * v3);
    v5 = *(_DWORD *)(v4 + 0x3C);
    v6 = v4 + 0x14;
    v7 = 0;
    if ( v5 > 0 )
    {
      do
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 8 * v7 + 4);
        v9 = v8 + *(_DWORD *)(v8 + 0x10);
        if ( !*(_BYTE *)(v9 + 0x91) )
        {
          sub_91F220(a3, v3, *(unsigned __int16 *)(v9 + 0x8C));
          if ( *(_DWORD *)**a3 == -(*a3)[1] )
          {
LABEL_36:
            *a2 = 1;
            return a2;
          }
        }
        ++v7;
      }
      while ( v7 < *(_DWORD *)(v6 + 0x28) );
      this = i;
    }
  }
  for ( j = 0; j < *(this + 0xE); ++j )
  {
    v11 = *(_DWORD *)(*(this + 0xD) + 4 * j);
    v12 = 0;
    if ( *(int *)(v11 + 0x6C) > 0 )
    {
      v13 = 0;
      do
      {
        v14 = *(_DWORD *)(v11 + 0x68);
        v15 = *(_DWORD *)(v14 + v13 + 4);
        v16 = v13 + v14;
        if ( !*(_BYTE *)(v15 + 0x91) )
        {
          v17 = *(_DWORD *)(v16 + 8);
          if ( !*(_BYTE *)(v17 + 0x91) )
          {
            sub_91F220(a3, *(unsigned __int16 *)(v15 + 0x8C), *(unsigned __int16 *)(v17 + 0x8C));
            if ( *(_DWORD *)**a3 == -(*a3)[1] )
              goto LABEL_36;
          }
        }
        ++v12;
        v13 += 0x1C;
      }
      while ( v12 < *(_DWORD *)(v11 + 0x6C) );
      this = i;
    }
  }
  v18 = *(this + 0x18);
  v19 = 0;
  v20 = v38;
  v21 = 0x8000000A;
  v35 = v38;
  v36 = 0;
  v37 = 0x8000000A;
  if ( v18 <= 0 )
  {
LABEL_31:
    if ( v21 >= 0 )
    {
      v29 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v29 )
        v29 = dword_BA7D9C;
      sub_8A75D0(v29, v20, 4 * v21, 0x14);
    }
    *a2 = *(_DWORD *)**a3 == -(*a3)[1];
    return a2;
  }
  while ( 1 )
  {
    v22 = *(this + 0x17);
    v23 = *(_DWORD *)(v22 + 4 * v19);
    v24 = (_DWORD *)(v22 + 4 * v19);
    if ( v23 )
      break;
LABEL_30:
    if ( ++v19 >= *(this + 0x18) )
      goto LABEL_31;
  }
  v36 = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD **))(*(_DWORD *)*v24 + 0xC))(*v24, &v35);
  v25 = v36;
  v20 = v35;
  v26 = 0;
  v27 = 0xFFFFFFFF;
  do
  {
    if ( v26 >= v36 )
      goto LABEL_29;
    if ( !*(_BYTE *)(v35[v26] + 0x91) )
      v27 = v26;
    ++v26;
  }
  while ( v27 == 0xFFFFFFFF );
  if ( v26 >= v36 )
  {
LABEL_29:
    v21 = v37;
    this = i;
    goto LABEL_30;
  }
  while ( 1 )
  {
    v28 = v20[v26];
    if ( *(_BYTE *)(v28 + 0x91) )
      goto LABEL_28;
    sub_91F220(a3, *(unsigned __int16 *)(v20[v27] + 0x8C), *(unsigned __int16 *)(v28 + 0x8C));
    if ( *(_DWORD *)**a3 == -(*a3)[1] )
      break;
    v25 = v36;
    v20 = v35;
LABEL_28:
    if ( ++v26 >= v25 )
      goto LABEL_29;
  }
  v31 = v37;
  v32 = v37 < 0;
  *a2 = 1;
  if ( !v32 )
  {
    v33 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v33 )
      v33 = dword_BA7D9C;
    sub_8A75D0(v33, v35, 4 * v31, 0x14);
  }
  return a2;
}
