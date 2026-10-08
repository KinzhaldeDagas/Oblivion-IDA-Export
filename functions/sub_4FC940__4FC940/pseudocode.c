// Script full-load clear: frees current data/text, clears appended variable/reference lists, and clears component references. Called before Script_InitializeDataAndComponents only for existing non-partial replacement records.
void __thiscall sub_4FC940(BSSimpleList_VoidPtr *this)
{
  MemoryHeap_Free_checked(*((void **)this + 0xC)); /*0x4fc94c*/
  MemoryHeap_Free_checked(*((void **)this + 0xB)); /*0x4fc95a*/
  Script_ClearVariableList(this); /*0x4fc961*/
  Script_ClearReferenceList((Script *)this); /*0x4fc968*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4fc970*/
}
