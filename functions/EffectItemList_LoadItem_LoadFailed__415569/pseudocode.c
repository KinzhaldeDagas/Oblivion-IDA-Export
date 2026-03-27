int __userpurge EffectItemList_LoadItem_::LoadFailed@<eax>(
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
  char *v20; // [esp-8h] [ebp-8h]
  int v21; // [esp-4h] [ebp-4h]
  int v22; // [esp-4h] [ebp-4h]

  v14 = OblivionDynamicCast(
          a3,
          0,
          (struct _s_RTTICompleteObjectLocator *)&EffectItemList `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
          0);
  if ( v14 )
  {
    m_data = EffectSetting_GetName(a2, &a11)->m_data;
    v16 = *(int (__thiscall **)(_DWORD *, int))(*v14 + 0xD4);
    v21 = v14[3];
    a14 = 1;
    v17 = (const char *)v16(v14, v21);
    PrintError("Unable to load EffectItem '%s' in spell '%s' (%08X).", m_data, v17, v22);
    a14 = 0xFFFFFFFF;
    FormHeapFree((unsigned int)a11.m_data);
  }
  else
  {
    v18 = "{unknown}";
    if ( a4 )
      v18 = a4;
    v20 = EffectSetting_GetName(a2, &a10)->m_data;
    a14 = 2;
    PrintError("Unable to load EffectItem '%s' in spell '%s'", v20, v18);
    a14 = 0xFFFFFFFF;
    FormHeapFree((unsigned int)a10.m_data);
    a10.m_data = 0;
    *(_DWORD *)&a10.m_dataLen = 0;
  }
  EffectItem_destr(a1);
  FormHeapFree((unsigned int)a1);
  return EffectItemList_LoadItem_::Done(a5, a6);
}
