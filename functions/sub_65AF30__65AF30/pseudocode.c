// TES4 authoritative: MobileObject movement step. Builds local movement/update packet and calls CharProxy vtable +0x80; for bhkCharacterController that dispatches to 0x896000. Entry point for per-actor movement discipline injection before controller integration.
__m128 *__thiscall MobileObject_Move(MobileObject *this, float arg0, NiPoint3 *a4, int arg8)
{
  bhkCharacterProxy *CharProxy; // ebx
  char v6; // al
  const char *v7; // eax
  unsigned int v8; // edx
  NiTransform *v9; // eax
  float *v10; // eax
  double v11; // st7
  NiPoint3 *p_pos; // eax
  float *v14; // eax
  NiTransform *v15; // eax
  NiTransform *v16; // eax
  float v17; // edx
  float x; // ecx
  float v19; // edx
  float v20; // ecx
  int v21; // edx
  float v22; // eax
  LowProcess *process; // ecx
  float *v24; // eax
  float v25; // ecx
  float v26; // edx
  float v27; // eax
  float v28; // ecx
  float v29; // eax
  NiTransform *v30; // eax
  double v31; // st7
  double v32; // st7
  NiTransform *v33; // eax
  NiTransform *v34; // eax
  void (__thiscall *Unk_73)(MobileObject *); // edx
  int v36; // eax
  NiTransform *v37; // eax
  double v38; // st7
  double v39; // st7
  int X_4; // [esp+Ch] [ebp-C4h]
  NiNode *X_4a; // [esp+Ch] [ebp-C4h]
  char v42; // [esp+23h] [ebp-ADh]
  float y; // [esp+24h] [ebp-ACh]
  float v44; // [esp+24h] [ebp-ACh]
  float Radius; // [esp+24h] [ebp-ACh]
  float v46; // [esp+24h] [ebp-ACh]
  float v47; // [esp+24h] [ebp-ACh]
  float z; // [esp+28h] [ebp-A8h]
  NiNode *v49; // [esp+28h] [ebp-A8h]
  float v50; // [esp+28h] [ebp-A8h]
  float v51; // [esp+28h] [ebp-A8h]
  char v52; // [esp+2Fh] [ebp-A1h]
  float v53; // [esp+30h] [ebp-A0h]
  float v54; // [esp+30h] [ebp-A0h]
  float v55; // [esp+34h] [ebp-9Ch]
  float v56; // [esp+34h] [ebp-9Ch]
  float v57; // [esp+38h] [ebp-98h]
  float v58; // [esp+38h] [ebp-98h]
  NiPoint3 v59; // [esp+3Ch] [ebp-94h] BYREF
  NiPoint3 a2; // [esp+48h] [ebp-88h] BYREF
  NiTransform a3; // [esp+54h] [ebp-7Ch] BYREF
  NiTransform v62; // [esp+88h] [ebp-48h] BYREF

  CharProxy = MobileObject_GetCharProxy(this); /*0x65af46*/
  v6 = ((int (__thiscall *)(MobileObject *))this->vtbl->super.Unk_3A)(this); /*0x65af52*/
  a3.rot.data[1][0] = this->super.rot.x; /*0x65af57*/
  v52 = v6; /*0x65af5b*/
  y = this->super.rot.y; /*0x65af62*/
  z = this->super.rot.z; /*0x65af69*/
  if ( a3.rot.data[1][0] == dbl_A3A5B0 /*0x65b014*/
    || _isnan(a3.rot.data[1][0])
    || !_finite(a3.rot.data[1][0])
    || y == dbl_A3A5B0
    || _isnan(y)
    || !_finite(y)
    || z == dbl_A3A5B0
    || _isnan(z)
    || !_finite(z) )
  {
    v7 = (const char *)((int (__thiscall *)(MobileObject *, UInt32))this->vtbl->super.super.GetEditorName)( /*0x65b032*/
                         this,
                         this->super.super.refID);
    PrintError("MobileObject::Move called on '%s' (%08X) with invalid angle.", v7, X_4); /*0x65b03a*/
    sub_4D89A0((int *)this, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0)); /*0x65b065*/
  }
  if ( dword_B14E44 ) /*0x65b06a*/
  {
    if ( unk_B3BAA4 != dword_B02C54 ) /*0x65b086*/
    {
      v8 = dword_B02C54 % (unsigned int)(dword_B14E44 + 1); /*0x65b08d*/
      unk_B3BAA4 = dword_B02C54; /*0x65b094*/
      unk_B3BAA8 = v8 != 0; /*0x65b09b*/
    }
    if ( unk_B3BAA8 && (*((_DWORD *)CharProxy + 0x7D) & 0x100) != 0 ) /*0x65b0bb*/
    {
      NiMatrix33_InitRotationZ((float *)&v62, this->super.rot.z); /*0x65b0cc*/
      v9 = sub_7101F0(&v62, &a3, a4); /*0x65b0de*/
      a4->x = v9->rot.data[0][0]; /*0x65b0e5*/
      a4->y = v9->rot.data[0][1]; /*0x65b0ea*/
      a4->z = v9->rot.data[0][2]; /*0x65b0f0*/
      v10 = (float *)this->vtbl->super.GetNiNode(this); /*0x65b0fd*/
      v11 = a4->x + v10[0x15]; /*0x65b101*/
      v10 += 0x15; /*0x65b106*/
      v53 = v11; /*0x65b10b*/
      v55 = v10[1] + a4->y; /*0x65b115*/
      v57 = v10[2] + a4->z; /*0x65b125*/
      p_pos = &this->vtbl->super.GetNiNode(this)->members.super.m_localTransform.pos; /*0x65b133*/
      p_pos->x = v53; /*0x65b136*/
      p_pos->y = v55; /*0x65b13c*/
      p_pos->z = v57; /*0x65b13f*/
      return (__m128 *)CharProxy; /*0x65b14a*/
    }
    v49 = this->vtbl->super.GetNiNode(this); /*0x65b15b*/
    v14 = this->vtbl->super.GetPos(this); /*0x65b167*/
    X_4a = v49; /*0x65b170*/
    v50 = v49->members.super.m_localTransform.pos.y - v14[1]; /*0x65b174*/
    v44 = X_4a->members.super.m_localTransform.pos.z - v14[2]; /*0x65b17e*/
    v59.x = X_4a->members.super.m_localTransform.pos.x - *v14; /*0x65b18b*/
    v59.y = v50; /*0x65b193*/
    v59.z = v44; /*0x65b19b*/
    NiMatrix33_InitRotationZ((float *)&v62, this->super.rot.z); /*0x65b1a5*/
    v15 = (NiTransform *)sub_7103C0((float *)&v62, &a3.rot.data[1][1]); /*0x65b1c0*/
    v16 = sub_7101F0(v15, &a3, &v59); /*0x65b1c7*/
    a4->x = v16->rot.data[0][0] + a4->x; /*0x65b1d0*/
    a4->y = v16->rot.data[0][1] + a4->y; /*0x65b1d8*/
    a4->z = v16->rot.data[0][2] + a4->z; /*0x65b1e1*/
  }
  if ( !CharProxy || this->vtbl->super.IsDead((TESObjectREFR *)this, 1) )// TES4 authoritative: MobileObject::Move does not enter the character-controller update when no char proxy exists or TESObjectREFR vtable +0x198 IsDead(this,1) returns true. Movement discipline hook at 0x896000 will not run for this path. /*0x65b1f8*/
  {
    NiMatrix33_InitRotationZ((float *)&v62, this->super.rot.z); /*0x65b52e*/
    v37 = sub_7101F0(&v62, &a3, a4); /*0x65b540*/
    a4->x = v37->rot.data[0][0]; /*0x65b547*/
    a4->y = v37->rot.data[0][1]; /*0x65b54c*/
    a4->z = v37->rot.data[0][2]; /*0x65b552*/
    v59.x = a4->x + this->super.pos[0]; /*0x65b55a*/
    v38 = this->super.pos[1]; /*0x65b562*/
    a2.x = v59.x; /*0x65b565*/
    v59.y = v38 + a4->y; /*0x65b56c*/
    v39 = this->super.pos[2]; /*0x65b574*/
    a2.y = v59.y; /*0x65b577*/
    v59.z = v39 + a4->z; /*0x65b57e*/
    a2.z = v59.z; /*0x65b586*/
  }
  else
  {
    v51 = 0.0; /*0x65b208*/
    v42 = 0; /*0x65b20c*/
    if ( !v52 ) /*0x65b210*/
    {
      *((float *)CharProxy + 0xC4) = this->vtbl->GetJumpScale(this); /*0x65b21e*/
      if ( TESObjectREFR_HasHorseCreatureBase(this) ) /*0x65b226*/
      {
        if ( sub_5E13A0(this) ) /*0x65b231*/
        {
          v51 = *((float *)CharProxy + 0xCA); /*0x65b245*/
          v42 = 1; /*0x65b249*/
          *((float *)CharProxy + 0xCA) = *(float *)GameSetting_GetSafeFloatPointer(&dword_B14E3C); /*0x65b255*/
        }
      }
    }
    v17 = this->super.rot.y;                    // Movement packet build: +0 dt, +4/+8/+C actor rot, +10/+14/+18 desired movement, +1C caller flag. Vector has already been yaw/world adjusted by MobileObject::Move paths when applicable. /*0x65b25b*/
    x = this->super.rot.x; /*0x65b261*/
    a3.rot.data[1][1] = arg0; /*0x65b264*/
    *(_QWORD *)&a3.rot.data[2][0] = __PAIR64__(LODWORD(this->super.rot.z), LODWORD(v17)); /*0x65b26b*/
    v19 = a4->y; /*0x65b26f*/
    a3.rot.data[1][2] = x; /*0x65b272*/
    v20 = a4->x; /*0x65b276*/
    a3.pos.x = v19; /*0x65b278*/
    v21 = *((_DWORD *)CharProxy + 0x7D); /*0x65b27c*/
    v22 = a4->z; /*0x65b286*/
    a3.rot.data[2][2] = v20; /*0x65b289*/
    a3.pos.y = v22; /*0x65b296*/
    LODWORD(a3.pos.z) = arg8; /*0x65b29a*/
    if ( (v21 & 0x800) != 0 ) /*0x65b29e*/
    {                                           // TES4 authoritative: process vtable +0x36C GetSitSleepState; state 4 with GetMountedHorse makes MobileObject::Move snap proxy position to the mount rather than ordinary controller movement.
      if ( this->vtbl->super.IsActor((TESObjectREFR *)this) /*0x65b2dc*/
        && ((int (__thiscall *)(MobileObject *))this->vtbl[1].super.SetProcedureCompleted)(this)
        && (process = this->process) != 0
        && ((int (__thiscall *)(LowProcess *))process->GetSitSleepState)(process) == 4 )
      {
        v24 = (float *)((int (__thiscall *)(MobileObject *))this->vtbl[1].super.SetProcedureCompleted)(this); /*0x65b2e8*/
        v25 = v24[0xB]; /*0x65b2ea*/
        v26 = v24[0xC]; /*0x65b2ed*/
        v27 = v24[0xD]; /*0x65b2f0*/
        a2.x = v25; /*0x65b2f3*/
        a2.y = v26; /*0x65b2fe*/
        a2.z = v27; /*0x65b302*/
        sub_452A10(CharProxy, &a2); /*0x65b306*/
        a4->x = g_zeroNiPoint3; /*0x65b311*/
        a4->y = *(&g_zeroNiPoint3 + 1); /*0x65b318*/
        v28 = MEMORY[0xB3F9B0][0]; /*0x65b31b*/
        a4->z = MEMORY[0xB3F9B0][0]; /*0x65b321*/
        v29 = a4->y; /*0x65b326*/
        a3.rot.data[2][2] = a4->x; /*0x65b329*/
        a3.pos.x = v29; /*0x65b32d*/
        a3.pos.y = v28; /*0x65b331*/
      }
      else
      {
        NiMatrix33_InitRotationZ((float *)&v62, this->super.rot.z); /*0x65b345*/
        v30 = sub_7101F0(&v62, &a3, a4); /*0x65b357*/
        a4->x = v30->rot.data[0][0]; /*0x65b35e*/
        a4->y = v30->rot.data[0][1]; /*0x65b363*/
        a4->z = v30->rot.data[0][2]; /*0x65b369*/
        v54 = a4->x + this->super.pos[0]; /*0x65b371*/
        v31 = this->super.pos[1]; /*0x65b379*/
        a2.x = v54; /*0x65b37c*/
        v56 = v31 + a4->y; /*0x65b38a*/
        v32 = this->super.pos[2]; /*0x65b392*/
        a2.y = v56; /*0x65b395*/
        v58 = v32 + a4->z; /*0x65b39c*/
        a2.z = v58; /*0x65b3a4*/
        sub_5E1500((__m128 *)CharProxy, (float *)&a3); /*0x65b3a8*/
        v59.x = v54 - a3.rot.data[0][0]; /*0x65b3b6*/
        a4->x = v59.x; /*0x65b3c2*/
        v59.y = v56 - a3.rot.data[0][1]; /*0x65b3cd*/
        a4->y = v59.y; /*0x65b3d9*/
        v59.z = v58 - a3.rot.data[0][2]; /*0x65b3e8*/
        a4->z = v59.z; /*0x65b3f0*/
        v33 = (NiTransform *)sub_7103C0((float *)&v62, &v62.pos.x); /*0x65b3fa*/
        v34 = sub_7101F0(v33, &a3, a4); /*0x65b401*/
        a3.rot.data[2][2] = v34->rot.data[0][0]; /*0x65b408*/
        a3.pos.x = v34->rot.data[0][1]; /*0x65b40f*/
        a3.pos.y = v34->rot.data[0][2]; /*0x65b416*/
      }
    }
    if ( (*((_BYTE *)CharProxy + 0x1F4) & 1) != 0 ) /*0x65b421*/
    {
      *((_DWORD *)CharProxy + 0x7D) &= ~2u; /*0x65b423*/
      *((float *)CharProxy + 0xCC) = flt_B14E34 * *(float *)&MEMORY[0xB33E90][0xC]; /*0x65b436*/
    }
    (*(void (__thiscall **)(bhkCharacterProxy *, float *))(*(_DWORD *)CharProxy + 0x80))(CharProxy, &a3.rot.data[1][1]);// Calls CharProxy vtable+0x80 (bhkCharacterController::Update at 0x896000 for actors) with movement packet built above. Caller hook can see MobileObject + desired movement; inner hook is better for velocity mutation after state update. /*0x65b44b*/
    if ( (*((_DWORD *)CharProxy + 0x7D) & 2) != 0 ) /*0x65b457*/
    {
      sub_5E1500((__m128 *)CharProxy, (float *)&a3); /*0x65b460*/
      Radius = bhkCharacterController_GetRadius((float *)CharProxy);// After controller update, MobileObject::Move reads controller radius via 0x8913C0. /*0x65b46c*/
      Unk_73 = this->vtbl->Unk_73; /*0x65b47c*/
      v46 = Radius * dbl_A372E0;                // Converts controller radius from Havok to TES/world units using dbl_A372E0 (~6.999 inverse hkFactor). /*0x65b487*/
      v47 = v46 + v46;                          // Uses 2 * world radius as a native capsule diameter scale; suitable as the first climb wall-probe distance scale. /*0x65b493*/
      a3.rot.data[0][2] = v47 + a3.rot.data[0][2]; /*0x65b49f*/
      ((void (__thiscall *)(MobileObject *, NiTransform *))Unk_73)(this, &a3); /*0x65b4a3*/
    }
    if ( v42 ) /*0x65b4aa*/
      *((float *)CharProxy + 0xCA) = v51; /*0x65b4b0*/
    if ( (*((_DWORD *)CharProxy + 0x7D) & 0x800) == 0 ) /*0x65b4c1*/
    {
      sub_5E1500((__m128 *)CharProxy, &a2.x); /*0x65b4ce*/
      if ( (*((_BYTE *)CharProxy + 0x1F4) & 1) != 0 ) /*0x65b4da*/
      {
        if ( !((int (__thiscall *)(MobileObject *))this->vtbl[1].super.Unk_61)(this) /*0x65b50b*/
          || (v36 = ((int (__thiscall *)(MobileObject *))this->vtbl[1].super.Unk_61)(this),
              (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 0x18C))(v36) == 4) )
        {
          ((void (__thiscall *)(MobileObject *, _DWORD))this->vtbl->Unk_7A)(this, LODWORD(a3.rot.data[2][1])); /*0x65b51f*/
        }
      }
    }
  }
  TESObjectREFR_SetPosition((TESObjectREFR *)this, a2.x, a2.y, a2.z); /*0x65b5a5*/
  return (__m128 *)CharProxy; /*0x65b144*/
}
