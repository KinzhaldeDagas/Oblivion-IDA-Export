// CULLING goal 2026-09-27: skin-bound helper transforms per-bone bounds by corresponding bone world transforms and merges them, then applies a transform composed from skin data and inverse root world transform. Output feeds geometry world-bound transformation at 0x722AA0. Bone update/transform freshness remains part of bound validity; no static-mesh substitution.
int __thiscall sub_72BB30(int this, float *a2)
{
  int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // esi
  NiPoint3 *v6; // ebx
  float v8[4]; // [esp+10h] [ebp-BCh] BYREF
  float v9[4]; // [esp+20h] [ebp-ACh] BYREF
  NiTransform local; // [esp+30h] [ebp-9Ch] BYREF
  NiTransform v11; // [esp+64h] [ebp-68h] BYREF
  NiTransform out; // [esp+98h] [ebp-34h] BYREF

  v3 = *(_DWORD *)(*(_DWORD *)(this + 8) + 0x44); /*0x72bb44*/
  NiBound_TransformInto(v8, (NiPoint3 *)(v3 + 0x34), (NiTransform *)(**(_DWORD **)(this + 0x14) + 0x64)); /*0x72bb53*/
  v4 = *(_DWORD *)(*(_DWORD *)(this + 8) + 0x40); /*0x72bb5b*/
  v5 = 1; /*0x72bb5e*/
  if ( v4 > 1 ) /*0x72bb65*/
  {
    v6 = (NiPoint3 *)(v3 + 0x80); /*0x72bb67*/
    do /*0x72bb9a*/
    {
      NiBound_TransformInto(v9, v6, (NiTransform *)(*(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * v5) + 0x64)); /*0x72bb7f*/
      NiSphere_Merge(v8, v9); /*0x72bb8d*/
      ++v5; /*0x72bb92*/
      v6 = (NiPoint3 *)((char *)v6 + 0x4C); /*0x72bb95*/
    }
    while ( v5 < v4 ); /*0x72bb9a*/
  }
  sub_718A80((float *)(*(_DWORD *)(this + 0x10) + 0x64), &local); /*0x72bba7*/
  qmemcpy(&v11, NiTransform_Compose((const NiTransform *)(*(_DWORD *)(this + 8) + 0xC), &out, &local), sizeof(v11)); /*0x72bbd8*/
  return NiBound_TransformInto(a2, (NiPoint3 *)v8, &v11); /*0x72bbe7*/
}
