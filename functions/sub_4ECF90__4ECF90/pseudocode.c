// Verified generated-texture retrieval: resolves the color and `_FN` normal DDS through the texture manager into task fields +0x40/+0x44, then submits the task to IOManager when dependencies are ready.
void __thiscall TerrainLODQuadLoadTask_RetrieveGeneratedTextures(
        TerrainLODQuadLoadTask_OblivionLayout_048Verified *this)
{
  Ni2DBuffer *v2; // eax
  Ni2DBuffer *v3; // eax
  char v4[260]; // [esp+4h] [ebp-414h] BYREF
  int v5[65]; // [esp+108h] [ebp-310h] BYREF
  char Str1[260]; // [esp+20Ch] [ebp-20Ch] BYREF
  int v7[65]; // [esp+310h] [ebp-108h] BYREF

  if ( !*(_DWORD *)&this->ioTaskBase_000_02B[0x1C] /*0x4ecfc0*/
    || *(unsigned __int16 *)(*(_DWORD *)&this->ioTaskBase_000_02B[0x1C] + 0xC) == *(_DWORD *)(*(_DWORD *)&this->ioTaskBase_000_02B[0x1C]
                                                                                            + 0x10) )
  {
    if ( this->ioTaskBase_000_02B[0x28] ) /*0x4ecfc6*/
    {
      if ( *(_DWORD *)&this->ioTaskBase_000_02B[0xC] ) /*0x4ecfd0*/
      {
        sub_436F30((int)this); /*0x4ed0a7*/
      }
      else
      {
        _sprintf( /*0x4ecff5*/
          Str1,
          "Textures\\LandscapeLOD\\Generated\\%i.%02i.%02i.%i.dds",
          this->worldspaceLODKey_02C,
          this->tileFileX_030,
          this->tileFileY_034,
          0x20);
        _sprintf( /*0x4ed012*/
          v4,
          "Textures\\LandscapeLOD\\Generated\\%i.%02i.%02i.%i_FN.dds",
          this->worldspaceLODKey_02C,
          this->tileFileX_030,
          this->tileFileY_034,
          0x20);
        sub_47D8F0(Str1, (char *)v5); /*0x4ed027*/
        sub_47D8F0(v4, (char *)v7); /*0x4ed039*/
        v2 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, int *, _DWORD))(*(_DWORD *)unk_B35300 + 4))(unk_B35300, v5, 0); /*0x4ed056*/
        NiSmartPointer_Set__(&this->generatedColorTexture_040, v2); /*0x4ed05c*/
        v3 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, int *, _DWORD))(*(_DWORD *)unk_B35300 + 4))(unk_B35300, v7, 0); /*0x4ed076*/
        NiSmartPointer_Set__(&this->generatedNormalTexture_044, v3); /*0x4ed07c*/
        (*((void (__thiscall **)(IOManager *, TerrainLODQuadLoadTask_OblivionLayout_048Verified *))MEMORY[0xB33A10]->vtbl /*0x4ed08d*/
         + 0xF))(
          MEMORY[0xB33A10],
          this);
      }
    }
  }
}
