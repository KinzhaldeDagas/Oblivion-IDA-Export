//
//
// [2026-10-03 CopyMembers chain] Verified cloningProcess pointer (not flags). Calls7ECB10 ->7E2490 ->73DA70 ->700A60 ->700300 ->700770. The final base copy maps original this to destination in *cloningProcess via NiTMap_SetAt; NiObjectNET layer copies names/extra data/controller. BSShaderProperty copies flags/scalar and clears state+24. This leaf method retains texture+9C and STLSP+A8 and copies Level+AC. None of this chain rewrites destination vptr, so installing the type8 adapter before native CopyMembers is preserved. Fresh constructor pass lists remain fresh.
void __thiscall OB_SpeedTreeLeafShaderProperty_CopyMembers_010201A0(
        OB_SpeedTreeLeafShaderProperty_010201A0 *this,
        OB_SpeedTreeLeafShaderProperty_010201A0 *destination,
        void *cloningProcess)
{
  OB_STLSPData_010201A0 *stlspData; // ebx
  OB_STLSPData_010201A0 *v5; // eax

  sub_7ECB10((char **)this, (int)destination, (int)cloningProcess); /*0x7f1c3f*/
  (*(void (__thiscall **)(OB_SpeedTreeLeafShaderProperty_010201A0 *, int))(*(_DWORD *)destination->gap0 + 0x7C))( /*0x7f1c52*/
    destination,
    this->textureRef);
  stlspData = destination->stlspData; /*0x7f1c54*/
  if ( stlspData == this->stlspData ) /*0x7f1c60*/
  {
    destination->leafLodIndex = this->leafLodIndex; /*0x7f1ccb*/
  }
  else
  {
    if ( stlspData ) /*0x7f1c64*/
    {
      if ( !InterlockedDecrement(&stlspData->refCount) ) /*0x7f1c6a*/
        (*(void (__thiscall **)(OB_STLSPData_010201A0 *, int))stlspData->vtbl)(stlspData, 1); /*0x7f1c80*/
    }
    v5 = this->stlspData; /*0x7f1c82*/
    destination->stlspData = v5; /*0x7f1c8a*/
    if ( v5 ) /*0x7f1c90*/
      InterlockedIncrement(&v5->refCount); /*0x7f1c96*/
    destination->leafLodIndex = this->leafLodIndex; /*0x7f1ca3*/
  }
}
