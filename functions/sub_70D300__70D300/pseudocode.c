char __thiscall sub_70D300(float *this, int a2, int a3, float *a4, float a5)
{
  double v6; // st7
  double v7; // st6
  float v9; // [esp+4h] [ebp-10h]
  float *v10; // [esp+Ch] [ebp-8h]

  if ( !g_Renderer )
    return 0;
  if ( !sub_701540(g_Renderer, a2, a3, (float *)&a3, (float *)&a2) )
    return 0;
  v6 = *(float *)&a3;
  if ( *(this + 0x45) < (double)*(float *)&a3 )
    return 0;
  if ( *(this + 0x44) > v6 )
    return 0;
  v7 = *(float *)&a2;
  if ( *(this + 0x46) < (double)*(float *)&a2 || *(this + 0x47) > v7 )
    return 0;
  v10 = (float *)LODWORD(a5);
  a5 = (v7 - *(this + 0x47)) / (*(this + 0x46) - *(this + 0x47));
  a5 = a5 * (*(this + 0x3D) - *(this + 0x3E)) + *(this + 0x3E);
  v9 = a5;
  a5 = (v6 - *(this + 0x44)) / (*(this + 0x45) - *(this + 0x44));
  a5 = a5 * (*(this + 0x3C) - *(this + 0x3B)) + *(this + 0x3B);
  sub_70C4D0((int)this, a5, v9, a4, v10);
  return 1;
}
