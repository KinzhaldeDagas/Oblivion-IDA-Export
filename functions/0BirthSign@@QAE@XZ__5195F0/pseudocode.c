BirthSign *__thiscall BirthSign::BirthSign(BirthSign *this)
{
  TESForm_constr((TESForm *)this);
  *((_DWORD *)this + 6) = &TESFullName::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 0x10) = 0;
  *((_WORD *)this + 0x11) = 0;
  TESTexture_constr((TESTexture *)this + 3);
  TESDescription_constr((_DWORD *)this + 0xC);
  TESSpellList_constr((_DWORD *)this + 0xE);
  *(_DWORD *)this = &BirthSign::`vftable'{for `BirthSign'};
  *((_DWORD *)this + 6) = &BirthSign::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 9) = &BirthSign::`vftable'{for `TESTexture'};
  *((_DWORD *)this + 0xC) = &BirthSign::`vftable'{for `TESDescription'};
  *((_DWORD *)this + 0xE) = &BirthSign::`vftable'{for `TESSpellList'};
  *((_BYTE *)this + 4) = 0x11;
  TESForm_SetIsLinked((TESForm *)this, 1);
  return this;
}
