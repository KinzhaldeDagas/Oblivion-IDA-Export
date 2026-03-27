void __thiscall sub_725100(char *this, unsigned int a2)
{
  signed int v2; // ebx
  void (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  unsigned int v5; // ebp
  int v6; // edi
  void (__cdecl *v7)(int, int, int, int *, int); // edx
  void (__cdecl *v8)(int, int, int, int *, int); // edx
  int v9; // [esp-2Ch] [ebp-3Ch]
  int v10; // [esp-28h] [ebp-38h]
  int v11; // [esp-18h] [ebp-28h]
  int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp-14h] [ebp-24h]
  int v14; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_6EBA80((NiRenderer *)this, a2);
  sub_709430(this + 8, v2);
  v12 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v12 + 4);
  v14 = 4;
  v4(v12, &a2, 4, &v14, 1);
  sub_724AB0(this, v2, a2);
  v5 = 0;
  if ( a2 )
  {
    v6 = 0;
    do
    {
      v7 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
      v13 = v6 + *((_DWORD *)this + 9);
      v11 = *(_DWORD *)(v2 + 0x21C);
      v14 = 4;
      v7(v11, v13, 4, &v14, 1);
      v8 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
      v10 = v6 + *((_DWORD *)this + 9) + 4;
      v9 = *(_DWORD *)(v2 + 0x21C);
      v14 = 4;
      v8(v9, v10, 4, &v14, 1);
      ++v5;
      v6 += 0x10;
    }
    while ( v5 < a2 );
  }
}
