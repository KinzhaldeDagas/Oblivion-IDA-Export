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

  bhkCharacterProxy::bhkCharacterProxy(this);   // bhkCharacterController constructor: initializes default capsule radius/height and cached contact storage before InitFromCinfo builds authoritative geometry. /*0x897270*/
  v8 = *(_DWORD *)(a2 + 0x88); /*0x897281*/
  v7 = *(_DWORD *)(a2 + 0x90); /*0x89728a*/
  v13 = 0; /*0x89728b*/
  hkCharacterContext_Init((_WORD *)this + 0xF0, v7, v8); /*0x89728f*/
  v10 = *(float *)(a2 + 0x98) * *(float *)(a2 + 0x94); /*0x8972ad*/
  LOBYTE(v13) = 1; /*0x8972b1*/
  *(float *)&v12 = 0.0; /*0x8972b8*/
  *((float *)&v12 + 1) = 0.0; /*0x8972bc*/
  *((float *)&v12 + 2) = 1.0; /*0x8972c2*/
  *((float *)&v12 + 3) = 0.0; /*0x8972c6*/
  v9 = v10; /*0x8972ce*/
  v11 = flt_B2E77C * dbl_A968B0; /*0x8972de*/
  sub_890130((float *)this + 0x7C, &v12, v11, v9); /*0x8972ea*/
  *(_DWORD *)this = &bhkCharacterController::`vftable'{for `bhkCharacterController'}; /*0x8972ef*/
  *((_DWORD *)this + 0x78) = &bhkCharacterController::`vftable'{for `hkCharacterContext'}; /*0x8972f5*/
  *((_DWORD *)this + 0x7C) = &bhkCharacterController::`vftable'{for `bhkCharacterListener'}; /*0x8972ff*/
  *((_DWORD *)this + 0xD9) = 0; /*0x897309*/
  *((_DWORD *)this + 0xDA) = 0; /*0x89730f*/
  LOBYTE(v13) = 4; /*0x89732a*/
  ArrayConstructor( /*0x89732f*/
    (char *)this + 0x374,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x897343*/
  LOBYTE(v13) = 5; /*0x89734b*/
  if ( !v3 ) /*0x897350*/
    v3 = unk_BA7D9C; /*0x897352*/
  *((_DWORD *)this + 0xEF) = sub_8A7560(v3, 0xF0, 0x14);// TES4 authoritative: allocate cached character contact array, 5 entries * 0x30 bytes. Exposed on proxy at +0x3BC (dword index 0xEF). /*0x897365*/
  *((_DWORD *)this + 0xF1) = 5;                 // TES4 authoritative: cached contact capacity = 5 entries; capacity word is proxy +0x3C4 (dword index 0xF1). /*0x897370*/
  v4 = fConstant_2; /*0x897376*/
  *((float *)this + 0xE8) = fConstant_2;        // Controller constructor default radius proxy+0x3A0 = 2.0 Havok units until construction info builds the actual shape. /*0x89737c*/
  *((_DWORD *)this + 0xEB) = 0; /*0x897382*/
  *((float *)this + 0xEA) = v4; /*0x897388*/
  *((_DWORD *)this + 0x7D) = 0; /*0x89738e*/
  *((float *)this + 0xE9) = flt_A31C80;         // Controller constructor default capsule height proxy+0x3A4 = 10.0 Havok units until construction info builds the actual shape. /*0x89739d*/
  *((_OWORD *)this + 0x34) = 0; /*0x8973a3*/
  *((_OWORD *)this + 0x2F) = 0; /*0x8973ac*/
  *((float *)this + 0xC8) = 0.0; /*0x8973b3*/
  *((float *)this + 0xC9) = 0.0; /*0x8973be*/
  *((float *)this + 0xC0) = 0.0; /*0x8973c5*/
  *((float *)this + 0xCB) = 0.0; /*0x8973cd*/
  LOBYTE(v13) = 6; /*0x8973d3*/
  *((float *)this + 0xCC) = 1.0; /*0x8973da*/
  *((float *)this + 0xC3) = 0.0; /*0x8973e2*/
  *((float *)this + 0xC1) = 0.0; /*0x8973e8*/
  *((float *)this + 0xC2) = 0.0; /*0x8973ee*/
  *((float *)this + 0xC4) = 0.0; /*0x8973f4*/
  *((float *)this + 0xC5) = 0.0; /*0x8973fa*/
  *((float *)this + 0xCA) = 1.0; /*0x897402*/
  *((float *)this + 0xAC) = 0.0;                // Constructor initializes proxy+0x2B0 support/up basis vector to (0,0,1,0). State solvers use this as one of their ordinary basis inputs. /*0x89740a*/
  *((float *)this + 0xAD) = 0.0; /*0x897410*/
  *((float *)this + 0xAF) = 0.0; /*0x897416*/
  *((float *)this + 0xAE) = 1.0; /*0x89741e*/
  *((float *)this + 0xB0) = 1.0;                // Constructor initializes proxy+0x2C0 lateral/forward basis vector to (1,0,0,0). 0x896000 refreshes this movement basis before state dispatch. /*0x897424*/
  *((float *)this + 0xB1) = 0.0; /*0x89742a*/
  *((float *)this + 0xB2) = 0.0; /*0x897430*/
  *((float *)this + 0xB3) = 0.0; /*0x897436*/
  *((_DWORD *)this + 0xA8) = 0; /*0x89743c*/
  *((_DWORD *)this + 0xDB) = 2; /*0x897442*/
  *((_DWORD *)this + 0xDC) = 2; /*0x897448*/
  *((_DWORD *)this + 0xEC) = 0; /*0x89744e*/
  *((_DWORD *)this + 0xED) = 0; /*0x897454*/
  *((_DWORD *)this + 0xEE) = 0; /*0x89745a*/
  *((_DWORD *)this + 0xF0) = 0;                 // TES4 authoritative: cached contact count initialized to 0 at proxy +0x3C0 (dword index 0xF0). /*0x897460*/
  bhkCharacterController_InitFromCinfo((int)this, v5, a2); /*0x897466*/
  return this; /*0x89746d*/
}
