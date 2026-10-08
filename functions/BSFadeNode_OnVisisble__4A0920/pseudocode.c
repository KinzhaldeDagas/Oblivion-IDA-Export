// Retail BSFadeNode OnVisible entry. Uses the current culling camera and category/visibility state to decide whether and how to traverse children.
void __thiscall BSFadeNode::OnVisisble(BSFadeNode *this, NiCullingProcess *a2)
{
  NiCamera *Camera; // eax
  int v5; // edi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  char v9; // al
  NiExtraData *ExtraData; // eax
  NiObject *accumulator; // edi
  volatile LONG *v12; // eax
  NiMaterialProperty *v13; // eax
  NiProperty *NiPropertyByID; // eax
  float LODAdjust; // [esp+14h] [ebp-20h]
  float v16; // [esp+14h] [ebp-20h]
  float v17; // [esp+14h] [ebp-20h]
  float v18; // [esp+18h] [ebp-1Ch]
  float v19; // [esp+18h] [ebp-1Ch]
  float v20; // [esp+18h] [ebp-1Ch]
  float v21; // [esp+18h] [ebp-1Ch]
  float v22; // [esp+1Ch] [ebp-18h]
  float v23; // [esp+20h] [ebp-14h] BYREF
  float v24; // [esp+24h] [ebp-10h] BYREF
  unsigned int v25; // [esp+30h] [ebp-4h]
  char a2a; // [esp+38h] [ebp+4h]

  Camera = a2->Camera;                          // BSFadeNode visibility calculations read the current NiCullingProcess camera. /*0x4a0953*/
  a2a = 0; /*0x4a0956*/
  if ( byte_B0727C ) /*0x4a0948*/
  {
    v5 = *((unsigned __int8 *)this + 0xEC);     // Read BSFadeNode category byte +0xEC for native OnVisible dispatch. /*0x4a0967*/
    LODAdjust = Camera->members.LODAdjust; /*0x4a096e*/
    v23 = *((float *)this + 0x22) - Camera->members.super.m_worldTransform.pos.x; /*0x4a097e*/
    v22 = *((float *)this + 0x23) - Camera->members.super.m_worldTransform.pos.y; /*0x4a098e*/
    v24 = *((float *)this + 0x24) - Camera->members.super.m_worldTransform.pos.z; /*0x4a09a4*/
    switch ( v5 ) /*0x4a09aa*/
    {
      case 2: /*0x4a09aa*/
        v18 = SettingLODFadeOutMultItems * flt_B075EC; /*0x4a09e0*/
        v6 = LODAdjust / v18; /*0x4a09e4*/
        goto LABEL_10; /*0x4a09e8*/
      case 3: /*0x4a09aa*/
        if ( reference && (BSFadeNode *)reference->inventoryPC == this ) /*0x4a09f9*/
          goto LABEL_3; /*0x4a09f9*/
        v19 = SettingLODFadeOutMultActors * flt_B075F0; /*0x4a0a0b*/
        v6 = LODAdjust / v19; /*0x4a0a0f*/
        goto LABEL_10; /*0x4a0a13*/
      case 6: /*0x4a09aa*/
        v6 = 0.0; /*0x4a09cc*/
        goto LABEL_10; /*0x4a09ce*/
      case 7: /*0x4a09aa*/
LABEL_3:
        NiNode::OnVisible((NiNode *)this, a2);  // Retail category 7 branch enters ordinary NiNode OnVisible child traversal. /*0x4a09b1*/
        return; /*0x4a09c9*/
      default:
        v20 = SettingLODFadeOutMultObjects * flt_B075E8; /*0x4a0a25*/
        v6 = LODAdjust / v20; /*0x4a0a29*/
LABEL_10:
        v24 = v22 * v22 + v23 * v23 + v24 * v24; /*0x4a0a2d*/
        v24 = sqrt(v24); /*0x4a0a5a*/
        v23 = *((float *)this + 0xB); /*0x4a0a69*/
        v21 = v24 - v23; /*0x4a0a75*/
        v7 = v21; /*0x4a0a7b*/
        if ( v21 < 0.0 ) /*0x4a0a86*/
          v7 = (float)0.0; /*0x4a0a8e*/
        v16 = v6; /*0x4a0a2d*/
        v24 = v7 * (v16 * v16 * v7); /*0x4a0a9c*/
        v17 = 1.0; /*0x4a0aa2*/
        v8 = v24; /*0x4a0aa6*/
        if ( *((float *)this + 0x39) < (double)v24 )// When camera-scaled surface distance exceeds BSFadeNode far threshold +0xE4, alpha becomes zero and OnVisible can return before child traversal. /*0x4a0ab7*/
        {
          *((float *)this + 0x3A) = 0.0; /*0x4a0abd*/
          return; /*0x4a0ad5*/
        }
        if ( *((float *)this + 0x38) < v8 ) /*0x4a0ae5*/
        {
          v24 = *((float *)this + 0x39) - *((float *)this + 0x38); /*0x4a0af3*/
          v17 = 1.0 - 1.0 / (v24 / (v8 - *((float *)this + 0x38))); /*0x4a0b0b*/
        }
        switch ( v5 ) /*0x4a0b1b*/
        {
          case 1: /*0x4a0b1b*/
            v9 = byte_B07634; /*0x4a0b30*/
            goto LABEL_20; /*0x4a0b30*/
          case 2: /*0x4a0b1b*/
            v9 = byte_B0763C; /*0x4a0b29*/
            goto LABEL_20; /*0x4a0b2e*/
          case 3: /*0x4a0b1b*/
          case 7: /*0x4a0b1b*/
            v9 = byte_B07644; /*0x4a0b22*/
LABEL_20:
            if ( v9 ) /*0x4a0b37*/
            {
              if ( kHeadBodyNormalMatchRadius >= (double)v17 ) /*0x4a0b48*/
                v17 = 0.0; /*0x4a0b54*/
              else
                v17 = 1.0; /*0x4a0b4c*/
            }
            break; /*0x4a0b50*/
          default:
            break;
        }
        ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)this, off_A3FA90); /*0x4a0b5e*/
        if ( ExtraData ) /*0x4a0b6c*/
        {
          v24 = *(float *)&ExtraData[1].__vftable; /*0x4a0b71*/
          v17 = v24 * v17; /*0x4a0b7d*/
          if ( v17 < 1.0 ) /*0x4a0b8c*/
          {
            accumulator = (NiObject *)renderer->member.super.accumulator; /*0x4a0b93*/
            if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)stru_B42CEC, accumulator) ) /*0x4a0b9c*/
            {
              sub_7AB960(accumulator, (float *)this + 8); /*0x4a0bae*/
              a2a = 1; /*0x4a0bb3*/
            }
          }
        }
        if ( *((_BYTE *)this + 0xDC) ) /*0x4a0bb8*/
        {
          if ( v17 == 1.0 ) /*0x4a0bd4*/
          {
            if ( NiNode_GetNiPropertyByID((NiNode *)this, 0) ) /*0x4a0bdc*/
            {
              sub_708560((int **)this, (volatile LONG **)&v24, 0); /*0x4a0bf2*/
              NiPointerSlot_Release((NiD3DVertexShader *)&v24); /*0x4a0bfb*/
              sub_708560((int **)this, (volatile LONG **)&v24, 2); /*0x4a0c09*/
              NiPointerSlot_Release((NiD3DVertexShader *)&v24); /*0x4a0c12*/
              NiAVObject_InitializePropertyState((NiAVObject *)this); /*0x4a0c19*/
              sub_4A2A90((int)this, 1.0); /*0x4a0c25*/
            }
          }
          else if ( v17 >= 0.0 ) /*0x4a0c3b*/
          {
            sub_4A2A90((int)this, v17); /*0x4a0c46*/
            if ( NiNode_GetNiPropertyByID((NiNode *)this, 0) ) /*0x4a0c52*/
            {
              NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)this, 2); /*0x4a0ccc*/
              ++NiPropertyByID[3].members.m_controller; /*0x4a0cd5*/
              *(float *)&NiPropertyByID[3].members.m_pcName = v17; /*0x4a0cd9*/
            }
            else
            {
              sub_708560((int **)this, (volatile LONG **)&v23, 0); /*0x4a0c63*/
              NiPointerSlot_Release((NiD3DVertexShader *)&v23); /*0x4a0c6c*/
              sub_405680((NiNode *)this, *(BSShaderProperty **)&MEMORY[0xB33E90][0x1400]); /*0x4a0c7a*/
              v12 = (volatile LONG *)FormHeapAlloc(0x5Cu); /*0x4a0c81*/
              v24 = *(float *)&v12; /*0x4a0c89*/
              v25 = 0; /*0x4a0c8f*/
              if ( v12 ) /*0x4a0c97*/
                v13 = NiMaterialProperty::NiMaterialProperty((NiMaterialProperty *)v12); /*0x4a0c9b*/
              else
                v13 = 0; /*0x4a0ca2*/
              ++*((_DWORD *)v13 + 0x15); /*0x4a0ca8*/
              *((float *)v13 + 0x14) = v17; /*0x4a0cad*/
              v25 = 0xFFFFFFFF; /*0x4a0cb2*/
              sub_405680((NiNode *)this, (BSShaderProperty *)v13); /*0x4a0cba*/
              NiAVObject_InitializePropertyState((NiAVObject *)this); /*0x4a0cc1*/
            }
          }
        }
        *((float *)this + 0x3A) = v17; /*0x4a0ce4*/
        break; /*0x4a0ce4*/
    }
  }
  NiNode::OnVisible((NiNode *)this, a2); /*0x4a0ced*/
  if ( a2a ) /*0x4a0cf7*/
    sub_7ABA90((_DWORD *)renderer->member.super.accumulator); /*0x4a0d01*/
}
