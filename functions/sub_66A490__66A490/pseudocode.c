void __userpurge sub_66A490(_DWORD **this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, _DWORD *a5)
{
  int v6; // eax
  ExtraDataList ***v7; // esi
  void *v8; // edi
  char *v9; // ecx
  const char *v10; // eax
  const char *v11; // edi
  char v12[256]; // [esp+8h] [ebp-104h] BYREF

  if ( a5 )
  {
    v6 = (*(int (__thiscall **)(_DWORD, int))(**(this + 0x16) + 0xEC))(*(this + 0x16), 1);
    v7 = (ExtraDataList ***)v6;
    if ( v6
      && (v8 = OblivionDynamicCast(
                 *(void **)(v6 + 8),
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                 &TESObjectWEAP `RTTI Type Descriptor',
                 0)) != 0 )
    {
      if ( sub_484DF0(v7) )
      {
        ShowUIMessageBox(
          v9,
          (char)a5,
          st5_0,
          a3,
          a4,
          (const char *)dword_B388B8,
          (int)PoisonConfirmCallback,
          1,
          (const char *)sOk,
          0);
      }
      else if ( *((_BYTE *)v8 + 0x90) == 4 )
      {
        ShowUIMessageBox(
          (char *)sOk,
          (char)a5,
          st5_0,
          a3,
          a4,
          (const char *)dword_B388D0,
          (int)PoisonConfirmCallback,
          1,
          (const char *)sOk,
          0);
      }
      else
      {
        *(this + 0x1B8) = a5;
        v10 = (const char *)dword_B388C8;
        if ( *((_BYTE *)v8 + 0x90) != 5 )
          v10 = (const char *)dword_B388C0;
        v11 = *((const char **)v8 + 0xA);
        if ( !v11 )
          v11 = EmptyString;
        _sprintf(v12, "%s%s?", v10, v11);
        ShowUIMessageBox(
          (char *)MessageButtonTextNo,
          (char)a5,
          st5_0,
          a3,
          a4,
          v12,
          (int)PoisonConfirmCallback,
          2,
          (const char *)MessageButtonTextYes,
          MessageButtonTextNo);
      }
    }
    else
    {
      ShowUIMessageBox(
        (char *)dword_B388B0,
        (char)a5,
        st5_0,
        a3,
        a4,
        (const char *)dword_B388B0,
        (int)PoisonConfirmCallback,
        1,
        (const char *)sOk,
        0);
    }
  }
}
