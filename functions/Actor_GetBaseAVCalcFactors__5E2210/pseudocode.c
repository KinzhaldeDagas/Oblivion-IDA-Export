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

  *a3 = 0.0;
  *a4 = 1.0;
  if ( (unsigned int)(a2 - 8) > 3 )
    JUMPOUT(0x5E2345);
  switch ( a2 )
  {
    case 8:
      (*(void (__thiscall **)(int *, int))(*this + 0x284))(this, 5);
      v5 = (*(int (__thiscall **)(int *))(*this + 0x284))(this);
      Calc_ActorBaseHealth(v5, 0);
      retaddr = v6;
      *a3 = (float)(int)v6;
      break;
    case 9:
      v7 = ((double (__thiscall *)(int *, int))*(_DWORD *)(*this + 0x288))(this, 0x28);
      v8 = *this;
      *a4 = v7 / dbl_A3F3E8;
      v9 = (*(int (__thiscall **)(int *))(v8 + 0x284))(this);
      Calc_ActorBaseMagicka(v9, COERCE_FLOAT(1));
      retaddr = v10;
      *a3 = (float)(int)v10;
      break;
    case 0xA:
      v11 = (*(int (__thiscall **)(int *, int))(*this + 0x284))(this, 2);
      (*(void (__thiscall **)(int *, int, int))(*this + 0x284))(this, 3, v11);
      v13 = (*(int (__thiscall **)(int *))(*this + 0x284))(this);
      v12 = (*(int (__thiscall **)(int *))(*this + 0x284))(this);
      *a3 = (float)Calc_ActorBaseFatigue(v12, 0, v13, 5);
      break;
    case 0xB:
      v16 = (*(int (__thiscall **)(int *, _DWORD))(*this + 0x284))(this, 0);
      v14 = (float)v16;
      *a3 = Calc_ActorBaseEncumbrance(v14);
      Actor_GetBaseAVCalcFactors_::Done(v16, a3, a4);
      break;
  }
}
