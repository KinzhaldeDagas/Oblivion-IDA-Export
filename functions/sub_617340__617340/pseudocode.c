char __userpurge sub_617340@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int *a5, void *a6)
{
  char *v8; // ebp
  char *v9; // ebx
  int v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ebp
  int v14; // eax
  TESObjectREFR *v15; // eax
  char *Name; // eax
  CHAR *v17; // ecx
  char *v18; // eax
  const char *v19; // [esp-10h] [ebp-1Ch]
  const char *v20; // [esp-Ch] [ebp-18h]

  switch ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a5 + 0x18))(*a5) )
  {
    case 0:
    case 2:
    case 3:
      if ( !sub_419CF0((char *)*a5) )
      {
        if ( sub_419E50((char *)*a5) )
          return def_617362(a5, (__int16)a6);
        sub_41A610((char *)*a5, 0);
        return 0;
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x5C) + 0x30))(*(_DWORD *)(a1 + 0x3C) + 0x5C)
        || !sub_613BB0((_DWORD *)a1, a5, 0, 0)
        || sub_615220(a1, a5)
        || !MagicCaster_CastMagicItem((_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x5C), *a5, (int)a6, 0) )
      {
        return def_617362(a5, (__int16)a6);
      }
      goto LABEL_19;
    case 1:
    case 4:
    case 5:
      return def_617362(a5, (__int16)a6);
    case 6:
      v11 = a5[1];
      if ( !v11 )
        return def_617362(a5, (__int16)a6);
      v12 = OblivionDynamicCast(
              *(void **)(v11 + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESObjectBOOK `RTTI Type Descriptor',
              0);
      v13 = v12;
      if ( !v12 )
        return def_617362(a5, (__int16)a6);
      v14 = v12[0x19];
      if ( !v14 )
        return def_617362(a5, (__int16)a6);
      if ( sub_419CF0((char *)(v14 + 0x18)) )
      {
        if ( sub_615220(a1, a5) )
          return def_617362(a5, (__int16)a6);
        (*(void (__thiscall **)(_DWORD, _DWORD *, void *))(**(_DWORD **)(a1 + 0x3C) + 0x2D0))(
          *(_DWORD *)(a1 + 0x3C),
          v13,
          a6);
        goto LABEL_19;
      }
      if ( sub_419E50((char *)(v13[0x19] + 0x18)) )
        return def_617362(a5, (__int16)a6);
      sub_41A610((char *)(v13[0x19] + 0x18), 0);
      return 0;
    case 7:
      v8 = (char *)OblivionDynamicCast(
                     (void *)*a5,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                     &AlchemyItem `RTTI Type Descriptor',
                     0);
      v9 = v8 + 0x24;
      if ( sub_419CF0(v8 + 0x24) )
      {
        Actor_ConsumePotion_(*(PlayerCharacter **)(a1 + 0x3C), (char)v8, a2, a3, a4, (TESForm *)v8, 0, 1);
LABEL_19:
        *(_BYTE *)(a1 + 0x1AE) = a5 == *(int **)(a1 + 0x84);
        if ( byte_B3B908 )
        {
          v15 = (TESObjectREFR *)OblivionDynamicCast(
                                   a6,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
          if ( v15 )
            Name = TESObjectREFR_GetName(v15);
          else
            Name = "Self";
          v17 = *(CHAR **)(*a5 + 4);
          if ( !v17 )
            v17 = EmptyString;
          v20 = Name;
          v19 = v17;
          v18 = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
          Interface_ConsolePrint("%.20s casts %s at %.20s", v18, v19, v20);
        }
      }
      else if ( !sub_419E50(v9) )
      {
        sub_41A610(v9, 0);
        return 0;
      }
      return def_617362(a5, (__int16)a6);
    default:
      JUMPOUT(0x617562);
  }
}
