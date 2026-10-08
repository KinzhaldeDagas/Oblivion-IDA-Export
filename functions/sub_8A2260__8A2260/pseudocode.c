_DWORD *__thiscall sub_8A2260(_DWORD *this, int a2)
{
  __m128 *v2; // eax
  __m128 *v3; // eax
  NiNode *v4; // eax
  NiNode *v5; // ebx
  float v6; // edx
  float v7; // eax
  _DWORD *result; // eax
  int v9; // ecx
  _BYTE v11[36]; // [esp+20h] [ebp-94h] BYREF
  float v12[4]; // [esp+44h] [ebp-70h] BYREF
  __m128 v13[3]; // [esp+54h] [ebp-60h] BYREF
  __m128 v14; // [esp+84h] [ebp-30h] BYREF
  unsigned int v15; // [esp+B0h] [ebp-4h]

  if ( this && (v2 = (__m128 *)*(this + 2)) != 0 ) /*0x8a22b2*/
    v3 = v2 + 2; /*0x8a22b4*/
  else
    v3 = (__m128 *)xmmword_B2F090; /*0x8a22b9*/
  v13[0] = *v3; /*0x8a22c1*/
  v13[1] = v3[1]; /*0x8a22ca*/
  v13[2] = v3[2]; /*0x8a22d3*/
  v14 = v3[3]; /*0x8a22e6*/
  sub_607740((int)v11, v13); /*0x8a22ee*/
  HavokVector_ToWorldVector(v12, &v14); /*0x8a2300*/
  v4 = (NiNode *)FormHeapAlloc(0xDCu); /*0x8a230a*/
  v15 = 0; /*0x8a2318*/
  if ( v4 ) /*0x8a2323*/
    v5 = NiNode::NiNode(v4, 0); /*0x8a232e*/
  else
    v5 = 0; /*0x8a2332*/
  v15 = 0xFFFFFFFF; /*0x8a233b*/
  NiObjectNET_SetName((NiObjectNET *)v5, "bhkTransformShape"); /*0x8a2346*/
  (*(void (__thiscall **)(int, NiNode *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v5, 0); /*0x8a2358*/
  v6 = v12[1]; /*0x8a235e*/
  v7 = v12[2]; /*0x8a2362*/
  v5->members.super.m_localTransform.pos.x = v12[0]; /*0x8a2366*/
  v5->members.super.m_localTransform.pos.y = v6; /*0x8a2369*/
  v5->members.super.m_localTransform.pos.z = v7; /*0x8a236c*/
  result = this; /*0x8a236f*/
  qmemcpy(&v5->members.super.m_localTransform, v11, 0x24u); /*0x8a2381*/
  if ( this && (result = (_DWORD *)*(this + 2)) != 0 && (result = (_DWORD *)result[3]) != 0 ) /*0x8a2391*/
    v9 = result[2]; /*0x8a2393*/
  else
    v9 = 0; /*0x8a2398*/
  if ( v9 ) /*0x8a239c*/
    return (*(_DWORD *(__thiscall **)(int, NiNode *))(*(_DWORD *)v9 + 0x90))(v9, v5); /*0x8a23a7*/
  return result; /*0x8a23a9*/
}
