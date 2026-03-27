char __thiscall sub_4EC990(_DWORD *this, float *a2, float *a3, _DWORD *a4)
{
  char v5; // bl
  float v6; // edx
  double v7; // st7
  int v8; // esi
  void (__thiscall ***v9)(_DWORD, int); // edi
  int v10; // eax
  float v12; // [esp+18h] [ebp-58h]
  float v13[3]; // [esp+1Ch] [ebp-54h] BYREF
  float v14[3]; // [esp+28h] [ebp-48h] BYREF
  _DWORD v15[5]; // [esp+34h] [ebp-3Ch] BYREF
  int v16; // [esp+48h] [ebp-28h]
  int *v17; // [esp+50h] [ebp-20h]
  int v18; // [esp+60h] [ebp-10h]
  unsigned int v19; // [esp+6Ch] [ebp-4h]

  v5 = 0;
  if ( *(this + 0xB) )
  {
    v6 = a2[1];
    v7 = a2[2] + dbl_A47CA8;
    v13[0] = *a2;
    v13[1] = v6;
    v13[2] = v7;
    v12 = flt_A30634;
    v14[0] = 0.0;
    v14[1] = 0.0;
    v14[2] = v12;
    sub_959BC0(v15);
    v8 = *(this + 0xB);
    v19 = 0;
    if ( v16 != v8 )
    {
      if ( v16 )
      {
        v9 = (void (__thiscall ***)(_DWORD, int))v16;
        if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
          (**v9)(v9, 1);
      }
      v16 = v8;
      if ( v8 )
        InterlockedIncrement((volatile LONG *)(v8 + 4));
    }
    *(_WORD *)((char *)&v18 + 1) = 0x101;
    v15[2] = 1;
    if ( sub_959D60(v15, v13, v14, 0) )
    {
      v10 = *v17;
      if ( *v17 )
      {
        *a3 = *(float *)(v10 + 0x10);
        *a4 = *(_DWORD *)(v10 + 0x28);
        a4[1] = *(_DWORD *)(v10 + 0x2C);
        v5 = 1;
        a4[2] = *(_DWORD *)(v10 + 0x30);
      }
    }
    v19 = 0xFFFFFFFF;
    sub_959EC0(v15);
  }
  return v5;
}
