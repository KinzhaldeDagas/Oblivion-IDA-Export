char __thiscall MagicCaster_CastingVFX_UpdateTimes_(int this, float a2)
{
  int v2; // edx
  int v3; // eax
  double v4; // st6
  int v5; // eax
  double v6; // st7
  char result; // al
  float v8; // [esp+0h] [ebp-Ch]
  float v9; // [esp+0h] [ebp-Ch]
  float v10; // [esp+4h] [ebp-8h]
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+10h] [ebp+4h]
  float v15; // [esp+10h] [ebp+4h]
  float v16; // [esp+10h] [ebp+4h]

  v2 = *(_DWORD *)(this + 4); /*0x69dda0*/
  if ( v2 ) /*0x69dda8*/
  {
    if ( *(float *)(this + 0x14) <= 0.0 ) /*0x69ddb8*/
    {
      return TESObjectLIGH_UpdateAttachedLightPayload(*(float **)(this + 4), (float *)(this + 8), 0);// Casting-VFX attached-light update; the wrapper receives optionalContext=null. /*0x69debe*/
    }
    else
    {
      v14 = a2 + *(float *)(this + 0x10); /*0x69ddc5*/
      *(float *)(this + 0x10) = v14; /*0x69ddcd*/
      v3 = *(_DWORD *)(v2 + 0x78); /*0x69ddd0*/
      v8 = (float)(unsigned __int8)v3; /*0x69dde8*/
      v10 = (float)BYTE1(v3); /*0x69ddfa*/
      v12 = (float)BYTE2(v3); /*0x69de02*/
      v4 = v14 / *(float *)(this + 0x14); /*0x69de06*/
      if ( !*(_BYTE *)(this + 0x18) ) /*0x69dde4*/
        v4 = 1.0 - v4; /*0x69de0d*/
      v15 = v4; /*0x69de0f*/
      if ( v15 <= 1.0 ) /*0x69de20*/
      {
        if ( v15 < 0.0 ) /*0x69de38*/
        {
          *(float *)(this + 0x14) = 0.0; /*0x69de3a*/
          v15 = 0.0; /*0x69de3d*/
        }
      }
      else
      {
        *(float *)(this + 0x14) = 0.0; /*0x69de26*/
        v15 = 1.0; /*0x69de29*/
      }
      v5 = *(_DWORD *)(this + 8); /*0x69de49*/
      v6 = v15 / dbl_A3DDD8; /*0x69de4c*/
      ++*(_DWORD *)(v5 + 0xB8); /*0x69de52*/
      v16 = v6; /*0x69de5b*/
      v9 = v8 * v16; /*0x69de6d*/
      *(float *)(v5 + 0xEC) = v9; /*0x69de75*/
      v11 = v16 * v10; /*0x69de81*/
      *(float *)(v5 + 0xF0) = v11; /*0x69de89*/
      v13 = v16 * v12; /*0x69de93*/
      *(float *)(v5 + 0xF4) = v13; /*0x69de9b*/
      return TESObjectLIGH_UpdateAttachedLightPayload(*(float **)(this + 4), (float *)(this + 8), 0);// Casting-VFX attached-light update; the wrapper receives optionalContext=null. /*0x69dea8*/
    }
  }
  return result; /*0x69dead*/
}
