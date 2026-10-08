// Verified: loads RDSG chunks as 8-byte pairs (Grass form ID, parent LandTexture form ID), rejects lengths not divisible by 8, constructs TESRegionGrassObject entries, and appends valid objects to TESRegionGrassObjectList.
char __thiscall sub_4A38A0(void *this, Data *a1)
{
  UInt32 length; // ebx
  UInt32 v3; // esi
  char *v5; // ebp
  int *v6; // edi
  UInt32 v7; // ebx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // eax

  if ( !a1 || TESFile_GetChunkType(a1) != 0x53474452 ) /*0x4a38dd*/
    return 0; /*0x4a38dd*/
  length = a1->currentChunk.length; /*0x4a38df*/
  v3 = length >> 3; /*0x4a38e7*/
  if ( (length & 7) != 0 ) /*0x4a38ed*/
  {
    PrintError("Invalid Region Grass Object Data in file \"%s\".", a1->name); /*0x4a38f8*/
    return 0; /*0x4a3915*/
  }
  if ( v3 )
  {
    v5 = (char *)FormHeapAlloc((unsigned __int64)v3 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v3);
    TESFile_GetChunkData(a1, v5, length); /*0x4a3941*/
    v6 = (int *)v5; /*0x4a394a*/
    v7 = length >> 3; /*0x4a394c*/
    do /*0x4a39b1*/
    {
      v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x4a3952*/
      v9 = 0; /*0x4a395e*/
      if ( v8 ) /*0x4a3966*/
        v9 = sub_4A59E0(v8, v6); /*0x4a3970*/
      if ( v9 ) /*0x4a397c*/
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*v9 + 4))(v9) ) /*0x4a3985*/
        {
          v10 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x24))(this); /*0x4a3995*/
          sub_4A5FF0(v10, (int)v9); /*0x4a3999*/
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v9 + 8))(v9, 1); /*0x4a39a9*/
        }
      }
      v6 += 2; /*0x4a39ab*/
      --v7; /*0x4a39ae*/
    }
    while ( v7 ); /*0x4a39b1*/
    FormHeapFree((unsigned int)v5); /*0x4a39b4*/
  }
  return 1; /*0x4a3902*/
}
