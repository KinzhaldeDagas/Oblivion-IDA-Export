int __thiscall sub_4B2B00(void *this, TESObjectREFR *a2, char *a3)
{
  const char *FormModelPAth; // esi
  float v7; // [esp+Ch] [ebp-4h]

  FormModelPAth = (const char *)sub_4693E0(this, a2);
  if ( !FormModelPAth )
    FormModelPAth = GetFormModelPAth(this);
  v7 = ((double (__thiscall *)(TESObjectREFR *))a2->vtbl->GetScale)(a2) * fCostant_100;
  return _sprintf(a3, "%s%i", FormModelPAth, (int)v7);
}
