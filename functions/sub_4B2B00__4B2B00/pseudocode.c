// Verified: chooses reference-specific model path if available, otherwise the form model path, then appends scale percent (GetScale()*100) to create the per-reference model-loader key.
int __thiscall TESBoundObject_BuildReferenceModelPath(TESBoundObject *this, TESObjectREFR *reference, char *outPath)
{
  const char *FormModelPAth; // esi
  float v6; // [esp+Ch] [ebp-4h]

  FormModelPAth = (const char *)sub_4693E0(this, reference); /*0x4b2b11*/
  if ( !FormModelPAth ) /*0x4b2b18*/
    FormModelPAth = GetFormModelPAth(this); /*0x4b2b23*/
  v6 = ((double (__thiscall *)(TESObjectREFR *))reference->vtbl->GetScale)(reference) * fCostant_100; /*0x4b2b37*/
  return _sprintf(outPath, "%s%i", FormModelPAth, (int)v6); /*0x4b2b5b*/
}
