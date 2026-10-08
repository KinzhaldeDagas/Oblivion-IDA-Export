// MagicBallProjectile SpecialIdle setup. Synchronizes projectile node transform and starts SpecialIdle_Projectile sequence from the controller-manager text-key map.
void __thiscall sub_695010(MagicBallProjectile *this)
{
  NiNode *v2; // eax
  NiNode *v3; // ebx
  float *v4; // eax
  float x; // ecx
  float z; // eax
  NiObject *v7; // eax
  NiObject *v8; // esi
  float *v9; // edi
  float a2[2]; // [esp+1Ch] [ebp-34h] BYREF
  float y; // [esp+24h] [ebp-2Ch]
  float v12; // [esp+28h] [ebp-28h]
  float v13[9]; // [esp+2Ch] [ebp-24h] BYREF

  v2 = this->super.super.vtbl->super.GetNiNode(this); /*0x69501f*/
  v3 = v2; /*0x695021*/
  if ( v2 ) /*0x695025*/
  {
    a2[0] = fabs(this->unk084); /*0x695036*/
    v2->members.super.m_localTransform.scale = a2[0]; /*0x69503e*/
    v4 = this->super.super.vtbl->super.GetPos(this); /*0x695049*/
    v3->members.super.m_localTransform.pos.x = *v4; /*0x69504d*/
    v3->members.super.m_localTransform.pos.y = v4[1]; /*0x695053*/
    v3->members.super.m_localTransform.pos.z = v4[2]; /*0x695059*/
    x = this->super.super.super.rot.x; /*0x69505f*/
    z = this->super.super.super.rot.z; /*0x695062*/
    y = this->super.super.super.rot.y; /*0x695068*/
    a2[1] = x; /*0x695074*/
    v12 = z; /*0x69507c*/
    NiMatrix33_SetEulerZXY(v13, z, x, y); /*0x69508f*/
    qmemcpy(&v3->members.super.m_localTransform, v13, 0x24u); /*0x6950a1*/
    sub_6F94E0((int *)v3); /*0x6950a3*/
    v7 = NiRTTI_Cast(&stru_B3CAC0, (NiObject *)v3->members.super.super.m_controller); /*0x6950b1*/
    v8 = v7; /*0x6950b6*/
    if ( v7 ) /*0x6950bd*/
    {                                           // Projectile update directly looks up SpecialIdle_Projectile in projectile NiNode controller manager sequence map.
      if ( NiTMap_GetAt(&v7[0xB].__vftable, (int)"SpecialIdle_Projectile", a2) ) /*0x6950cc*/
      {
        v9 = (float *)LODWORD(a2[0]); /*0x6950d5*/
        if ( LODWORD(a2[0]) ) /*0x6950db*/
        {
          NiControllerManager_DeactivateAllSequences(v8, 0.0); /*0x6950e5*/
          NiControllerSequence_Activate(v9, 0, 0, 1.0, 0.0, 0, 0); /*0x695102*/
          LOWORD(v8[1].__vftable) |= 8u; /*0x695107*/
          v9[0x12] = -flt_A7DEB4; /*0x695116*/
          a2[0] = source - dbl_A2FC80; /*0x695128*/
          NiAVObject_UpdateNiAVObject((NiAVObject *)v3, a2[0], 1); /*0x695133*/
        }
      }
    }
  }
}
