// Mutates every nonempty transform channel to guarantee keys at start/end: rotation content 2, translation content 1, scale content 0. Euler rotation is handled recursively by the generic key helper.
void __thiscall NiTransformData_GuaranteeTimeRange(int this, float a2, float a3)
{
  unsigned __int16 v4; // ax
  int v5; // ecx
  int v6; // eax
  unsigned __int16 v7; // ax
  int v8; // edx
  int v9; // ecx
  unsigned __int16 v10; // ax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // [esp+Ch] [ebp-8h] BYREF
  int v15; // [esp+10h] [ebp-4h] BYREF

  v4 = *(_WORD *)(this + 8); /*0x6e1b06*/
  if ( v4 ) /*0x6e1b0d*/
  {
    v5 = *(_DWORD *)(this + 0x20); /*0x6e1b13*/
    v14 = v4; /*0x6e1b2c*/
    v15 = v5; /*0x6e1b34*/
    NiAnimationKey_GuaranteeTimeRange(2, *(_DWORD *)(this + 0x10), (float **)&v15, &v14, a2, a3); /*0x6e1b3f*/
    v6 = v15; /*0x6e1b49*/
    *(_WORD *)(this + 8) = v14; /*0x6e1b50*/
    *(_DWORD *)(this + 0x20) = v6; /*0x6e1b54*/
  }
  v7 = *(_WORD *)(this + 0xA); /*0x6e1b57*/
  if ( v7 ) /*0x6e1b5e*/
  {
    v8 = *(_DWORD *)(this + 0x24); /*0x6e1b64*/
    v14 = v7; /*0x6e1b7d*/
    v15 = v8; /*0x6e1b85*/
    NiAnimationKey_GuaranteeTimeRange(1, *(_DWORD *)(this + 0x14), (float **)&v15, &v14, a2, a3); /*0x6e1b90*/
    v9 = v15; /*0x6e1b9a*/
    *(_WORD *)(this + 0xA) = v14; /*0x6e1ba1*/
    *(_DWORD *)(this + 0x24) = v9; /*0x6e1ba5*/
  }
  v10 = *(_WORD *)(this + 0xC); /*0x6e1ba8*/
  if ( v10 ) /*0x6e1baf*/
  {
    v11 = v10; /*0x6e1bbc*/
    v12 = *(_DWORD *)(this + 0x28); /*0x6e1bbf*/
    v14 = v11; /*0x6e1bce*/
    v15 = v12; /*0x6e1bd6*/
    NiAnimationKey_GuaranteeTimeRange(0, *(_DWORD *)(this + 0x18), (float **)&v15, &v14, a2, a3); /*0x6e1be1*/
    v13 = v15; /*0x6e1beb*/
    *(_WORD *)(this + 0xC) = v14; /*0x6e1bf2*/
    *(_DWORD *)(this + 0x28) = v13; /*0x6e1bf6*/
  }
}
