TESForm *__thiscall TESForm_Clone(TESForm *this, int a2, void *cloneMap)
{
  TESForm *result; // eax
  TESForm *v5; // edi
  void (__thiscall *SetEditorID)(TESForm *, const char *); // edx
  char *m_data; // ebx
  BSStringT v8; // [esp+14h] [ebp-14h] BYREF
  unsigned int v9; // [esp+24h] [ebp-4h]

  result = TESForm_CreateDynamic(this->member.type);
  v5 = result;
  if ( result )
  {
    v8.m_data = 0;
    v8.m_dataLen = 0;
    v8.m_bufLen = 0;
    BSStringT_Set(&v8, EmptyString, 0);
    SetEditorID = this->vtbl->SetEditorID;
    v9 = 0;
    SetEditorID(this, EmptyString);
    ((void (__thiscall *)(TESForm *, TESForm *))v5->vtbl->CopyFrom)(v5, this);
    m_data = v8.m_data;
    if ( v8.m_data )
      this->vtbl->SetEditorID(this, v8.m_data);
    v9 = 0xFFFFFFFF;
    FormHeapFree((unsigned int)m_data);
    if ( cloneMap )
      NiTMap_SetAt(cloneMap, (int)this, (int)v5);
    return v5;
  }
  return result;
}
