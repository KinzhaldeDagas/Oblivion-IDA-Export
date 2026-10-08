void __thiscall sub_6D91B0(int this, float applicationTime)
{
  float *v3; // eax
  double v4; // st7
  int v5; // esi
  float angleZ; // [esp+14h] [ebp-8Ch]
  char v7[4]; // [esp+24h] [ebp-7Ch] BYREF
  int v8; // [esp+28h] [ebp-78h] BYREF
  int v9; // [esp+2Ch] [ebp-74h] BYREF
  float v10; // [esp+30h] [ebp-70h]
  NiMatrix33 v11; // [esp+34h] [ebp-6Ch] BYREF
  NiMatrix33 right; // [esp+58h] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+7Ch] [ebp-24h] BYREF

  if ( *(_DWORD *)(this + 0x30) ) /*0x6d91b6*/
  {
    if ( !NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime) ) /*0x6d91cb*/
    {
      v3 = (float *)sub_6EC8C0((_DWORD *)this, &v8, &v9, v7); /*0x6d91eb*/
      v4 = NiFloatKey_EvaluateTrack(*(float *)(this + 0x28), v3, v9, *(float *)&v8, (int *)(this + 0x3C), v7[0]); /*0x6d920b*/
      v5 = *(_DWORD *)(this + 0x30); /*0x6d9210*/
      v10 = v4; /*0x6d9213*/
      angleZ = -v10; /*0x6d9229*/
      qmemcpy(&v11, (const void *)(v5 + 0x30), sizeof(v11)); /*0x6d922d*/
      NiMatrix33_InitRotationZ(&right, angleZ); /*0x6d9236*/
      qmemcpy(&v11, NiMAtrix33_Multiply(&v11, &out, &right), sizeof(v11)); /*0x6d9259*/
      qmemcpy((void *)(*(_DWORD *)(this + 0x30) + 0x30), &v11, 0x24u); /*0x6d926a*/
    }
  }
}
