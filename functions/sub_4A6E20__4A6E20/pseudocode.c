void __usercall sub_4A6E20(int this@<ecx>, int a2@<edi>)
{
  int v2; // ebp
  unsigned int v3; // edi
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // ebx
  _DWORD *v7; // eax
  const void *v8; // ebp
  size_t v9; // [esp-14h] [ebp-24h]
  size_t v10; // [esp-10h] [ebp-20h]
  size_t v11; // [esp-4h] [ebp-14h]
  int v12; // [esp+4h] [ebp-Ch]
  unsigned int v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h]

  v2 = this;
  LODWORD(v11) = 4;
  TESForm_PutFormRecordChunkData(0x494C5052, (void *)(this + 0x20), v11);
  v12 = v2;
  if ( *(_DWORD *)(v2 + 4) || *(_DWORD *)v2 )
  {
    HIDWORD(v10) = a2;
    v3 = 0;
    v13 = 0x400;
    v4 = (_DWORD *)FormHeapAlloc(0x10000u);
    v5 = 0x400;
    v6 = 0x2000;
    while ( *(_DWORD *)(v2 + 4) || *(_DWORD *)v2 )
    {
      v7 = *(_DWORD **)v2;
      v4[2 * v3] = **(_DWORD **)v2;
      v4[2 * v3++ + 1] = v7[1];
      if ( v3 >= v13 )
      {
        v14 = v5 + 0x400;
        v13 = v5 + 0x400;
        v6 += 0x2000;
        v8 = v4;
        v4 = (_DWORD *)FormHeapAlloc((unsigned __int64)(unsigned int)v6 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v6);
        LODWORD(v9) = 8 * v3;
        memcpy(v4, v8, v9);
        FormHeapFree((unsigned int)v8);
        v2 = v12;
        v5 = v14;
      }
      v12 = *(_DWORD *)(v2 + 4);
      if ( !v12 )
        break;
      v2 = *(_DWORD *)(v2 + 4);
    }
    if ( v3 )
    {
      LODWORD(v10) = 8 * v3;
      TESForm_PutFormRecordChunkData(0x444C5052, v4, v10);
    }
    FormHeapFree((unsigned int)v4);
  }
}
