void __thiscall sub_72E010(NiRenderer *this, signed int a2)
{
  int v3; // eax
  void (__cdecl *v4)(int, NiAccumulator **, int, _DWORD *, int); // edx
  NiAccumulator **p_accumulator; // edi
  int v6; // ebp
  unsigned int v7; // ecx
  int v8; // eax
  NiPropertyState *v9; // ebx
  unsigned int v10; // ebx
  bool v11; // zf
  int v12; // ebp
  _DWORD v13[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v14; // [esp+24h] [ebp-4h]

  sub_7008A0(this, a2); /*0x72e03e*/
  v3 = *(_DWORD *)(a2 + 0x21C); /*0x72e043*/
  v4 = *(void (__cdecl **)(int, NiAccumulator **, int, _DWORD *, int))(v3 + 4); /*0x72e049*/
  p_accumulator = &this->members.accumulator; /*0x72e055*/
  v13[0] = 4; /*0x72e05a*/
  v4(v3, &this->members.accumulator, 4, v13, 1); /*0x72e062*/
  v6 = (int)*p_accumulator; /*0x72e064*/
  v7 = (0x2C * (unsigned __int64)(unsigned int)*p_accumulator) >> 0x20 != 0 ? 0xFFFFFFFF : 0x2C * (_DWORD)*p_accumulator;
  v8 = FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
  v13[1] = v8; /*0x72e08d*/
  v9 = 0; /*0x72e091*/
  v14 = 0; /*0x72e095*/
  if ( v8 ) /*0x72e099*/
  {
    v9 = (NiPropertyState *)(v8 + 4); /*0x72e0a6*/
    *(_DWORD *)v8 = v6; /*0x72e0ac*/
    ArrayConstructor( /*0x72e0ae*/
      (char *)(v8 + 4),
      0x2Cu,
      v6,
      (void (__thiscall *)(char *))sub_72C420,
      (void (__thiscall *)(void *))sub_72C450);
  }
  this->members.propertyState = v9; /*0x72e0b3*/
  v10 = 0; /*0x72e0b6*/
  v11 = *p_accumulator == 0; /*0x72e0b8*/
  v14 = 0xFFFFFFFF; /*0x72e0ba*/
  if ( !v11 ) /*0x72e0c2*/
  {
    v12 = 0; /*0x72e0c4*/
    do /*0x72e0dd*/
    {
      sub_72D860((unsigned __int16 *)((char *)this->members.propertyState + v12), a2); /*0x72e0d0*/
      ++v10; /*0x72e0d5*/
      v12 += 0x2C; /*0x72e0d8*/
    }
    while ( v10 < (unsigned int)*p_accumulator ); /*0x72e0dd*/
  }
}
