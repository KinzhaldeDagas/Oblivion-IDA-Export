char __cdecl sub_9602C0(
        float a1,
        int a2,
        float *a3,
        int a4,
        float *a5,
        float *a6,
        _DWORD *a7,
        char a8,
        float *a9,
        float *a10)
{
  char *v11; // eax
  float *Position; // eax
  double v13; // st7
  float v14; // [esp+10h] [ebp-54h]
  float v15; // [esp+14h] [ebp-50h]
  float v16; // [esp+18h] [ebp-4Ch]
  NiRenderTargetGroup v17[2]; // [esp+1Ch] [ebp-48h] BYREF

  sub_96F3C0((float *)v17, a2, a4, a1, flt_A37080, flt_A79DB4, 0x20);
  sub_96F170((float *)v17, a3, a5);
  *a6 = sub_680CC0((float *)v17);
  if ( NiRenderTargetGroup::GetRenderTargetsNum(v17) != 3 && NiRenderTargetGroup::GetRenderTargetsNum(v17) != 2 )
    return 0;
  v11 = sub_4E7DE0((char *)v17);
  *a7 = *(_DWORD *)v11;
  a7[1] = *((_DWORD *)v11 + 1);
  a7[2] = *((_DWORD *)v11 + 2);
  if ( a8 )
  {
    Position = TESObjectREFR_GetPosition((TESChildCELL *)v17);
    *a9 = *Position;
    a9[1] = Position[1];
    a9[2] = Position[2];
    v14 = -*a9;
    v15 = -a9[1];
    v13 = -a9[2];
    *a10 = v14;
    v16 = v13;
    a10[1] = v15;
    a10[2] = v16;
  }
  return 1;
}
