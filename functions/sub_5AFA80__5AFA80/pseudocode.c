void __thiscall sub_5AFA80(char *this)
{
  InputGlobal *input; // edi
  LONG MouseAxisMovement; // ebx
  int v4; // edi
  double v5; // st7
  int *v6; // ecx
  double v7; // st7
  double v8; // st6
  double v9; // st7
  bool v10; // sf
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v14; // st6
  double v15; // st6
  float a2; // [esp+0h] [ebp-14h]
  float v17; // [esp+10h] [ebp-4h]
  float v18; // [esp+10h] [ebp-4h]
  float v19; // [esp+10h] [ebp-4h]
  float v20; // [esp+10h] [ebp-4h]
  float v21; // [esp+10h] [ebp-4h]
  float v22; // [esp+10h] [ebp-4h]
  float v23; // [esp+10h] [ebp-4h]

  input = OSGlobals->input;
  InputGlobals::GetMouseAxisMovement(input, 1);
  MouseAxisMovement = InputGlobals::GetMouseAxisMovement(input, 2);
  v4 = 0x64;
  if ( (unsigned int)(*((_DWORD *)this + 0x10) - *((_DWORD *)this + 0x11)) <= 0x64 )
    v4 = *((_DWORD *)this + 0x10) - *((_DWORD *)this + 0x11);
  v5 = 0.0;
  if ( 0.0 == *((float *)this + 0x56) && 0.0 == *((float *)this + 0x53) )
  {
    v6 = (int *)(this + 0x28 * *((_DWORD *)this + 0x58) + 0x98);
    v17 = (double)*v6 - *((float *)this + 0x52);
    v18 = fabs(v17);
    if ( v18 <= (double)flt_A46B10 )
    {
      if ( v18 <= 1.0 )
      {
        *(this + 0x170) = 1;
        goto LABEL_20;
      }
      v13 = *((float *)this + 0x52);
      *(this + 0x170) = 0;
      if ( (double)*v6 > v13 )
      {
        v7 = ((double)*((int *)this + 0x30) - (double)*((int *)this + 0x26)) / dbl_A6C820;
        v8 = (double)v4;
        if ( v4 < 0 )
        {
          *((float *)this + 0x52) = v7 * (v8 + flt_A2FC78) + *((float *)this + 0x52);
          goto LABEL_20;
        }
LABEL_9:
        *((float *)this + 0x52) = v7 * v8 + *((float *)this + 0x52);
LABEL_20:
        Tile_SetFloat(*((Tile **)this + 0x5E), (_DWORD *)0xFB0, *((float *)this + 0x52));
        v5 = 0.0;
        goto LABEL_21;
      }
      v9 = *((float *)this + 0x52);
      v10 = v4 < 0;
      v11 = ((double)*((int *)this + 0x30) - (double)*((int *)this + 0x26)) / dbl_A6C820;
      v12 = (double)v4;
    }
    else
    {
      *(this + 0x170) = 0;
      if ( (double)*v6 > *((float *)this + 0x52) )
      {
        v7 = ((double)*((int *)this + 0x30) - (double)*((int *)this + 0x26)) / dbl_A3DDE0;
        v8 = (double)v4;
        if ( v4 < 0 )
          v8 = v8 + flt_A2FC78;
        goto LABEL_9;
      }
      v9 = *((float *)this + 0x52);
      v10 = v4 < 0;
      v11 = ((double)*((int *)this + 0x30) - (double)*((int *)this + 0x26)) / dbl_A3DDE0;
      v12 = (double)v4;
    }
    if ( v10 )
      v12 = v12 + flt_A2FC78;
    *((float *)this + 0x52) = v9 - v11 * v12;
    goto LABEL_20;
  }
LABEL_21:
  if ( MouseAxisMovement < (int)0xFFFFFFFD
    && v5 == *((float *)this + 0x56)
    && (v19 = *((float *)this + 0x52) - (double)*((int *)this + 0xA * *((_DWORD *)this + 0x58) + 0x26),
        v20 = fabs(v19),
        v20 <= (double)*(float *)&dword_A46C30) )
  {
    *((float *)this + 0x56) = *((float *)this + 0x55);
  }
  else
  {
    v14 = (double)v4;
    if ( v4 < 0 )
      v14 = v14 + flt_A2FC78;
    v21 = v14;
    v15 = v21;
    v22 = *((float *)this + 0x56) - *((float *)this + 0x57) * v21;
    *((float *)this + 0x56) = v22;
    v23 = v15 * v22 + *((float *)this + 0x53);
    *((float *)this + 0x53) = v23;
    if ( v23 < v5 )
    {
      *((float *)this + 0x56) = v5;
      *((float *)this + 0x53) = v5;
    }
  }
  a2 = (float)(0x122 - Double_To_SInt32(*((float *)this + 0x53)));
  Tile_SetFloat(*((Tile **)this + 0x5E), (_DWORD *)0xFB1, a2);
}
