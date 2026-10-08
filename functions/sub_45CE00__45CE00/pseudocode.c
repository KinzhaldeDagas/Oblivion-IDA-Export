char __usercall sub_45CE00@<al>(_DWORD *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // ecx
  NiTMap_Entry_TESCELL *v10; // eax
  AnimSequenceSingle *v11; // esi
  TESForm *v12; // eax
  TESObjectREFR *v13; // eax
  void *v14; // edi
  void *v16; // [esp+8h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *i; // [esp+Ch] [ebp-8h] BYREF
  int a1; // [esp+10h] [ebp-4h] BYREF

  v5 = *(this + 0x15); /*0x45ce06*/
  v6 = *(_DWORD *)(v5 + 4); /*0x45ce09*/
  v7 = 0; /*0x45ce0c*/
  if ( v6 ) /*0x45ce11*/
  {
    v8 = *(_DWORD **)(v5 + 8); /*0x45ce13*/
    v9 = v8; /*0x45ce16*/
    while ( !*v9 ) /*0x45ce1b*/
    {
      ++v7; /*0x45ce1d*/
      ++v9; /*0x45ce20*/
      if ( v7 >= v6 ) /*0x45ce25*/
        goto LABEL_5; /*0x45ce25*/
    }
    v10 = (NiTMap_Entry_TESCELL *)v8[v7]; /*0x45ce77*/
  }
  else
  {
LABEL_5:
    v10 = 0; /*0x45ce27*/
  }
  for ( i = v10; i; LOBYTE(v10) = NiTMap_RemoveAt((_DWORD *)*(this + 0x15), (int)v11) ) /*0x45ce2f*/
  {
    NiTMap_U32Pointer_GetNextEntry((NiTMap_TESCELL *)*(this + 0x15), &i, (void **)&a1, (TESObjectCELL **)&v16); /*0x45ce48*/
    v11 = (AnimSequenceSingle *)a1; /*0x45ce4d*/
    if ( a1 ) /*0x45ce53*/
    {
      v12 = TESForm_LookupByFormID(a1); /*0x45ce64*/
      v13 = (TESObjectREFR *)OblivionDynamicCast( /*0x45ce6d*/
                               v12,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
    }
    else
    {
      v13 = (TESObjectREFR *)reference; /*0x45ce7c*/
    }
    v14 = v16; /*0x45ce83*/
    if ( !v13 ) /*0x45ce87*/
      goto LABEL_15; /*0x45ce87*/
    if ( v13->member.niNode ) /*0x45ce89*/
    {
      sub_458ED0(this, a2, a3, a4, v13, v11, (int)v16); /*0x45ce99*/
LABEL_15:
      MemoryHeap_Free_checked(v14); /*0x45ce9e*/
      continue; /*0x45cea4*/
    }
    MemoryHeap_Free_checked(v16); /*0x45ce92*/
  }
  if ( *(_DWORD *)(*(this + 0x15) + 0xC) ) /*0x45cec1*/
    LOBYTE(v10) = (*(char (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x45ced9*/
                    *(_DWORD *)&MEMORY[0xB33E90][0xF00],
                    "LoadAnimations() call finished, but still has elements in the map.");
  return (char)v10; /*0x45cec5*/
}
