bhkCharacterController *__thiscall bhkCharacterController::bhkCharacterController(bhkCharacterController *this, int a2)
{
  int v3; // eax
  double v4; // st7
  int v5; // edx
  int v7; // [esp+0h] [ebp-5Ch]
  int v8; // [esp+4h] [ebp-58h]
  float v9; // [esp+4h] [ebp-58h]
  float v10; // [esp+24h] [ebp-38h]
  float v11; // [esp+24h] [ebp-38h]
  __int128 v12; // [esp+2Ch] [ebp-30h] BYREF
  int v13; // [esp+58h] [ebp-4h]

  bhkCharacterProxy::bhkCharacterProxy(this);
  v8 = *(_DWORD *)(a2 + 0x88);
  v7 = *(_DWORD *)(a2 + 0x90);
  v13 = 0;
  sub_88D310((_WORD *)this + 0xF0, v7, v8);
  v10 = *(float *)(a2 + 0x98) * *(float *)(a2 + 0x94);
  LOBYTE(v13) = 1;
  *(float *)&v12 = 0.0;
  *((float *)&v12 + 1) = 0.0;
  *((float *)&v12 + 2) = 1.0;
  *((float *)&v12 + 3) = 0.0;
  v9 = v10;
  v11 = flt_B2E77C * dbl_A968B0;
  sub_890130((float *)this + 0x7C, &v12, v11, v9);
  *(_DWORD *)this = &bhkCharacterController::`vftable'{for `bhkCharacterController'};
  *((_DWORD *)this + 0x78) = &bhkCharacterController::`vftable'{for `hkCharacterContext'};
  *((_DWORD *)this + 0x7C) = &bhkCharacterController::`vftable'{for `bhkCharacterListener'};
  *((_DWORD *)this + 0xD9) = 0;
  *((_DWORD *)this + 0xDA) = 0;
  LOBYTE(v13) = 4;
  ArrayConstructor(
    (char *)this + 0x374,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
  LOBYTE(v13) = 5;
  if ( !v3 )
    v3 = dword_BA7D9C;
  *((_DWORD *)this + 0xEF) = sub_8A7560(v3, 0xF0, 0x14);
  *((_DWORD *)this + 0xF1) = 5;
  v4 = fConstant_2;
  *((float *)this + 0xE8) = fConstant_2;
  *((_DWORD *)this + 0xEB) = 0;
  *((float *)this + 0xEA) = v4;
  *((_DWORD *)this + 0x7D) = 0;
  *((float *)this + 0xE9) = flt_A31C80;
  *((_OWORD *)this + 0x34) = 0;
  *((_OWORD *)this + 0x2F) = 0;
  *((float *)this + 0xC8) = 0.0;
  *((float *)this + 0xC9) = 0.0;
  *((float *)this + 0xC0) = 0.0;
  *((float *)this + 0xCB) = 0.0;
  LOBYTE(v13) = 6;
  *((float *)this + 0xCC) = 1.0;
  *((float *)this + 0xC3) = 0.0;
  *((float *)this + 0xC1) = 0.0;
  *((float *)this + 0xC2) = 0.0;
  *((float *)this + 0xC4) = 0.0;
  *((float *)this + 0xC5) = 0.0;
  *((float *)this + 0xCA) = 1.0;
  *((float *)this + 0xAC) = 0.0;
  *((float *)this + 0xAD) = 0.0;
  *((float *)this + 0xAF) = 0.0;
  *((float *)this + 0xAE) = 1.0;
  *((float *)this + 0xB0) = 1.0;
  *((float *)this + 0xB1) = 0.0;
  *((float *)this + 0xB2) = 0.0;
  *((float *)this + 0xB3) = 0.0;
  *((_DWORD *)this + 0xA8) = 0;
  *((_DWORD *)this + 0xDB) = 2;
  *((_DWORD *)this + 0xDC) = 2;
  *((_DWORD *)this + 0xEC) = 0;
  *((_DWORD *)this + 0xED) = 0;
  *((_DWORD *)this + 0xEE) = 0;
  *((_DWORD *)this + 0xF0) = 0;
  sub_897040((int)this, v5, a2);
  return this;
}
