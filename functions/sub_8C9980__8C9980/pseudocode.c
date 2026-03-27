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

  if ( this && (v2 = (__m128 *)*(this + 2)) != 0 )
    v3 = v2 + 2;
  else
    v3 = (__m128 *)xmmword_B2F090;
  v13[0] = *v3;
  v13[1] = v3[1];
  v13[2] = v3[2];
  v14 = v3[3];
  sub_607740((int)v11, v13);
  sub_43F3E0(v12, &v14);
  v4 = (NiNode *)FormHeapAlloc(0xDCu);
  v15 = 0;
  if ( v4 )
    v5 = NiNode::NiNode(v4, 0);
  else
    v5 = 0;
  v15 = 0xFFFFFFFF;
  NiObjectNET_SetName((NiObjectNET *)v5, "bhkConvexTransformShape");
  (*(void (__thiscall **)(int, NiNode *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v5, 0);
  v6 = v12[1];
  v7 = v12[2];
  v5->members.super.m_localTransform.pos.x = v12[0];
  v5->members.super.m_localTransform.pos.y = v6;
  v5->members.super.m_localTransform.pos.z = v7;
  result = this;
  qmemcpy(&v5->members.super.m_localTransform, v11, 0x24u);
  if ( this && (result = (_DWORD *)*(this + 2)) != 0 && (result = (_DWORD *)result[4]) != 0 )
    v9 = result[2];
  else
    v9 = 0;
  if ( v9 )
    return (_DWORD *)(*(int (__thiscall **)(int, NiNode *))(*(_DWORD *)v9 + 0x90))(v9, v5);
  return result;
}
