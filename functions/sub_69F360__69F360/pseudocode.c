TESObjectREFR *__userpurge sub_69F360@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        Data *a4,
        TESForm::ModReferenceList *a5,
        TESObjectCELL *(__thiscall *a6)(TESChildCELL *this),
        TESForm *a7,
        float a8,
        float a9,
        float a10,
        int a11,
        int a12,
        int a13)
{
  HighProcess *v14; // eax
  TESObjectREFRVtbl *v15; // eax
  TESObjectREFR *v16; // eax
  TESObjectCELL *ParentCell; // eax
  int v18; // eax

  MobilObject_constr(a1);
  *(float *)&a1[1].member.super.refID = 0.0;
  a1[1].member.childCell.GetChildCell = a6;
  a1->vtbl = (TESObjectREFRVtbl *)&MagicProjectile::`vftable'{for `MagicProjectile'};
  a1->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicProjectile::`vftable'{for `TESChildCell'};
  a1[1].member.super.modlist.data = a4;
  a1[1].member.super.modlist.next = a5;
  a1[1].member.baseForm = a7;
  a1[1].member.rot.x = sub_673B00();
  *(float *)&a1[1].member.super.type = 0.0;
  *(float *)&a1[1].member.super.flags = 0.0;
  v14 = (HighProcess *)FormHeapAlloc(0x2ECu);
  if ( v14 )
    v15 = (TESObjectREFRVtbl *)HighProcess::HighProcess(v14);
  else
    v15 = 0;
  a1[1].vtbl = v15;
  TESObjectREFR_SetPosition(a1, a8, a9, a10);
  sub_4D89A0((int *)a1, a11, a12, a13);
  v16 = (TESObjectREFR *)(*(int (__thiscall **)(Data *))(a4->errorState + 0x20))(a4);
  if ( v16 )
  {
    ParentCell = TESObjectREFR_GetParentCell(v16);
    MobileObject_ChangeCell(a1, (ExtraDataList *)ParentCell);
  }
  v18 = sub_69F100(a2, a3);
  TESObjectREFR_SetBaseForm(a1, v18);
  return a1;
}
