// positive sp value has been detected, the output may be wrong!
int __usercall TESCreature_GetCreatureSoundArray_::MakeSoundArray@<eax>(_DWORD *a1@<esi>)
{
  void (__thiscall *v1)(_DWORD *, int); // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  v1 = *(void (__thiscall **)(_DWORD *, int))(a1[9] + 0x50); /*0x51ce1a*/
  a1[0xA] |= 0x100u; /*0x51ce1d*/
  v1(a1 + 9, 0x10); /*0x51ce29*/
  v2 = (_DWORD *)FormHeapAlloc(0x28u); /*0x51ce2d*/
  if ( v2 ) /*0x51ce43*/
    v3 = CreatureSoundArray_constr(v2); /*0x51ce47*/
  else
    v3 = 0; /*0x51ce4e*/
  a1[0x40] = v3; /*0x51ce50*/
  return a1[0x40]; /*0x51ce6c*/
}
