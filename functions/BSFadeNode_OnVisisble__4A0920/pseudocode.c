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

  Camera = a2->Camera;
  a2a = 0;
  if ( byte_B0727C )
  {
    v5 = *((unsigned __int8 *)this + 0xEC);
    LODAdjust = Camera->members.LODAdjust;
    v23 = *((float *)this + 0x22) - Camera->members.super.m_worldTransform.pos.x;
    v22 = *((float *)this + 0x23) - Camera->members.super.m_worldTransform.pos.y;
    v24 = *((float *)this + 0x24) - Camera->members.super.m_worldTransform.pos.z;
    switch ( v5 )
    {
      case 2:
        v18 = SettingLODFadeOutMultItems * flt_B075EC;
        v6 = LODAdjust / v18;
        goto LABEL_10;
      case 3:
        if ( TESDataHandler_g_PlayerRef && (BSFadeNode *)TESDataHandler_g_PlayerRef->inventoryPC == this )
          goto LABEL_3;
        v19 = SettingLODFadeOutMultActors * flt_B075F0;
        v6 = LODAdjust / v19;
        goto LABEL_10;
      case 6:
        v6 = 0.0;
        goto LABEL_10;
      case 7:
LABEL_3:
        NiNode::OnVisible((NiNode *)this, a2);
        return;
      default:
        v20 = SettingLODFadeOutMultObjects * flt_B075E8;
        v6 = LODAdjust / v20;
LABEL_10:
        v24 = v22 * v22 + v23 * v23 + v24 * v24;
        v24 = sqrt(v24);
        v23 = *((float *)this + 0xB);
        v21 = v24 - v23;
        v7 = v21;
        if ( v21 < 0.0 )
          v7 = (float)0.0;
        v16 = v6;
        v24 = v7 * (v16 * v16 * v7);
        v17 = 1.0;
        v8 = v24;
        if ( *((float *)this + 0x39) < (double)v24 )
        {
          *((float *)this + 0x3A) = 0.0;
          return;
        }
        if ( *((float *)this + 0x38) < v8 )
        {
          v24 = *((float *)this + 0x39) - *((float *)this + 0x38);
          v17 = 1.0 - 1.0 / (v24 / (v8 - *((float *)this + 0x38)));
        }
        switch ( v5 )
        {
          case 1:
            v9 = byte_B07634;
            goto LABEL_20;
          case 2:
            v9 = byte_B0763C;
            goto LABEL_20;
          case 3:
          case 7:
            v9 = byte_B07644;
LABEL_20:
            if ( v9 )
            {
              if ( flt_A3D65C >= (double)v17 )
                v17 = 0.0;
              else
                v17 = 1.0;
            }
            break;
          default:
            break;
        }
        ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)this, off_A3FA90);
        if ( ExtraData )
        {
          v24 = *(float *)&ExtraData[1].__vftable;
          v17 = v24 * v17;
          if ( v17 < 1.0 )
          {
            accumulator = (NiObject *)g_Renderer->member.super.accumulator;
            if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B42CEC, accumulator) )
            {
              sub_7AB960(accumulator, (float *)this + 8);
              a2a = 1;
            }
          }
        }
        if ( *((_BYTE *)this + 0xDC) )
        {
          if ( v17 == 1.0 )
          {
            if ( NiNode_GetNiPropertyByID((NiNode *)this, 0) )
            {
              sub_708560(this, (volatile LONG **)&v24, 0);
              sub_7016A0((NiD3DVertexShader *)&v24);
              sub_708560(this, (volatile LONG **)&v24, 2);
              sub_7016A0((NiD3DVertexShader *)&v24);
              NiAVObject_InitializePropertyState((NiAVObject *)this);
              sub_4A2A90((int)this, 1.0);
            }
          }
          else if ( v17 >= 0.0 )
          {
            sub_4A2A90((int)this, v17);
            if ( NiNode_GetNiPropertyByID((NiNode *)this, 0) )
            {
              NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)this, 2);
              ++NiPropertyByID[3].members.m_controller;
              *(float *)&NiPropertyByID[3].members.m_pcName = v17;
            }
            else
            {
              sub_708560(this, (volatile LONG **)&v23, 0);
              sub_7016A0((NiD3DVertexShader *)&v23);
              sub_405680((NiNode *)this, (BSShaderProperty *)dword_B35290);
              v12 = (volatile LONG *)FormHeapAlloc(0x5Cu);
              v24 = *(float *)&v12;
              v25 = 0;
              if ( v12 )
                v13 = NiMaterialProperty::NiMaterialProperty((NiMaterialProperty *)v12);
              else
                v13 = 0;
              ++*((_DWORD *)v13 + 0x15);
              *((float *)v13 + 0x14) = v17;
              v25 = 0xFFFFFFFF;
              sub_405680((NiNode *)this, (BSShaderProperty *)v13);
              NiAVObject_InitializePropertyState((NiAVObject *)this);
            }
          }
        }
        *((float *)this + 0x3A) = v17;
        break;
    }
  }
  NiNode::OnVisible((NiNode *)this, a2);
  if ( a2a )
    sub_7ABA90((_DWORD *)g_Renderer->member.super.accumulator);
}
