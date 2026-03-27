void __thiscall BirthSign::~BirthSign(BirthSign *this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ebx

  v2 = (_DWORD *)((char *)this + 0x24);
  v3 = (_DWORD *)((char *)this + 0x38);
  *(_DWORD *)this = &BirthSign::`vftable'{for `BirthSign'};
  *((_DWORD *)this + 6) = &BirthSign::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 9) = &BirthSign::`vftable'{for `TESTexture'};
  *((_DWORD *)this + 0xC) = &BirthSign::`vftable'{for `TESDescription'};
  *((_DWORD *)this + 0xE) = &BirthSign::`vftable'{for `TESSpellList'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESSpellList_destr_(v3);
  TESTexture_destr(v2);
  FormHeapFree(*((_DWORD *)this + 7));
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 0x11) = 0;
  *((_WORD *)this + 0x10) = 0;
  TESForm_destr((TESForm *)this);
}
