float *sub_A11180()
{
  int v0; // ecx
  float *result; // eax

  v0 = 0xF;
  result = (float *)&unk_B43230;
  do
  {
    result[0xFFFFFFFE] = 0.0;
    result += 4;
    --v0;
    result[0xFFFFFFFB] = 0.0;
    result[0xFFFFFFFC] = 0.0;
    result[0xFFFFFFFD] = 0.0;
  }
  while ( v0 >= 0 );
  return result;
}
