_DWORD *__thiscall sub_4353D0(NiNode **this, TESObjectREFR *a2, void *a3)
{
  TESForm *v4; // esi
  TESObjectREFRVtbl *vtbl; // ecx
  NiNode *v6; // eax
  int v7; // ecx
  _DWORD *result; // eax
  int v9; // edi
  float v10; // [esp+8h] [ebp-10h]

  v4 = a2->vtbl->GetBaseForm(a2);
  sub_528A10(v4, a2, a3, *(this + 9), *(this + 0xA));
  if ( v4->vtbl[1].GetSaveSize(v4, 0x45) )
  {
    v10 = (float)(int)v4->vtbl[1].GetSaveSize(v4, 0x45);
    sub_529530((float *)v4, v10);
    vtbl = a2[1].vtbl;
    if ( vtbl )
      (*((void (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0xC7))(vtbl, 1);
  }
  if ( a2 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    sub_481410(*(this + 9), (const char *)a2->member.super.refID);
    v6 = *(this + 0xA);
    if ( v6 )
      sub_481410(v6, (const char *)a2->member.super.refID);
  }
  v7 = (int)*(this + 0xA);
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 0x50))(v7);
  result = *(this + 0xA);
  if ( result )
    result[0x45] = a2;
  v9 = (int)*(this + 9);
  if ( v9 )
    *(_DWORD *)(v9 + 0x114) = a2;
  return result;
}
