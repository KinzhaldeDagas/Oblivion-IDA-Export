NiScreenPolygon *sub_7A98E0()
{
  double v0; // st6
  NiScreenPolygon *v1; // eax
  float v3[5]; // [esp+8h] [ebp-3Ch] BYREF
  float v4; // [esp+1Ch] [ebp-28h]
  float v5; // [esp+20h] [ebp-24h]
  float v6; // [esp+24h] [ebp-20h]
  float v7; // [esp+28h] [ebp-1Ch]
  float v8; // [esp+2Ch] [ebp-18h]
  float v9; // [esp+30h] [ebp-14h]
  float v10; // [esp+34h] [ebp-10h]
  int v11; // [esp+40h] [ebp-4h]

  v3[0] = flt_A30634;
  v3[1] = v3[0];
  v0 = flt_A2FAAC;
  v3[2] = flt_A2FAAC;
  v3[3] = 1.0;
  v5 = 1.0;
  v6 = 1.0;
  v9 = 1.0;
  v3[4] = v3[0];
  v8 = v3[0];
  v4 = v0;
  v7 = v4;
  v10 = v4;
  v1 = (NiScreenPolygon *)FormHeapAlloc(0x1Cu);
  v11 = 0;
  if ( v1 )
    return NiScreenPolygon::NiScreenPolygon(v1, 4u, v3, 0, 0);
  else
    return 0;
}
