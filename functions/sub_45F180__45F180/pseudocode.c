void __userpurge sub_45F180(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESForm *a5,
        TESChildCELL *a6)
{
  unsigned int vtbl; // ebp
  int v9; // ebx
  signed int v10; // ebp
  TESObjectCELL *ParentCell; // eax
  char v12; // [esp+14h] [ebp+4h]
  TESObjectREFR *v13; // [esp+18h] [ebp+8h]
  TESChildCELL *mainThreadID; // [esp+18h] [ebp+8h]

  vtbl = (unsigned int)a6->vtbl;
  v9 = (int)a6->vtbl & 0xFFF;
  if ( OblivionDynamicCast(
         a5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0) )
  {
    v9 = vtbl & 0x7FF;
  }
  if ( v9 && TESDataHandler_IsFormIDCreated_(a5->member.refID) )
    goto LABEL_5;
  v10 = sub_4535A0(a5, vtbl);
  *(_DWORD *)(a1 + 0x44) = 0x1FFFF000;
  ((void (__thiscall *)(TESForm *, int))a5->vtbl->Unk_18)(a5, v10 & 0x1FFFF080);
  if ( !v9 )
    goto LABEL_15;
  TESSaveLoadGame_ResetObject(a1, a2, a3, a4, a5, v9, 0);
  if ( v10 < 0 )
  {
    v13 = (TESObjectREFR *)OblivionDynamicCast(
                             a5,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                             0);
    if ( !TESObjectREFR_GetParentCell(v13)
      || (ParentCell = TESObjectREFR_GetParentCell(v13), !TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0)) )
    {
LABEL_5:
      sub_45C7A0((char *)a1, a5);
      return;
    }
  }
  v12 = sub_45A500((_BYTE *)a1);
  if ( a5->member.type == kFormType_Cell )
  {
    mainThreadID = (TESChildCELL *)OSGlobals->mainThreadID;
    if ( (TESChildCELL *)GetCurrentThreadId() == mainThreadID )
      *(_DWORD *)(a1 + 0x18) &= ~1u;
    else
      *(_DWORD *)(a1 + 0x18) &= ~0x40000u;
  }
  a5->vtbl->DoPostFixup(a5);
  sub_45A530((_DWORD *)a1, v12);
  if ( sub_45C020(a1, a2, a3, a4, a5, v9, 0) )
  {
LABEL_15:
    *(_DWORD *)(a1 + 0x44) = 0x60000000;
    ((void (__thiscall *)(TESForm *, int))a5->vtbl->Unk_18)(a5, v10 & 0x60000000);
    sub_45B7A0(a5, v10);
  }
}
