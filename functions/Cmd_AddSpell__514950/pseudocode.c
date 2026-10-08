void __usercall Cmd_AddSpell(
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
        double *a11,
        UInt32 *a3)
{
  TESObjectREFR *v12; // esi
  char v13; // al
  int v14; // ecx
  const char *v17; // edi
  char *Name; // eax
  const char *v19; // eax
  const char *v20; // ecx
  const char *v21; // eax
  const char *v22; // edi
  char *v23; // eax
  float v24; // [esp+4h] [ebp-3Ch]
  UInt16 v25[2]; // [esp+20h] [ebp-20h] BYREF
  BSStringT v26; // [esp+24h] [ebp-1Ch] BYREF
  BSStringT v27; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int v28; // [esp+3Ch] [ebp-4h]

  *(_DWORD *)v25 = 0; /*0x5149a0*/
  if ( Script_ExtractArgs(a1, a6, a3, a4, a8, a9, l, v25) ) /*0x5149a4*/
  {
    if ( a4 ) /*0x5149c5*/
    {
      v12 = (TESObjectREFR *)OblivionDynamicCast( /*0x5149dd*/
                               a4,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                               &Actor `RTTI Type Descriptor',
                               0);
      if ( v12 ) /*0x5149e4*/
      {
        v13 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))v12->vtbl[1].Unk_4D)(v12, *(_DWORD *)v25); /*0x5149f9*/
        v14 = *(_DWORD *)v25; /*0x5149fd*/
        if ( v13 ) /*0x514a01*/
        {
          __asm { fld1 } /*0x514a07*/
          __asm { fstp    qword ptr [eax] }
          *a11 = _RT1; /*0x514a0d*/
          v17 = *(const char **)(v14 + 0x1C); /*0x514a14*/
          if ( !v17 ) /*0x514a16*/
            v17 = EmptyString; /*0x514a18*/
          Name = TESObjectREFR_GetName(v12); /*0x514a1f*/
          Interface_ConsolePrint("Spell '%s' added to %s", v17, Name); /*0x514a2b*/
          if ( v12 == (TESObjectREFR *)reference ) /*0x514a39*/
          {
            v27.m_data = 0; /*0x514a3f*/
            *(_DWORD *)&v27.m_dataLen = 0; /*0x514a43*/
            v19 = *(const char **)(*(_DWORD *)v25 + 0x1C); /*0x514a51*/
            v20 = (const char *)stru_B382A8; /*0x514a56*/
            v28 = 0; /*0x514a5c*/
            if ( !v19 ) /*0x514a60*/
              v19 = EmptyString; /*0x514a62*/
            BSStringT_Static_Format(&v27, "%s %s", v19, v20); /*0x514a73*/
            v26.m_data = 0; /*0x514a7b*/
            *(_DWORD *)&v26.m_dataLen = 0; /*0x514a7f*/
            LOBYTE(v28) = 1; /*0x514a93*/
            v21 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x1C) + 0x48);// OBMEFix 2026-06-01 continued correction: vanilla AddSpell icon block is a call-compatible site. OBME's source uses writeRelPaddedCall and its handler returns with retn 8, so a later E9 at this address is not accepted as a fresh OBME handler. OBMEFix may reassert its padded call over a later jump only after it has already cached a verified OBME.dll call target. /*0x514aa0*/
            if ( !v21 )                         // OBMEFix 2026-06-01 continued correction: OBME/OBMEFix return path after the padded call/NOP block. EAX must be a const char* icon path before this null-only check; empty paths still format as Icons\\ and can preserve a stale HUD icon. /*0x514aa5*/
              v21 = EmptyString; /*0x514aa7*/
            BSStringT_Static_Format(&v26, "%s\\%s", "Icons", v21); /*0x514abc*/
            __asm { fld     dword ptr ds:0A379B4h } /*0x514ac1*/
            __asm { fstp    [esp+3Ch+var_3C]; float }
            QueueUIMessage(bp0, st7_0, st6_0, v27.m_data, v24, (int)v26.m_data, 0); /*0x514ad9*/
            LOBYTE(v28) = 0; /*0x514ae5*/
            BSStringT_Clear((unsigned int *)&v26); /*0x514ae9*/
            v28 = 0xFFFFFFFF; /*0x514af2*/
            BSStringT_Clear((unsigned int *)&v27); /*0x514afa*/
          }
        }
        else
        {
          v22 = *(const char **)(*(_DWORD *)v25 + 0x1C); /*0x514b19*/
          if ( !v22 ) /*0x514b1b*/
            v22 = EmptyString; /*0x514b1d*/
          v23 = TESObjectREFR_GetName(v12); /*0x514b24*/
          Interface_ConsolePrint("Spell '%s' not added to %s", v22, v23); /*0x514b30*/
        }
      }
    }
  }
}
