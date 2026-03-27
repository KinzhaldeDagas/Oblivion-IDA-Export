int *__cdecl __dtold(int *a1, int *a2)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  __int16 v7; // cx
  __int16 v8; // di
  int *result; // eax
  __int16 v10; // cx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // [esp+Ch] [ebp-4h]
  __int16 v15; // [esp+1Ch] [ebp+Ch]

  v3 = (*((unsigned __int16 *)a2 + 3) >> 4) & 0x7FF;
  v15 = *((_WORD *)a2 + 3) & 0x8000;
  v4 = a2[1];
  v5 = *a2;
  v6 = v4 & 0xFFFFF;
  v14 = 0x80000000;
  if ( !(_WORD)v3 )
  {
    if ( !v6 && !v5 )
    {
      result = a1;
      v10 = v15;
      a1[1] = 0;
      *a1 = 0;
      goto LABEL_13;
    }
    v7 = 0x3C01;
    v14 = 0;
    goto LABEL_9;
  }
  if ( (unsigned __int16)v3 != 0x7FF )
  {
    v7 = v3 + 0x3C00;
LABEL_9:
    v8 = v7;
    goto LABEL_10;
  }
  v8 = 0x7FFF;
LABEL_10:
  v11 = v14 | (v6 << 0xB) | (v5 >> 0x15);
  result = a1;
  a1[1] = v11;
  *a1 = v5 << 0xB;
  if ( (v11 & 0x80000000) == 0 )
  {
    do
    {
      v12 = *(__int64 *)a1 >> 0x1F;
      v13 = 2 * *a1;
      --v8;
      a1[1] = v12;
      *a1 = v13;
    }
    while ( (v12 & 0x80000000) == 0 );
  }
  v10 = v8 | v15;
LABEL_13:
  *((_WORD *)result + 4) = v10;
  return result;
}
