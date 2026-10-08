// CSpeedTreeRT::ComputeLodLevel. For instances, temporarily applies instance position to the shared tree engine, computes/stores instance LOD, then restores parent position and LOD; base trees compute directly.
void __thiscall CSpeedTreeRT__ComputeLodLevel(OB_CSpeedTreeRT_010201A0 *this)
{
  _DWORD *instanceData; // ecx
  _DWORD *treeEngine; // eax
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  _DWORD *v8; // esi
  int v9; // [esp+0h] [ebp-70h] BYREF
  int v10; // [esp+50h] [ebp-20h]
  float v11; // [esp+58h] [ebp-18h]
  float v12; // [esp+5Ch] [ebp-14h]
  int *v13; // [esp+60h] [ebp-10h]
  int v14; // [esp+6Ch] [ebp-4h]

  v13 = &v9; /*0x78bfd8*/
  instanceData = (_DWORD *)this->instanceData; /*0x78bfdd*/
  v14 = 0; /*0x78bfe2*/
  if ( instanceData ) /*0x78bfe9*/
  {
    treeEngine = (_DWORD *)this->treeEngine; /*0x78bfeb*/
    v4 = *(_DWORD *)(this->treeEngine + 0xC); /*0x78bfed*/
    v5 = *(_DWORD *)(this->treeEngine + 4); /*0x78bff3*/
    v11 = *(float *)(this->treeEngine + 0x14); /*0x78bff6*/
    v6 = treeEngine[2]; /*0x78bff9*/
    v10 = v4; /*0x78bffc*/
    treeEngine[1] = instanceData[1]; /*0x78c002*/
    treeEngine[2] = instanceData[2]; /*0x78c008*/
    treeEngine[3] = instanceData[3]; /*0x78c00e*/
    v12 = CTreeEngine__ComputeLod((float *)this->treeEngine); /*0x78c018*/
    v7 = v10; /*0x78c021*/
    *(float *)(this->instanceData + 0x10) = v12; /*0x78c024*/
    *(float *)(this->treeEngine + 0x14) = v11; /*0x78c02c*/
    v8 = (_DWORD *)(this->treeEngine + 4); /*0x78c031*/
    *v8 = v5; /*0x78c034*/
    v8[1] = v6; /*0x78c036*/
    v8[2] = v7; /*0x78c039*/
  }
  else
  {
    CTreeEngine__ComputeLod((float *)this->treeEngine); /*0x78c050*/
  }
}
