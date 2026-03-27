int __thiscall sub_4B3310(void *this, TESObjectREFR *a2)
{
  const char *FormModelPAth; // ebx
  TESForm *baseForm; // ecx
  int v6; // edx
  unsigned int IsModelLoaded; // eax
  unsigned int v8; // esi
  int result; // eax
  void *v10; // eax
  char v11; // [esp+Ch] [ebp-10Ch]
  char v12[260]; // [esp+10h] [ebp-108h] BYREF

  FormModelPAth = (const char *)sub_4693E0(this, a2);
  if ( !FormModelPAth )
    FormModelPAth = GetFormModelPAth(this);
  v11 = 0;
  if ( !a2 )
    goto LABEL_9;
  baseForm = a2->member.baseForm;
  if ( baseForm )
    v11 = ((unsigned __int8 (__thiscall *)(TESForm *))baseForm->vtbl[1].Unk_06)(baseForm) != 0;
  if ( ((double (__thiscall *)(TESObjectREFR *))a2->vtbl->GetScale)(a2) == fConstant_1
    || (sub_4B2B00(this, a2, v12),
        IsModelLoaded = ModelLoader_IsModelLoaded__(ModelLoaderPtr, v6, (int)v12),
        (v8 = IsModelLoaded) == 0)
    || (InterlockedIncrement((volatile LONG *)(IsModelLoaded + 4)), result = *(_DWORD *)(v8 + 8),
                                                                    ++dword_B35AC8,
                                                                    !result) )
  {
LABEL_9:
    v10 = (void *)sub_4A2A30((int)this);
    return sub_439EB0((int *)ModelLoaderPtr, FormModelPAth, v11, v10, 1);
  }
  return result;
}
