float *sub_A11180()
{
  int v0; // ecx
  float *result; // eax

  v0 = 0xF; /*0xa11182*/
  result = (float *)&unk_B43230; /*0xa11187*/
  do /*0xa1119e*/
  {
    result[0xFFFFFFFE] = 0.0; /*0xa1118c*/
    result += 4; /*0xa1118f*/
    --v0; /*0xa11192*/
    result[0xFFFFFFFB] = 0.0; /*0xa11195*/
    result[0xFFFFFFFC] = 0.0; /*0xa11198*/
    result[0xFFFFFFFD] = 0.0; /*0xa1119b*/
  }
  while ( v0 >= 0 ); /*0xa1119e*/
  return result; /*0xa111a2*/
}
