void __thiscall Actor_GetBaseAVCalcFactors(int *this, int a2, float *a3, float *a4)
{
  int v5; // eax
  void *v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // eax
  void *v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // [esp-10h] [ebp-24h]
  float v14; // [esp+0h] [ebp-14h]
  _UNKNOWN *retaddr; // [esp+14h] [ebp+0h]
  int v16; // [esp+18h] [ebp+4h]

  *a3 = 0.0; /*0x5e2221*/
  *a4 = 1.0; /*0x5e222d*/
  if ( (unsigned int)(a2 - 8) > 3 ) /*0x5e222f*/
    JUMPOUT(0x5E2345); /*0x5e2345*/
  switch ( a2 ) /*0x5e2241*/
  {
    case 8: /*0x5e2241*/
      (*(void (__thiscall **)(int *, int))(*this + 0x284))(this, 5); /*0x5e2254*/
      v5 = (*(int (__thiscall **)(int *))(*this + 0x284))(this); /*0x5e2263*/
      Calc_ActorBaseHealth(v5, 0); /*0x5e2266*/
      retaddr = v6; /*0x5e226b*/
      *a3 = (float)(int)v6; /*0x5e2276*/
      break; /*0x5e227b*/
    case 9: /*0x5e2241*/
      v7 = ((double (__thiscall *)(int *, int))*(_DWORD *)(*this + 0x288))(this, 0x28); /*0x5e228a*/
      v8 = *this; /*0x5e2292*/
      *a4 = v7 / dbl_A3F3E8; /*0x5e2294*/
      v9 = (*(int (__thiscall **)(int *))(v8 + 0x284))(this); /*0x5e22b2*/
      Calc_ActorBaseMagicka(v9, COERCE_FLOAT(1)); /*0x5e22b5*/
      retaddr = v10; /*0x5e22ba*/
      *a3 = (float)(int)v10; /*0x5e22c5*/
      break; /*0x5e22ca*/
    case 0xA: /*0x5e2241*/
      v11 = (*(int (__thiscall **)(int *, int))(*this + 0x284))(this, 2); /*0x5e22d9*/
      (*(void (__thiscall **)(int *, int, int))(*this + 0x284))(this, 3, v11); /*0x5e22e8*/
      v13 = (*(int (__thiscall **)(int *))(*this + 0x284))(this); /*0x5e22f9*/
      v12 = (*(int (__thiscall **)(int *))(*this + 0x284))(this); /*0x5e2306*/
      *a3 = (float)Calc_ActorBaseFatigue(v12, 0, v13, 5); /*0x5e2319*/
      break; /*0x5e231e*/
    case 0xB: /*0x5e2241*/
      v16 = (*(int (__thiscall **)(int *, _DWORD))(*this + 0x284))(this, 0); /*0x5e232f*/
      v14 = (float)v16; /*0x5e2338*/
      *a3 = Calc_ActorBaseEncumbrance(v14); /*0x5e2340*/
      Actor_GetBaseAVCalcFactors_::Done(v16, (int)a3, (int)a4); /*0x5e2343*/
      break; /*0x5e2343*/
  }
}
