char __userpurge CombatController_TryUseMagicItem@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int *a5,
        void *a6)
{
  char *v7; // ebp
  char *v8; // ebx
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ebp
  int v13; // eax
  TESObjectREFR *v14; // eax
  char *Name; // eax
  CHAR *v16; // ecx
  char *v17; // eax
  const char *v18; // [esp-10h] [ebp-1Ch]
  const char *v19; // [esp-Ch] [ebp-18h]

  switch ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a5 + 0x18))(*a5) ) /*0x617362*/
  {
    case 0: /*0x617362*/
    case 2: /*0x617362*/
    case 3: /*0x617362*/
      if ( !sub_419CF0((char *)*a5) ) /*0x617475*/
      {
        if ( sub_419E50((char *)*a5) ) /*0x617515*/
          return def_617362((int)a5, (__int16)a6); /*0x61751c*/
        MagicItem_LoadVFXModels((char *)*a5, 0); /*0x617522*/
        return 0; /*0x617530*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x5C) + 0x30))(*(_DWORD *)(a1 + 0x3C) + 0x5C) /*0x6174c2*/
        || !CombatController_CanUseSpellAgainstCurrentTarget((_DWORD *)a1, a5, 0, 0)
        || CombatController_ShouldHoldFireForAllies(a1, a5)
        || !MagicCaster_CastMagicItem((_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x5C), *a5, (int)a6, 0) )// Spell cast path: ally-safety true prevents MagicCaster_CastMagicItem.
      {
        return def_617362((int)a5, (__int16)a6); /*0x6174cd*/
      }
      goto LABEL_19; /*0x6174cd*/
    case 1: /*0x617362*/
    case 4: /*0x617362*/
    case 5: /*0x617362*/
      return def_617362((int)a5, (__int16)a6);
    case 6: /*0x617362*/
      v10 = a5[1]; /*0x6173cd*/
      if ( !v10 ) /*0x6173d2*/
        return def_617362((int)a5, (__int16)a6); /*0x6173d2*/
      v11 = OblivionDynamicCast( /*0x6173ea*/
              *(void **)(v10 + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESObjectBOOK `RTTI Type Descriptor',
              0);
      v12 = v11; /*0x6173ef*/
      if ( !v11 ) /*0x6173f6*/
        return def_617362((int)a5, (__int16)a6); /*0x6173f6*/
      v13 = v11[0x19]; /*0x6173fc*/
      if ( !v13 ) /*0x617401*/
        return def_617362((int)a5, (__int16)a6); /*0x617401*/
      if ( sub_419CF0((char *)(v13 + 0x18)) ) /*0x61740a*/
      {                                         // Scroll/book cast path: ally-safety true aborts use and falls back to default combat behavior.
        if ( CombatController_ShouldHoldFireForAllies(a1, a5) ) /*0x617416*/
          return def_617362((int)a5, (__int16)a6); /*0x61741d*/
        (*(void (__thiscall **)(_DWORD, _DWORD *, void *))(**(_DWORD **)(a1 + 0x3C) + 0x2D0))( /*0x617434*/
          *(_DWORD *)(a1 + 0x3C),
          v12,
          a6);
        goto LABEL_19; /*0x61743b*/
      }
      if ( sub_419E50((char *)(v12[0x19] + 0x18)) ) /*0x617446*/
        return def_617362((int)a5, (__int16)a6); /*0x61744d*/
      MagicItem_LoadVFXModels((char *)(v12[0x19] + 0x18), 0); /*0x61745b*/
      return 0; /*0x617469*/
    case 7: /*0x617362*/
      v7 = (char *)OblivionDynamicCast( /*0x61737f*/
                     (void *)*a5,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                     &AlchemyItem `RTTI Type Descriptor',
                     0);
      v8 = v7 + 0x24; /*0x617381*/
      if ( sub_419CF0(v7 + 0x24) ) /*0x617389*/
      {
        Actor_ConsumePotion_(*(PlayerCharacter **)(a1 + 0x3C), (char)v7, a2, a3, a4, (TESForm *)v7, 0, 1); /*0x61739a*/
LABEL_19:
        *(_BYTE *)(a1 + 0x1AE) = a5 == *(int **)(a1 + 0x84); /*0x6174d3*/
        if ( unk_B3B908 ) /*0x6174e2*/
        {
          v14 = (TESObjectREFR *)OblivionDynamicCast( /*0x6174fe*/
                                   a6,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
          if ( v14 ) /*0x617508*/
            Name = TESObjectREFR_GetName(v14); /*0x61750c*/
          else
            Name = "Self"; /*0x617533*/
          v16 = *(CHAR **)(*a5 + 4); /*0x61753a*/
          if ( !v16 ) /*0x61753f*/
            v16 = EmptyString; /*0x617541*/
          v19 = Name; /*0x617549*/
          v18 = v16; /*0x61754a*/
          v17 = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x61754d*/
          Interface_ConsolePrint("%.20s casts %s at %.20s", v17, v18, v19); /*0x617558*/
        }
      }
      else if ( !sub_419E50(v8) ) /*0x6173ab*/
      {
        MagicItem_LoadVFXModels(v8, 0); /*0x6173bc*/
        return 0; /*0x6173ca*/
      }
      return def_617362((int)a5, (__int16)a6);
    default:
      JUMPOUT(0x617562); /*0x617562*/
  }
}
