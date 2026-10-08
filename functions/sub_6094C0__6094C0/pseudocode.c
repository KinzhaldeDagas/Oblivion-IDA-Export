// Collision state 2: restore saved static/world position, switch geometry and collision filtering to settled projectile values, and assign the shared settled-projectile collision group.
char __thiscall ArrowProjectile_ResolveStaticPlacementState2(ArrowProjectile *this, void *collisionObject)
{
  float *v3; // edi
  NiNode *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx

  this->super.vtbl->Unk_72((MobileObject *)this); /*0x6094cc*/
  v3 = &this->unk05C->unk00[1]; /*0x6094db*/
  v4 = this->super.vtbl->super.GetNiNode(this); /*0x6094de*/
  v4->members.super.m_localTransform.pos.x = *v3; /*0x6094e2*/
  v4->members.super.m_localTransform.pos.y = v3[1]; /*0x6094e8*/
  v4->members.super.m_localTransform.pos.z = v3[2]; /*0x6094ee*/
  TESObjectREFR_SetPosition( /*0x60950f*/
    (TESObjectREFR *)this,
    this->unk05C->unk00[1],
    this->unk05C->unk00[2],
    this->unk05C->unk00[3]);
  if ( collisionObject && (v5 = *((_DWORD *)collisionObject + 2)) != 0 && (v6 = v5 + 0x14) != 0 ) /*0x609526*/
    v7 = *(_DWORD *)(v6 + 0x1C); /*0x609528*/
  else
    v7 = 0; /*0x60952d*/
  v8 = v7 & 0xFFFFBFC0 | 0xF; /*0x609534*/
  if ( collisionObject ) /*0x609539*/
  {
    v9 = *((_DWORD *)collisionObject + 2); /*0x60953b*/
    if ( v9 ) /*0x609540*/
    {
      v10 = v9 + 0x14; /*0x609542*/
      if ( v10 ) /*0x609545*/
        *(_DWORD *)(v10 + 0x1C) = v8; /*0x609547*/
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)collisionObject + 0x80))(collisionObject); /*0x609554*/
  v11 = unk_B3B7D4; /*0x609556*/
  if ( !unk_B3B7D4 ) /*0x609556*/
  {
    v11 = (unsigned __int16)(dword_B2EB3C + 1); /*0x609567*/
    dword_B2EB3C = v11; /*0x60956c*/
    if ( !v11 ) /*0x609571*/
    {
      v11 = 0xA; /*0x609573*/
      dword_B2EB3C = 0xA; /*0x609578*/
    }
    unk_B3B7D4 = v11; /*0x60957d*/
  }
  v12 = *((_DWORD *)collisionObject + 2); /*0x609582*/
  v13 = (v11 << 0x10) | 0xF; /*0x609588*/
  if ( v12 ) /*0x60958d*/
  {
    v14 = v12 + 0x14; /*0x60958f*/
    if ( v14 ) /*0x609592*/
      *(_DWORD *)(v14 + 0x1C) = v13; /*0x609594*/
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)collisionObject + 0x80))(collisionObject); /*0x6095a1*/
  return 1; /*0x6095a3*/
}
