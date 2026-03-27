__m128 *__thiscall sub_65AF30(MobileObject *this, float arg0, NiPoint3 *a4, int arg8)
{
  bhkCharacterProxy *CharProxy; // ebx
  char v6; // al
  const char *v7; // eax
  unsigned int v8; // edx
  NiTransform *v9; // eax
  float *v10; // eax
  double v11; // st7
  float *p_x; // eax
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
  int X_4a; // [esp+Ch] [ebp-C4h]
  char v42; // [esp+23h] [ebp-ADh]
  float y; // [esp+24h] [ebp-ACh]
  float v44; // [esp+24h] [ebp-ACh]
  float v45; // [esp+24h] [ebp-ACh]
  float v46; // [esp+24h] [ebp-ACh]
  float v47; // [esp+24h] [ebp-ACh]
  float z; // [esp+28h] [ebp-A8h]
  int v49; // [esp+28h] [ebp-A8h]
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

  CharProxy = MobileObject_GetCharProxy(this);
  v6 = ((int (__thiscall *)(MobileObject *))this->vtbl->super.Unk_3A)(this);
  a3.rot.data[1][0] = this->super.rot.x;
  v52 = v6;
  y = this->super.rot.y;
  z = this->super.rot.z;
  if ( a3.rot.data[1][0] == dbl_A3A5B0
    || _isnan(a3.rot.data[1][0])
    || !_finite(a3.rot.data[1][0])
    || y == dbl_A3A5B0
    || _isnan(y)
    || !_finite(y)
    || z == dbl_A3A5B0
    || _isnan(z)
    || !_finite(z) )
  {
    v7 = (const char *)((int (__thiscall *)(MobileObject *, UInt32))this->vtbl->super.super.GetEditorName)(
                         this,
                         this->super.super.refID);
    PrintError("MobileObject::Move called on '%s' (%08X) with invalid angle.", v7, X_4);
    sub_4D89A0((int *)this, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
  }
  if ( dword_B14E44 )
  {
    if ( dword_B3BAA4 != dword_B02C54 )
    {
      v8 = dword_B02C54 % (unsigned int)(dword_B14E44 + 1);
      dword_B3BAA4 = dword_B02C54;
      byte_B3BAA8 = v8 != 0;
    }
    if ( byte_B3BAA8 && (*((_DWORD *)CharProxy + 0x7D) & 0x100) != 0 )
    {
      NiMatrix33_InitRotationTransform((float *)&v62, this->super.rot.z);
      v9 = sub_7101F0(&v62, &a3, a4);
      a4->x = v9->rot.data[0][0];
      a4->y = v9->rot.data[0][1];
      a4->z = v9->rot.data[0][2];
      v10 = (float *)this->vtbl->super.GetNiNode((TESObjectREFR *)this);
      v11 = a4->x + v10[0x15];
      v10 += 0x15;
      v53 = v11;
      v55 = v10[1] + a4->y;
      v57 = v10[2] + a4->z;
      p_x = &this->vtbl->super.GetNiNode((TESObjectREFR *)this)->members.super.m_localTransform.pos.x;
      *p_x = v53;
      p_x[1] = v55;
      p_x[2] = v57;
      return (__m128 *)CharProxy;
    }
    v49 = (int)this->vtbl->super.GetNiNode((TESObjectREFR *)this);
    v14 = this->vtbl->super.GetPos((TESObjectREFR *)this);
    X_4a = v49;
    v50 = *(float *)(v49 + 0x58) - v14[1];
    v44 = *(float *)(X_4a + 0x5C) - v14[2];
    v59.x = *(float *)(X_4a + 0x54) - *v14;
    v59.y = v50;
    v59.z = v44;
    NiMatrix33_InitRotationTransform((float *)&v62, this->super.rot.z);
    v15 = (NiTransform *)sub_7103C0((float *)&v62, &a3.rot.data[1][1]);
    v16 = sub_7101F0(v15, &a3, &v59);
    a4->x = v16->rot.data[0][0] + a4->x;
    a4->y = v16->rot.data[0][1] + a4->y;
    a4->z = v16->rot.data[0][2] + a4->z;
  }
  if ( !CharProxy || this->vtbl->super.IsDead((TESObjectREFR *)this, 1) )
  {
    NiMatrix33_InitRotationTransform((float *)&v62, this->super.rot.z);
    v37 = sub_7101F0(&v62, &a3, a4);
    a4->x = v37->rot.data[0][0];
    a4->y = v37->rot.data[0][1];
    a4->z = v37->rot.data[0][2];
    v59.x = a4->x + this->super.pos[0];
    v38 = this->super.pos[1];
    a2.x = v59.x;
    v59.y = v38 + a4->y;
    v39 = this->super.pos[2];
    a2.y = v59.y;
    v59.z = v39 + a4->z;
    a2.z = v59.z;
  }
  else
  {
    v51 = 0.0;
    v42 = 0;
    if ( !v52 )
    {
      *((float *)CharProxy + 0xC4) = this->vtbl->GetJumpScale(this);
      if ( sub_4D74D0(this) )
      {
        if ( sub_5E13A0(this) )
        {
          v51 = *((float *)CharProxy + 0xCA);
          v42 = 1;
          *((float *)CharProxy + 0xCA) = *(float *)GameSetting_GetSafeFloatPointer(&dword_B14E3C);
        }
      }
    }
    v17 = this->super.rot.y;
    x = this->super.rot.x;
    a3.rot.data[1][1] = arg0;
    *(_QWORD *)&a3.rot.data[2][0] = __PAIR64__(LODWORD(this->super.rot.z), LODWORD(v17));
    v19 = a4->y;
    a3.rot.data[1][2] = x;
    v20 = a4->x;
    a3.pos.x = v19;
    v21 = *((_DWORD *)CharProxy + 0x7D);
    v22 = a4->z;
    a3.rot.data[2][2] = v20;
    a3.pos.y = v22;
    LODWORD(a3.pos.z) = arg8;
    if ( (v21 & 0x800) != 0 )
    {
      if ( this->vtbl->super.IsActor((TESObjectREFR *)this)
        && ((int (__thiscall *)(MobileObject *))this->vtbl[1].super.Unk_5F)(this)
        && (process = this->process) != 0
        && ((int (__thiscall *)(LowProcess *))process->GetSitSleepState)(process) == 4 )
      {
        v24 = (float *)((int (__thiscall *)(MobileObject *))this->vtbl[1].super.Unk_5F)(this);
        v25 = v24[0xB];
        v26 = v24[0xC];
        v27 = v24[0xD];
        a2.x = v25;
        a2.y = v26;
        a2.z = v27;
        sub_452A10(CharProxy, &a2);
        a4->x = Vector3_InitValue_;
        a4->y = *(&Vector3_InitValue_ + 1);
        v28 = dword_B3F9B0;
        a4->z = dword_B3F9B0;
        v29 = a4->y;
        a3.rot.data[2][2] = a4->x;
        a3.pos.x = v29;
        a3.pos.y = v28;
      }
      else
      {
        NiMatrix33_InitRotationTransform((float *)&v62, this->super.rot.z);
        v30 = sub_7101F0(&v62, &a3, a4);
        a4->x = v30->rot.data[0][0];
        a4->y = v30->rot.data[0][1];
        a4->z = v30->rot.data[0][2];
        v54 = a4->x + this->super.pos[0];
        v31 = this->super.pos[1];
        a2.x = v54;
        v56 = v31 + a4->y;
        v32 = this->super.pos[2];
        a2.y = v56;
        v58 = v32 + a4->z;
        a2.z = v58;
        sub_5E1500((__m128 *)CharProxy, (float *)&a3);
        v59.x = v54 - a3.rot.data[0][0];
        a4->x = v59.x;
        v59.y = v56 - a3.rot.data[0][1];
        a4->y = v59.y;
        v59.z = v58 - a3.rot.data[0][2];
        a4->z = v59.z;
        v33 = (NiTransform *)sub_7103C0((float *)&v62, &v62.pos.x);
        v34 = sub_7101F0(v33, &a3, a4);
        a3.rot.data[2][2] = v34->rot.data[0][0];
        a3.pos.x = v34->rot.data[0][1];
        a3.pos.y = v34->rot.data[0][2];
      }
    }
    if ( (*((_BYTE *)CharProxy + 0x1F4) & 1) != 0 )
    {
      *((_DWORD *)CharProxy + 0x7D) &= ~2u;
      *((float *)CharProxy + 0xCC) = flt_B14E34 * flt_B33E9C;
    }
    (*(void (__thiscall **)(bhkCharacterProxy *, float *))(*(_DWORD *)CharProxy + 0x80))(CharProxy, &a3.rot.data[1][1]);
    if ( (*((_DWORD *)CharProxy + 0x7D) & 2) != 0 )
    {
      sub_5E1500((__m128 *)CharProxy, (float *)&a3);
      v45 = sub_8913C0((float *)CharProxy);
      Unk_73 = this->vtbl->Unk_73;
      v46 = v45 * dbl_A372E0;
      v47 = v46 + v46;
      a3.rot.data[0][2] = v47 + a3.rot.data[0][2];
      ((void (__thiscall *)(MobileObject *, NiTransform *))Unk_73)(this, &a3);
    }
    if ( v42 )
      *((float *)CharProxy + 0xCA) = v51;
    if ( (*((_DWORD *)CharProxy + 0x7D) & 0x800) == 0 )
    {
      sub_5E1500((__m128 *)CharProxy, &a2.x);
      if ( (*((_BYTE *)CharProxy + 0x1F4) & 1) != 0 )
      {
        if ( !((int (__thiscall *)(MobileObject *))this->vtbl[1].super.Unk_61)(this)
          || (v36 = ((int (__thiscall *)(MobileObject *))this->vtbl[1].super.Unk_61)(this),
              (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 0x18C))(v36) == 4) )
        {
          ((void (__thiscall *)(MobileObject *, _DWORD))this->vtbl->Unk_7A)(this, LODWORD(a3.rot.data[2][1]));
        }
      }
    }
  }
  TESObjectREFR_SetPosition((TESObjectREFR *)this, a2.x, a2.y, a2.z);
  return (__m128 *)CharProxy;
}
