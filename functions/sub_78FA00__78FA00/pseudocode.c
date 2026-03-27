double __cdecl sub_78FA00(float *a1)
{
  float v3; // [esp+8h] [ebp+4h]

  if ( !a1 || !*(_DWORD *)a1 )
    return 0.0;
  v3 = sub_78FA00((float *)*(_DWORD *)a1);
  return (float)(v3 + (1.0 - v3) * a1[1]);
}
