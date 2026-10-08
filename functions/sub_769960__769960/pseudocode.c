// MoonSugarEffect decode: batch/prepack geometry entry builder. Chooses/caches shader interface, runs skinning gate, registers geometry with dynamic/unshared geometry group, then appends 0x10 queue nodes {NiGeometry*, skinPartitionOr0, BuffDataOrPartitionBuffer, next} using dword_B42164 free list and renderer head/tail fields. Not an isolated object-mask draw API.
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

  skinData = a2->member.skinData; /*0x769966*/
  geomData = a2->member.geomData; /*0x76996d*/
  v5 = (Ni2DBuffer **)&this->member.pad624[4]; /*0x76997e*/
  if ( !this->member.pad624[4] ) /*0x769976*/
  {
    v6 = (Ni2DBuffer *)NiRTTI_Cast((BSStringT *)&MEMORY[0xB42858], a2->member.shader); /*0x769992*/
    NiSmartPointer_Set__(v5, v6); /*0x76999d*/
    if ( !*v5 ) /*0x7699a2*/
      NiSmartPointer_Set__(v5, (Ni2DBuffer *)this->member.defaultShader); /*0x7699b0*/
  }
  result = (NiGeometry **)((int (__thiscall *)(NiGeometryData *))geomData->__vftable->GetNumVertices)(geomData); /*0x7699bd*/
  if ( (_WORD)result ) /*0x7699c2*/
  {
    v8 = sub_768890(this, a2, (NiObject *)*v5); /*0x7699d2*/
    v15 = v8; /*0x7699e7*/
    if ( (geomData->member.m_usDirtyFlags & 0xF000) == 0x8000 || skinData && !v8 ) /*0x7699f3*/
      NiGeometryGroup::AddGeometryDataToGroup( /*0x769a1d*/
        this->member.dynamicGeometryGroup,
        geomData,
        (NiSkinInstance *)skinData,
        v8,
        0,
        0);
    else
      NiGeometryGroup::AddGeometryDataToGroup( /*0x769a05*/
        this->member.unsharedGeometryGroup,
        geomData,
        (NiSkinInstance *)skinData,
        v8,
        0,
        0);
    if ( v15 ) /*0x769a27*/
    {
      m_uiRefCount = skinData[1].members.m_uiRefCount; /*0x769a29*/
      v10 = *(_DWORD *)(m_uiRefCount + 0xC); /*0x769a2c*/
      result = *(NiGeometry ***)(m_uiRefCount + 8); /*0x769a2f*/
      if ( result ) /*0x769a34*/
      {
        v11 = v10; /*0x769a3a*/
        v12 = result; /*0x769a3c*/
        do /*0x769a96*/
        {
          result = (NiGeometry **)unk_B42164; /*0x769a40*/
          if ( unk_B42164 ) /*0x769a40*/
          {
            unk_B42164 = (int)result[3]; /*0x769a5a*/
            result[3] = 0; /*0x769a60*/
          }
          else
          {
            result = (NiGeometry **)FormHeapAlloc(0x10u); /*0x769a4d*/
          }
          *result = a2; /*0x769a67*/
          result[1] = (NiGeometry *)v11; /*0x769a69*/
          result[2] = *(NiGeometry **)(v11 + 0x28); /*0x769a6f*/
          result[3] = 0; /*0x769a72*/
          v13 = this->member.pad624[1]; /*0x769a75*/
          if ( v13 ) /*0x769a7d*/
            *(_DWORD *)(v13 + 0xC) = result; /*0x769a7f*/
          else
            this->member.pad624[0] = (UInt32)result; /*0x769a84*/
          v11 += 0x2C; /*0x769a8a*/
          v12 = (NiGeometry **)((char *)v12 + 0xFFFFFFFF); /*0x769a8d*/
          this->member.pad624[1] = (UInt32)result; /*0x769a90*/
        }
        while ( v12 ); /*0x769a96*/
      }
    }
    else
    {
      result = (NiGeometry **)unk_B42164; /*0x769aa0*/
      if ( unk_B42164 ) /*0x769aa0*/
      {
        unk_B42164 = (int)result[3]; /*0x769ab8*/
        result[3] = 0; /*0x769abe*/
      }
      else
      {
        result = (NiGeometry **)FormHeapAlloc(0x10u); /*0x769aab*/
      }
      *result = a2; /*0x769ac5*/
      result[1] = 0; /*0x769ac7*/
      result[2] = (NiGeometry *)geomData->member.BuffData; /*0x769acd*/
      result[3] = 0; /*0x769ad0*/
      v14 = this->member.pad624[1]; /*0x769ad3*/
      if ( v14 ) /*0x769adb*/
        *(_DWORD *)(v14 + 0xC) = result; /*0x769ade*/
      else
        this->member.pad624[0] = (UInt32)result; /*0x769aee*/
      this->member.pad624[1] = (UInt32)result; /*0x769ae1*/
    }
  }
  return result; /*0x769a98*/
}
