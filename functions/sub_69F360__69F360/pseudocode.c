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
  void *v16; // eax
  ExtraDataList *DwordAtOffset40; // eax
  TESForm *v18; // eax

  MobilObject_constr(a1); /*0x69f389*/
  *(float *)&a1[1].member.super.refID = 0.0; /*0x69f394*/
  a1[1].member.childCell.GetChildCell = a6; /*0x69f3a3*/
  a1->vtbl = (TESObjectREFRVtbl *)&MagicProjectile::`vftable'{for `MagicProjectile'}; /*0x69f3b3*/
  a1->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicProjectile::`vftable'{for `TESChildCell'}; /*0x69f3b9*/
  a1[1].member.super.modlist.data = a4; /*0x69f3c0*/
  a1[1].member.super.modlist.next = a5; /*0x69f3c3*/
  a1[1].member.baseForm = a7; /*0x69f3c6*/
  a1[1].member.rot.x = sub_673B00(); /*0x69f3ce*/
  *(float *)&a1[1].member.super.type = 0.0; /*0x69f3d8*/
  *(float *)&a1[1].member.super.flags = 0.0; /*0x69f3db*/
  v14 = (HighProcess *)FormHeapAlloc(0x2ECu); /*0x69f3de*/
  if ( v14 ) /*0x69f3f1*/
    v15 = (TESObjectREFRVtbl *)HighProcess::HighProcess(v14); /*0x69f3f5*/
  else
    v15 = 0; /*0x69f3fc*/
  a1[1].vtbl = v15; /*0x69f409*/
  TESObjectREFR_SetPosition(a1, a8, a9, a10); /*0x69f421*/
  sub_4D89A0((int *)a1, a11, a12, a13); /*0x69f441*/
  v16 = (void *)(*(int (__thiscall **)(Data *))(a4->errorState + 0x20))(a4); /*0x69f44d*/
  if ( v16 ) /*0x69f451*/
  {
    DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v16); /*0x69f455*/
    MobileObject_ChangeCell(a1, DwordAtOffset40); /*0x69f45d*/
  }
  v18 = (TESForm *)sub_69F100(a2, a3); /*0x69f464*/
  TESObjectREFR_SetBaseForm(a1, v18); /*0x69f46c*/
  return a1; /*0x69f473*/
}
