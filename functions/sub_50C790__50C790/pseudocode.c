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
  PlayerCharacter *CurrentTarget; // eax
  void *v18; // eax
  void *v19; // esi
  TESPackage *v20; // edi
  UInt16 v21[2]; // [esp+8h] [ebp-8h] BYREF
  int v22; // [esp+Ch] [ebp-4h] BYREF

  v22 = 0; /*0x50c7c4*/
  *(_DWORD *)v21 = 0; /*0x50c7c8*/
  result = Script_ExtractArgs(a1, a6, a3, a4, a8, a9, l, v21, &v22); /*0x50c7cc*/
  if ( result ) /*0x50c7d6*/
  {
    if ( a4 != (TESObjectREFR *)reference ) /*0x50c7e4*/
    {
      if ( a4 ) /*0x50c7ec*/
      {
        v13 = OblivionDynamicCast( /*0x50c7ff*/
                a4,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                &Actor `RTTI Type Descriptor',
                0);
        v14 = (_DWORD **)v13; /*0x50c804*/
        if ( v13 ) /*0x50c80b*/
        {
          if ( v13[0x16] ) /*0x50c811*/
          {
            v15 = (*(int (__thiscall **)(_DWORD *))(*v13 + 0x330))(v13); /*0x50c825*/
            v16 = v15; /*0x50c827*/
            if ( v15 ) /*0x50c82b*/
            {
              CurrentTarget = (PlayerCharacter *)CombatController_GetCurrentTarget(v15); /*0x50c830*/
              sub_6210D0(v16, bp0, a2, st6_0, st7_0, CurrentTarget, 0); /*0x50c838*/
              v18 = (void *)(*(int (__thiscall **)(_DWORD *))(*v14[0x16] + 0x184))(v14[0x16]); /*0x50c854*/
              v19 = OblivionDynamicCast( /*0x50c85c*/
                      v18,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                      &FleePackage `RTTI Type Descriptor',
                      0);
              if ( v19 ) /*0x50c863*/
              {
                v20 = *((TESPackage **)v19 + 9); /*0x50c86b*/
                if ( v22 ) /*0x50c86e*/
                {
                  TESPackage_LocationData_SetReference(v20, v22); /*0x50c873*/
                  *((_BYTE *)v19 + 0x3C) = 0; /*0x50c879*/
                  return 1; /*0x50c883*/
                }
                if ( *(_DWORD *)v21 ) /*0x50c888*/
                {
                  TESPackage_LocationData_SetType(v20, 1); /*0x50c88e*/
                  sub_569810(v20, *(int *)v21); /*0x50c89a*/
                  *((_BYTE *)v19 + 0x3C) = 0; /*0x50c8a0*/
                  return 1; /*0x50c8aa*/
                }
              }
            }
            else
            {
              ((void (__thiscall *)(_DWORD **, _DWORD, _DWORD, _DWORD, _DWORD, int))(*v14)[0xC6])( /*0x50c8c2*/
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
    return 1; /*0x50c8c6*/
  }
  return result; /*0x50c7d8*/
}
