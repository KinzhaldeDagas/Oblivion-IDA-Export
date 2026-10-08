// Oblivion: updates the selected accumulation item (+0x0F) at a requested time. On backward/wrapped time it samples the interpolator range endpoints and composes the wrap delta into the per-item 0x68-byte state and blend cache before sampling the requested time.
void __thiscall NiBlendAccumTransformInterpolator_UpdateSelectedItem(int this, float a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  NiPoint3 *v6; // ebp
  double v7; // st7
  float v8; // [esp+20h] [ebp-A4h]
  int v9; // [esp+38h] [ebp-8Ch] BYREF
  int v10; // [esp+3Ch] [ebp-88h] BYREF
  int v11; // [esp+40h] [ebp-84h]
  float v12[8]; // [esp+44h] [ebp-80h] BYREF
  float v13[8]; // [esp+64h] [ebp-60h] BYREF
  float v14[8]; // [esp+84h] [ebp-40h] BYREF
  _BYTE v15[32]; // [esp+A4h] [ebp-20h] BYREF

  v3 = this; /*0x6cee29*/
  v4 = *(unsigned __int8 *)(this + 0xF); /*0x6cee2b*/
  v5 = *(_DWORD *)(*(_DWORD *)(this + 0x14) + 0x18 * v4); /*0x6cee3b*/
  v6 = (NiPoint3 *)(*(_DWORD *)(this + 0x50) + 0x68 * v4); /*0x6cee3e*/
  v11 = this; /*0x6cee40*/
  v7 = a2; /*0x6cee54*/
  if ( a2 != v6->x ) /*0x6cee59*/
  {
    if ( v6->x > v7 ) /*0x6cee69*/
    {
      if ( NiTransform_IsInvalid(&v6[3].x) ) /*0x6cee77*/
      {
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v5 + 0x80))(v5, &v10, &v9); /*0x6cee98*/
        sub_470AB0(v12); /*0x6cee9e*/
        (*(void (__thiscall **)(int, int, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, v10, a3, v12); /*0x6ceebf*/
        sub_470AB0(v13); /*0x6ceec5*/
        (*(void (__thiscall **)(int, int, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, v9, a3, v13); /*0x6ceedf*/
        sub_470AB0(v14); /*0x6ceee5*/
        sub_6CB4D0(v12, (int)v14); /*0x6ceef3*/
        qmemcpy(&v6[3], sub_6CB640(v13, (int)v15, (NiPoint3 *)v14), 0x20u); /*0x6cef15*/
        v3 = v11; /*0x6cef17*/
      }
      if ( !NiTransform_IsInvalid((float *)(v3 + 0x30)) ) /*0x6cef20*/
        qmemcpy((void *)(v3 + 0x30), sub_6CB640((float *)(v3 + 0x30), (int)v15, v6 + 3), 0x20u); /*0x6cef43*/
      v7 = a2; /*0x6cef45*/
    }
    v8 = v7; /*0x6cef61*/
    (*(void (__thiscall **)(int, _DWORD, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, LODWORD(v8), a3, &v6->y); /*0x6cef64*/
    v7 = a2; /*0x6cef66*/
  }
  v6->x = v7; /*0x6cef6e*/
}
