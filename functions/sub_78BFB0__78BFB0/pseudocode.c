void __thiscall sub_78BFB0(float **this)
{
  float *v2; // ecx
  float *v3; // eax
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  float *v8; // esi
  int v9; // [esp+0h] [ebp-70h] BYREF
  int v10; // [esp+50h] [ebp-20h]
  float v11; // [esp+58h] [ebp-18h]
  float v12; // [esp+5Ch] [ebp-14h]
  int *v13; // [esp+60h] [ebp-10h]
  int v14; // [esp+6Ch] [ebp-4h]

  v13 = &v9;
  v2 = *(this + 0xD);
  v14 = 0;
  if ( v2 )
  {
    v3 = *this;
    v4 = *((_DWORD *)*this + 3);
    v5 = *((_DWORD *)*this + 1);
    v11 = (*this)[5];
    v6 = *((_DWORD *)v3 + 2);
    v10 = v4;
    v3[1] = v2[1];
    v3[2] = v2[2];
    v3[3] = v2[3];
    v12 = sub_7A2440(*this);
    v7 = v10;
    (*(this + 0xD))[4] = v12;
    (*this)[5] = v11;
    v8 = *this + 1;
    *(_DWORD *)v8 = v5;
    *((_DWORD *)v8 + 1) = v6;
    *((_DWORD *)v8 + 2) = v7;
  }
  else
  {
    sub_7A2440(*this);
  }
}
