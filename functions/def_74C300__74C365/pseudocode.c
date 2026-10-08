// positive sp value has been detected, the output may be wrong!
void __userpurge def_74C300(int a1@<ebp>, NiTArray_NiTexturingPropertyMap *a2@<esi>, char *a3)
{
  char *v3; // eax
  unsigned int end; // edi
  char *v5; // ebx
  int v6; // eax
  int v7; // eax
  char *v8; // eax
  unsigned int v9; // edi
  char *v10; // eax
  unsigned int v11; // edi
  char *v12; // ebx
  char *v13; // eax
  unsigned int v14; // edi
  char *v15; // ebx
  char *v16; // eax
  unsigned int v17; // edi
  char *v18; // ebx
  NiTexturingProperty_Map *v19; // edx
  NiTexturingProperty_Map *data; // eax

  v3 = TESOutput_PrintLabeledString("m_eEmissionType", "UNKNOWN!!!"); /*0x74c36f*/
  end = a2->end; /*0x74c374*/
  v5 = v3; /*0x74c381*/
  if ( end >= a2->capacity ) /*0x74c383*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x74c38e*/
  if ( end < a2->end ) /*0x74c399*/
  {
    if ( v5 ) /*0x74c3af*/
    {
      if ( !*((_DWORD *)&a2->data->vtbl + end) ) /*0x74c3b4*/
        ++a2->numObjs; /*0x74c3ba*/
    }
    else if ( *((_DWORD *)&a2->data->vtbl + end) ) /*0x74c3c4*/
    {
      --a2->numObjs; /*0x74c3ca*/
    }
  }
  else
  {
    a2->end = end + 1; /*0x74c3a0*/
    if ( v5 ) /*0x74c3a4*/
      ++a2->numObjs; /*0x74c3a6*/
  }
  *((_DWORD *)&a2->data->vtbl + end) = v5; /*0x74c3d3*/
  v6 = *(_DWORD *)(a1 + 0x70); /*0x74c3d6*/
  if ( v6 ) /*0x74c3dc*/
  {
    v7 = v6 - 1; /*0x74c3de*/
    if ( v7 ) /*0x74c3e1*/
    {
      if ( v7 == 1 ) /*0x74c3e6*/
        v8 = TESOutput_PrintLabeledString("m_eInitVelocityType", "NI_VELOCITY_USE_DIRECTION"); /*0x74c3f4*/
      else
        v8 = TESOutput_PrintLabeledString("m_eInitVelocityType", "UNKNOWN!!!"); /*0x74c3ed*/
    }
    else
    {
      v8 = TESOutput_PrintLabeledString("m_eInitVelocityType", "NI_VELOCITY_USE_RANDOM"); /*0x74c3fb*/
    }
  }
  else
  {
    v8 = TESOutput_PrintLabeledString("m_eInitVelocityType", "NI_VELOCITY_USE_NORMALS"); /*0x74c407*/
  }
  v9 = a2->end; /*0x74c40c*/
  a3 = v8; /*0x74c410*/
  if ( v9 >= a2->capacity ) /*0x74c41d*/
    NiTArray_SetSize((unsigned __int16 *)a2, v9 + a2->growSize); /*0x74c428*/
  NiTArray_SetAt(a2, v9, &a3); /*0x74c435*/
  v10 = TESOutput_PrintLabeledFloat("m_kEmissionAxis.x", *(float *)(a1 + 0x78)); /*0x74c446*/
  v11 = a2->end; /*0x74c44b*/
  v12 = v10; /*0x74c44f*/
  if ( v11 >= a2->capacity ) /*0x74c45a*/
    NiTArray_SetSize((unsigned __int16 *)a2, v11 + a2->growSize); /*0x74c465*/
  if ( v11 < a2->end ) /*0x74c470*/
  {
    if ( v12 ) /*0x74c486*/
    {
      if ( !*((_DWORD *)&a2->data->vtbl + v11) ) /*0x74c48b*/
        ++a2->numObjs; /*0x74c491*/
    }
    else if ( *((_DWORD *)&a2->data->vtbl + v11) ) /*0x74c49b*/
    {
      --a2->numObjs; /*0x74c4a1*/
    }
  }
  else
  {
    a2->end = v11 + 1; /*0x74c477*/
    if ( v12 ) /*0x74c47b*/
      ++a2->numObjs; /*0x74c47d*/
  }
  *((_DWORD *)&a2->data->vtbl + v11) = v12; /*0x74c4aa*/
  v13 = TESOutput_PrintLabeledFloat("m_kEmissionAxis.y", *(float *)(a1 + 0x7C)); /*0x74c4b9*/
  v14 = a2->end; /*0x74c4be*/
  v15 = v13; /*0x74c4cb*/
  if ( v14 >= a2->capacity ) /*0x74c4cd*/
    NiTArray_SetSize((unsigned __int16 *)a2, v14 + a2->growSize); /*0x74c4d8*/
  if ( v14 < a2->end ) /*0x74c4e3*/
  {
    if ( v15 ) /*0x74c4f9*/
    {
      if ( !*((_DWORD *)&a2->data->vtbl + v14) ) /*0x74c4fe*/
        ++a2->numObjs; /*0x74c504*/
    }
    else if ( *((_DWORD *)&a2->data->vtbl + v14) ) /*0x74c50e*/
    {
      --a2->numObjs; /*0x74c514*/
    }
  }
  else
  {
    a2->end = v14 + 1; /*0x74c4ea*/
    if ( v15 ) /*0x74c4ee*/
      ++a2->numObjs; /*0x74c4f0*/
  }
  *((_DWORD *)&a2->data->vtbl + v14) = v15; /*0x74c51d*/
  v16 = TESOutput_PrintLabeledFloat("m_kEmissionAxis.z", *(float *)(a1 + 0x80)); /*0x74c52f*/
  v17 = a2->end; /*0x74c534*/
  v18 = v16; /*0x74c541*/
  if ( v17 >= a2->capacity ) /*0x74c543*/
    NiTArray_SetSize((unsigned __int16 *)a2, v17 + a2->growSize); /*0x74c54e*/
  if ( v17 < a2->end ) /*0x74c559*/
  {
    if ( v18 ) /*0x74c57a*/
    {
      data = a2->data; /*0x74c57c*/
      if ( !*((_DWORD *)&data->vtbl + v17) ) /*0x74c57f*/
      {
        ++a2->numObjs; /*0x74c585*/
        *((_DWORD *)&data->vtbl + v17) = v18; /*0x74c58c*/
        return; /*0x74c593*/
      }
    }
    else if ( *((_DWORD *)&a2->data->vtbl + v17) ) /*0x74c599*/
    {
      --a2->numObjs; /*0x74c59f*/
    }
  }
  else
  {
    a2->end = v17 + 1; /*0x74c560*/
    if ( v18 ) /*0x74c564*/
    {
      v19 = a2->data; /*0x74c566*/
      ++a2->numObjs; /*0x74c569*/
      *((_DWORD *)&v19->vtbl + v17) = v18; /*0x74c56e*/
      return; /*0x74c575*/
    }
  }
  *((_DWORD *)&a2->data->vtbl + v17) = v18; /*0x74c5a8*/
}
