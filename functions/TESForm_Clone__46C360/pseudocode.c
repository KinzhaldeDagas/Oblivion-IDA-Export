// Verified ordinary form-clone path: allocates via TESForm_CreateDynamic, invokes the destination CopyFrom virtual, restores EditorID and records the cloneMap entry. This does not dispatch CreateDuplicateForm; WorldSpace's deep cell/persistent-cell clone is a separate +0x38 virtual path.
TESForm *__thiscall TESForm_Clone(TESForm *this, int a2, void *cloneMap)
{
  TESForm *result; // eax
  TESForm *v5; // edi
  void (__thiscall *SetEditorID)(TESForm *, const char *); // edx
  char *m_data; // ebx
  BSStringT v8; // [esp+14h] [ebp-14h] BYREF
  unsigned int v9; // [esp+24h] [ebp-4h]

  result = TESForm_CreateDynamic(this->member.type); /*0x46c38e*/
  v5 = result; /*0x46c393*/
  if ( result ) /*0x46c39c*/
  {
    v8.m_data = 0; /*0x46c3a8*/
    v8.m_dataLen = 0; /*0x46c3ac*/
    v8.m_bufLen = 0; /*0x46c3b1*/
    BSStringT_Set(&v8, EmptyString, 0); /*0x46c3b6*/
    SetEditorID = this->vtbl->SetEditorID; /*0x46c3bd*/
    v9 = 0; /*0x46c3ca*/
    SetEditorID(this, EmptyString); /*0x46c3ce*/
    ((void (__thiscall *)(TESForm *, TESForm *))v5->vtbl->CopyFrom)(v5, this); /*0x46c3db*/
    m_data = v8.m_data; /*0x46c3dd*/
    if ( v8.m_data ) /*0x46c3e3*/
      this->vtbl->SetEditorID(this, v8.m_data); /*0x46c3f0*/
    v9 = 0xFFFFFFFF; /*0x46c3f3*/
    FormHeapFree((unsigned int)m_data); /*0x46c3fb*/
    if ( cloneMap ) /*0x46c409*/
      NiTMap_SetAt(cloneMap, (int)this, (int)v5); /*0x46c40d*/
    return v5; /*0x46c412*/
  }
  return result; /*0x46c414*/
}
