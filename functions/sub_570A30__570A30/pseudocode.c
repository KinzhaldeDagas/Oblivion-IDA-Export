void __stdcall BSTempEffectParticle_AdjustTextureTransforms(NiObject *a1)
{
  unsigned int i; // ebx
  int v2; // esi
  unsigned int v3; // [esp+14h] [ebp-68h] BYREF
  NiTArray_NiTexturingPropertyMap v4; // [esp+18h] [ebp-64h] BYREF
  float v5[9]; // [esp+28h] [ebp-54h] BYREF
  float v6[12]; // [esp+4Ch] [ebp-30h] BYREF

  v4.capacity = 0xA; /*0x570a62*/
  v4._vtbl = &NiTArray<NiAVObject *>::`vftable'; /*0x570a71*/
  v4.growSize = 1; /*0x570a79*/
  v4.end = 0; /*0x570a80*/
  v4.numObjs = 0; /*0x570a85*/
  v4.data = (NiTexturingProperty_Map *)FormHeapAlloc(0x28u); /*0x570a97*/
  v6[0xB] = 0.0; /*0x570aaf*/
  v3 = 0; /*0x570ab6*/
  sub_5708F0(a1, &v4, &v3); /*0x570aba*/
  for ( i = 0; i < v4.end; ++i ) /*0x570ac6*/
  {
    v2 = *((_DWORD *)&v4.data->vtbl + i); /*0x570ad4*/
    if ( v2 ) /*0x570ad9*/
    {
      sub_7103C0((float *)(*(_DWORD *)(v2 + 0x1C) + 0x64), v5); /*0x570ae6*/
      qmemcpy((void *)(v2 + 0x30), NiMAtrix33_Multiply(v5, v6, (float *)(v2 + 0x30)), 0x24u); /*0x570b04*/
    }
  }
  v4._vtbl = &NiTArray<NiAVObject *>::`vftable'; /*0x570b17*/
  FormHeapFree((unsigned int)v4.data); /*0x570b1f*/
}
