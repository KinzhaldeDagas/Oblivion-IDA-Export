void __userpurge EffectItemList_LoadItem_::LoadFailed(
        unsigned int *a1@<ebx>,
        int a2@<edi>,
        void *a3@<esi>,
        const char *a4@<ebp>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        BSStringT a10,
        BSStringT a11,
        int a12,
        int a13,
        int a14)
{
  _DWORD *v14; // esi
  char *m_data; // edi
  int (__thiscall *v16)(_DWORD *, int); // eax
  const char *v17; // eax
  const char *v18; // esi
  char *v19; // [esp-8h] [ebp-8h]
  int v20; // [esp-4h] [ebp-4h]
  int v21; // [esp-4h] [ebp-4h]

  v14 = OblivionDynamicCast( /*0x41557d*/
          a3,
          0,
          (struct _s_RTTICompleteObjectLocator *)&EffectItemList `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
          0);
  if ( v14 ) /*0x415584*/
  {
    m_data = EffectSetting_GetName(a2, &a11)->m_data; /*0x415597*/
    v16 = *(int (__thiscall **)(_DWORD *, int))(*v14 + 0xD4); /*0x415599*/
    v20 = v14[3]; /*0x41559f*/
    a14 = 1; /*0x4155a2*/
    v17 = (const char *)v16(v14, v20); /*0x4155aa*/
    PrintError("Unable to load EffectItem '%s' in spell '%s' (%08X).", m_data, v17, v21); /*0x4155b3*/
    a14 = 0xFFFFFFFF; /*0x4155bd*/
    FormHeapFree((unsigned int)a11.m_data); /*0x4155c5*/
  }
  else
  {
    v18 = "{unknown}"; /*0x4155d1*/
    if ( a4 ) /*0x4155d6*/
      v18 = a4; /*0x4155d8*/
    v19 = EffectSetting_GetName(a2, &a10)->m_data; /*0x4155e9*/
    a14 = 2; /*0x4155ef*/
    PrintError("Unable to load EffectItem '%s' in spell '%s'", v19, v18); /*0x4155f7*/
    a14 = 0xFFFFFFFF; /*0x415601*/
    FormHeapFree((unsigned int)a10.m_data); /*0x415609*/
    a10.m_data = 0; /*0x415613*/
    *(_DWORD *)&a10.m_dataLen = 0; /*0x41561c*/
  }
  EffectItem_destr(a1); /*0x415623*/
  FormHeapFree((unsigned int)a1); /*0x415629*/
  EffectItemList_LoadItem_::Done(a5, a6); /*0x415631*/
}
