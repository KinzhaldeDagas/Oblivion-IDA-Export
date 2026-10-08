// Create/update the native cell canopy-shadow mask.
signed int __cdecl TESObjectCELL::CreateCanopyShadowMaskForCell(ExtraDataList *a1, NiRenderedTexture **a2, _DWORD *a3)
{
  NiDX9Renderer *v3; // eax
  int v4; // eax
  _DWORD *v5; // edi
  UInt32 v6; // eax

  *a2 = 0; /*0x4ce46c*/
  if ( !a1 || (a1[1].members.m_presenceBitfield[8] & 1) != 0 || !MEMORY[0xB350D8] ) /*0x4ce482*/
    return 0; /*0x4ce536*/
  v3 = renderer; /*0x4ce48f*/
  unk_B3FF00 = 1; /*0x4ce49f*/
  dword_B2752C = 0x32; /*0x4ce4a6*/
  byte_B27530 = 0; /*0x4ce4b0*/
  *a2 = CreateNiRenderedTexture(0x40, 0x40, v3, &stru_B27534); /*0x4ce4c3*/
  unk_B3FF00 = 0; /*0x4ce4c5*/
  byte_B27530 = 1; /*0x4ce4cc*/
  sub_424440(a1 + 2, (BSExtraDataVtbl *)1, (Ni2DBuffer *)*a2, a3); /*0x4ce4dc*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4ce4e3*/
  v4 = (*((int (__thiscall **)(NiDX9TextureData *))(*a2)->member.super.rendererData->_vtbl + 5))((*a2)->member.super.rendererData); /*0x4ce4f5*/
  (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 0x4C))(v4, 0, *a3, 0, 0); /*0x4ce506*/
  v5 = (_DWORD *)*a3; /*0x4ce50f*/
  v6 = (*a2)->__vftable->super.GetHeight((NiTexture *)*a2); /*0x4ce511*/
  _memset(v5[1], 0, *v5 * v6); /*0x4ce51d*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4ce524*/
  return 1; /*0x4ce52d*/
}
