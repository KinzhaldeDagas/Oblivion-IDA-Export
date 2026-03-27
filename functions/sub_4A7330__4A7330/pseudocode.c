bool __thiscall sub_4A7330(float *this, float *a2)
{
  double v3; // st7
  double v4; // st6
  float *v5; // eax
  float *v6; // esi
  float *v7; // edi
  float *v8; // ebx
  bool v9; // c0
  float v11; // [esp+0h] [ebp-28h]
  float v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+18h] [ebp-10h]
  float v14; // [esp+1Ch] [ebp-Ch]
  float v15; // [esp+1Ch] [ebp-Ch]
  float v16; // [esp+20h] [ebp-8h]
  float v17; // [esp+20h] [ebp-8h]
  float v18; // [esp+2Ch] [ebp+4h]

  v13 = 0;
  if ( !a2 )
    return 0;
  if ( *((_DWORD *)this + 9) < 3u )
    return 0;
  v12 = *a2;
  v18 = a2[1];
  if ( sub_4A7130((int)this) > v12 || sub_4A7180((int)this) < v12 || sub_4A71D0(this) > v18 || sub_4A7220(this) < v18 )
    return 0;
  v3 = v12;
  v4 = v18;
  v5 = this;
  do
  {
    v6 = *((float **)v5 + 1);
    if ( !v6 )
      v6 = this;
    v7 = *(float **)v5;
    v8 = *(float **)v6;
    v14 = **(float **)v5;
    v16 = **(float **)v6;
    if ( v14 > v3 && v16 > v3
      || (v14 > v3 || v16 > v3) && (v11 = v4, v9 = v12 < sub_4A6AA0(v7, v8, v11), v3 = v12, v4 = v18, v9) )
    {
      v17 = v7[1];
      v15 = v8[1];
      if ( v17 > v4 && v15 <= v4 )
      {
        ++v13;
      }
      else if ( v17 <= v4 && v15 > v4 )
      {
        ++v13;
      }
    }
    v5 = v6;
  }
  while ( v6 != this );
  return v13 % 2 != 0;
}
