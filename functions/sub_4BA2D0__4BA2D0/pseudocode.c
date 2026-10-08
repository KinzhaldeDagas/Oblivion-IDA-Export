// Verified Oblivion context has a 0x1C-byte payload; Fallout's RTTI-named TREE_BILLBOARD_DATA is also 0x1C bytes and its constructor copies an instanceCount-sized NiPoint3 locations array and float color array. Probable field mapping follows matching argument order and downstream use; Oblivion field semantics are not promoted beyond what its own callsites establish.
DistantTreeBillboardContext *__thiscall DistantTreeBillboardContext_ctor(
        DistantTreeBillboardContext *this,
        TESObjectTREE_BillboardTail *tree,
        unsigned int cellChunk,
        unsigned int cellKey,
        NiNode *instancedNode,
        unsigned int instanceCount,
        NiPoint3 *positions,
        float *colorValues)
{
  NiPoint3 *v9; // eax
  float *v10; // eax
  unsigned int v12; // [esp-18h] [ebp-1Ch]
  unsigned int v13; // [esp-8h] [ebp-Ch]

  this->treeObject = tree; /*0x4ba2df*/
  this->cellChunk = cellChunk; /*0x4ba2e5*/
  this->instancedNode = instancedNode; /*0x4ba2e8*/
  this->cellKey = cellKey; /*0x4ba2ef*/
  this->instanceCount = instanceCount; /*0x4ba2f4*/
  v9 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)instanceCount) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * instanceCount);
  v13 = 0xC * this->instanceCount; /*0x4ba319*/
  this->locations = v9; /*0x4ba31c*/
  memcpy(v9, positions, v13); /*0x4ba31f*/
  v10 = (float *)FormHeapAlloc((unsigned __int64)this->instanceCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * this->instanceCount);
  v12 = 4 * this->instanceCount; /*0x4ba348*/
  this->colorValues = v10; /*0x4ba34b*/
  memcpy(v10, colorValues, v12); /*0x4ba34e*/
  return this; /*0x4ba358*/
}
