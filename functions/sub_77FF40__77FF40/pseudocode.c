void __thiscall sub_77FF40(_DWORD **this)
{
  unsigned int v1; // ebp
  int v3; // eax
  int *v4; // ecx
  int *v5; // ebx
  _DWORD *v6; // edx
  _DWORD **v7; // edi
  int v8; // ecx
  int *v9; // edx
  int *v10; // edi
  int v11; // eax
  int *v12; // ebx
  int v13; // [esp+20h] [ebp-Ch]
  unsigned int v14; // [esp+24h] [ebp-8h]
  int v15; // [esp+28h] [ebp-4h]

  v1 = 0;
  v14 = 0;
  if ( dword_B28CB0 )
  {
    v13 = 0x1A4;
    do
    {
      v3 = dword_B2A7C0;
      v4 = &dword_B2A7C0;
      if ( dword_B2A7C0 != 0xFFFFFFFF )
      {
        v15 = 8 * v1;
        v5 = &dword_B2A7C0;
        do
        {
          if ( v3 == 0xB )
          {
            v4[1] = v1;
          }
          else if ( (v3 == 1 || v3 == 4) && v13 != 0x1A4 )
          {
            v4[1] = 1;
          }
          v6 = (_DWORD *)v4[1];
          v1 = v14;
          v7 = this + 2 * v15 + 2 * *(unsigned __int16 *)(2 * v3 + 0xB427E0) + 0x248;
          *v7 = v6;
          v7[1] = v6;
          (*(void (__stdcall **)(_DWORD, unsigned int, int, int))(**(this + 0x3FE) + 0x10C))(
            *(this + 0x3FE),
            v14,
            v3,
            v4[1]);
          v3 = v5[2];
          v5 += 2;
          v4 = v5;
        }
        while ( v3 != 0xFFFFFFFF );
      }
      v8 = dword_B2A808;
      v9 = &dword_B2A808;
      if ( dword_B2A808 != 0xFFFFFFFF )
      {
        v10 = &dword_B2A808;
        do
        {
          v1 = v14;
          v11 = v9[1] + 1;
          v12 = (int *)(this + 2 * v13 + 2 * *(unsigned __int16 *)(2 * v8 + 0xB427B0));
          *v12 = v11;
          v12[1] = v11;
          ((void (__thiscall *)(_DWORD **, unsigned int, int, int, _DWORD))(*this)[0x34])(this, v14, v8, v9[1], 0);
          v8 = v10[2];
          v10 += 2;
          v9 = v10;
        }
        while ( v8 != 0xFFFFFFFF );
      }
      v13 += 5;
      v14 = ++v1;
    }
    while ( v1 < dword_B28CB0 );
  }
}
