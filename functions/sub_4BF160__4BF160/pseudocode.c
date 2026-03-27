double __thiscall sub_4BF160(_DWORD *this, float a2, unsigned __int16 a3)
{
  int v3; // eax
  bool v4; // zf
  _DWORD *v5; // eax
  float *v6; // eax
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+8h] [ebp+4h]
  float v10; // [esp+8h] [ebp+4h]
  float v11; // [esp+8h] [ebp+4h]
  float v12; // [esp+8h] [ebp+4h]
  float v13; // [esp+8h] [ebp+4h]
  float v14; // [esp+8h] [ebp+4h]
  float v15; // [esp+8h] [ebp+4h]

  v8 = 0.0;
  if ( LOBYTE(a2) < 4u && a3 < 0x121u )
  {
    v3 = *(this + 9);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4 * LOBYTE(a2) + 0x40) == 0;
      v5 = (_DWORD *)(v3 + 4 * LOBYTE(a2) + 0x40);
      if ( !v4 )
      {
        v6 = *(float **)(*v5 + 4 * a3);
        v9 = *v6 + dbl_A2FC68;
        v10 = v9 + v6[1];
        v11 = v10 + v6[2];
        v12 = v11 + v6[3];
        v13 = v12 + v6[4];
        v14 = v13 + v6[5];
        v15 = v14 + v6[6];
        v8 = v15 + v6[7];
      }
    }
  }
  return (float)(1.0 - v8);
}
