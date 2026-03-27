TESSkill *__thiscall TESSkill::TESSkill(TESSkill *this)
{
  _DWORD *v2; // edi
  int i; // ebx

  TESForm_constr((TESForm *)this);
  TESDescription_constr((_DWORD *)this + 6);
  TESTexture_constr((TESTexture *)((char *)this + 0x20));
  *((_DWORD *)this + 6) = &TESSkill::`vftable'{for `TESDescription'};
  *((_DWORD *)this + 8) = &TESSkill::`vftable'{for `TESTexture'};
  *(_DWORD *)this = &TESSkill::`vftable'{for `TESSkill'};
  v2 = (_DWORD *)((char *)this + 0x40);
  for ( i = 3; i >= 0; --i )
  {
    TESDescription_constr(v2);
    v2 += 2;
  }
  *((_BYTE *)this + 4) = 0xB;
  TESSkill_ClearTESSkill((char *)this);
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
