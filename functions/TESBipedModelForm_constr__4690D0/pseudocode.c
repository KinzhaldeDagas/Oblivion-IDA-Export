_DWORD *__thiscall TESBipedModelForm_constr(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD); // edi
  void (__thiscall *v3)(_DWORD); // edx

  v2 = (void (__thiscall ***)(_DWORD))(this + 2);
  *this = &TESBipedModelForm::`vftable';
  ArrayConstructor(this + 2, 0x18u, 2, (int)TESModel::TESModel, (void (__thiscall *)(void *))TESModel::~TESModel);
  ArrayConstructor(this + 0xE, 0x18u, 2, (int)TESModel::TESModel, (void (__thiscall *)(void *))TESModel::~TESModel);
  ArrayConstructor(this + 0x1A, 0xCu, 2, (int)TESIcon_constr, j_TESTexture_destr);
  v3 = **v2;
  *((_WORD *)this + 2) = 0;
  *((_BYTE *)this + 6) = 0;
  v3(v2);
  (*(void (__thiscall **)(_DWORD *))*(this + 0xE))(this + 0xE);
  (*(void (__thiscall **)(_DWORD *))*(this + 0x1A))(this + 0x1A);
  (*(void (__thiscall **)(_DWORD *))*(this + 8))(this + 8);
  (*(void (__thiscall **)(_DWORD *))*(this + 0x14))(this + 0x14);
  (*(void (__thiscall **)(_DWORD *))*(this + 0x1D))(this + 0x1D);
  return this;
}
