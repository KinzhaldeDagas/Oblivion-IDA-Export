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

  *(_DWORD *)v25 = 0;
  if ( Script_ExtractArgs(a1, a6, a3, a4, a8, a9, l, v25) )
  {
    if ( a4 )
    {
      v12 = (TESObjectREFR *)OblivionDynamicCast(
                               a4,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                               &Actor `RTTI Type Descriptor',
                               0);
      if ( v12 )
      {
        v13 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))v12->vtbl[1].Unk_4D)(v12, *(_DWORD *)v25);
        v14 = *(_DWORD *)v25;
        if ( v13 )
        {
          __asm { fld1 }
          __asm { fstp    qword ptr [eax] }
          *a11 = _RT1;
          v17 = *(const char **)(v14 + 0x1C);
          if ( !v17 )
            v17 = EmptyString;
          Name = TESObjectREFR_GetName(v12);
          Interface_ConsolePrint("Spell '%s' added to %s", v17, Name);
          if ( v12 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          {
            v27.m_data = 0;
            *(_DWORD *)&v27.m_dataLen = 0;
            v19 = *(const char **)(*(_DWORD *)v25 + 0x1C);
            v20 = (const char *)dword_B382A8;
            v28 = 0;
            if ( !v19 )
              v19 = EmptyString;
            BSStringT_Static_Format(&v27, "%s %s", v19, v20);
            v26.m_data = 0;
            *(_DWORD *)&v26.m_dataLen = 0;
            LOBYTE(v28) = 1;
            v21 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x1C) + 0x48);
            if ( !v21 )
              v21 = EmptyString;
            BSStringT_Static_Format(&v26, "%s\\%s", "Icons", v21);
            __asm { fld     dword ptr ds:0A379B4h }
            __asm { fstp    [esp+3Ch+var_3C]; float }
            QueueUIMessage(bp0, a2, st7_0, (int)v27.m_data, v24, (int)v26.m_data, 0);
            LOBYTE(v28) = 0;
            BSStringT_Clear((unsigned int *)&v26);
            v28 = 0xFFFFFFFF;
            BSStringT_Clear((unsigned int *)&v27);
          }
        }
        else
        {
          v22 = *(const char **)(*(_DWORD *)v25 + 0x1C);
          if ( !v22 )
            v22 = EmptyString;
          v23 = TESObjectREFR_GetName(v12);
          Interface_ConsolePrint("Spell '%s' not added to %s", v22, v23);
        }
      }
    }
  }
}
