TESForm *__thiscall Actor_GetActorBaseForm(Actor *this, char a2)
{
  TESForm *v2; // edi
  TESForm *v4; // eax
  TESForm *v5; // ebx
  bool v6; // zf
  TESForm *result; // eax

  v2 = 0; /*0x5e02e3*/
  if ( a2 ) /*0x5e02ec*/
    v2 = (TESForm *)((int (__thiscall *)(Actor *))this->vtbl->super.super.GetTemplateForm)(this); /*0x5e02f8*/
  v4 = this->vtbl->super.super.GetBaseForm(this); /*0x5e0304*/
  v5 = v4; /*0x5e0308*/
  if ( v2 ) /*0x5e030a*/
    return v2; /*0x5e030a*/
  if ( !v4 ) /*0x5e030e*/
    return v2; /*0x5e030e*/
  v6 = !this->vtbl->super.super.IsActor((TESObjectREFR *)this); /*0x5e031c*/
  result = v5; /*0x5e031e*/
  if ( v6 ) /*0x5e0320*/
    return v2; /*0x5e0322*/
  return result; /*0x5e0324*/
}
