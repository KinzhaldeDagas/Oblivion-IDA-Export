// [Controller decode 2026-07-09] Updates bhkCharacterController size transition toward target size and restores saved shape type when complete.
void __thiscall bhkCharacterController_UpdateSizeTransition(float *this, float a2)
{
  NiObject *v3; // edx
  hkVector4 *vftable; // ecx
  double w; // st7
  double v6; // st7
  double v7; // st7
  hkVector4 *v8; // eax
  hkVector4 *v9; // eax
  double v10; // st7
  hkVector4 *v11; // eax
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

  if ( *((_DWORD *)this + 0xEB) == 2 ) /*0x894c8e*/
  {
    v3 = NiRTTI_Cast((BSStringT *)&stru_BA7FD8, *((NiObject **)this + 0xDD)); /*0x894ca5*/
    if ( !v3 ) /*0x894cac*/
    {
      v17 = *(this + 0xEA); /*0x894ded*/
LABEL_25:
      if ( *(this + 0xEA) == v17 ) /*0x894e04*/
      {
        if ( *(this + 0xE8) == v17 ) /*0x894e13*/
        {
          if ( *((_DWORD *)this + 0xDC) != 2 ) /*0x894e1e*/
          {
            bhkCharacterController_SetShapeType((int ***)this, *((int ***)this + 0xDC)); /*0x894e23*/
            *((_DWORD *)this + 0xDC) = 2; /*0x894e28*/
          }
          *(this + 0xEB) = 0.0; /*0x894e32*/
        }
        else
        {
          *((_DWORD *)this + 0xEB) = 1; /*0x894e4e*/
        }
      }
      return; /*0x894e4b*/
    }
    if ( (*(_DWORD *)(this + 0x7D) & 0x100000) != 0 ) /*0x894cbd*/
      a2 = flt_A2FE7C; /*0x894cc5*/
    vftable = (hkVector4 *)v3[1].__vftable; /*0x894cc8*/
    if ( vftable ) /*0x894ccd*/
      w = vftable->w; /*0x894ccf*/
    else
      w = flt_B2EFC4; /*0x894cd4*/
    v18 = w; /*0x894cda*/
    v14 = v18; /*0x894ce2*/
    v19 = a2 * dbl_A3F3F0; /*0x894cef*/
    v6 = v14; /*0x894cf3*/
    if ( *(this + 0xEA) >= (double)v14 ) /*0x894d04*/
    {
      v16 = v19 + v6; /*0x894d4f*/
      if ( *(this + 0xEA) > (double)v16 ) /*0x894d64*/
      {
        v7 = v16; /*0x894d66*/
        goto LABEL_14; /*0x894d66*/
      }
    }
    else
    {
      v15 = v6 - v19; /*0x894d12*/
      if ( *(this + 0xEA) < (double)v15 ) /*0x894d27*/
      {
        v7 = v15; /*0x894d3f*/
        v19 = -v19; /*0x894d43*/
        goto LABEL_14; /*0x894d47*/
      }
    }
    v19 = *(this + 0xEA) - v6; /*0x894d33*/
    v7 = *(this + 0xEA); /*0x894d37*/
LABEL_14:
    v17 = v7; /*0x894d68*/
    v8 = vftable + 1; /*0x894d6e*/
    if ( !vftable ) /*0x894d71*/
      v8 = &unk_BA7A40; /*0x894d73*/
    v20 = *v8; /*0x894d7d*/
    v9 = vftable + 2; /*0x894d82*/
    if ( !vftable ) /*0x894d85*/
      v9 = &unk_BA7A40; /*0x894d87*/
    v21 = *v9; /*0x894d9b*/
    v20.z = v20.z - v19; /*0x894da4*/
    v21.z = v19 + v9->z; /*0x894dac*/
    if ( vftable ) /*0x894db0*/
    {
      v10 = vftable->w; /*0x894db7*/
      vftable[1] = v20; /*0x894dba*/
      vftable[1].w = v10; /*0x894dbe*/
    }
    v11 = (hkVector4 *)v3[1].__vftable; /*0x894dc1*/
    if ( v11 ) /*0x894dc6*/
    {
      v12 = v11->w; /*0x894dcd*/
      v11[2] = v21; /*0x894dd0*/
      v11[2].w = v12; /*0x894dd4*/
    }
    v13 = v3[1].__vftable; /*0x894dd7*/
    if ( v13 ) /*0x894ddc*/
      *(float *)&v13->Unk_03 = v17; /*0x894de2*/
    goto LABEL_25; /*0x894de5*/
  }
}
