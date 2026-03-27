void __thiscall sub_6DAAD0(void *this, float *a2, float *a3)
{
  float *v4; // edi
  int v5; // eax
  float *v6; // eax

  *a2 = flt_A7DEB4;
  *a3 = -flt_A7DEB4;
  if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x9C))(this, 1) )
  {
    v4 = (float *)sub_6EC260(this, 0, 1);
    v5 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x9C))(this, 1);
    v6 = (float *)sub_6EC260(this, v5 - 1, 1);
    if ( v4 )
    {
      if ( v6 )
      {
        if ( *a2 > (double)*v4 )
          *a2 = *v4;
        if ( *a3 < (double)*v6 )
          *a3 = *v6;
      }
    }
  }
  if ( flt_A7DEB4 == *a2 && -flt_A7DEB4 == *a3 )
  {
    *a2 = 0.0;
    *a3 = 0.0;
  }
}
