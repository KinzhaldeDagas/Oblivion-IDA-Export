void __cdecl TESModel_Load(float *arg0, Data *a1)
{
  UInt32 ChunkType; // eax
  char v3[12]; // [esp+0h] [ebp-14h] BYREF
  float v4; // [esp+Ch] [ebp-8h] BYREF

  if ( a1 )
  {
    if ( arg0 )
    {
      ChunkType = TESFile_GetChunkType(a1);
      switch ( ChunkType )
      {
        case 0x42444F4Du:
          TESFile_GetChunkData4(a1, (char *)&v4);
          arg0[3] = v4;
          break;
        case 0x4C444F4Du:
          _alloca_();
          TESFile_GetChunkData(a1, v3, 0);
          (*(void (__thiscall **)(float *, char *))(*(_DWORD *)arg0 + 0x18))(arg0, v3);
          break;
        case 0x54444F4Du:
          sub_46D940(arg0, a1);
          break;
      }
    }
  }
}
