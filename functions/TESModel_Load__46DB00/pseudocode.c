void __cdecl TESModel_Load(float *arg0, Data *a1)
{
  UInt32 ChunkType; // eax
  int v3[3]; // [esp+0h] [ebp-14h] BYREF
  float v4; // [esp+Ch] [ebp-8h] BYREF

  if ( a1 ) /*0x46db18*/
  {
    if ( arg0 ) /*0x46db23*/
    {
      ChunkType = TESFile_GetChunkType(a1); /*0x46db2b*/
      switch ( ChunkType ) /*0x46db35*/
      {
        case 0x42444F4Du: /*0x46db35*/
          TESFile_GetChunkData4(a1, (char *)&v4);// Authoritative TESModel MODB replay: this branch runs for every MODB occurrence. GetChunkData4 is a cap4 read into fresh uninitialized stack scratch, then the bound radius is assigned. Exact4 and overlong (>4 => first3 plus zero high byte) are deterministic; size0/short1..3 assign indeterminate remaining bytes. Later occurrences supersede earlier bound state. /*0x46db9e*/
          arg0[3] = v4; /*0x46dba6*/
          break;
        case 0x4C444F4Du: /*0x46db35*/
          _alloca_(v3[0]); /*0x46db69*/
          TESFile_GetChunkData(a1, (char *)v3, 0); /*0x46db75*/
          (*(void (__thiscall **)(float *, int *))(*(_DWORD *)arg0 + 0x18))(arg0, v3); /*0x46db82*/
          break;
        case 0x54444F4Du: /*0x46db35*/
          TESModel_LoadTextureHashSubrecord(arg0, a1);// Authoritative Oblivion MODT replay entry. Each valid nonempty MODT whose size is divisible by 24 replaces the runtime texture-entry array; malformed/zero MODT does not mutate. Repeated valid chunks are runtime last-valid-wins. /*0x46db47*/
          break;
      }
    }
  }
}
