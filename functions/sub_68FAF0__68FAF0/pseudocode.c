_DWORD *__thiscall sub_68FAF0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // edi
  _DWORD *v6; // ebp
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // ecx

  v5 = this + 1;
  *(this + 1) = &hkEntityListener::`vftable';
  v6 = this + 2;
  *(this + 2) = &hkEntityActivationListener::`vftable';
  *this = &bhkTelekinesisListener::`vftable'{for `bhkTelekinesisListener'};
  *(this + 1) = &bhkTelekinesisListener::`vftable'{for `hkEntityListener'};
  *(this + 2) = &bhkTelekinesisListener::`vftable'{for `hkEntityActivationListener'};
  *(this + 5) = 0;
  *(this + 3) = a2;
  *(this + 4) = a3;
  *(this + 5) = a4;
  *((_BYTE *)this + 0x18) = 0;
  if ( a3 )
  {
    v7 = *(_DWORD **)(a3 + 8);
    if ( v7 )
      sub_8A6630(v7, (int)this);
  }
  v8 = *(this + 4);
  if ( v8 )
  {
    v9 = *(_DWORD **)(v8 + 8);
    if ( v9 )
      sub_8A6550(v9, (int)v5);
  }
  v10 = *(this + 4);
  if ( v10 )
  {
    v11 = *(_DWORD **)(v10 + 8);
    if ( v11 )
      sub_8A65C0(v11, (int)v6);
  }
  return this;
}
