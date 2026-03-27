void __thiscall sub_52B840(float *this)
{
  _BYTE *v2; // eax
  unsigned int v3; // ebx
  int v4; // ecx
  int *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // esi
  const char **v8; // edi
  _DWORD *v9; // esi
  int v10; // ebx
  bool v11; // zf
  void (__thiscall ***v12)(_DWORD); // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v2 = this + 0x14;
  v3 = 0;
  *(this + 0x14) = 0.0;
  *(this + 0x15) = 0.0;
  *(this + 0x16) = 0.0;
  *(this + 0x17) = 0.0;
  *(this + 0x18) = 0.0;
  *(this + 0x19) = 0.0;
  *(this + 0x1A) = 0.0;
  *(this + 0x1B) = 0.0;
  *(this + 0x1C) = 0.0;
  v4 = 7;
  do
  {
    *v2 = 0xFF;
    v2 += 2;
    --v4;
  }
  while ( v4 );
  *(this + 0x1A) = 1.0;
  *(this + 0x18) = 1.0;
  *(this + 0x1B) = 1.0;
  *(this + 0x19) = 1.0;
  *(this + 0xC0) = 0.0;
  *(this + 0x28) = 0.0;
  *(this + 0xC1) = 0.0;
  *(this + 0x29) = 0.0;
  *(this + 0x25) = 0.0;
  *(this + 0x26) = 0.0;
  *((_BYTE *)this + 0x9C) = 0;
  v5 = (int *)sub_5538D0();
  sub_5528F0(v5, (int)(this + 0xA7));
  sub_552880((_DWORD *)this + 0xA7);
  *((_WORD *)this + 0x17E) = 0;
  v6 = this + 0x6E;
  v7 = this + 0x38;
  do
  {
    (*(void (__thiscall **)(_DWORD *))*v7)(v7);
    (*(void (__thiscall **)(_DWORD *, char *))(*v7 + 0x18))(v7, off_B10CCC[v3]);
    (*(void (__thiscall **)(_DWORD *))*v6)(v6);
    BSStringT_Set((BSStringT *)(v6 + 1), off_B10CF0[v3++], 0);
    v7 += 6;
    v6 += 3;
  }
  while ( v3 < 9 );
  v8 = (const char **)off_B10D14;
  v12 = (void (__thiscall ***)(_DWORD))(this + 0x2C);
  v9 = this + 0x89;
  v13 = 2;
  do
  {
    v10 = 5;
    do
    {
      (*(void (__thiscall **)(_DWORD *))*v9)(v9);
      BSStringT_Set((BSStringT *)(v9 + 1), *v8++, 0);
      v9 += 3;
      --v10;
    }
    while ( v10 );
    (**v12)(v12);
    v11 = v13-- == 1;
    v12 += 6;
  }
  while ( !v11 );
  j_TESForm_InitializeComponents((TESForm *)this);
}
