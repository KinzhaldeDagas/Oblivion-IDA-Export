// Verified child dependency queue: formats the quad's generated color DDS and `_FN.dds` normal map, attaches both texture tasks to TerrainLODQuadLoadTask, sets the dependency flag, then continues the base queued-model path.
int __thiscall TerrainLODQuadLoadTask_QueueTextureDependencies(TerrainLODQuadLoadTask_OblivionLayout_048Verified *this)
{
  int (__thiscall *v2)(TerrainLODQuadLoadTask_OblivionLayout_048Verified *); // eax
  char v4[260]; // [esp+4h] [ebp-414h] BYREF
  char path[260]; // [esp+108h] [ebp-310h] BYREF
  char Str1[260]; // [esp+20Ch] [ebp-20Ch] BYREF
  char v7[260]; // [esp+310h] [ebp-108h] BYREF

  _sprintf( /*0x4eced2*/
    Str1,
    "Textures\\LandscapeLOD\\Generated\\%i.%02i.%02i.%i.dds",
    this->worldspaceLODKey_02C,
    this->tileFileX_030,
    this->tileFileY_034,
    0x20);
  _sprintf( /*0x4eceef*/
    v4,
    "Textures\\LandscapeLOD\\Generated\\%i.%02i.%02i.%i_FN.dds",
    this->worldspaceLODKey_02C,
    this->tileFileX_030,
    this->tileFileY_034,
    0x20);
  sub_47D8F0(Str1, path); /*0x4ecf04*/
  sub_47D8F0(v4, v7); /*0x4ecf16*/
  QueuedTexture_QueueOrAttachPath(path, BYTE2(*(_DWORD *)&this->ioTaskBase_000_02B[0x10]), (IOTask *)this);// Verified neighboring subsystem: generated landscape LOD color and normal textures are each submitted through QueuedTexture_QueueOrAttachPath as child dependencies of their parent task. /*0x4ecf3e*/
  QueuedTexture_QueueOrAttachPath(v7, BYTE2(*(_DWORD *)&this->ioTaskBase_000_02B[0x10]), (IOTask *)this); /*0x4ecf63*/
  v2 = *(int (__thiscall **)(TerrainLODQuadLoadTask_OblivionLayout_048Verified *))(*(_DWORD *)this->ioTaskBase_000_02B /*0x4ecf6a*/
                                                                                 + 0x28);
  this->ioTaskBase_000_02B[0x28] = 1; /*0x4ecf6f*/
  return v2(this); /*0x4ecf75*/
}
