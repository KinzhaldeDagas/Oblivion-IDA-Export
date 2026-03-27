void __thiscall sub_4A50E0(_BYTE *this)
{
  int v2; // eax
  unsigned int v3; // ebp
  bool v4; // zf
  _BYTE *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  unsigned int v9; // edx
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  size_t v12; // [esp-4h] [ebp-28h]

  sub_4A3560(this);
  v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x24))(this);
  TESForm_PutCurrentChunkData4(0x444D4452, v2);
  v3 = 0;
  v4 = this + 0xC == 0;
  v5 = this + 0xC;
  v6 = v5;
  if ( !v4 )
  {
    do
    {
      if ( *v6 )
        ++v3;
      v6 = (_DWORD *)v6[1];
    }
    while ( v6 );
  }
  v7 = (_DWORD *)FormHeapAlloc((0xC * (unsigned __int64)v3) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v3);
  v8 = v7;
  if ( v7 )
    sub_401080(v7, 0xC, v3, (void *(__thiscall *)(void *))sub_4A5040);
  else
    v8 = 0;
  v9 = 0;
  if ( v5 )
  {
    v10 = v8;
    do
    {
      v11 = *(_DWORD **)v5;
      if ( !*(_DWORD *)v5 )
        break;
      if ( v9 >= v3 )
        break;
      *v10 = *v11;
      v10[1] = v11[1];
      v10[2] = v11[2];
      v5 = *((_BYTE **)v5 + 1);
      ++v9;
      v10 += 3;
    }
    while ( v5 );
  }
  LODWORD(v12) = 0xC * v3;
  TESForm_PutFormRecordChunkData(0x44534452, v8, v12);
  FormHeapFree((unsigned int)v8);
}
