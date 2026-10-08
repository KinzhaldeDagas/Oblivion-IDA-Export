void __thiscall sub_759120(float *this, float a2, int a3)
{
  unsigned __int16 v4; // di
  double z; // st7
  double y; // st6
  double x; // st5
  float *v8; // edx
  double v9; // st4
  float *v10; // eax
  float v11; // [esp+Ch] [ebp-ECh]
  float v12; // [esp+Ch] [ebp-ECh]
  float v13; // [esp+Ch] [ebp-ECh]
  float v14; // [esp+1Ch] [ebp-DCh]
  float v15; // [esp+20h] [ebp-D8h]
  float v16; // [esp+24h] [ebp-D4h]
  NiTransform out; // [esp+28h] [ebp-D0h] BYREF
  NiTransform local; // [esp+5Ch] [ebp-9Ch] BYREF
  float v19[13]; // [esp+90h] [ebp-68h] BYREF
  NiTransform parent; // [esp+C4h] [ebp-34h] BYREF

  qmemcpy(&local, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(local)); /*0x75913a*/
  qmemcpy(v19, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v19)); /*0x759155*/
  sub_718A80(v19, &parent); /*0x75915f*/
  NiTransform_Compose(&parent, &out, &local); /*0x759175*/
  v4 = 0; /*0x759181*/
  if ( *(_WORD *)(a3 + 0x48) ) /*0x759183*/
  {
    z = out.pos.z; /*0x75918d*/
    y = out.pos.y; /*0x759191*/
    x = out.pos.x; /*0x759195*/
    do /*0x75928f*/
    {
      v8 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v4); /*0x7591af*/
      v11 = (a2 - v8[5]) * *(this + 7); /*0x7591b8*/
      v9 = v11; /*0x7591c6*/
      if ( v11 != 0.0 ) /*0x7591cb*/
      {
        v10 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * v4); /*0x7591d7*/
        v14 = *v10 - x; /*0x7591f0*/
        v15 = v10[1] - y; /*0x7591fe*/
        v16 = v10[2] - z; /*0x759208*/
        v12 = v15 * v15 + v14 * v14 + v16 * v16; /*0x759228*/
        if ( *(this + 0xB) >= (double)v12 ) /*0x75923a*/
        {
          if ( v9 >= 1.0 ) /*0x759245*/
          {
            *v8 = g_zeroNiPoint3.x; /*0x759273*/
            v8[1] = g_zeroNiPoint3.y; /*0x75927a*/
            v8[2] = g_zeroNiPoint3.z; /*0x759283*/
          }
          else
          {
            v13 = 1.0 - v9; /*0x75924b*/
            *v8 = *v8 * v13; /*0x75925b*/
            v8[1] = v8[1] * v13; /*0x759262*/
            v8[2] = v13 * v8[2]; /*0x759268*/
          }
        }
      }
      ++v4; /*0x759288*/
    }
    while ( v4 < *(_WORD *)(a3 + 0x48) ); /*0x75928f*/
  }
}
