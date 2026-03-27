// positive sp value has been detected, the output may be wrong!
char __usercall def_966B67@<al>(int a1@<ebp>)
{
  int v1; // esi
  unsigned int v2; // ecx
  unsigned int v3; // edx
  float *v4; // eax
  double v5; // st7
  float v7; // [esp+2Ch] [ebp+2Ch]
  float v8; // [esp+30h] [ebp+30h]
  float v9; // [esp+34h] [ebp+34h]

  if ( *(_BYTE *)(a1 + 0x2C) )
  {
    v1 = *(_DWORD *)(a1 + 0x34);
    v2 = STACK[0x170];
    v3 = STACK[0x174];
    *(_DWORD *)v1 = STACK[0x16C];
    *(_DWORD *)(v1 + 4) = v2;
    *(_DWORD *)(v1 + 8) = v3;
    sub_43F350((float *)v1);
    v4 = *(float **)(a1 + 0x30);
    v7 = -*(float *)v1;
    v8 = -*(float *)(v1 + 4);
    v5 = *(float *)(v1 + 8);
    *v4 = v7;
    v4[1] = v8;
    v9 = -v5;
    v4[2] = v9;
  }
  return 1;
}
