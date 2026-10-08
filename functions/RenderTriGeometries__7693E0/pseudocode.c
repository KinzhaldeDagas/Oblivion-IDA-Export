// Oblivion NiDX9Renderer triangle-geometry submission boundary. Copies world transform/bound, resolves hardware skinning, and routes to the native skinned or non-skinned shader/pass loop that issues the final DX9 draw.
//
// CULLING standalone pipeline audit 2026-09-27: both NiDX9Renderer vtable 0xA88EA4 slots +0x160 (TriShape) and +0x164 (TriStrips) resolve to this SAME implementation. It skips lost-device/zero-vertex cases, copies world transform and bound, resolves hardware skinning, updates a geometry group and dispatches skinned/non-skinned shader loops. Entry is not a final draw count and the two virtual slots must not be mistaken for two independent implementations.
void __thiscall NiDX9Renderer_RenderTriGeometries(NiDX9Renderer *a1, NiGeometry *a5)
{
  _DWORD *v2; // ebp MAPDST
  int v3; // edi
  int v4; // esi
  NiObject *skinData; // eax
  float y; // edx
  float z; // eax
  char v10; // al
  NiSkinInstance *v12; // [esp+4h] [ebp-4Ch]
  NiGeometryData *geomData; // [esp+8h] [ebp-48h]
  _DWORD v14[4]; // [esp+Ch] [ebp-44h] BYREF
  float v15[13]; // [esp+1Ch] [ebp-34h] BYREF
  char a5a; // [esp+54h] [ebp+4h]

  if ( !a1->member.lostDevice ) /*0x7693e6*/
  {
    geomData = a5->member.geomData; /*0x769403*/
    if ( ((unsigned __int16 (*)(void))geomData->__vftable->GetNumVertices)() ) /*0x769407*/
    {
      skinData = a5->member.skinData; /*0x769412*/
      y = a5->member.super.m_kWorldBound.Center.y; /*0x769418*/
      qmemcpy(v15, &a5->member.super.m_worldTransform, sizeof(v15)); /*0x769429*/
      v14[0] = LODWORD(a5->member.super.m_kWorldBound.Center.x); /*0x76942e*/
      v12 = (NiSkinInstance *)skinData; /*0x769435*/
      z = a5->member.super.m_kWorldBound.Center.z; /*0x769439*/
      v14[3] = LODWORD(a5->member.super.m_kWorldBound.Radius); /*0x76943e*/
      *(float *)&v14[1] = y; /*0x769445*/
      *(float *)&v14[2] = z; /*0x769449*/
      v10 = sub_768890(a1, a5, 0); /*0x76944d*/
      a5a = v10; /*0x769468*/
      if ( (geomData->member.m_usDirtyFlags & 0xF000) == 0x8000 || v12 && !v10 ) /*0x769474*/
        NiGeometryGroup::AddGeometryDataToGroup(a1->member.dynamicGeometryGroup, geomData, v12, v10, 0, 0); /*0x7694a2*/
      else
        NiGeometryGroup::AddGeometryDataToGroup(a1->member.unsharedGeometryGroup, geomData, v12, v10, 0, 0); /*0x769488*/
      if ( a5a ) /*0x7694b4*/
        NiDX9Renderer_RenderGeometrySkinned( /*0x7694bd*/
          (int)a1,
          (int)a1,
          (int)a5,
          (int)v12,
          (int)a5,
          (int)geomData,
          v12,
          (int)v15,
          (int)v14,
          v3,
          v4,
          v2);
      else
        NiDX9Renderer_RenderGeometryNonSkinned(a1, a5, geomData, v12, v15, (UInt32)v14, geomData->member.BuffData);// MoonSugarEffect decode/implementation: direct RenderTriGeometries non-skinned call to sub_7672F0. Plugin patches this 5-byte call with a wrapper that preserves thiscall+retn18 behavior, copies arg4 NiTransform, applies subtle active Moon Sugar rigid object wobble, skips skinned/null/exact NiScreenElements, then calls original 0x007672F0. /*0x7694d7*/
    }
  }
}
