char *__thiscall TESBipedModelForm_constr(char *this)
{
  void (__thiscall ***v2)(_DWORD); // edi
  void (__thiscall *v3)(_DWORD); // edx

  v2 = (void (__thiscall ***)(_DWORD))(this + 8); /*0x469109*/
  *(_DWORD *)this = &TESBipedModelForm::`vftable'; /*0x46910d*/
  ArrayConstructor( /*0x469113*/
    this + 8,
    0x18u,
    2,
    (void (__thiscall *)(char *))TESModel::TESModel,
    (void (__thiscall *)(void *))TESModel::~TESModel);
  ArrayConstructor( /*0x469132*/
    this + 0x38,
    0x18u,
    2,
    (void (__thiscall *)(char *))TESModel::TESModel,
    (void (__thiscall *)(void *))TESModel::~TESModel);
  ArrayConstructor( /*0x46914e*/
    this + 0x68,
    0xCu,
    2,
    (void (__thiscall *)(char *))TESIcon_constr,
    (void (__thiscall *)(void *))j_TESTexture_destr);
  v3 = **v2; /*0x469155*/
  *((_WORD *)this + 2) = 0; /*0x46915e*/
  *(this + 6) = 0; /*0x469164*/
  v3(v2); /*0x469168*/
  (**((void (__thiscall ***)(_DWORD *))this + 0xE))((_DWORD *)this + 0xE); /*0x469171*/
  (**((void (__thiscall ***)(_DWORD *))this + 0x1A))((_DWORD *)this + 0x1A); /*0x469179*/
  (**((void (__thiscall ***)(_DWORD *))this + 8))((_DWORD *)this + 8); /*0x469183*/
  (**((void (__thiscall ***)(_DWORD *))this + 0x14))((_DWORD *)this + 0x14); /*0x46918d*/
  (**((void (__thiscall ***)(_DWORD *))this + 0x1D))((_DWORD *)this + 0x1D); /*0x469197*/
  return this; /*0x46919b*/
}
