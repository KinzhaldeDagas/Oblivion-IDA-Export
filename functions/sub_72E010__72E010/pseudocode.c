void __thiscall sub_72E010(NiRenderer *this, signed int a2)
{
  int v3; // eax
  void (__cdecl *v4)(int, NiAccumulator **, int, _DWORD *, int); // edx
  int *p_accumulator; // edi
  int v6; // ebp
  unsigned int v7; // ecx
  int *v8; // eax
  int v9; // ebx
  unsigned int v10; // ebx
  bool v11; // zf
  int v12; // ebp
  _DWORD v13[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v14; // [esp+24h] [ebp-4h]

  sub_7008A0(this, a2);
  v3 = *(_DWORD *)(a2 + 0x21C);
  v4 = *(void (__cdecl **)(int, NiAccumulator **, int, _DWORD *, int))(v3 + 4);
  p_accumulator = (int *)&this->members.accumulator;
  v13[0] = 4;
  v4(v3, &this->members.accumulator, 4, v13, 1);
  v6 = *p_accumulator;
  v7 = (0x2C * (unsigned __int64)(unsigned int)*p_accumulator) >> 0x20 != 0 ? 0xFFFFFFFF : 0x2C * *p_accumulator;
  v8 = (int *)FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
  v13[1] = v8;
  v9 = 0;
  v14 = 0;
  if ( v8 )
  {
    v9 = (int)(v8 + 1);
    *v8 = v6;
    ArrayConstructor(v8 + 1, 0x2Cu, v6, (int)sub_72C420, (void (__thiscall *)(void *))sub_72C450);
  }
  this->members.propertyState = (NiPropertyState *)v9;
  v10 = 0;
  v11 = *p_accumulator == 0;
  v14 = 0xFFFFFFFF;
  if ( !v11 )
  {
    v12 = 0;
    do
    {
      sub_72D860((unsigned __int16 *)((char *)this->members.propertyState + v12), a2);
      ++v10;
      v12 += 0x2C;
    }
    while ( v10 < *p_accumulator );
  }
}
