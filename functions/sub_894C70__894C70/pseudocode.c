void __thiscall sub_894C70(int *this, float a2)
{
  NiObject *v3; // edx
  hkVector4 *vftable; // ecx
  double w; // st7
  double v6; // st7
  double v7; // st7
  hkVector4 *v8; // eax
  hkVector4 *v9; // eax
  double v10; // st7
  NiObjectVtbl *v11; // eax
  double v12; // st7
  NiObjectVtbl *v13; // eax
  float v14; // [esp+8h] [ebp-38h]
  float v15; // [esp+8h] [ebp-38h]
  float v16; // [esp+8h] [ebp-38h]
  float v17; // [esp+8h] [ebp-38h]
  float v18; // [esp+Ch] [ebp-34h]
  float v19; // [esp+Ch] [ebp-34h]
  hkVector4 v20; // [esp+10h] [ebp-30h]
  hkVector4 v21; // [esp+20h] [ebp-20h]

  if ( *(this + 0xEB) == 2 )
  {
    v3 = NiRTTI_Cast((BSStringT *)dword_BA7FD8, (NiObject *)*(this + 0xDD));
    if ( !v3 )
    {
      v17 = *((float *)this + 0xEA);
LABEL_25:
      if ( *((float *)this + 0xEA) == v17 )
      {
        if ( *((float *)this + 0xE8) == v17 )
        {
          if ( *(this + 0xDC) != 2 )
          {
            sub_894940(this, *(this + 0xDC));
            *(this + 0xDC) = 2;
          }
          *(this + 0xEB) = 0;
        }
        else
        {
          *(this + 0xEB) = 1;
        }
      }
      return;
    }
    if ( (*(this + 0x7D) & 0x100000) != 0 )
      a2 = flt_A2FE7C;
    vftable = (hkVector4 *)v3[1].__vftable;
    if ( vftable )
      w = vftable->w;
    else
      w = flt_B2EFC4;
    v18 = w;
    v14 = v18;
    v19 = a2 * dbl_A3F3F0;
    v6 = v14;
    if ( *((float *)this + 0xEA) >= (double)v14 )
    {
      v16 = v19 + v6;
      if ( *((float *)this + 0xEA) > (double)v16 )
      {
        v7 = v16;
        goto LABEL_14;
      }
    }
    else
    {
      v15 = v6 - v19;
      if ( *((float *)this + 0xEA) < (double)v15 )
      {
        v7 = v15;
        v19 = -v19;
        goto LABEL_14;
      }
    }
    v19 = *((float *)this + 0xEA) - v6;
    v7 = *((float *)this + 0xEA);
LABEL_14:
    v17 = v7;
    v8 = vftable + 1;
    if ( !vftable )
      v8 = &stru_BA7A40;
    v20 = *v8;
    v9 = vftable + 2;
    if ( !vftable )
      v9 = &stru_BA7A40;
    v21 = *v9;
    v20.z = v20.z - v19;
    v21.z = v19 + v9->z;
    if ( vftable )
    {
      v10 = vftable->w;
      vftable[1] = v20;
      vftable[1].w = v10;
    }
    v11 = v3[1].__vftable;
    if ( v11 )
    {
      v12 = *(float *)&v11->Unk_03;
      *(hkVector4 *)&v11->PostLoad = v21;
      *(float *)&v11->Compare = v12;
    }
    v13 = v3[1].__vftable;
    if ( v13 )
      *(float *)&v13->Unk_03 = v17;
    goto LABEL_25;
  }
}
