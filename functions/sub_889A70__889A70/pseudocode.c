void __thiscall sub_889A70(bhkWorld *this, int a2)
{
  __m128 *v3; // ebx
  int v4; // esi
  int v5; // ecx
  bool v6; // zf
  _WORD *v7; // eax
  UInt32 v8; // eax
  int v9; // esi
  _DWORD *v10; // eax
  _DWORD v11[11]; // [esp-4h] [ebp-2Ch] BYREF

  if ( a2 ) /*0x889a9c*/
  {
    v3 = (__m128 *)(a2 - 0xA0); /*0x889aa2*/
    if ( a2 != 0xA0 ) /*0x889aa8*/
    {
      v3[9].m128_i8[4] = 1; /*0x889aae*/
      v4 = (*(int (__thiscall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x889ac9*/
             unk_BA7D98,
             0x2C0,
             0x2C,
             v11[3],
             v11[4]);
      *(_WORD *)(v4 + 4) = 0x2C0; /*0x889acb*/
      v11[9] = v4; /*0x889ad1*/
      sub_89A230(v3, 0x7595); /*0x889ae5*/
      *(_DWORD *)v4 = &ahkWorld::`vftable'; /*0x889aed*/
      *(_DWORD *)(v4 + 0x2B0) = 0; /*0x889af3*/
      v6 = unk_BA7904 == 0; /*0x889afd*/
      v11[0xA] = 0xFFFFFFFF; /*0x889b04*/
      if ( !v6 ) /*0x889b08*/
      {
        v11[2] = 1; /*0x889b0a*/
        v11[1] = 0; /*0x889b0c*/
        v11[0] = v5; /*0x889b0e*/
        LOBYTE(v11[0]) = 1; /*0x889b11*/
        v7 = (_WORD *)unk_BA7904; /*0x889b14*/
        v11[7] = v11; /*0x889b19*/
        sub_89D340((_DWORD *)v4, v7, 1, 0, 1); /*0x889b20*/
      }
      this->__vftable[1].super.Destructor((NiRefObject *)this, v4); /*0x889b2d*/
      if ( *(_WORD *)(v4 + 4) ) /*0x889b2f*/
      {
        if ( !--*(_WORD *)(v4 + 6) ) /*0x889b3a*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x889b4b*/
      }
      this->__vftable[1].DumpAttributes(this, 0); /*0x889b59*/
      v8 = this->__vftable[1].Unk_03(this); /*0x889b62*/
      if ( v8 ) /*0x889b66*/
        sub_8BBC60(*(int **)(v8 + 0x7C)); /*0x889b6c*/
      v9 = unk_BA7A00; /*0x889b74*/
      if ( unk_BA7A00 ) /*0x889b74*/
      {
        v10 = (_DWORD *)this->__vftable[1].Unk_03(this); /*0x889b85*/
        if ( v10 ) /*0x889b89*/
          sub_899D60(v10, v9); /*0x889b8e*/
      }
    }
  }
}
