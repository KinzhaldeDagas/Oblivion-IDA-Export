// Load persistent NiTimeController state: flags +0x08, frequency/phase/key bounds, and target/next links. Legacy migration clears flag bit 0x20 before stream version 0x0A01006D. Runtime time caches and update bytes are constructor state, not serialized.
__int16 __thiscall NiTimeController_LoadBinary(NiRenderer *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, NiAccumulator **, int, signed int *, int); // edx
  NiAccumulator **p_accumulator; // ebx
  void (__cdecl *v6)(int, NiPropertyState **, int, signed int *, int); // eax
  void (__cdecl *v7)(int, NiDynamicEffectState **, int, signed int *, int); // eax
  void (__cdecl *v8)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, UInt32 *, int, signed int *, int); // edx
  __int16 result; // ax
  int v11; // [esp-50h] [ebp-60h]
  int v12; // [esp-3Ch] [ebp-4Ch]
  int v13; // [esp-28h] [ebp-38h]
  int v14; // [esp-14h] [ebp-24h]
  int v15; // [esp-14h] [ebp-24h]

  v2 = a2; /*0x715f43*/
  sub_7008A0(this, a2); /*0x715f4b*/
  sub_712A20((unsigned int *)v2); /*0x715f52*/
  v4 = *(void (__cdecl **)(int, NiAccumulator **, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x715f5d*/
  p_accumulator = &this->members.accumulator; /*0x715f69*/
  v14 = *(_DWORD *)(v2 + 0x21C); /*0x715f6d*/
  a2 = 2; /*0x715f6e*/
  v4(v14, &this->members.accumulator, 2, &a2, 1); /*0x715f76*/
  v13 = *(_DWORD *)(v2 + 0x21C); /*0x715f8f*/
  v6 = *(void (__cdecl **)(int, NiPropertyState **, int, signed int *, int))(v13 + 4); /*0x715f90*/
  a2 = 4; /*0x715f93*/
  v6(v13, &this->members.propertyState, 4, &a2, 1); /*0x715f97*/
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x715fab*/
  v7 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, signed int *, int))(v12 + 4); /*0x715fac*/
  a2 = 4; /*0x715faf*/
  v7(v12, &this->members.dynamicEffectState, 4, &a2, 1); /*0x715fb3*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x715fc7*/
  v8 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v11 + 4); /*0x715fc8*/
  a2 = 4; /*0x715fcb*/
  v8(v11, this->members.pad014, 4, &a2, 1); /*0x715fcf*/
  v9 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x715fd7*/
  v15 = *(_DWORD *)(v2 + 0x21C); /*0x715fe9*/
  a2 = 4; /*0x715fea*/
  v9(v15, &this->members.pad014[1], 4, &a2, 1); /*0x715fee*/
  result = sub_712A20((unsigned int *)v2); /*0x715ff5*/
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA000101u ) /*0x716004*/
  {
    result = *(_WORD *)p_accumulator & 0xF | (2 * (*(_WORD *)p_accumulator & 0xFFF0)); /*0x716016*/
    *(_WORD *)p_accumulator = result; /*0x716018*/
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA000103u ) /*0x716025*/
  {
    result = *(_WORD *)p_accumulator; /*0x716027*/
    *(_WORD *)(v2 + 0x25A) = *(_WORD *)p_accumulator; /*0x71602a*/
    *(_WORD *)p_accumulator &= 0x1Fu; /*0x716031*/
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA01006Du ) /*0x71603f*/
    *(_WORD *)p_accumulator &= ~0x20u; /*0x716041*/
  return result; /*0x716046*/
}
