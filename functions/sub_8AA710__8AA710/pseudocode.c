_DWORD *__thiscall sub_8AA710(_DWORD *this, unsigned int a2, int a3)
{
  double v3; // st7
  bool v6; // al
  int v7; // edx
  float *v8; // ecx
  _DWORD *result; // eax
  float v10; // [esp+4h] [ebp-Ch] BYREF
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+Ch] [ebp-4h]
  float v13; // [esp+14h] [ebp+4h]

  v10 = flt_A30634;
  v3 = 0.0 / fCostant_100;
  if ( a2 < *(this + 3) )
  {
    v13 = v3;
    v12 = v13;
    v11 = v13;
    v6 = sub_8AA390((float *)a3, &v10);
    v7 = *(this + 1);
    v10 = flt_A30634;
    v12 = v13;
    v8 = (float *)(v7 + 0xC * a2);
    v11 = v13;
    if ( v6 )
    {
      if ( sub_8AA350(v8, &v10) )
        ++*(this + 4);
    }
    else if ( sub_8AA390(v8, &v10) )
    {
      --*(this + 4);
    }
  }
  else
  {
    v12 = v3;
    v11 = v12;
    *(this + 3) = a2 + 1;
    if ( sub_8AA390((float *)a3, &v10) )
      ++*(this + 4);
  }
  result = (_DWORD *)(*(this + 1) + 0xC * a2);
  *result = *(_DWORD *)a3;
  result[1] = *(_DWORD *)(a3 + 4);
  result[2] = *(_DWORD *)(a3 + 8);
  return result;
}
