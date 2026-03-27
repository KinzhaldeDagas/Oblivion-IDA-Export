void __thiscall sub_521E40(_DWORD *this)
{
  bool v2; // zf
  _DWORD *v3; // eax
  int *v4; // eax
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // [esp-4h] [ebp-Ch]

  v2 = (*(int (__thiscall **)(_DWORD *, int))(*this + 0x128))(this, 0x45) == 0;
  v3 = this + 0x5A;
  if ( v2 )
    v3 = this + 0x42;
  v7 = (int)v3;
  v4 = (int *)sub_5538D0();
  sub_5528F0(v4, v7);
  v2 = (*(int (__thiscall **)(_DWORD *, int))(*this + 0x128))(this, 0x45) == 0;
  v5 = this + 0x5A;
  if ( v2 )
    v5 = this + 0x42;
  sub_552880(v5);
  v6 = *(this + 0x77);
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *(this + 0x77) = 0;
  }
}
