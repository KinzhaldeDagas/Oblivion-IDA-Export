void __userpurge sub_66A490(_DWORD **this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, _DWORD *a5)
{
  int v6; // eax
  EntryData *v7; // esi
  void *v8; // edi
  char *v9; // ecx
  const char *value; // eax
  const char *v11; // edi
  char v12[256]; // [esp+8h] [ebp-104h] BYREF

  if ( a5 ) /*0x66a4b1*/
  {
    v6 = (*(int (__thiscall **)(_DWORD, int))(**(this + 0x16) + 0xEC))(*(this + 0x16), 1); /*0x66a4c6*/
    v7 = (EntryData *)v6; /*0x66a4c8*/
    if ( v6 /*0x66a4ec*/
      && (v8 = OblivionDynamicCast(
                 *(void **)(v6 + 8),
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                 &TESObjectWEAP `RTTI Type Descriptor',
                 0)) != 0 )
    {
      if ( EquippedEntryData_GetPoison(v7) ) /*0x66a513*/
      {
        ShowUIMessageBox( /*0x66a532*/
          v9,
          st5_0,
          a3,
          a4,
          (char *)stru_B388B8.value,
          (int)PoisonConfirmCallback,
          1,
          (char *)MEMORY[0xB38CF0].value,
          0);
      }
      else if ( *((_BYTE *)v8 + 0x90) == 4 ) /*0x66a546*/
      {
        ShowUIMessageBox( /*0x66a55f*/
          (char *)MEMORY[0xB38CF0].value,
          st5_0,
          a3,
          a4,
          (char *)stru_B388D0.value,
          (int)PoisonConfirmCallback,
          1,
          (char *)MEMORY[0xB38CF0].value,
          0);
      }
      else
      {
        *(this + 0x1B8) = a5; /*0x66a569*/
        value = stru_B388C8.value; /*0x66a576*/
        if ( *((_BYTE *)v8 + 0x90) != 5 ) /*0x66a57b*/
          value = stru_B388C0.value; /*0x66a57d*/
        v11 = *((const char **)v8 + 0xA); /*0x66a582*/
        if ( !v11 ) /*0x66a587*/
          v11 = EmptyString; /*0x66a589*/
        _sprintf(v12, "%s%s?", value, v11); /*0x66a59a*/
        ShowUIMessageBox( /*0x66a5bb*/
          (char *)MEMORY[0xB38D00].value,
          st5_0,
          a3,
          a4,
          v12,
          (int)PoisonConfirmCallback,
          2,
          (char *)MEMORY[0xB38CF8].value,
          (char)MEMORY[0xB38D00].value);
      }
    }
    else
    {
      ShowUIMessageBox( /*0x66a504*/
        (char *)stru_B388B0.value,
        st5_0,
        a3,
        a4,
        (char *)stru_B388B0.value,
        (int)PoisonConfirmCallback,
        1,
        (char *)MEMORY[0xB38CF0].value,
        0);
    }
  }
}
