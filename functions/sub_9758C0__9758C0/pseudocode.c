void __usercall sub_9758C0(
        int a1@<ecx>,
        float *a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7,
        float *a8)
{
  double v8; // st7
  double v9; // st7
  float v10; // [esp+Ch] [ebp+8h]
  float v11; // [esp+Ch] [ebp+8h]
  float v12; // [esp+Ch] [ebp+8h]
  float v13; // [esp+Ch] [ebp+8h]

  *a8 = (*(float *)(a5 + 4 * a6 + 0x30) - *(float *)(a1 + 4 * a6)) / *(float *)(a7 + 4 * a6);
  *(float *)(a1 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30);
  v8 = *(float *)(a1 + 4 * a4);
  if ( -*(float *)(a5 + 4 * a4 + 0x30) <= v8 )
  {
    if ( *(float *)(a5 + 4 * a4 + 0x30) >= v8 )
      goto LABEL_6;
    v11 = *(float *)(a1 + 4 * a4) - *(float *)(a5 + 4 * a4 + 0x30);
    *a2 = v11 * v11 + *a2;
    v9 = *(float *)(a5 + 4 * a4 + 0x30);
  }
  else
  {
    v10 = v8 + *(float *)(a5 + 4 * a4 + 0x30);
    *a2 = v10 * v10 + *a2;
    v9 = -*(float *)(a5 + 4 * a4 + 0x30);
  }
  *(float *)(a1 + 4 * a4) = v9;
LABEL_6:
  if ( -*(float *)(a5 + 4 * a3 + 0x30) <= *(float *)(a1 + 4 * a3) )
  {
    if ( *(float *)(a5 + 4 * a3 + 0x30) < (double)*(float *)(a1 + 4 * a3) )
    {
      v13 = *(float *)(a1 + 4 * a3) - *(float *)(a5 + 4 * a3 + 0x30);
      *a2 = v13 * v13 + *a2;
      *(float *)(a1 + 4 * a3) = *(float *)(a5 + 4 * a3 + 0x30);
    }
  }
  else
  {
    v12 = *(float *)(a5 + 4 * a3 + 0x30) + *(float *)(a1 + 4 * a3);
    *a2 = v12 * v12 + *a2;
    *(float *)(a1 + 4 * a3) = -*(float *)(a5 + 4 * a3 + 0x30);
  }
}
