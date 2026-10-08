void __thiscall sub_6895D0(_DWORD *this, TESObjectREFR *actor, NiPoint3 *other)
{
  const NiPoint3 *v5; // eax
  NiPoint3 *v6; // eax
  NiPoint3 *v7; // eax
  float *v8; // eax
  char *Health; // eax
  char v10; // dl
  _DWORD *v11; // eax
  char *LinkedDoor; // eax
  NiDX92DBufferData *v13; // ebx
  char *Head; // eax
  float *v15; // eax
  char v16; // bl
  double ScaledCollisionHeight; // st7
  float *v18; // eax
  char *v19; // eax
  TeleportData *v20; // ebx
  char v21; // al
  char v22; // al
  char v23; // al
  char *v24; // ebx
  float *v25; // eax
  float v26; // [esp+0h] [ebp-7Ch]
  float v27; // [esp+0h] [ebp-7Ch]
  float *v28; // [esp+0h] [ebp-7Ch]
  int v29; // [esp+18h] [ebp-64h] BYREF
  float v30; // [esp+1Ch] [ebp-60h]
  float v31; // [esp+20h] [ebp-5Ch]
  NiPoint3 start; // [esp+24h] [ebp-58h] BYREF
  TeleportData v33; // [esp+30h] [ebp-4Ch] BYREF
  char v34; // [esp+5Ch] [ebp-20h]
  int v35; // [esp+78h] [ebp-4h]
  char actora; // [esp+80h] [ebp+4h]

  if ( actor ) /*0x6895ff*/
  {
    sub_68A160((float ***)this); /*0x68960d*/
    if ( NiPoint3__NotEqual(v5, other) || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0xC))(this) ) /*0x689624*/
    {
      sub_68AFB0(this, (Actor *)actor, other); /*0x689632*/
      if ( !sub_6825C0((_DWORD *)unk_B3BF80, (Actor *)actor) ) /*0x68963e*/
      {
        v6 = (NiPoint3 *)actor->vtbl->GetPos(actor); /*0x689656*/
        if ( sub_689230((TESChildCELL *)actor, v6, &other->x) ) /*0x68965a*/
        {
          sub_68C6E0((NiDX92DBufferData **)this + 5); /*0x68966b*/
          v7 = (NiPoint3 *)actor->vtbl->GetPos(actor); /*0x68967a*/
          sub_68BED0((TeleportData **)this + 5, v7); /*0x68967f*/
          sub_68BED0((TeleportData **)this + 5, other); /*0x689687*/
LABEL_33:
          if ( unk_B3C08A ) /*0x68998e*/
            sub_685EA0(this, (int)actor); /*0x68999a*/
          sub_6847B0(this); /*0x6899a1*/
          return; /*0x6899a1*/
        }
        if ( *((char *)this + 0x2C) < 0 ) /*0x689695*/
          return; /*0x689695*/
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0xC))(this) ) /*0x6896a2*/
        {
          v26 = flt_A3765C; /*0x6896bb*/
          v8 = actor->vtbl->GetPos(actor); /*0x6896c1*/
          if ( sub_480520(v8, &other->x, v26) >= 0 ) /*0x6896ce*/
          {
            Health = (char *)TESHealthForm_GetHealth((TESHealthForm *)(this + 5)); /*0x6896d9*/
            if ( Health ) /*0x6896e0*/
            {
              start = *(NiPoint3 *)EmbeddedList_GetHead(Health); /*0x6896eb*/
            }
            else
            {
              start = *(NiPoint3 *)actor->vtbl->GetPos(actor); /*0x68970d*/
              sub_68BED0((TeleportData **)this + 5, &start); /*0x689726*/
            }
            sub_67D760(&v33.yRot); /*0x68972f*/
            v10 = *((_BYTE *)this + 0x10); /*0x689734*/
            v35 = 1; /*0x689744*/
            v34 = v10; /*0x68974f*/
            LOBYTE(v11) = ConnectedPointGraph_CanTraverseSegment(&v33.yRot, &start, other, actor, 0.0); /*0x689753*/
            sub_67E090(v11, (int)&v33.yRot, (NiDX92DBufferData **)this + 5); /*0x68975d*/
            sub_68C1B0((NiSurfaceData **)this + 5); /*0x689764*/
            sub_684000(this, (Actor *)actor); /*0x68976c*/
            v35 = 0xFFFFFFFF; /*0x689775*/
            Shared_NoOpVirtual_60D0A0(&v33.yRot); /*0x68977d*/
            goto LABEL_33; /*0x689782*/
          }
        }
        LinkedDoor = (char *)TeleportData_GetLinkedDoor((TeleportData *)(this + 5)); /*0x68978a*/
        *(float *)&v29 = flt_A32048; /*0x689795*/
        v13 = (NiDX92DBufferData *)LinkedDoor; /*0x689799*/
        v30 = 0.0; /*0x68979f*/
        v31 = 0.0; /*0x6897a3*/
        if ( LinkedDoor ) /*0x6897a7*/
        {
          Head = EmbeddedList_GetHead(LinkedDoor); /*0x6897ab*/
          v29 = *(int *)Head; /*0x6897b2*/
          v30 = *((float *)Head + 1); /*0x6897b9*/
          v31 = *((float *)Head + 2); /*0x6897c0*/
        }
        actora = 0; /*0x6897c6*/
        if ( v13 ) /*0x6897cb*/
        {
          if ( NiDX92DBufferData::GetSurfaceData(v13) || sub_480520((float *)&v29, &other->x, flt_A34A80) >= 0 ) /*0x689818*/
            goto LABEL_22; /*0x689818*/
        }
        else
        {
          v27 = flt_A34A80; /*0x6897dc*/
          v15 = actor->vtbl->GetPos(actor); /*0x6897e2*/
          if ( sub_480520(v15, &other->x, v27) >= 0 ) /*0x6897ef*/
            goto LABEL_22; /*0x6897ef*/
        }
        actora = 1; /*0x68981a*/
LABEL_22:
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, NiPoint3 *, _DWORD))(*this + 0x14))(this, actor, other, 0); /*0x68981f*/
        v16 = 0; /*0x68982c*/
        if ( !actora ) /*0x689832*/
          goto LABEL_38; /*0x689832*/
        if ( !sub_68C010((NiDX92DBufferData **)this + 5, 4u) ) /*0x68983d*/
          goto LABEL_38; /*0x68983d*/
        sub_68CB30(&v33); /*0x68984e*/
        v35 = 0; /*0x68985e*/
        if ( sub_686450((MobileObject *)actor, other, &v33, 0, 0) ) /*0x689869*/
        {
          start = *(NiPoint3 *)actor->vtbl->GetPos(actor); /*0x689887*/
          ScaledCollisionHeight = Actor_GetScaledCollisionHeight(actor); /*0x68989b*/
          start.z = ScaledCollisionHeight + start.z; /*0x6898a8*/
          v18 = (float *)EmbeddedList_GetHead((char *)&v33); /*0x6898ac*/
          if ( sub_6859A0(&start.x, v18) ) /*0x6898b7*/
          {
            sub_684EC0((int **)this); /*0x6898c5*/
            v19 = EmbeddedList_GetHead((char *)&v33); /*0x6898ce*/
            v20 = sub_68BED0((TeleportData **)this + 5, (NiPoint3 *)v19); /*0x6898dc*/
            sub_68CA30(v20, 0); /*0x6898e2*/
            v21 = sub_68CA80(&v33); /*0x6898eb*/
            sub_68CA90(v20, v21); /*0x6898f3*/
            v22 = sub_68CAB0(&v33); /*0x6898fc*/
            sub_68CAC0(v20, v22); /*0x689904*/
            v23 = sub_68CAE0(&v33); /*0x68990d*/
            sub_68CAF0(v20, v23); /*0x689915*/
            v16 = 1; /*0x68991a*/
          }
        }
        v35 = 0xFFFFFFFF; /*0x689920*/
        Shared_NoOpVirtual_60D0A0(&v33); /*0x689928*/
        if ( !v16 ) /*0x68992f*/
        {
LABEL_38:
          if ( *(float *)&v29 == dbl_A3A5B0 || !sub_68BE10((NiSurfaceData **)this + 5, (float *)&v29, 5) ) /*0x68994c*/
          {
            v24 = (char *)TeleportData_GetLinkedDoor((TeleportData *)(this + 5)); /*0x68995f*/
            if ( v24 ) /*0x689963*/
            {
              v28 = actor->vtbl->GetPos(actor); /*0x689971*/
              v25 = (float *)EmbeddedList_GetHead(v24); /*0x689974*/
              if ( sub_8AA350(v25, v28) ) /*0x68997b*/
                sub_68BE80((NiSurfaceData **)this + 5, (NiDX92DBufferData *)v24, 0); /*0x689989*/
            }
          }
        }
        goto LABEL_33; /*0x689989*/
      }
    }
  }
}
