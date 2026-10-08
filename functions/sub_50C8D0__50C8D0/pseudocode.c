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

  *(_DWORD *)v15 = 0; /*0x50c901*/
  v14 = 0; /*0x50c909*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v15, &v14); /*0x50c911*/
  if ( result ) /*0x50c91b*/
  {
    if ( a4 != (TESObjectREFR *)reference ) /*0x50c928*/
    {
      if ( a4 ) /*0x50c92c*/
      {
        v11 = OblivionDynamicCast( /*0x50c93d*/
                a4,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                &Actor `RTTI Type Descriptor',
                0);
        if ( v11 ) /*0x50c947*/
        {
          if ( v11[0x16] ) /*0x50c949*/
          {
            v12 = (*(int (__thiscall **)(_DWORD *))(*v11 + 0x330))(v11); /*0x50c959*/
            if ( v12 ) /*0x50c95d*/
            {
              v13 = (float)v14; /*0x50c968*/
              sub_61D5B0(v12, bp0, a2, *(int **)v15, v13); /*0x50c96e*/
            }
          }
        }
      }
    }
    return 1; /*0x50c973*/
  }
  return result; /*0x50c91d*/
}
