_DWORD *__thiscall sub_8C9980(_DWORD *this, int a2)
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

  if ( this && (v2 = (__m128 *)*(this + 2)) != 0 ) /*0x8c99d2*/
    v3 = v2 + 2; /*0x8c99d4*/
  else
    v3 = (__m128 *)xmmword_B2F090; /*0x8c99d9*/
  v13[0] = *v3; /*0x8c99e1*/
  v13[1] = v3[1]; /*0x8c99ea*/
  v13[2] = v3[2]; /*0x8c99f3*/
  v14 = v3[3]; /*0x8c9a06*/
  sub_607740((int)v11, v13); /*0x8c9a0e*/
  HavokVector_ToWorldVector(v12, &v14); /*0x8c9a20*/
  v4 = (NiNode *)FormHeapAlloc(0xDCu); /*0x8c9a2a*/
  v15 = 0; /*0x8c9a38*/
  if ( v4 ) /*0x8c9a43*/
    v5 = NiNode::NiNode(v4, 0); /*0x8c9a4e*/
  else
    v5 = 0; /*0x8c9a52*/
  v15 = 0xFFFFFFFF; /*0x8c9a5b*/
  NiObjectNET_SetName((NiObjectNET *)v5, "bhkConvexTransformShape"); /*0x8c9a66*/
  (*(void (__thiscall **)(int, NiNode *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v5, 0); /*0x8c9a78*/
  v6 = v12[1]; /*0x8c9a7e*/
  v7 = v12[2]; /*0x8c9a82*/
  v5->members.super.m_localTransform.pos.x = v12[0]; /*0x8c9a86*/
  v5->members.super.m_localTransform.pos.y = v6; /*0x8c9a89*/
  v5->members.super.m_localTransform.pos.z = v7; /*0x8c9a8c*/
  result = this; /*0x8c9a8f*/
  qmemcpy(&v5->members.super.m_localTransform, v11, 0x24u); /*0x8c9aa1*/
  if ( this && (result = (_DWORD *)*(this + 2)) != 0 && (result = (_DWORD *)result[4]) != 0 ) /*0x8c9ab1*/
    v9 = result[2]; /*0x8c9ab3*/
  else
    v9 = 0; /*0x8c9ab8*/
  if ( v9 ) /*0x8c9abc*/
    return (*(_DWORD *(__thiscall **)(int, NiNode *))(*(_DWORD *)v9 + 0x90))(v9, v5); /*0x8c9ac7*/
  return result; /*0x8c9ac9*/
}
