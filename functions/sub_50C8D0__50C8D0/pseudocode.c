bool __usercall sub_50C8D0@<al>(
        char bp0@<bpl>,
        int *a2@<edi>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a3)
{
  bool result; // al
  _DWORD *v11; // eax
  int v12; // eax
  float v13; // [esp+0h] [ebp-10h]
  int v14; // [esp+8h] [ebp-8h] BYREF
  UInt16 v15[2]; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)v15 = 0;
  v14 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v15, &v14);
  if ( result )
  {
    if ( a4 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( a4 )
      {
        v11 = OblivionDynamicCast(
                a4,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                &Actor `RTTI Type Descriptor',
                0);
        if ( v11 )
        {
          if ( v11[0x16] )
          {
            v12 = (*(int (__thiscall **)(_DWORD *))(*v11 + 0x330))(v11);
            if ( v12 )
            {
              v13 = (float)v14;
              sub_61D5B0(v12, bp0, a2, *(int *)v15, v13);
            }
          }
        }
      }
    }
    return 1;
  }
  return result;
}
