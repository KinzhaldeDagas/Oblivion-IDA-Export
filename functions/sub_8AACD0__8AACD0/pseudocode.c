int __thiscall sub_8AACD0(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // ebp
  int (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  int result; // eax
  unsigned int v6; // esi
  int v7; // ebx
  int (__cdecl *v8)(int, int, int, int *, int); // eax
  int v9; // [esp-1Ch] [ebp-28h]
  int v10; // [esp-18h] [ebp-24h]
  int v11; // [esp-18h] [ebp-24h]
  int v12; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_716050(this, a2);
  a2 = *(this + 0x14);
  v10 = *(_DWORD *)(v2 + 0x220);
  v4 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v10 + 8);
  v12 = 4;
  result = v4(v10, &a2, 4, &v12, 1);
  v6 = 0;
  if ( a2 )
  {
    v7 = 0;
    do
    {
      v11 = v7 + *(this + 0x11);
      v9 = *(_DWORD *)(v2 + 0x220);
      v8 = *(int (__cdecl **)(int, int, int, int *, int))(v9 + 8);
      v12 = 0xC;
      result = v8(v9, v11, 0xC, &v12, 1);
      ++v6;
      v7 += 0xC;
    }
    while ( v6 < a2 );
  }
  return result;
}
