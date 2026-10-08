char __userpurge sub_4FC850@<al>(Script *this@<ecx>, char a2@<bpl>, int a3)
{
  unsigned int v4; // eax
  char result; // al

  this->super.vtbl->DoPostFixup((TESForm *)this); /*0x4fc859*/
  LOWORD(v4) = *(_WORD *)(a3 + 0x10); /*0x4fc85f*/
  if ( (_WORD)v4 == 0xFFFF ) /*0x4fc867*/
    v4 = strlen(*(const char **)(a3 + 0xC)); /*0x4fc86c*/
  else
    v4 = (unsigned __int16)v4; /*0x4fc87d*/
  if ( !v4 ) /*0x4fc884*/
    return ((char (__thiscall *)(Script *, int))this->super.vtbl->Unk_23)(this, 1); /*0x4fc890*/
  result = sub_4FA5E0((int *)this, a3); /*0x4fc898*/
  if ( result ) /*0x4fc89f*/
  {
    this->super.vtbl->SetEditorID((TESForm *)this, *(const char **)(a3 + 0xC)); /*0x4fc8b3*/
    this->info.unk0 = *(_DWORD *)(a3 + 0x28); /*0x4fc8b8*/
    this->info.numRefs = *(_DWORD *)(a3 + 0x2C); /*0x4fc8be*/
    this->info.dataLength = *(_DWORD *)(a3 + 0x30); /*0x4fc8c4*/
    this->info.varCount = *(_DWORD *)(a3 + 0x34); /*0x4fc8ca*/
    this->info.type = *(_DWORD *)(a3 + 0x38); /*0x4fc8d0*/
    Script_SetCompiledData((void **)&this->super.vtbl, a2, a3, this->info.dataLength, *(void **)(a3 + 0x20)); /*0x4fc8dd*/
    Script_ClearReferenceList(this); /*0x4fc8e4*/
    Script_ClearVariableList((BSSimpleList_VoidPtr *)this); /*0x4fc8eb*/
    if ( this->info.dataLength ) /*0x4fc8f0*/
    {
      sub_4FC040((int *)(a3 + 0x44), &this->refList.var); /*0x4fc8ff*/
      sub_4FA780((int *)(a3 + 0x3C), &this->varList.data); /*0x4fc90d*/
    }
    ((void (__thiscall *)(Script *, _DWORD))this->super.vtbl->Unk_23)(this, 0); /*0x4fc921*/
    return ((char (__thiscall *)(Script *, int))this->super.vtbl->SetFromActiveFile)(this, 1); /*0x4fc92f*/
  }
  return result; /*0x4fc892*/
}
