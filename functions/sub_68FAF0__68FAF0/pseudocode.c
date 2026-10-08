_DWORD *__thiscall sub_68FAF0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // edi
  _DWORD *v6; // ebp
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // ecx

  v5 = this + 1; /*0x68fb1a*/
  *(this + 1) = &hkEntityListener::`vftable'; /*0x68fb25*/
  v6 = this + 2; /*0x68fb2b*/
  *(this + 2) = &hkEntityActivationListener::`vftable'; /*0x68fb2e*/
  *this = &bhkTelekinesisListener::`vftable'{for `bhkTelekinesisListener'}; /*0x68fb3d*/
  *(this + 1) = &bhkTelekinesisListener::`vftable'{for `hkEntityListener'}; /*0x68fb43*/
  *(this + 2) = &bhkTelekinesisListener::`vftable'{for `hkEntityActivationListener'}; /*0x68fb49*/
  *(this + 5) = 0; /*0x68fb50*/
  *(this + 3) = a2; /*0x68fb57*/
  *(this + 4) = a3; /*0x68fb65*/
  *(this + 5) = a4; /*0x68fb68*/
  *((_BYTE *)this + 0x18) = 0; /*0x68fb6b*/
  if ( a3 ) /*0x68fb6f*/
  {
    v7 = *(_DWORD **)(a3 + 8); /*0x68fb71*/
    if ( v7 ) /*0x68fb76*/
      sub_8A6630(v7, (int)this); /*0x68fb7b*/
  }
  v8 = *(this + 4); /*0x68fb80*/
  if ( v8 ) /*0x68fb85*/
  {
    v9 = *(_DWORD **)(v8 + 8); /*0x68fb87*/
    if ( v9 ) /*0x68fb8c*/
      sub_8A6550(v9, (int)v5); /*0x68fb91*/
  }
  v10 = *(this + 4); /*0x68fb96*/
  if ( v10 ) /*0x68fb9b*/
  {
    v11 = *(_DWORD **)(v10 + 8); /*0x68fb9d*/
    if ( v11 ) /*0x68fba2*/
      sub_8A65C0(v11, (int)v6); /*0x68fba5*/
  }
  return this; /*0x68fbac*/
}
