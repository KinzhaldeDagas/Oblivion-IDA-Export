bool __usercall sub_5123A0@<al>(
        char bp0@<bpl>,
        double a2@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  bool result; // al
  TESObjectREFR *v15; // eax
  TESObjectREFR *v16; // esi
  TESObjectREFRVtbl *vtbl; // eax
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  TESWorldSpace *WorldSpace; // eax
  TESObjectREFRVtbl *v20; // ecx
  TESObjectREFRVtbl *v21; // ebx
  void (__thiscall *v22)(BaseFormComponent *); // edi
  double GameHour; // st5
  void (__thiscall *v24)(TESObjectREFRVtbl *, _DWORD); // edx
  double v25; // st7
  int v26; // eax
  int v27; // eax
  TESObjectCELL *ParentCell; // [esp+0h] [ebp-18h]
  _DWORD *v29; // [esp+4h] [ebp-14h]
  float z; // [esp+8h] [ebp-10h]
  UInt16 v31[2]; // [esp+10h] [ebp-8h] BYREF
  float v32; // [esp+14h] [ebp-4h]

  *(_DWORD *)v31 = 0;
  result = Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v31);
  if ( result )
  {
    v15 = (TESObjectREFR *)OblivionDynamicCast(
                             a4,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
    v16 = v15;
    if ( v15 )
    {
      if ( *(_DWORD *)v31 )
      {
        if ( !sub_5E6B40(v15) )
        {
          vtbl = v16[1].vtbl;
          if ( vtbl )
          {
            CopyFromBase = vtbl->super.super.CopyFromBase;
            if ( CopyFromBase )
              Script_AddEventToExtraScript(CopyFromBase, &v16->member.baseExtraList, 0x800);
            Script_AddEventToExtraScript(*(_DWORD *)v31, &v16->member.baseExtraList, 0x200);
            if ( *(_DWORD *)(*(_DWORD *)v31 + 0x18) == 0xFFFFFFFF )
              sub_5672A0(*(TESPackage **)v31);
            z = v16->member.rot.z;
            v29 = (_DWORD *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))v16->vtbl->GetPos)(
                              v16,
                              st7_0,
                              a2);
            ParentCell = TESObjectREFR_GetParentCell(v16);
            WorldSpace = TESObjectREFR_GetWorldSpace(v16);
            sub_4D7A20(v16, (BSExtraDataVtbl *)WorldSpace, (BSExtraDataVtbl *)ParentCell, v29, z);
            sub_5660C0(*(_DWORD **)v31, 1);
            Actor_AddPackage_((Actor *)v16, *(TESPackage **)v31, 0, 0);
            v20 = v16[1].vtbl;
            if ( v20 )
            {
              if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v20->super.super.InitializeComponent + 2))(v20) )
              {
                v21 = v16[1].vtbl;
                v22 = (void (__thiscall *)(BaseFormComponent *))((char *)v21->super.super.InitializeComponent + 0x1C);
                GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
                v24 = *(void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v22;
                v32 = st7_0 - dbl_A2F928;
                v25 = v32;
                v24(v21, LODWORD(v32));
                if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v16[1].vtbl->super.super.InitializeComponent + 2))(v16[1].vtbl) == 1 )
                {
                  v26 = (*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, double@<st0>, double@<st1>))v16[1].vtbl->super.super.InitializeComponent
                         + 2))(
                          v16[1].vtbl,
                          v25,
                          a2);
                  sub_674550(bp0, GameHour, a2, v25, (int)v16, v26);
                  v27 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v16[1].vtbl->super.super.InitializeComponent + 2))(v16[1].vtbl);
                  sub_673A90((int)v16, v27, 0, 0, 0);
                }
              }
            }
          }
        }
      }
    }
    return 1;
  }
  return result;
}
