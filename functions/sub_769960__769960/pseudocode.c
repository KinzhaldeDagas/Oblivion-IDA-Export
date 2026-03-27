NiGeometry **__thiscall sub_769960(NiDX9Renderer *this, NiGeometry *a2)
{
  NiObject *skinData; // ebx
  NiGeometryData *geomData; // ebp
  Ni2DBuffer **v5; // edi
  Ni2DBuffer *v6; // eax
  NiGeometry **result; // eax
  char v8; // al
  UInt32 m_uiRefCount; // eax
  int v10; // ecx
  int v11; // edi
  NiGeometry **v12; // ebp
  UInt32 v13; // ecx
  UInt32 v14; // ecx
  char v15; // [esp+10h] [ebp-4h]

  skinData = a2->member.skinData;
  geomData = a2->member.geomData;
  v5 = (Ni2DBuffer **)&this->member.pad624[4];
  if ( !this->member.pad624[4] )
  {
    v6 = (Ni2DBuffer *)NiRTTI_Cast(&NiD3DShaderInterfaceString, a2->member.shader);
    NiSmartPointer_Set__(v5, v6);
    if ( !*v5 )
      NiSmartPointer_Set__(v5, (Ni2DBuffer *)this->member.defaultShader);
  }
  result = (NiGeometry **)((int (__thiscall *)(NiGeometryData *))geomData->__vftable->GetNumVertices)(geomData);
  if ( (_WORD)result )
  {
    v8 = sub_768890(this, a2, (NiObject *)*v5);
    v15 = v8;
    if ( (geomData->member.m_usDirtyFlags & 0xF000) == 0x8000 || skinData && !v8 )
      NiGeometryGroup::AddGeometryDataToGroup(
        this->member.dynamicGeometryGroup,
        geomData,
        (NiSkinInstance *)skinData,
        v8,
        0,
        0);
    else
      NiGeometryGroup::AddGeometryDataToGroup(
        this->member.unsharedGeometryGroup,
        geomData,
        (NiSkinInstance *)skinData,
        v8,
        0,
        0);
    if ( v15 )
    {
      m_uiRefCount = skinData[1].members.m_uiRefCount;
      v10 = *(_DWORD *)(m_uiRefCount + 0xC);
      result = *(NiGeometry ***)(m_uiRefCount + 8);
      if ( result )
      {
        v11 = v10;
        v12 = result;
        do
        {
          result = (NiGeometry **)dword_B42164;
          if ( dword_B42164 )
          {
            dword_B42164 = (int)result[3];
            result[3] = 0;
          }
          else
          {
            result = (NiGeometry **)FormHeapAlloc(0x10u);
          }
          *result = a2;
          result[1] = (NiGeometry *)v11;
          result[2] = *(NiGeometry **)(v11 + 0x28);
          result[3] = 0;
          v13 = this->member.pad624[1];
          if ( v13 )
            *(_DWORD *)(v13 + 0xC) = result;
          else
            this->member.pad624[0] = (UInt32)result;
          v11 += 0x2C;
          v12 = (NiGeometry **)((char *)v12 + 0xFFFFFFFF);
          this->member.pad624[1] = (UInt32)result;
        }
        while ( v12 );
      }
    }
    else
    {
      result = (NiGeometry **)dword_B42164;
      if ( dword_B42164 )
      {
        dword_B42164 = (int)result[3];
        result[3] = 0;
      }
      else
      {
        result = (NiGeometry **)FormHeapAlloc(0x10u);
      }
      *result = a2;
      result[1] = 0;
      result[2] = (NiGeometry *)geomData->member.BuffData;
      result[3] = 0;
      v14 = this->member.pad624[1];
      if ( v14 )
        *(_DWORD *)(v14 + 0xC) = result;
      else
        this->member.pad624[0] = (UInt32)result;
      this->member.pad624[1] = (UInt32)result;
    }
  }
  return result;
}
