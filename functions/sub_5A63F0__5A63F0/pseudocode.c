unsigned int __cdecl sub_5A63F0(int a1, int a2)
{
  float v3; // [esp+4h] [ebp-10h] BYREF
  float v4; // [esp+8h] [ebp-Ch] BYREF
  float v5; // [esp+Ch] [ebp-8h] BYREF
  float v6; // [esp+10h] [ebp-4h] BYREF

  v3 = 0.0;
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)a1) )
    sub_662AA0(TESDataHandler_g_PlayerRef, *(void **)(a1 + 8), &v3, &v5);
  else
    v3 = *(float *)(a1 + 0x1C) - *(float *)(a1 + 4);
  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)a2) )
    sub_662AA0(TESDataHandler_g_PlayerRef, *(void **)(a2 + 8), &v4, &v6);
  else
    v4 = *(float *)(a2 + 0x1C) - *(float *)(a2 + 4);
  if ( v4 >= (double)v3 )
    return v4 != v3;
  else
    return 0xFFFFFFFF;
}
