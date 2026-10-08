// Verified quad-data layout at 0x60 bytes: root pointer +0, state +8, world origin +0x18/+0x1C, terrain mesh node +0x2C, and four child-quad pointers +0x30..+0x3C. The remaining bytes are Unknown.
TESTerrainLODQuad_OblivionComplete_060 *__thiscall TESTerrainLODQuad_ctor(
        TESTerrainLODQuad_OblivionComplete_060 *this,
        TESTerrainLODQuadRoot_OblivionLayout_010Verified *root)
{
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiAVObject *terrainLODNode_02C; // ebx
  volatile LONG *unknown_004; // ebx

  this->unknown_004 = 0; /*0x4ec67d*/
  this->terrainLODNode_02C = 0; /*0x4ec684*/
  *(float *)&this->unknown_040_05F[8] = 0.0; /*0x4ec68d*/
  v3 = InterlockedDecrement; /*0x4ec690*/
  *(float *)&this->unknown_040_05F[0xC] = 0.0; /*0x4ec696*/
  *(float *)&this->unknown_040_05F[4] = 0.0; /*0x4ec699*/
  this->root = root; /*0x4ec69c*/
  this->children_030[0] = 0; /*0x4ec69e*/
  this->children_030[1] = 0; /*0x4ec6a1*/
  this->children_030[2] = 0; /*0x4ec6a4*/
  this->children_030[3] = 0; /*0x4ec6a7*/
  *(_DWORD *)&this->unknown_00C_017[8] = 0; /*0x4ec6aa*/
  *(_DWORD *)&this->unknown_020_02B[4] = 0; /*0x4ec6ad*/
  *(_DWORD *)this->unknown_020_02B = 0; /*0x4ec6b0*/
  *(_DWORD *)this->unknown_040_05F = 0; /*0x4ec6b3*/
  *(_DWORD *)&this->unknown_040_05F[0x10] = 0; /*0x4ec6b6*/
  *(_DWORD *)&this->unknown_040_05F[0x14] = 0; /*0x4ec6b9*/
  *(_DWORD *)&this->unknown_040_05F[0x18] = 0; /*0x4ec6bc*/
  *(_DWORD *)&this->unknown_040_05F[0x1C] = 0; /*0x4ec6bf*/
  *(_WORD *)this->unknown_00C_017 = 0; /*0x4ec6c2*/
  *(_WORD *)&this->unknown_00C_017[2] = 0; /*0x4ec6c6*/
  *(_WORD *)&this->unknown_00C_017[4] = 0; /*0x4ec6ca*/
  *(_WORD *)&this->unknown_00C_017[6] = 0; /*0x4ec6ce*/
  this->state = TerrainLODQuadState_Unloaded; /*0x4ec6d2*/
  terrainLODNode_02C = this->terrainLODNode_02C; /*0x4ec6d9*/
  if ( terrainLODNode_02C ) /*0x4ec6e3*/
  {
    if ( !v3((volatile LONG *)&terrainLODNode_02C->members) ) /*0x4ec6e9*/
      terrainLODNode_02C->vtbl->super.super.Destructor((NiRefObject *)terrainLODNode_02C, 1); /*0x4ec6fb*/
    this->terrainLODNode_02C = 0; /*0x4ec6fd*/
  }
  unknown_004 = (volatile LONG *)this->unknown_004; /*0x4ec700*/
  if ( unknown_004 ) /*0x4ec705*/
  {
    if ( !v3(unknown_004 + 2) ) /*0x4ec70b*/
      (**(void (__thiscall ***)(void *, int))unknown_004)((void *)unknown_004, 1); /*0x4ec71d*/
    this->unknown_004 = 0; /*0x4ec71f*/
  }
  return this; /*0x4ec724*/
}
