// Verified TerrainLODQuadLoadTask layout/constructor: 0x48 bytes; +0x2C owning WorldSpace FormID, +0x30/+0x34 tile-file X/Y, +0x38 quad-data context, +0x3C loaded mesh node, +0x40/+0x44 generated color/normal textures.
TerrainLODQuadLoadTask_OblivionLayout_048Verified *__thiscall TerrainLODQuadLoadTask::TerrainLODQuadLoadTask(
        TerrainLODQuadLoadTask_OblivionLayout_048Verified *this,
        TESTerrainLODQuad_OblivionComplete_060 *quadData,
        unsigned int worldspaceFormID,
        int tileFileX,
        int tileFileY)
{
  int worldspaceFormID_02C; // [esp-10h] [ebp-134h]
  int tileFileX_030; // [esp-Ch] [ebp-130h]
  int tileFileY_034; // [esp-8h] [ebp-12Ch]
  char v10[260]; // [esp+10h] [ebp-114h] BYREF
  int v11; // [esp+120h] [ebp-4h]

  sub_436FA0((IOTask *)this, 3u); /*0x4ecca1*/
  this->worldspaceFormID_02C = worldspaceFormID; /*0x4eccbd*/
  *(_DWORD *)this->ioTaskBase_000_02B = &TerrainLODQuadLoadTask::`vftable'; /*0x4eccc7*/
  this->ioTaskBase_000_02B[0x28] = 0; /*0x4ecccd*/
  this->tileFileX_030 = tileFileX; /*0x4eccd0*/
  this->tileFileY_034 = tileFileY; /*0x4eccd3*/
  this->quadData_038 = quadData; /*0x4eccd6*/
  v11 = 0; /*0x4eccd9*/
  this->loadedTerrainNode_03C = 0; /*0x4ecce0*/
  this->generatedColorTexture_040 = 0; /*0x4ecce3*/
  this->generatedNormalTexture_044 = 0; /*0x4ecce6*/
  tileFileY_034 = this->tileFileY_034; /*0x4eccf4*/
  tileFileX_030 = this->tileFileX_030; /*0x4eccf5*/
  worldspaceFormID_02C = this->worldspaceFormID_02C; /*0x4eccf6*/
  LOBYTE(v11) = 3; /*0x4ecd01*/
  _sprintf(v10, "Meshes\\Landscape\\LOD\\%i.%02i.%02i.%i.NIF", worldspaceFormID_02C, tileFileX_030, tileFileY_034, 0x20);// Verified NIF path format: `Meshes\\Landscape\\LOD\\<worldspace-key>.<tileFileX>.<tileFileY>.32.NIF`; tileFileX/Y are quadX/quadY multiplied by 32. /*0x4ecd09*/
  sub_434600(this, v10); /*0x4ecd18*/
  sub_434CB0((int **)this, 0, 1); /*0x4ecd22*/
  return this; /*0x4ecd29*/
}
