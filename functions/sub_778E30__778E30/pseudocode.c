//
// DX11 authority audit 2026-10-01: Verified manager vtable A8A778+1C; this pointer unused in body, RET8. For skin+0C delegates partition removal to 778C20. Ordinary data+38 buffer leads to buffer+4 group; group virtual+14 removes data, group+4 zero triggers destructor. No lock is acquired here. Called after renderer/precache unlock in 767860. Verified Fallout 827C27A8 family has data buffer offset+34 instead of Oblivion+38. Group virtual cleanup must be audited before treating renderer lock as whole-lifetime exclusion.
bool __thiscall NiD3DGeometryGroupManager_RemoveObjectFromGroup(
        NiD3DGeometryGroupManager *this,
        NiGeometryData *data,
        NiSkinInstance *skin)
{
  int v3; // eax
  NiGeometryBufferData *BuffData; // eax
  NiGeometryGroup *GeometryGroup; // esi

  if ( skin ) /*0x778e36*/
  {
    v3 = *((_DWORD *)skin + 3); /*0x778e38*/
    if ( v3 ) /*0x778e3d*/
      return sub_778C20(v3); /*0x778e72*/
  }
  BuffData = data->member.BuffData; /*0x778e43*/
  if ( !BuffData ) /*0x778e48*/
    return 0; /*0x778e4a*/
  GeometryGroup = BuffData->GeometryGroup; /*0x778e50*/
  GeometryGroup->vtbl->RemoveObject1(GeometryGroup, data); /*0x778e5b*/
  if ( !GeometryGroup->m_uiRefCount ) /*0x778e5d*/
    ((void (__thiscall *)(NiGeometryGroup *))GeometryGroup->vtbl->Destructor)(GeometryGroup); /*0x778e69*/
  return 1; /*0x778e4c*/
}
