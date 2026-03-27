int __thiscall sub_401750(_BYTE *this)
{
  bool v2; // zf
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ebp
  bool v8; // cc
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *i; // edi
  void (__thiscall *v12)(_BYTE *, int); // edx
  int (__thiscall *v13)(_BYTE *, int); // edx
  int result; // eax
  int v15; // [esp-4h] [ebp-10h]
  int v16; // [esp-4h] [ebp-10h]

  v2 = *(this + 0x16C) == 0;
  *(this + 0x16D) = 1;
  if ( v2 )
    sub_4027A0();
  v3 = *((_DWORD *)this + 0x17);
  while ( v3 )
  {
    v4 = v3;
    v3 = *(_DWORD *)(v3 + 0x140);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x18))(this, v4);
  }
  v5 = *((_DWORD *)this + 0x18);
  *((_DWORD *)this + 0x17) = 0;
  while ( v5 )
  {
    v6 = v5;
    v5 = *(_DWORD *)(v5 + 0x208);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x18))(this, v6);
  }
  v7 = 0;
  v8 = *((_DWORD *)this + 0xC) <= 0;
  *((_DWORD *)this + 0x18) = 0;
  if ( !v8 )
  {
    do
    {
      v9 = *((_DWORD *)this + 0xD);
      v10 = *(_DWORD **)(v9 + 8 * v7 + 4);
      for ( i = (_DWORD *)(v9 + 8 * v7); v10; v10 = (_DWORD *)i[1] )
        sub_401690(this, i, v10);
      ++v7;
    }
    while ( v7 < *((_DWORD *)this + 0xC) );
  }
  v2 = *((_DWORD *)this + 0x10) == 0;
  *((_DWORD *)this + 0xC) = 0;
  if ( !v2 )
  {
    do
      sub_401690(this, (_DWORD *)this + 0xF, *((_DWORD **)this + 0x10));
    while ( *((_DWORD *)this + 0x10) );
  }
  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 0x18))(this, *((_DWORD *)this + 0xD));
  v12 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x18);
  v15 = *((_DWORD *)this + 0x11);
  *((_DWORD *)this + 0xD) = 0;
  v12(this, v15);
  v13 = *(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10);
  v16 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 0x11) = 0;
  result = v13(this, v16);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 3) = 0;
  return result;
}
