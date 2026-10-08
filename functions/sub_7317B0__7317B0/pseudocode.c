// Pass222/223: NiPropertyState default-slot initializer. Copies native default globals into slots 0,2..9; leaves fog slot 1/+0x0C null.
LONG __thiscall sub_7317B0(float *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  int v3; // edi
  float v4; // ebx
  int v5; // edi
  float v6; // ebx
  int v7; // edi
  float v8; // ebx
  int v9; // edi
  float v10; // ebx
  int v11; // edi
  float v12; // ebx
  int v13; // edi
  int v14; // ebx
  int v15; // edi
  int v16; // ebx
  int v17; // edi
  int v18; // ebx
  LONG result; // eax
  int v20; // edi
  int v21; // ebx

  v1 = InterlockedDecrement; /*0x7317b7*/
  v3 = *((_DWORD *)this + 2); /*0x7317c1*/
  v4 = MEMORY[0xB3F9B0][0xCD]; /*0x7317c6*/
  if ( v3 != LODWORD(MEMORY[0xB3F9B0][0xCD]) ) /*0x7317c8*/
  {
    if ( v3 ) /*0x7317cc*/
    {
      if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x7317d2*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7317e4*/
    }
    *(this + 2) = v4; /*0x7317e8*/
    if ( v4 != 0.0 ) /*0x7317eb*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v4) + 4)); /*0x7317f1*/
  }
  v5 = *((_DWORD *)this + 4);                   // Fog property propagation decode: default initializer skips this+3 / state+0x0C, proving no default fog property is installed in NiPropertyState. /*0x7317fc*/
  v6 = MEMORY[0xB3F9B0][0x3D]; /*0x731801*/
  if ( v5 != LODWORD(MEMORY[0xB3F9B0][0x3D]) ) /*0x731803*/
  {
    if ( v5 ) /*0x731807*/
    {
      if ( !v1((volatile LONG *)(v5 + 4)) ) /*0x73180d*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x73181f*/
    }
    *(this + 4) = v6; /*0x731823*/
    if ( v6 != 0.0 ) /*0x731826*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v6) + 4)); /*0x73182c*/
  }
  v7 = *((_DWORD *)this + 5); /*0x731837*/
  v8 = MEMORY[0xB3F9B0][0x20A]; /*0x73183c*/
  if ( v7 != LODWORD(MEMORY[0xB3F9B0][0x20A]) ) /*0x73183e*/
  {
    if ( v7 ) /*0x731842*/
    {
      if ( !v1((volatile LONG *)(v7 + 4)) ) /*0x731848*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x73185a*/
    }
    *(this + 5) = v8; /*0x73185e*/
    if ( v8 != 0.0 ) /*0x731861*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v8) + 4)); /*0x731867*/
  }
  v9 = *((_DWORD *)this + 6); /*0x731872*/
  v10 = MEMORY[0xB3F9B0][0x1FF]; /*0x731877*/
  if ( v9 != LODWORD(MEMORY[0xB3F9B0][0x1FF]) ) /*0x731879*/
  {
    if ( v9 ) /*0x73187d*/
    {
      if ( !v1((volatile LONG *)(v9 + 4)) ) /*0x731883*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x731895*/
    }
    *(this + 6) = v10; /*0x731899*/
    if ( v10 != 0.0 ) /*0x73189c*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v10) + 4)); /*0x7318a2*/
  }
  v11 = *((_DWORD *)this + 7); /*0x7318ad*/
  v12 = MEMORY[0xB3F9B0][0xD2]; /*0x7318b2*/
  if ( v11 != LODWORD(MEMORY[0xB3F9B0][0xD2]) ) /*0x7318b4*/
  {
    if ( v11 ) /*0x7318b8*/
    {
      if ( !v1((volatile LONG *)(v11 + 4)) ) /*0x7318be*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7318d0*/
    }
    *(this + 7) = v12; /*0x7318d4*/
    if ( v12 != 0.0 ) /*0x7318d7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v12) + 4)); /*0x7318dd*/
  }
  v13 = *((_DWORD *)this + 8); /*0x7318e8*/
  v14 = unk_B3F974; /*0x7318ed*/
  if ( v13 != unk_B3F974 ) /*0x7318ef*/
  {
    if ( v13 ) /*0x7318f3*/
    {
      if ( !v1((volatile LONG *)(v13 + 4)) ) /*0x7318f9*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x73190b*/
    }
    *((_DWORD *)this + 8) = v14; /*0x73190f*/
    if ( v14 ) /*0x731912*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x731918*/
  }
  v15 = *((_DWORD *)this + 9); /*0x731923*/
  v16 = unk_B3F980; /*0x731928*/
  if ( v15 != unk_B3F980 ) /*0x73192a*/
  {
    if ( v15 ) /*0x73192e*/
    {
      if ( !v1((volatile LONG *)(v15 + 4)) ) /*0x731934*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x731946*/
    }
    *((_DWORD *)this + 9) = v16; /*0x73194a*/
    if ( v16 ) /*0x73194d*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x731953*/
  }
  v17 = *((_DWORD *)this + 0xA); /*0x73195e*/
  v18 = unk_B3F984; /*0x731963*/
  if ( v17 != unk_B3F984 ) /*0x731965*/
  {
    if ( v17 ) /*0x731969*/
    {
      if ( !v1((volatile LONG *)(v17 + 4)) ) /*0x73196f*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x731981*/
    }
    *((_DWORD *)this + 0xA) = v18; /*0x731985*/
    if ( v18 ) /*0x731988*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x73198e*/
  }
  result = unk_B3F998; /*0x731994*/
  v20 = *((_DWORD *)this + 0xB); /*0x731999*/
  v21 = unk_B3F998; /*0x73199e*/
  if ( v20 != unk_B3F998 ) /*0x7319a0*/
  {
    if ( v20 ) /*0x7319a4*/
    {
      result = v1((volatile LONG *)(v20 + 4)); /*0x7319aa*/
      if ( !result ) /*0x7319ae*/
        result = (**(int (__thiscall ***)(int, int))v20)(v20, 1); /*0x7319bc*/
    }
    *((_DWORD *)this + 0xB) = v21; /*0x7319c0*/
    if ( v21 ) /*0x7319c3*/
      return InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x7319c9*/
  }
  return result; /*0x7319cf*/
}
