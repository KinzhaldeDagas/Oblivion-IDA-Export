_DWORD *__thiscall sub_4353D0(NiNode **this, TESObjectREFR *a2, void *a3)
{
  Ni2DBuffer **v4; // esi
  TESObjectREFRVtbl *vtbl; // ecx
  NiNode *v6; // eax
  int v7; // ecx
  _DWORD *result; // eax
  int v9; // edi
  float v10; // [esp+8h] [ebp-10h]

  v4 = (Ni2DBuffer **)a2->vtbl->GetBaseForm(a2); /*0x4353ec*/
  sub_528A10(v4, a2, a3, (Ni2DBuffer *)*(this + 9), (Ni2DBuffer *)*(this + 0xA)); /*0x4353f7*/
  if ( ((int (__thiscall *)(Ni2DBuffer **, int))(*v4)[0xE].members.data)(v4, 0x45) ) /*0x435408*/
  {
    v10 = (float)((int (__thiscall *)(Ni2DBuffer **, int))(*v4)[0xE].members.data)(v4, 0x45); /*0x435427*/
    sub_529530((float *)v4, v10); /*0x43542a*/
    vtbl = a2[1].vtbl; /*0x43542f*/
    if ( vtbl ) /*0x435434*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0xC7))(vtbl, 1); /*0x435440*/
  }
  if ( a2 != (TESObjectREFR *)reference ) /*0x435448*/
  {
    sub_481410(*(this + 9), (const char *)a2->member.super.refID); /*0x435452*/
    v6 = *(this + 0xA); /*0x435457*/
    if ( v6 ) /*0x43545f*/
      sub_481410(v6, (const char *)a2->member.super.refID); /*0x435466*/
  }
  v7 = (int)*(this + 0xA); /*0x43546e*/
  if ( v7 ) /*0x435473*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 0x50))(v7); /*0x43547a*/
  result = *(this + 0xA); /*0x43547c*/
  if ( result ) /*0x435481*/
    result[0x45] = a2; /*0x435483*/
  v9 = (int)*(this + 9); /*0x435489*/
  if ( v9 ) /*0x43548e*/
    *(_DWORD *)(v9 + 0x114) = a2; /*0x435490*/
  return result; /*0x435496*/
}
