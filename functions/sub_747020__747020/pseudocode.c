signed int __usercall sub_747020@<eax>(int a1@<edx>, int a2@<ebx>, int a3@<edi>)
{
  __int16 v3; // cx
  signed int result; // eax
  int v5; // edx
  int i; // esi
  int v7; // edx
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // ebp
  __int16 v12; // [esp+4h] [ebp-24h]
  char v13; // [esp+6h] [ebp-22h] BYREF

  v3 = 0;
  result = 1;
  v5 = a1 - (_DWORD)&v13;
  do
  {
    v3 = 2 * (v3 + *(__int16 *)((char *)&v12 + 2 * result + v5));
    *(&v12 + result++) = v3;
  }
  while ( result <= 0xF );
  for ( i = 0; i <= a2; ++i )
  {
    v7 = *(unsigned __int16 *)(a3 + 4 * i + 2);
    if ( *(_WORD *)(a3 + 4 * i + 2) )
    {
      v8 = *(&v12 + v7);
      v9 = v8;
      *(&v12 + v7) = v8 + 1;
      v10 = 0;
      do
      {
        v11 = v9 & 1;
        --v7;
        v9 >>= 1;
        v10 = 2 * (v11 | v10);
      }
      while ( v7 > 0 );
      result = v10 >> 1;
      *(_WORD *)(a3 + 4 * i) = result;
    }
  }
  return result;
}
