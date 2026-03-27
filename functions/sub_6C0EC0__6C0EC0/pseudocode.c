void __cdecl sub_6C0EC0(float *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // esi
  float *v4; // eax
  int v5; // ebp
  float *v6; // esi

  v3 = a2;
  if ( a2 >= 2 )
  {
    sub_6BD310((int)a1, a2, a3);
    sub_6C0C40(a1, a1, a1 + 0x10);
    if ( a2 - 1 > 1 )
    {
      v4 = a1;
      v5 = a2 - 2;
      do
      {
        v6 = v4 + 0x10;
        sub_6C0C40(v4 + 0x10, v4, v4 + 0x20);
        --v5;
        v4 = v6;
      }
      while ( v5 );
      v3 = a2;
    }
    sub_6C0C40(&a1[0x10 * a2 - 0x10], &a1[0x10 * v3 - 0x20], &a1[0x10 * a2 - 0x10]);
  }
}
