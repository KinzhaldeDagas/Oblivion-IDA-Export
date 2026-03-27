char __cdecl sub_897490(int a1, int *a2, float a3)
{
  int *v3; // edi
  unsigned int v4; // ebx
  int *i; // esi
  int v7[3]; // [esp+14h] [ebp-18h] BYREF
  int v8[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = a2;
  v4 = 0;
  for ( i = (int *)(a1 + 8); ; i += 3 )
  {
    v8[0] = i[0xFFFFFFFE];
    v8[1] = i[0xFFFFFFFF];
    v8[2] = *i;
    v7[0] = *v3;
    v7[1] = v3[1];
    v7[2] = *(int *)((char *)a2 + (_DWORD)i - a1);
    if ( !sub_8904E0((float *)v8, (float *)v7, a3) )
      break;
    ++v4;
    v3 += 3;
    if ( v4 >= 3 )
      return 1;
  }
  return 0;
}
