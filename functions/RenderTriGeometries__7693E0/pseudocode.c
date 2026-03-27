void __thiscall RenderTriGeometries(NiDX9Renderer *a1, NiGeometry *a5)
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

  if ( !a1->member.lostDevice )
  {
    geomData = a5->member.geomData;
    if ( ((unsigned __int16 (*)(void))geomData->__vftable->GetNumVertices)() )
    {
      skinData = a5->member.skinData;
      y = a5->member.super.m_kWorldBound.Center.y;
      qmemcpy(v15, &a5->member.super.m_worldTransform, sizeof(v15));
      v14[0] = LODWORD(a5->member.super.m_kWorldBound.Center.x);
      v12 = (NiSkinInstance *)skinData;
      z = a5->member.super.m_kWorldBound.Center.z;
      v14[3] = LODWORD(a5->member.super.m_kWorldBound.Radius);
      *(float *)&v14[1] = y;
      *(float *)&v14[2] = z;
      v10 = sub_768890(a1, a5, 0);
      a5a = v10;
      if ( (geomData->member.m_usDirtyFlags & 0xF000) == 0x8000 || v12 && !v10 )
        NiGeometryGroup::AddGeometryDataToGroup(a1->member.dynamicGeometryGroup, geomData, v12, v10, 0, 0);
      else
        NiGeometryGroup::AddGeometryDataToGroup(a1->member.unsharedGeometryGroup, geomData, v12, v10, 0, 0);
      if ( a5a )
        sub_767520((int)a1, (int)a1, (int)a5, (int)v12, (int)a5, (int)geomData, v12, (int)v15, (int)v14, v3, v4, v2);
      else
        sub_7672F0(a1, a5, geomData, v12, v15, (UInt32)v14, geomData->member.BuffData);
    }
  }
}
