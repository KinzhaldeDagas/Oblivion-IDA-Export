signed int __cdecl TESObjectCELL::CreateCanopyShadowMaskForCell(ExtraDataList *a1, NiRenderedTexture **a2, _DWORD *a3)
{
  NiDX9Renderer *v3; // eax
  int v4; // eax
  _DWORD *v5; // edi
  UInt32 v6; // eax

  *a2 = 0;
  if ( !a1 || (a1[1].members.m_presenceBitfield[8] & 1) != 0 || !dword_B350D8 )
    return 0;
  v3 = g_Renderer;
  byte_B3FF00 = 1;
  dword_B2752C = 0x32;
  byte_B27530 = 0;
  *a2 = CreateNiRenderedTexture(0x40, 0x40, v3, &stru_B27534);
  byte_B3FF00 = 0;
  byte_B27530 = 1;
  sub_424440(a1 + 2, (BSExtraDataVtbl *)1, (Ni2DBuffer *)*a2, a3);
  nullsub_returnTrue_0arg();
  v4 = (*((int (__thiscall **)(NiDX9TextureData *))(*a2)->member.super.rendererData->_vtbl + 5))((*a2)->member.super.rendererData);
  (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 0x4C))(v4, 0, *a3, 0, 0);
  v5 = (_DWORD *)*a3;
  v6 = (*a2)->__vftable->super.GetHeight((NiTexture *)*a2);
  _memset(v5[1], 0, *v5 * v6);
  nullsub_returnTrue_0arg();
  return 1;
}
