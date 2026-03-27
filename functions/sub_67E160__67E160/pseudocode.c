char __thiscall sub_67E160(float *this, TESObjectREFR *a2, float a3)
{
  float *v4; // edi
  char *v6; // eax
  char *v7; // ecx
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v17; // st5
  char v18; // bl
  double v19; // st7
  float v20; // edx
  float v21; // eax
  float v22; // ecx
  float v23; // edx
  float v24; // eax
  float v25; // [esp+8h] [ebp-20h]
  float v26; // [esp+Ch] [ebp-1Ch]
  float v27[3]; // [esp+10h] [ebp-18h] BYREF
  float v28[2]; // [esp+1Ch] [ebp-Ch] BYREF
  float v29; // [esp+24h] [ebp-4h]
  float v30; // [esp+2Ch] [ebp+4h]
  float v31; // [esp+30h] [ebp+8h]

  if ( *(float *)&dword_B15450 == *this
    && *(float *)&dword_B15454 == *(this + 1)
    && *(float *)&dword_B15458 == *(this + 2) )
  {
    return 0;
  }
  v4 = this + 3;
  if ( !sub_8AA390(this + 3, (float *)&dword_B15450) )
    return 0;
  if ( !a2 )
    return 0;
  if ( sub_4D8B90(a2) || sub_43F840(TES, this) || sub_43F840(TES, this + 3) )
  {
    *((_DWORD *)this + 7) = sub_67D820(this, a2, *((_BYTE *)this + 0x18) == 0, 0);
    v6 = sub_67D820(this + 3, a2, *((_BYTE *)this + 0x18) == 0, 0);
    v7 = *((char **)this + 7);
    *((_DWORD *)this + 8) = v6;
    *((_DWORD *)this + 0xA) = a2;
    if ( v7 )
    {
      if ( v6 )
      {
        if ( v7 != v6 )
        {
          v8 = (float *)sub_4BEF40(v7);
          v9 = sub_4121A0(this, v28, v8);
          v25 = sub_47DA40(v9);
          v10 = (float *)sub_4BEF40(*((char **)this + 8));
          v11 = sub_4121A0(this + 3, v28, v10);
          v26 = sub_47DA40(v11);
          v12 = sub_4121A0(this, v28, this + 3);
          v30 = sub_47DA40(v12);
          v13 = v25;
          v14 = v26;
          if ( LOBYTE(a3) )
          {
            v15 = flt_A4CAE0;
            if ( v15 > v13 && v15 > v14 )
              return 1;
          }
          v17 = dbl_A748C8;
          if ( v17 > v13 && v17 > v14 )
            return 1;
          if ( v30 > v13 + v14 )
            return 1;
          v18 = sub_67ECF0(*((_BYTE **)this + 8));
          if ( sub_67ECF0(*((_BYTE **)this + 7)) != v18 )
            return 1;
          if ( v30 < dbl_A47CA8 )
          {
            v19 = sub_5E0660(a2);
            v20 = *this;
            v21 = *(this + 1);
            v31 = v19 * dbl_A2FAA0;
            v29 = *(this + 2);
            v22 = *(this + 5);
            v28[0] = v20;
            v23 = *v4;
            v28[1] = v21;
            v24 = *(this + 4);
            v29 = v29 + v31;
            v27[0] = v23;
            v27[1] = v24;
            v27[2] = v31 + v22;
            if ( !sub_6859A0(v28, v27) )
              return 1;
          }
        }
      }
    }
  }
  *(this + 7) = 0.0;
  *(this + 8) = 0.0;
  *(this + 0xA) = 0.0;
  return 0;
}
