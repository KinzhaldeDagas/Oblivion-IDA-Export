void __thiscall sub_541DD0(Sky *this)
{
  float *v2; // eax
  float *v3; // edi
  NiAVObjectVtbl *vtbl; // ebx
  TESObjectCELL *ParentCell; // eax
  double v6; // st7
  int v7; // edx
  UInt32 unk0DC; // eax
  bool v9; // bl
  NiNode *unk0C; // eax
  NiNode *unk08; // eax
  NiAVObject *v12; // eax
  NiNode *SunBillboard; // eax
  NiNode *SunGlareBillboard; // eax
  NiNode *nodeSkyRoot; // esi
  UInt32 v16; // eax
  double v17; // st7
  double v18; // st7
  float *firstWeather; // eax
  double v20; // st7
  double v21; // st5
  double v22; // st4
  double v23; // st3
  float *secondWeather; // eax
  double v25; // st6
  TESObjectCELL *currentInteriorCell; // ecx
  double v27; // st7
  double v28; // st7
  double v29; // st6
  double v30; // st7
  double v31; // st7
  double v32; // st5
  double v33; // st2
  float v34; // [esp+14h] [ebp-30h]
  float v35; // [esp+14h] [ebp-30h]
  float v36; // [esp+14h] [ebp-30h]
  float v37; // [esp+14h] [ebp-30h]
  float v38; // [esp+18h] [ebp-2Ch]
  float v39; // [esp+18h] [ebp-2Ch]
  float v40; // [esp+18h] [ebp-2Ch]
  float v41; // [esp+1Ch] [ebp-28h]
  float v42; // [esp+20h] [ebp-24h]
  float v43; // [esp+20h] [ebp-24h]
  float v44; // [esp+20h] [ebp-24h]
  float v45; // [esp+20h] [ebp-24h]
  float FarPlane; // [esp+20h] [ebp-24h]
  float v47; // [esp+20h] [ebp-24h]
  int v48[8]; // [esp+24h] [ebp-20h] BYREF

  if ( (this->Flags0FC & 4) != 0 )
  {
    v2 = (float *)sub_4994C0();
    v3 = v2;
    if ( v2 )
    {
      this->unk0C8 = v2[0x18];
      this->unk0CC = v2[0x19];
      if ( g_worldScenegraph->super.children.end )
        vtbl = g_worldScenegraph->super.children.data->vtbl;
      else
        vtbl = 0;
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      v34 = (TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell) - *(float *)&vtbl[1].super.Unk_03) * flt_B36670;
      if ( v34 <= 1.0 )
      {
        v6 = v34;
      }
      else
      {
        v34 = 1.0;
        v6 = (float)1.0;
      }
      v7 = *((_DWORD *)v3 + 0x1B);
      v48[0] = (int)v3[0x1A];
      *(float *)&v48[4] = 1.0 - v6;
      v48[1] = v7;
      *(float *)&v48[5] = v6;
      v48[2] = 0;
      v48[3] = 0;
      *(float *)&v48[6] = 0.0;
      *(float *)&v48[7] = 0.0;
      sub_5400E0(this, (float *)&this->unk03C[3], (float *)v48, 0.0);
      unk0DC = this->unk0DC;
      if ( unk0DC == 3 || unk0DC == 2 )
      {
        *(float *)&this->unk03C[3] = *(float *)&this->unk03C[3] * *(float *)&this->unk03C[0xC];
        *(float *)&this->unk03C[4] = *(float *)&this->unk03C[0xD] * *(float *)&this->unk03C[4];
        *(float *)&this->unk03C[5] = *(float *)&this->unk03C[0xE] * *(float *)&this->unk03C[5];
        v9 = flt_A3D65C < (double)v34;
        unk0C = this->clouds->unk0C;
        if ( flt_A3D65C >= (double)v34 )
          unk0C->members.super.m_flags &= ~1u;
        else
          unk0C->members.super.m_flags |= 1u;
        unk08 = this->clouds->unk08;
        if ( v9 )
          unk08->members.super.m_flags |= 1u;
        else
          unk08->members.super.m_flags &= ~1u;
        v12 = sub_452A60(this->atmosphere);
        if ( v9 )
          v12->members.m_flags |= 1u;
        else
          v12->members.m_flags &= ~1u;
        SunBillboard = (NiNode *)this->sun->membr.SunBillboard;
        if ( v9 )
          SunBillboard->members.super.m_flags |= 1u;
        else
          SunBillboard->members.super.m_flags &= ~1u;
        SunGlareBillboard = (NiNode *)this->sun->membr.SunGlareBillboard;
        if ( v9 )
          SunGlareBillboard->members.super.m_flags |= 1u;
        else
          SunGlareBillboard->members.super.m_flags &= ~1u;
        nodeSkyRoot = this->nodeSkyRoot;
        if ( v9 )
          nodeSkyRoot->members.super.m_flags |= 1u;
        else
          nodeSkyRoot->members.super.m_flags &= ~1u;
      }
      return;
    }
  }
  if ( this->firstWeather )
  {
    v16 = this->unk0DC;
    if ( v16 == 3 || v16 == 2 )
    {
      v38 = sub_53FC10(this);
      v35 = sub_499180(this);
      v41 = sub_4991C0(this);
      v42 = sub_53FC90(this);
      if ( this->unk0D0 <= (double)v38 || this->unk0D0 >= (double)v35 )
      {
        v18 = v41;
        if ( this->unk0D0 < (double)v35 || this->unk0D0 > v18 )
        {
          if ( this->unk0D0 <= v18 || v42 <= (double)this->unk0D0 )
            v17 = 0.0;
          else
            v17 = (v42 - this->unk0D0) / (v42 - v18);
        }
        else
        {
          v17 = 1.0;
        }
      }
      else
      {
        v17 = (this->unk0D0 - v38) / (v35 - v38);
      }
      firstWeather = (float *)this->firstWeather;
      v36 = v17;
      v20 = v36;
      v43 = 1.0 - v36;
      v21 = v43;
      this->unk0C8 = firstWeather[0x18] * v43 + firstWeather[0x16] * v36;
      v22 = firstWeather[0x19] * v43;
      v23 = firstWeather[0x17];
      secondWeather = (float *)this->secondWeather;
      this->unk0CC = v22 + v23 * v36;
      if ( secondWeather )
      {
        v44 = this->weatherPercent * this->unk0C8;
        this->unk0C8 = v44;
        v25 = 1.0 - this->weatherPercent;
        this->unk0C8 = v44 + (secondWeather[0x18] * v21 + secondWeather[0x16] * v20) * v25;
        v45 = this->weatherPercent * this->unk0CC;
        this->unk0CC = v45;
        this->unk0CC = v45 + v25 * (v20 * secondWeather[0x17] + v21 * secondWeather[0x19]);
      }
      goto LABEL_59;
    }
  }
  if ( this->unk0DC == 1 )
  {
    if ( TES )
    {
      currentInteriorCell = TES->currentInteriorCell;
      if ( currentInteriorCell )
      {
        v37 = sub_4C9A40((int)currentInteriorCell);
        if ( v37 <= 0.0 )
        {
          v27 = flt_A3F4F0;
        }
        else
        {
          v27 = flt_A3F4F0;
          if ( v27 >= v37 )
            goto LABEL_50;
        }
        v37 = v27;
LABEL_50:
        v39 = sub_4C9A20((int)TES->currentInteriorCell);
        v28 = v39;
        if ( v39 <= 0.0 )
        {
          v30 = v37;
        }
        else
        {
          v29 = v37;
          if ( v37 >= v28 )
          {
LABEL_57:
            this->unk0C8 = v28;
            this->unk0CC = v29;
            goto LABEL_59;
          }
          v30 = v37;
        }
        v40 = dbl_A56EA0 * v30;
        v29 = v30;
        v28 = v40;
        goto LABEL_57;
      }
    }
  }
  v31 = flt_A3F4F0;
  this->unk0C8 = flt_A3F4F0;
  this->unk0CC = v31;
LABEL_59:
  if ( !sub_4E9F40() )
  {
    FarPlane = GetFarPlane(g_worldScenegraph);
    v32 = FarPlane;
    v33 = NearDistance;
    v47 = (this->unk0CC - FarPlane) / (this->unk0CC - v33);
    this->unk0C8 = this->unk0C8 - (this->unk0C8 - v33) * v47;
    this->unk0CC = v32;
  }
}
