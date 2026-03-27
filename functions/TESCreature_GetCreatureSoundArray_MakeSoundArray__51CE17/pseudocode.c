// positive sp value has been detected, the output may be wrong!
int __usercall TESCreature_GetCreatureSoundArray_::MakeSoundArray@<eax>(_DWORD *a1@<esi>)
{
  void (__thiscall *v1)(_DWORD *, int); // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  v1 = *(void (__thiscall **)(_DWORD *, int))(a1[9] + 0x50);
  a1[0xA] |= 0x100u;
  v1(a1 + 9, 0x10);
  v2 = (_DWORD *)FormHeapAlloc(0x28u);
  if ( v2 )
    v3 = CreatureSoundArray_constr(v2);
  else
    v3 = 0;
  a1[0x40] = v3;
  return a1[0x40];
}
