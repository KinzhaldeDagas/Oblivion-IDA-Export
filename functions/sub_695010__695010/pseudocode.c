void __thiscall sub_695010(MagicBallProjectile *this)
{
  NiNode *v2; // eax
  NiNode *v3; // ebx
  float *v4; // eax
  float x; // ecx
  float z; // eax
  NiObject *v7; // eax
  NiObject *v8; // esi
  float v9; // edi
  float a2[2]; // [esp+1Ch] [ebp-34h] BYREF
  float y; // [esp+24h] [ebp-2Ch]
  float v12; // [esp+28h] [ebp-28h]
  float v13[9]; // [esp+2Ch] [ebp-24h] BYREF

  v2 = this->super.super.vtbl->super.GetNiNode(this);
  v3 = v2;
  if ( v2 )
  {
    a2[0] = fabs(this->unk084);
    v2->members.super.m_localTransform.scale = a2[0];
    v4 = this->super.super.vtbl->super.GetPos(this);
    v3->members.super.m_localTransform.pos.x = *v4;
    v3->members.super.m_localTransform.pos.y = v4[1];
    v3->members.super.m_localTransform.pos.z = v4[2];
    x = this->super.super.super.rot.x;
    z = this->super.super.super.rot.z;
    y = this->super.super.super.rot.y;
    a2[1] = x;
    v12 = z;
    sub_7117C0(v13, z, x, y);
    qmemcpy(&v3->members.super.m_localTransform, v13, 0x24u);
    sub_6F94E0((int *)v3);
    v7 = NiRTTI_Cast(&stru_B3CAC0, (NiObject *)v3->members.super.super.m_controller);
    v8 = v7;
    if ( v7 )
    {
      if ( NiTMap_GetAt(&v7[0xB].__vftable, (int)"SpecialIdle_Projectile", a2) )
      {
        v9 = a2[0];
        if ( LODWORD(a2[0]) )
        {
          sub_4715C0(v8, 0.0);
          sub_6C9BA0((_DWORD *)LODWORD(v9), 0, 0, 1.0, 0.0, 0, 0);
          LOWORD(v8[1].__vftable) |= 8u;
          *(float *)(LODWORD(v9) + 0x48) = -flt_A7DEB4;
          a2[0] = flt_B33A30 - dbl_A2FC80;
          NiAVObject_UpdateNiAVObject((NiAVObject *)v3, a2[0], 1);
        }
      }
    }
  }
}
