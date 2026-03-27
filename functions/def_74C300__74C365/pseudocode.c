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

  v3 = TESOutput_PrintLabeledString("m_eEmissionType", "UNKNOWN!!!");
  end = a2->end;
  v5 = v3;
  if ( end >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize);
  if ( end < a2->end )
  {
    if ( v5 )
    {
      if ( !*((_DWORD *)&a2->data->vtbl + end) )
        ++a2->numObjs;
    }
    else if ( *((_DWORD *)&a2->data->vtbl + end) )
    {
      --a2->numObjs;
    }
  }
  else
  {
    a2->end = end + 1;
    if ( v5 )
      ++a2->numObjs;
  }
  *((_DWORD *)&a2->data->vtbl + end) = v5;
  v6 = *(_DWORD *)(a1 + 0x70);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        v8 = TESOutput_PrintLabeledString("m_eInitVelocityType", "NI_VELOCITY_USE_DIRECTION");
      else
        v8 = TESOutput_PrintLabeledString("m_eInitVelocityType", "UNKNOWN!!!");
    }
    else
    {
      v8 = TESOutput_PrintLabeledString("m_eInitVelocityType", "NI_VELOCITY_USE_RANDOM");
    }
  }
  else
  {
    v8 = TESOutput_PrintLabeledString("m_eInitVelocityType", "NI_VELOCITY_USE_NORMALS");
  }
  v9 = a2->end;
  a3 = v8;
  if ( v9 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v9 + a2->growSize);
  NiTArray_SetAt(a2, v9, &a3);
  v10 = TESOutput_PrintLabeledFloat("m_kEmissionAxis.x", *(float *)(a1 + 0x78));
  v11 = a2->end;
  v12 = v10;
  if ( v11 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v11 + a2->growSize);
  if ( v11 < a2->end )
  {
    if ( v12 )
    {
      if ( !*((_DWORD *)&a2->data->vtbl + v11) )
        ++a2->numObjs;
    }
    else if ( *((_DWORD *)&a2->data->vtbl + v11) )
    {
      --a2->numObjs;
    }
  }
  else
  {
    a2->end = v11 + 1;
    if ( v12 )
      ++a2->numObjs;
  }
  *((_DWORD *)&a2->data->vtbl + v11) = v12;
  v13 = TESOutput_PrintLabeledFloat("m_kEmissionAxis.y", *(float *)(a1 + 0x7C));
  v14 = a2->end;
  v15 = v13;
  if ( v14 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v14 + a2->growSize);
  if ( v14 < a2->end )
  {
    if ( v15 )
    {
      if ( !*((_DWORD *)&a2->data->vtbl + v14) )
        ++a2->numObjs;
    }
    else if ( *((_DWORD *)&a2->data->vtbl + v14) )
    {
      --a2->numObjs;
    }
  }
  else
  {
    a2->end = v14 + 1;
    if ( v15 )
      ++a2->numObjs;
  }
  *((_DWORD *)&a2->data->vtbl + v14) = v15;
  v16 = TESOutput_PrintLabeledFloat("m_kEmissionAxis.z", *(float *)(a1 + 0x80));
  v17 = a2->end;
  v18 = v16;
  if ( v17 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v17 + a2->growSize);
  if ( v17 < a2->end )
  {
    if ( v18 )
    {
      data = a2->data;
      if ( !*((_DWORD *)&data->vtbl + v17) )
      {
        ++a2->numObjs;
        *((_DWORD *)&data->vtbl + v17) = v18;
        return;
      }
    }
    else if ( *((_DWORD *)&a2->data->vtbl + v17) )
    {
      --a2->numObjs;
    }
  }
  else
  {
    a2->end = v17 + 1;
    if ( v18 )
    {
      v19 = a2->data;
      ++a2->numObjs;
      *((_DWORD *)&v19->vtbl + v17) = v18;
      return;
    }
  }
  *((_DWORD *)&a2->data->vtbl + v17) = v18;
}
