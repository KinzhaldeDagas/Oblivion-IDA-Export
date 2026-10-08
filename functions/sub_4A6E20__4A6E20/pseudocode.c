void __usercall sub_4A6E20(int this@<ecx>, int a2@<edi>)
{
  int v2; // ebp
  unsigned int v3; // edi
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // ebx
  _DWORD *v7; // eax
  const void *v8; // ebp
  size_t v9; // [esp-10h] [ebp-20h]
  size_t v10; // [esp-4h] [ebp-14h]
  int v11; // [esp+4h] [ebp-Ch]
  unsigned int v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  v2 = this; /*0x4a6e24*/
  LODWORD(v10) = 4; /*0x4a6e26*/
  TESForm_PutFormRecordChunkData(0x494C5052, (void *)(this + 0x20), v10); /*0x4a6e31*/
  v11 = v2; /*0x4a6e3d*/
  if ( *(_DWORD *)(v2 + 4) || *(_DWORD *)v2 )
  {
    HIDWORD(v9) = a2; /*0x4a6e51*/
    v3 = 0; /*0x4a6e5c*/
    v12 = 0x400; /*0x4a6e63*/
    v4 = (_DWORD *)FormHeapAlloc(0x10000u); /*0x4a6e78*/
    v5 = 0x400; /*0x4a6e7a*/
    v6 = 0x2000; /*0x4a6e7f*/
    while ( *(_DWORD *)(v2 + 4) || *(_DWORD *)v2 )
    {
      v7 = *(_DWORD **)v2; /*0x4a6e96*/
      v4[2 * v3] = **(_DWORD **)v2; /*0x4a6e9b*/
      v4[2 * v3++ + 1] = v7[1]; /*0x4a6ea1*/
      if ( v3 >= v12 )
      {
        v13 = v5 + 0x400; /*0x4a6eb4*/
        v12 = v5 + 0x400; /*0x4a6eb8*/
        v6 += 0x2000; /*0x4a6ebc*/
        v8 = v4; /*0x4a6ed0*/
        v4 = (_DWORD *)FormHeapAlloc((unsigned __int64)(unsigned int)v6 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v6);
        memcpy(v4, v8, 8 * v3); /*0x4a6ee8*/
        FormHeapFree((unsigned int)v8); /*0x4a6eee*/
        v2 = v11; /*0x4a6ef3*/
        v5 = v13; /*0x4a6ef7*/
      }
      v11 = *(_DWORD *)(v2 + 4); /*0x4a6f03*/
      if ( !v11 ) /*0x4a6f07*/
        break; /*0x4a6f07*/
      v2 = *(_DWORD *)(v2 + 4); /*0x4a6e86*/
    }
    if ( v3 ) /*0x4a6f0f*/
    {
      LODWORD(v9) = 8 * v3; /*0x4a6f18*/
      TESForm_PutFormRecordChunkData(0x444C5052, v4, v9); /*0x4a6f1f*/
    }
    FormHeapFree((unsigned int)v4); /*0x4a6f28*/
  }
}
