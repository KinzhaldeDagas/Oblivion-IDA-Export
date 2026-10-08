void __thiscall bhkCharacterController::~bhkCharacterController(bhkCharacterController *this)
{
  char *v2; // ebp
  _DWORD *v3; // ecx
  int HavokObject; // eax
  int v5; // eax
  int v6; // edi
  int *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  LONG (__stdcall *v11)(volatile LONG *); // ebp
  int v12; // edi

  v2 = (char *)this + 0x1F0; /*0x89306c*/
  *(_DWORD *)this = &bhkCharacterController::`vftable'{for `bhkCharacterController'}; /*0x893072*/
  *((_DWORD *)this + 0x78) = &bhkCharacterController::`vftable'{for `hkCharacterContext'}; /*0x893078*/
  *((_DWORD *)this + 0x7C) = &bhkCharacterController::`vftable'{for `bhkCharacterListener'}; /*0x893082*/
  v3 = *((_DWORD **)this + 2); /*0x893089*/
  *((_DWORD *)this + 0xF0) = 0; /*0x893096*/
  if ( v3 ) /*0x8930a0*/
    HavokObject = bhkCollisionWrapper_GetHavokObject(v3); /*0x8930a2*/
  else
    HavokObject = 0; /*0x8930a9*/
  v5 = *(_DWORD *)(HavokObject + 8); /*0x8930ab*/
  if ( v5 ) /*0x8930b0*/
    v6 = *(_DWORD *)(v5 + 0x2B0); /*0x8930b2*/
  else
    v6 = 0; /*0x8930ba*/
  if ( v6 ) /*0x8930be*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x58))(v6); /*0x8930c7*/
    v7 = *((int **)this + 2); /*0x8930c9*/
    if ( v7 ) /*0x8930ce*/
      sub_8ACAC0(v7, (int)v2); /*0x8930d1*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x58))(v6); /*0x8930dd*/
  }
  v8 = *((_DWORD *)this + 0xF1); /*0x8930df*/
  if ( v8 >= 0 ) /*0x8930ec*/
  {
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8930fe*/
    if ( !v9 ) /*0x893106*/
      v9 = unk_BA7D9C; /*0x893108*/
    sub_8A75D0(v9, *((_DWORD **)this + 0xEF), 0x30 * (v8 & 0x3FFFFFFF), 0x14); /*0x893123*/
  }
  _LN21((char *)this + 0x374, 4u, 2, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x89313d*/
  v10 = *((_DWORD *)this + 0xDA); /*0x893142*/
  v11 = InterlockedDecrement; /*0x89314a*/
  if ( v10 ) /*0x893155*/
  {
    if ( !v11((volatile LONG *)(v10 + 4)) ) /*0x89315b*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x89316d*/
  }
  v12 = *((_DWORD *)this + 0xD9); /*0x89316f*/
  if ( v12 ) /*0x89317c*/
  {
    if ( !v11((volatile LONG *)(v12 + 4)) ) /*0x893182*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x893194*/
  }
  *((_DWORD *)this + 0x7C) = &hkCharacterProxyListener::`vftable'; /*0x89319c*/
  sub_88D340((_DWORD *)this + 0x78); /*0x8931ab*/
  bhkCharacterProxy::~bhkCharacterProxy((bhkSerializable *)this); /*0x8931ba*/
}
