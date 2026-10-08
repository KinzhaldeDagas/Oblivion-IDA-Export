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

  v3 = 0; /*0x747033*/
  result = 1; /*0x747035*/
  v5 = a1 - (_DWORD)&v13; /*0x74703a*/
  do /*0x74705c*/
  {
    v3 = 2 * (v3 + *(__int16 *)((char *)&v12 + 2 * result + v5)); /*0x74704e*/
    *(&v12 + result++) = v3; /*0x747051*/
  }
  while ( result <= 0xF ); /*0x74705c*/
  for ( i = 0; i <= a2; ++i ) /*0x747062*/
  {
    v7 = *(unsigned __int16 *)(a3 + 4 * i + 2); /*0x747065*/
    if ( *(_WORD *)(a3 + 4 * i + 2) ) /*0x747065*/
    {
      v8 = *(&v12 + v7); /*0x74706e*/
      v9 = v8; /*0x747073*/
      *(&v12 + v7) = v8 + 1; /*0x747079*/
      v10 = 0; /*0x74707e*/
      do /*0x747090*/
      {
        v11 = v9 & 1; /*0x747082*/
        --v7; /*0x747087*/
        v9 >>= 1; /*0x74708a*/
        v10 = 2 * (v11 | v10); /*0x74708c*/
      }
      while ( v7 > 0 ); /*0x747090*/
      result = v10 >> 1; /*0x747092*/
      *(_WORD *)(a3 + 4 * i) = result; /*0x747094*/
    }
  }
  return result; /*0x7470a0*/
}
