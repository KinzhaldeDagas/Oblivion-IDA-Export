//
//
// [2026-10-03 ABI] Verified thiscall seven stack arguments, AL bool, ret 0x1C. Rejects vertex count unequal to this+0xC; descriptor index is bounded by this+0x10 and descriptor array is this+0x14. Fallout SetDataStream 0x82BF8D50 corroborates index/block/offset/type/count/unit-size/stride roles.
bool __thiscall OB_NiAdditionalGeometryData_SetDataStream_010201A0(
        void *this,
        unsigned int streamIndex,
        unsigned int blockIndex,
        unsigned int blockOffset,
        unsigned int type,
        unsigned __int16 vertexCount,
        unsigned int elementSize,
        unsigned int stride)
{
  int v9; // edx
  _DWORD *v10; // eax

  if ( vertexCount != *((_WORD *)this + 6) ) /*0x7262aa*/
    return 0; /*0x7262aa*/
  if ( streamIndex >= *((_DWORD *)this + 4) ) /*0x7262b9*/
    return 0; /*0x7262b9*/
  v9 = *((_DWORD *)this + 5); /*0x7262bb*/
  if ( !v9 ) /*0x7262c0*/
    return 0; /*0x7262ac*/
  if ( blockIndex > *((unsigned __int16 *)this + 0x13) ) /*0x7262cd*/
    return 0; /*0x7262d0*/
  v10 = (_DWORD *)(v9 + 0x1C * streamIndex); /*0x7262df*/
  v10[1] = type; /*0x7262e6*/
  v10[5] = blockIndex; /*0x7262ed*/
  v10[6] = blockOffset; /*0x7262f4*/
  v10[4] = stride; /*0x7262fa*/
  v10[2] = elementSize; /*0x726305*/
  v10[3] = elementSize * vertexCount; /*0x726308*/
  return 1; /*0x7262ae*/
}
