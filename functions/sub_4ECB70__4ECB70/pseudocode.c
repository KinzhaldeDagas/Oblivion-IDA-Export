// Verified async completion: obtains the loaded NIF node from the TerrainLODQuadLoadTask, stores it in quad.terrainLODNode (+0x2C), sets state LoadedDetached (2), and releases quadData's task reference.
int __thiscall TerrainLODQuadLoadTask_ApplyLoadedMesh(TESTerrainLODQuad_OblivionComplete_060 *this)
{
  int result; // eax
  NiAVObject *v3; // ebx
  NiAVObject *terrainLODNode_02C; // esi
  bool v5; // zf
  int (__thiscall ***v6)(_DWORD, int); // esi
  volatile LONG *unknown_004; // esi
  int v8; // [esp+10h] [ebp-10h] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-4h]

  result = (int)sub_4EC960((_DWORD *)this->unknown_004, &v8); /*0x4ecb9e*/
  v3 = *(NiAVObject **)result; /*0x4ecba3*/
  terrainLODNode_02C = this->terrainLODNode_02C; /*0x4ecba5*/
  v5 = terrainLODNode_02C == *(NiAVObject **)result; /*0x4ecba8*/
  v9 = 0; /*0x4ecbaa*/
  if ( !v5 ) /*0x4ecbb2*/
  {
    if ( terrainLODNode_02C ) /*0x4ecbb6*/
    {
      result = InterlockedDecrement((volatile LONG *)&terrainLODNode_02C->members); /*0x4ecbbc*/
      if ( !result ) /*0x4ecbc4*/
        result = ((int (__thiscall *)(NiAVObject *, int))terrainLODNode_02C->vtbl->super.super.Destructor)( /*0x4ecbd2*/
                   terrainLODNode_02C,
                   1);
    }
    this->terrainLODNode_02C = v3; /*0x4ecbd6*/
    if ( v3 ) /*0x4ecbd9*/
      result = InterlockedIncrement((volatile LONG *)&v3->members); /*0x4ecbdf*/
  }
  v6 = (int (__thiscall ***)(_DWORD, int))v8; /*0x4ecbe5*/
  v9 = 0xFFFFFFFF; /*0x4ecbeb*/
  if ( v8 ) /*0x4ecbf3*/
  {
    result = InterlockedDecrement((volatile LONG *)(v8 + 4)); /*0x4ecbf9*/
    if ( !result ) /*0x4ecc01*/
    {
      if ( v6 ) /*0x4ecc05*/
        result = (**v6)(v6, 1); /*0x4ecc0f*/
    }
  }
  this->state = TerrainLODQuadState_LoadedDetached;// Verified successful-load transition: TerrainLODQuadLoadTask_ApplyLoadedMesh stores the loaded NiAVObject at quad +0x2C and sets state to LoadedDetached (2). /*0x4ecc11*/
  unknown_004 = (volatile LONG *)this->unknown_004; /*0x4ecc18*/
  if ( unknown_004 ) /*0x4ecc1d*/
  {
    result = InterlockedDecrement(unknown_004 + 2); /*0x4ecc23*/
    if ( !result ) /*0x4ecc2b*/
      result = (**(int (__thiscall ***)(void *, int))unknown_004)((void *)unknown_004, 1); /*0x4ecc39*/
    this->unknown_004 = 0; /*0x4ecc3b*/
  }
  return result; /*0x4ecc42*/
}
