double __thiscall sub_5889F0(float **this)
{
  float *v2; // ecx
  float v3; // eax
  bool v4; // zf
  float v6; // [esp+4h] [ebp-4h]

  v2 = *(this + 1);
  v3 = *v2;
  v4 = *(_DWORD *)v2 == 0;
  *(this + 1) = *(float **)v2;
  if ( v4 )
    *(this + 2) = 0;
  else
    *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v6 = v2[2];
  (*((void (__thiscall **)(float **, float *))*this + 2))(this, v2);
  *(this + 3) = (float *)((char *)*(this + 3) + 0xFFFFFFFF);
  return v6;
}
