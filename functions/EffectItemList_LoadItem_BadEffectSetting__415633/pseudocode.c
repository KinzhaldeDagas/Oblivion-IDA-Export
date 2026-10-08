void __userpurge EffectItemList_LoadItem_::BadEffectSetting(
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
  const char *v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  int v20; // [esp+0h] [ebp-4h]
  int v21; // [esp+0h] [ebp-4h]

  v17 = (const char *)OblivionDynamicCast( /*0x415640*/
                        a2,
                        (int)a1,
                        (struct _s_RTTICompleteObjectLocator *)&EffectItemList `RTTI Type Descriptor',
                        (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
                        v20);
  if ( v17 == a1 ) /*0x41564a*/
  {
    v19 = a17; /*0x415671*/
    if ( a17 == a1 ) /*0x415677*/
      v19 = "{unknown}"; /*0x415679*/
    PrintError("Unable to find EffectSetting %d in spell '%s'.", ArgList, v19); /*0x415689*/
    EffectItemList_LoadItem_::Done(a3, a4); /*0x41568f*/
  }
  else
  {
    v18 = (const char *)(*(int (__thiscall **)(const char *, _DWORD))(*(_DWORD *)v17 + 0xD4))(v17, *((_DWORD *)v17 + 3)); /*0x41565a*/
    PrintError("Unable to find EffectSetting %d in spell '%s' (%08X).", ArgList, v18, v21); /*0x415667*/
    EffectItemList_LoadItem_::Done(a3, a4); /*0x41566f*/
  }
}
