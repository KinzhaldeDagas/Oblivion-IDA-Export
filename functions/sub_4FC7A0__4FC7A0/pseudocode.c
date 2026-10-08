// Deep-copy Script state from another Script: copy the five ScriptInfo dwords, replace compiled data through Script_SetCompiledData, copy variables/references/source text, and mirror linked state. TESTopicInfo::GetResultScript uses this to reset its shared cache from a freshly constructed default Script before scanning the winning INFO record.
void __userpurge sub_4FC7A0(TESForm *this@<ecx>, char a2@<bpl>, int a3)
{
  unsigned int v4; // eax

  if ( a3 ) /*0x4fc7aa*/
  {
    *((_DWORD *)this + 6) = *(_DWORD *)(a3 + 0x18); /*0x4fc7b3*/
    *((_DWORD *)this + 7) = *(_DWORD *)(a3 + 0x1C); /*0x4fc7b9*/
    *((_DWORD *)this + 8) = *(_DWORD *)(a3 + 0x20); /*0x4fc7bf*/
    *((_DWORD *)this + 9) = *(_DWORD *)(a3 + 0x24); /*0x4fc7c5*/
    *((_DWORD *)this + 0xA) = *(_DWORD *)(a3 + 0x28); /*0x4fc7cb*/
    v4 = *((_DWORD *)this + 8); /*0x4fc7ce*/
    *((_DWORD *)this + 6) = 0; /*0x4fc7d1*/
    Script_SetCompiledData((void **)&this->vtbl, a2, a3, v4, *(void **)(a3 + 0x30)); /*0x4fc7df*/
    Script_ClearReferenceList((Script *)this); /*0x4fc7e6*/
    sub_4FC040((int *)(a3 + 0x40), (_DWORD *)this + 0x10); /*0x4fc7f4*/
    Script_ClearVariableList((BSSimpleList_VoidPtr *)this); /*0x4fc7fe*/
    if ( *(_DWORD *)(a3 + 0x2C) ) /*0x4fc803*/
    {
      Script_SetText((void **)&this->vtbl, a3, *(char **)(a3 + 0x2C)); /*0x4fc80d*/
    }
    else
    {
      if ( *((_DWORD *)this + 0xB) ) /*0x4fc814*/
        MemoryHeap_Free_checked(*((void **)this + 0xB)); /*0x4fc821*/
      *((_DWORD *)this + 0xB) = 0; /*0x4fc826*/
    }
    TESForm_SetIsLinked(this, (*(_DWORD *)(a3 + 8) & 8) != 0); /*0x4fc83b*/
  }
}
