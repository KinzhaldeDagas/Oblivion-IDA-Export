//
// Verified virtual+38, thiscall one NiCloningProcess arg; corresponds to Fallout82249510 (+68 PPC slot). Processes base, resolves destination via map at cloningProcess+0 using55E000, handles effects then recursively invokes each source child's virtual+38. +30 is viewer-string diagnostics, not ProcessClone.
void __thiscall OB_NiNode_ProcessClone(void *this, void *cloningProcess)
{
  int *v2; // ebx
  unsigned int i; // edi
  int v5; // ecx

  v2 = (int *)cloningProcess; /*0x70ba01*/
  sub_707AB0((NiRenderTargetGroup *)this, (int)cloningProcess); /*0x70ba0a*/
  NiTMap_GetAt((_DWORD *)*v2, (int)this, &cloningProcess); /*0x70ba17*/
  if ( *((_DWORD *)this + 0x32) ) /*0x70ba1c*/
    sub_70B4E0(cloningProcess, (_DWORD *)this + 0x2F, v2); /*0x70ba31*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i ) /*0x70ba38*/
  {
    v5 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * i); /*0x70ba47*/
    if ( v5 ) /*0x70ba4c*/
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v5 + 0x38))(v5, v2); /*0x70ba54*/
  }
}
