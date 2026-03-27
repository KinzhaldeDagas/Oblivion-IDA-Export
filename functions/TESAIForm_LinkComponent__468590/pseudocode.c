void __thiscall TESAIForm_LinkComponent(int *this, TESForm *a2)
{
  if ( !bFixAIOnLoad )
    TESAIForm_LinkPackageList(this + 4, a2);
}
