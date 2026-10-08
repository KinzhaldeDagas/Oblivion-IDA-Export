void __thiscall sub_6DAAD0(void *this, float *a2, float *a3)
{
  float *v4; // edi
  int v5; // eax
  float *v6; // eax

  *a2 = flt_A7DEB4; /*0x6daadc*/
  *a3 = -flt_A7DEB4; /*0x6daaed*/
  if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x9C))(this, 1) ) /*0x6daafa*/
  {
    v4 = (float *)sub_6EC260(this, 0, 1); /*0x6dab0c*/
    v5 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x9C))(this, 1); /*0x6dab1c*/
    v6 = (float *)sub_6EC260(this, v5 - 1, 1); /*0x6dab24*/
    if ( v4 ) /*0x6dab2d*/
    {
      if ( v6 ) /*0x6dab31*/
      {
        if ( *a2 > (double)*v4 ) /*0x6dab3e*/
          *a2 = *v4; /*0x6dab42*/
        if ( *a3 < (double)*v6 ) /*0x6dab50*/
          *a3 = *v6; /*0x6dab54*/
      }
    }
  }
  if ( flt_A7DEB4 == *a2 && -flt_A7DEB4 == *a3 ) /*0x6dab7b*/
  {
    *a2 = 0.0; /*0x6dab80*/
    *a3 = 0.0; /*0x6dab82*/
  }
}
