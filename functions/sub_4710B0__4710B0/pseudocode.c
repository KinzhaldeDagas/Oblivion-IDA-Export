double __thiscall sub_4710B0(_DWORD *this, int a2)
{
  float v5; // [esp+4h] [ebp-4h]
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]

  v5 = 1.0;
  if ( !a2 )
    return v5;
  v6 = sub_88F1B0(a2, 0);
  if ( v6 < 1.0 )
    v5 = v6;
  if ( a2 == *(this + 2) )
    return v5;
  v7 = sub_4710B0(this, *(_DWORD *)(a2 + 0x1C));
  if ( v5 > (double)v7 )
    return v7;
  return v5;
}
