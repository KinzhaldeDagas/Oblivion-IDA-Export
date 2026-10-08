int __stdcall sub_7F68C0(unsigned __int16 a1, char a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // ebp
  char v7; // si
  Ni2DBuffer **v8; // edi
  Ni2DBuffer *v9; // edx
  int v10; // eax
  bool v11; // al
  int v12; // eax
  bool v13; // al
  Ni2DBuffer *v14; // edx
  int v15; // eax
  bool v16; // al
  int v17; // edx
  char v18; // cl
  int *v19; // esi
  int v20; // ebp
  int v21; // eax
  bool v22; // al
  int v24; // [esp+10h] [ebp-4h]
  int v25; // [esp+18h] [ebp+4h]
  int v26; // [esp+18h] [ebp+4h]

  v5 = unk_B43B20[a1]; /*0x7f68d1*/
  v6 = a1; /*0x7f68d8*/
  v25 = unk_B43490[v6]; /*0x7f68dc*/
  v7 = 2; /*0x7f68e0*/
  v8 = &dword_B4501C; /*0x7f68e5*/
  v24 = 9; /*0x7f68ea*/
  do /*0x7f699a*/
  {
    v9 = v8[0xFFFFFFFF]; /*0x7f68f2*/
    if ( v9 ) /*0x7f68f7*/
    {
      v10 = 1 << (v7 - 1); /*0x7f6901*/
      if ( (v10 & v5) != 0 && (v10 & v25) == 0 ) /*0x7f690d*/
      {
        v11 = !a2 || (v10 & a3) != 0; /*0x7f6922*/
        LOBYTE(v9->members.width) = v11; /*0x7f6924*/
      }
    }
    if ( *v8 ) /*0x7f6927*/
    {
      v12 = 1 << v7; /*0x7f6934*/
      if ( ((1 << v7) & v5) != 0 && (v12 & v25) == 0 ) /*0x7f6940*/
      {
        v13 = !a2 || (v12 & a3) != 0; /*0x7f6955*/
        LOBYTE((*v8)->members.width) = v13; /*0x7f6957*/
      }
    }
    v14 = v8[1]; /*0x7f695a*/
    if ( v14 ) /*0x7f695f*/
    {
      v15 = 1 << (v7 + 1); /*0x7f6969*/
      if ( (v15 & v5) != 0 && (v15 & v25) == 0 ) /*0x7f6975*/
      {
        v16 = !a2 || (v15 & a3) != 0; /*0x7f698a*/
        LOBYTE(v14->members.width) = v16; /*0x7f698c*/
      }
    }
    v7 += 3; /*0x7f698f*/
    v8 += 3; /*0x7f6992*/
    --v24; /*0x7f6995*/
  }
  while ( v24 ); /*0x7f699a*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a5 + 0x30) + 0x48))(*(_DWORD *)(a5 + 0x30)); /*0x7f69ac*/
  v17 = unk_B441B0[v6]; /*0x7f69b4*/
  v26 = unk_B44840[v6]; /*0x7f69ba*/
  v18 = 1; /*0x7f69be*/
  v19 = unk_B45518; /*0x7f69c3*/
  v20 = 0x11; /*0x7f69c8*/
  do /*0x7f6a0a*/
  {
    if ( *v19 ) /*0x7f69d0*/
    {
      v21 = 1 << v18; /*0x7f69db*/
      if ( ((1 << v18) & v17) != 0 && (v21 & v26) == 0 ) /*0x7f69e7*/
      {
        v22 = !a2 || (v21 & a4) != 0; /*0x7f69fc*/
        *(_BYTE *)(*v19 + 8) = v22; /*0x7f69fe*/
      }
    }
    ++v18; /*0x7f6a01*/
    ++v19; /*0x7f6a04*/
    --v20; /*0x7f6a07*/
  }
  while ( v20 ); /*0x7f6a0a*/
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a5 + 0x2C) + 0x48))(*(_DWORD *)(a5 + 0x2C)); /*0x7f6a1a*/
}
