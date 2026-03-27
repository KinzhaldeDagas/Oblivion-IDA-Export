bool __usercall sub_50C790@<al>(
        char bp0@<bpl>,
        double a2@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a6,
        TESObjectREFR *a4,
        TESObjectREFR *a8,
        Script *a9,
        ScriptEventList *l,
        int a11,
        UInt32 *a3)
{
  bool result; // al
  _DWORD *v13; // eax
  _DWORD **v14; // esi
  int v15; // eax
  int v16; // edi
  int v17; // eax
  void *v18; // eax
  void *v19; // esi
  TESPackage *v20; // edi
  UInt16 v21[2]; // [esp+8h] [ebp-8h] BYREF
  int v22; // [esp+Ch] [ebp-4h] BYREF

  v22 = 0;
  *(_DWORD *)v21 = 0;
  result = Script_ExtractArgs(a1, a6, a3, a4, a8, a9, l, v21, &v22);
  if ( result )
  {
    if ( a4 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( a4 )
      {
        v13 = OblivionDynamicCast(
                a4,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                &Actor `RTTI Type Descriptor',
                0);
        v14 = (_DWORD **)v13;
        if ( v13 )
        {
          if ( v13[0x16] )
          {
            v15 = (*(int (__thiscall **)(_DWORD *))(*v13 + 0x330))(v13);
            v16 = v15;
            if ( v15 )
            {
              v17 = sub_6135F0(v15);
              sub_6210D0(v16, bp0, a2, st6_0, st7_0, v17, 0);
              v18 = (void *)(*(int (__thiscall **)(_DWORD *))(*v14[0x16] + 0x184))(v14[0x16]);
              v19 = OblivionDynamicCast(
                      v18,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                      &FleePackage `RTTI Type Descriptor',
                      0);
              if ( v19 )
              {
                v20 = *((TESPackage **)v19 + 9);
                if ( v22 )
                {
                  TESPackage_LocationData_SetReference(v20, v22);
                  *((_BYTE *)v19 + 0x3C) = 0;
                  return 1;
                }
                if ( *(_DWORD *)v21 )
                {
                  TESPackage_LocationData_SetType(v20, 1);
                  sub_569810(v20, *(int *)v21);
                  *((_BYTE *)v19 + 0x3C) = 0;
                  return 1;
                }
              }
            }
            else
            {
              ((void (__thiscall *)(_DWORD **, _DWORD, _DWORD, _DWORD, _DWORD, int))(*v14)[0xC6])(
                v14,
                0,
                0,
                0,
                *(_DWORD *)v21,
                v22);
            }
          }
        }
      }
    }
    return 1;
  }
  return result;
}
