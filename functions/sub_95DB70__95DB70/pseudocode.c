int __thiscall sub_95DB70(float *this, float *a2)
{
  int v2; // edx
  double v4; // st7
  int result; // eax
  int v6; // ecx
  double v7; // [esp+4h] [ebp-14h]
  float v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]
  float v11; // [esp+1Ch] [ebp+4h]

  v2 = *((_DWORD *)a2 + 1);
  v7 = a2[3];
  v8 = *a2;
  v10 = *((_DWORD *)a2 + 2);
  v9 = v2;
  v4 = sub_43F350(&v8);
  result = v9;
  v6 = v10;
  *(this + 1) = v8;
  *((_DWORD *)this + 2) = result;
  *((_DWORD *)this + 3) = v6;
  v11 = v7 / v4;
  *(this + 4) = v11;
  return result;
}
