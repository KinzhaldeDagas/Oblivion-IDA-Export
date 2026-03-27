void __thiscall bhkCharacterController::~bhkCharacterController(bhkCharacterController *this)
{
  char *v2; // ebp
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  LONG (__stdcall *v11)(volatile LONG *); // ebp
  int v12; // edi

  v2 = (char *)this + 0x1F0;
  *(_DWORD *)this = &bhkCharacterController::`vftable'{for `bhkCharacterController'};
  *((_DWORD *)this + 0x78) = &bhkCharacterController::`vftable'{for `hkCharacterContext'};
  *((_DWORD *)this + 0x7C) = &bhkCharacterController::`vftable'{for `bhkCharacterListener'};
  v3 = *((_DWORD **)this + 2);
  *((_DWORD *)this + 0xF0) = 0;
  if ( v3 )
    v4 = sub_8AC0C0(v3);
  else
    v4 = 0;
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 0x2B0);
  else
    v6 = 0;
  if ( v6 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x58))(v6);
    v7 = *((_DWORD **)this + 2);
    if ( v7 )
      sub_8ACAC0(v7, (int)v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x58))(v6);
  }
  v8 = *((_DWORD *)this + 0xF1);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, *((_DWORD **)this + 0xEF), 0x30 * (v8 & 0x3FFFFFFF), 0x14);
  }
  _LN21((char *)this + 0x374, 4u, 2, (void (__thiscall *)(void *))sub_7016A0);
  v10 = *((_DWORD *)this + 0xDA);
  v11 = InterlockedDecrement;
  if ( v10 )
  {
    if ( !v11((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v12 = *((_DWORD *)this + 0xD9);
  if ( v12 )
  {
    if ( !v11((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
  }
  *((_DWORD *)this + 0x7C) = &hkCharacterProxyListener::`vftable';
  sub_88D340((_DWORD *)this + 0x78);
  bhkCharacterProxy::~bhkCharacterProxy(this);
}
