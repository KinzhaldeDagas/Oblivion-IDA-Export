int __thiscall sub_957C90(
        unsigned int *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int **a6)
{
  int v7; // eax
  unsigned int *v8; // ecx
  unsigned int v9; // ecx
  unsigned int *v10; // eax
  int v11; // edi
  unsigned int *v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // edi
  int v19; // eax
  unsigned int *v21[3]; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD v22[2]; // [esp+1Ch] [ebp-10h] BYREF
  int v23; // [esp+24h] [ebp-8h]
  int v24; // [esp+28h] [ebp-4h]

  *(this + 2) = a5;
  *(this + 0xA) = a2;
  *(this + 8) = a3;
  *(this + 9) = a4;
  v7 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 8))(a2);
  v21[2] = *(unsigned int **)(a5 + 4);
  v8 = *a6;
  v21[1] = (unsigned int *)v7;
  v21[0] = v8;
  *(this + 0xE) = 0;
  if ( v7 )
  {
    v9 = 0;
    do
    {
      v7 >>= 1;
      ++v9;
    }
    while ( v7 );
    *(this + 0xE) = v9;
  }
  *(this + 4) = 0;
  *(this + 5) = 0;
  v10 = a6[1];
  v11 = 0x400;
  do
  {
    *v10 = *(this + 4);
    ++*(this + 5);
    v10[0x3E] = (unsigned int)v10;
    ++*(this + 5);
    v10[0x7C] = (unsigned int)(v10 + 0x3E);
    ++*(this + 5);
    v10[0xBA] = (unsigned int)(v10 + 0x7C);
    *(this + 4) = (unsigned int)(v10 + 0xBA);
    v10 += 0xF8;
    --v11;
    ++*(this + 5);
  }
  while ( v11 );
  *(this + 6) = 0;
  *(this + 7) = 0;
  v12 = a6[2];
  v13 = 0x400;
  do
  {
    *v12 = *(this + 6);
    ++*(this + 7);
    v12[0x2F] = (unsigned int)v12;
    ++*(this + 7);
    v12[0x5E] = (unsigned int)(v12 + 0x2F);
    ++*(this + 7);
    v12[0x8D] = (unsigned int)(v12 + 0x5E);
    *(this + 6) = (unsigned int)(v12 + 0x8D);
    v12 += 0xBC;
    --v13;
    ++*(this + 7);
  }
  while ( v13 );
  *(this + 0xC) = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a4 + 8))(a4);
  v14 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a4 + 0xC))(a4);
  v15 = *(this + 2);
  *(this + 0xD) = v14;
  v16 = *(_DWORD *)(v15 + 8) + 2;
  v17 = (**(int (__thiscall ***)(int, int, int))dword_BA7D98)(dword_BA7D98, 4 * v16, 0x25);
  *(this + 3) = (unsigned int)v22;
  v23 = v17;
  v22[1] = v16;
  v22[0] = 0;
  v24 = 0;
  v18 = sub_957980((int)this, 0, v21, 0, 0);
  (*(void (__thiscall **)(unsigned int, int, unsigned int *, int))(*(_DWORD *)a4 + 0x10))(a4, v18, this, 0x2000);
  v19 = v23;
  *(this + 3) = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, v19);
  return v18;
}
