void __userpurge sub_789D40(_DWORD *this@<ecx>, int a2@<edi>, unsigned int ArgList, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  bool v11; // cf
  char *v12; // edx
  unsigned int v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // edx
  rsize_t v17; // [esp-4h] [ebp-3Ch]
  _BYTE v18[4]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v19; // [esp+14h] [ebp-24h]
  unsigned int v20; // [esp+28h] [ebp-10h]
  int v21; // [esp+34h] [ebp-4h]

  v7 = (_DWORD *)*(this + 0x16);
  if ( v7 )
  {
    v8 = v7[1];
    if ( v8 && ArgList < (v7[2] - v8) / 0x1C )
    {
      *a4 = *(_DWORD *)sub_7876F0(v7, ArgList);
      v13 = sub_7876F0((_DWORD *)*(this + 0x16), ArgList);
      v14 = *(_DWORD *)(v13 + 4);
      v13 += 4;
      *a5 = v14;
      a5[1] = *(_DWORD *)(v13 + 4);
      a5[2] = *(_DWORD *)(v13 + 8);
      v15 = (_DWORD *)sub_7876F0((_DWORD *)*(this + 0x16), ArgList);
      v16 = v15[4];
      v15 += 4;
      *a6 = v16;
      a6[1] = v15[1];
      a6[2] = v15[2];
    }
    else
    {
      v9 = v7[1];
      if ( v9 )
        v9 = (v7[2] - v9) / 0x1C;
      v10 = sub_7A54A0((int)v18, "collision object index (%d) exceeds maximum index (%d)", ArgList, v9);
      v11 = *(_DWORD *)(v10 + 0x18) < 0x10u;
      v21 = 0;
      if ( v11 )
        v12 = (char *)(v10 + 4);
      else
        v12 = *(char **)(v10 + 4);
      LODWORD(v17) = strlen(v12);
      sub_414500(&dword_B2B614, 0x10, v12, v17);
      if ( v20 >= 0x10 )
        FormHeapFree(v19);
    }
  }
  else
  {
    LODWORD(v17) = 0x2E;
    sub_414500(&dword_B2B614, a2, "no collision objects are stored with this tree", v17);
  }
}
