unsigned int __stdcall sub_79A810(int a1, float a2, const void *a3, char a4)
{
  int i; // eax
  double v5; // st7
  int v6; // edi
  unsigned int result; // eax
  float v8[2]; // [esp+0h] [ebp-28h]
  int v9[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(v9, a3, sizeof(v9));
  if ( a4 )
  {
    for ( i = 1; i < 8; v8[i] = -v5 )
    {
      v5 = *(float *)&v9[i];
      i += 2;
    }
  }
  *(_WORD *)(a1 + 0x22) = 0;
  v6 = 0;
  result = sub_7877B0((_DWORD *)a1);
  if ( (_WORD)result )
  {
    do
    {
      sub_796630((char **)a1, a2, (float *)v9);
      ++*(_WORD *)(a1 + 0x22);
      ++v6;
      result = sub_7877B0((_DWORD *)a1);
    }
    while ( v6 < (unsigned __int16)result );
  }
  return result;
}
