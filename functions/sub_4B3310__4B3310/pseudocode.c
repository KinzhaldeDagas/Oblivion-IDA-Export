// Probable: obtains or loads reference-specific model data for a TESBoundObject/TESObjectREFR pair. Direct code checks model path, scale, loaded-state reference count and loader data before falling back to ModelLoader_LoadModelData.
void *__thiscall TESBoundObject_GetReferenceModelData(TESBoundObject *this, TESObjectREFR *reference)
{
  const char *FormModelPAth; // ebx
  TESForm *baseForm; // ecx
  int v5; // edx
  unsigned int IsModelLoaded; // eax
  unsigned int v7; // esi
  void *result; // eax
  void *LODMult; // eax
  char v10; // [esp+Ch] [ebp-10Ch]
  char outPath[260]; // [esp+10h] [ebp-108h] BYREF

  FormModelPAth = (const char *)sub_4693E0(this, reference); /*0x4b3337*/
  if ( !FormModelPAth ) /*0x4b333e*/
    FormModelPAth = GetFormModelPAth(this); /*0x4b3349*/
  v10 = 0; /*0x4b334d*/
  if ( !reference ) /*0x4b3352*/
    goto LABEL_9; /*0x4b3352*/
  baseForm = reference->member.baseForm; /*0x4b3354*/
  if ( baseForm ) /*0x4b3359*/
    v10 = ((unsigned __int8 (__thiscall *)(TESForm *))baseForm->vtbl[1].Unk_06)(baseForm) != 0; /*0x4b3369*/
  if ( ((double (__thiscall *)(TESObjectREFR *))reference->vtbl->GetScale)(reference) == fConstant_1 /*0x4b33c0*/
    || (TESBoundObject_BuildReferenceModelPath(this, reference, outPath),
        IsModelLoaded = ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], v5, (int)outPath),
        (v7 = IsModelLoaded) == 0)
    || (InterlockedIncrement((volatile LONG *)(IsModelLoaded + 4)), result = *(void **)(v7 + 8), ++unk_B35AC8, !result) )
  {
LABEL_9:
    LODMult = (void *)TESForm_GetLODMult((TESForm *)this); /*0x4b33c5*/
    return (void *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], FormModelPAth, v10, LODMult, 1); /*0x4b33da*/
  }
  return result; /*0x4b33df*/
}
