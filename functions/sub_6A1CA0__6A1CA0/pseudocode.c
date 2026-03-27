TESObjectREFR *__userpurge sub_6A1CA0@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        Data *a4,
        TESForm::ModReferenceList *a5,
        TESObjectCELL *(__thiscall *a6)(TESChildCELL *this),
        TESForm *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  sub_69F360(a1, a2, a3, a4, a5, a6, a7, *(float *)&a8, *(float *)&a9, *(float *)&a10, a11, a12, a13);
  a1->vtbl = (TESObjectREFRVtbl *)&MagicSprayProjectile::`vftable'{for `MagicSprayProjectile'};
  a1->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicSprayProjectile::`vftable'{for `TESChildCell'};
  sub_65B750((int *)a1);
  return a1;
}
