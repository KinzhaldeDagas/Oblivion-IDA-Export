int __userpurge EffectItemList_LoadItem_::BadEffectSetting@<eax>(
        const char *a1@<ebx>,
        void *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int ArgList,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        const char *a17)
{
  char *v17; // eax
  const char *v18; // eax
  const char *v20; // eax
  int v21; // [esp+0h] [ebp-4h]
  int v22; // [esp+0h] [ebp-4h]

  v17 = (char *)OblivionDynamicCast(
                  a2,
                  (int)a1,
                  (struct _s_RTTICompleteObjectLocator *)&EffectItemList `RTTI Type Descriptor',
                  (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
                  v21);
  if ( v17 == a1 )
  {
    v20 = a17;
    if ( a17 == a1 )
      v20 = "{unknown}";
    PrintError("Unable to find EffectSetting %d in spell '%s'.", ArgList, v20);
    return EffectItemList_LoadItem_::Done(a3, a4);
  }
  else
  {
    v18 = (const char *)(*(int (__thiscall **)(char *, _DWORD))(*(_DWORD *)v17 + 0xD4))(v17, *((_DWORD *)v17 + 3));
    PrintError("Unable to find EffectSetting %d in spell '%s' (%08X).", ArgList, v18, v22);
    return EffectItemList_LoadItem_::Done(a3, a4);
  }
}
