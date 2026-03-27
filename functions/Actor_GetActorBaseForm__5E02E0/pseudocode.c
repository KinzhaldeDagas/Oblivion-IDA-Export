TESForm *__thiscall Actor_GetActorBaseForm(Actor *this, char a2)
{
  TESForm *v2; // edi
  TESForm *v4; // eax
  TESForm *v5; // ebx
  bool v6; // zf
  TESForm *result; // eax

  v2 = 0;
  if ( a2 )
    v2 = (TESForm *)((int (__thiscall *)(Actor *))this->vtbl->super.super.GetTemplateForm)(this);
  v4 = this->vtbl->super.super.GetBaseForm(this);
  v5 = v4;
  if ( v2 )
    return v2;
  if ( !v4 )
    return v2;
  v6 = !this->vtbl->super.super.IsActor((TESObjectREFR *)this);
  result = v5;
  if ( v6 )
    return v2;
  return result;
}
