void __thiscall TESSkill::~TESSkill(TESForm *this)
{
  TESForm *v2; // edi

  v2 = (TESForm *)((char *)this + 0x20);
  this->vtbl = (TESFormVtbl *)&TESSkill::`vftable'{for `TESSkill'};
  *((_DWORD *)this + 6) = &TESSkill::`vftable'{for `TESDescription'};
  *((_DWORD *)this + 8) = &TESSkill::`vftable'{for `TESTexture'};
  j_TESForm_ClearComponentReferences(this);
  TESTexture_destr(v2);
  TESForm_destr(this);
}
