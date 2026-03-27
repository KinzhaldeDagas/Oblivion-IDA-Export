char __usercall IngredAlch_MagicItem_SaveBases@<al>(char *this@<ecx>, int a2@<edi>)
{
  size_t v4; // [esp-4h] [ebp-8h]

  TESModel_Save((int)(this + 0x1C), 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESTexture_Save((int)(this + 0x34), 0x4E4F4349);
  TESScriptableForm_Save((_DWORD *)this + 0x10);
  LODWORD(v4) = 0;
  return TESForm_SaveGenericComponents((TESForm *)(this + 0xFFFFFFDC), a2, 0, v4);
}
