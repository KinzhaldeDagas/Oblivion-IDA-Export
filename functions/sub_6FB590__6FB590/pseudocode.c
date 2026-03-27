int __thiscall sub_6FB590(const char **this, unsigned int a2)
{
  signed int v2; // ebp
  int (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  int result; // eax
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // [esp-14h] [ebp-24h]
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_6FE000(this, (_DWORD *)a2);
  a2 = *((unsigned __int16 *)this + 0xC);
  v8 = *(_DWORD *)(v2 + 0x220);
  v4 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v8 + 8);
  v9 = 4;
  result = v4(v8, &a2, 4, &v9, 1);
  v6 = 0;
  if ( a2 )
  {
    v7 = 0;
    do
    {
      result = sub_6FB460((char *)&(*(this + 4))[v7], v2);
      ++v6;
      v7 += 0x10;
    }
    while ( v6 < a2 );
  }
  return result;
}
