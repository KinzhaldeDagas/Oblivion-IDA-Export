void __cdecl sub_790350(int *a1, int *a2, int *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  v3 = *a2;
  if ( *(float *)(*a1 + 0x2C) < (double)*(float *)(*a2 + 0x2C) )
  {
    *a2 = *a1;
    *a1 = v3;
  }
  v4 = *a3;
  if ( *(float *)(*a2 + 0x2C) < (double)*(float *)(*a3 + 0x2C) )
  {
    *a3 = *a2;
    *a2 = v4;
  }
  v5 = *a2;
  if ( *(float *)(*a1 + 0x2C) < (double)*(float *)(*a2 + 0x2C) )
  {
    *a2 = *a1;
    *a1 = v5;
  }
}
