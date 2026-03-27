void __thiscall sub_633910(Actor *this, Actor *a2)
{
  double v2; // st7
  float *v4; // edi
  TESObjectCELL *ParentCell; // eax
  char v6; // al
  float *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  double v11; // rt0
  float v12; // eax
  float *v13; // eax
  int *v14; // eax
  TESObjectCELL *v15; // eax
  int *v16; // eax
  ActorVtbl *vtbl; // edx
  float *v18; // eax
  int *v19; // eax
  int v20; // edx
  float v21; // eax
  ActorVtbl *v22; // ebx
  TESObjectCELL *v23; // eax
  ActorVtbl *v24; // ebx
  int v25; // eax
  int v26; // eax
  ActorVtbl *v27; // edx
  char v28; // al
  ActorVtbl *v29; // ebx
  int v30; // eax
  int v31; // eax
  TESObjectCELL *v32; // [esp+18h] [ebp-48h]
  TESObjectCELL *v33; // [esp+18h] [ebp-48h]
  int v34; // [esp+1Ch] [ebp-44h]
  int v35; // [esp+1Ch] [ebp-44h]
  TESWorldSpace *WorldSpace; // [esp+20h] [ebp-40h]
  float v37; // [esp+20h] [ebp-40h]
  float v38; // [esp+20h] [ebp-40h]
  int v39; // [esp+30h] [ebp-30h] BYREF
  int v40; // [esp+34h] [ebp-2Ch]
  float v41; // [esp+38h] [ebp-28h]
  float v42; // [esp+3Ch] [ebp-24h]
  float v43; // [esp+40h] [ebp-20h]
  float v44; // [esp+44h] [ebp-1Ch]
  float v45; // [esp+48h] [ebp-18h]
  float v46; // [esp+4Ch] [ebp-14h]
  float v47; // [esp+50h] [ebp-10h]
  int v48; // [esp+54h] [ebp-Ch] BYREF
  int v49; // [esp+58h] [ebp-8h]
  float v50; // [esp+5Ch] [ebp-4h]

  v2 = flt_A2F918;
  if ( v2 < *((float *)this + 0x6A) )
  {
    ((void (__thiscall *)(Actor *, Actor *))this->vtbl->super.super.ChangeCell)(this, a2);
    sub_5F8000(a2);
    v4 = a2->vtbl->super.super.GetPos(a2);
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a2);
    sub_5E2E20((TESObjectREFR *)a2, &v48, *(_DWORD *)v4, *((_DWORD *)v4 + 1), v4[2], ParentCell, COERCE_FLOAT(1), 0, 0);
    ((void (__thiscall *)(Actor *, int *))a2->vtbl->super.Unk_73)(a2, &v48);
    return;
  }
  if ( LOBYTE(this->members.templateForm) )
  {
    sub_5E9A60(a2, v2);
    if ( v6 )
    {
      ((void (__thiscall *)(Actor *, Actor *))this->vtbl->super.super.ChangeCell)(this, a2);
      sub_5F8000(a2);
      return;
    }
    if ( sub_64ADA0(this) )
    {
      v7 = a2->vtbl->super.super.GetPos(a2);
      v8 = *v7;
      v9 = v7[1];
      v10 = v7[2];
      v11 = dbl_A2FC70;
      v45 = v8;
      v42 = *(float *)&v48 * v11;
      v46 = v9;
      v47 = v10;
      v43 = *(float *)&v49 * v11;
      v44 = v11 * v50;
      *(float *)&v48 = v42 + v8;
      v39 = v48;
      *(float *)&v49 = v43 + v9;
      v40 = v49;
      v50 = v44 + v10;
      v12 = v50;
    }
    else
    {
      v13 = a2->vtbl->super.super.GetPos(a2);
      v14 = (int *)sub_62E790((float *)&v48, *v13, v13[1], v13[2], flt_A342A4, flt_A342A4);
      v39 = *v14;
      v40 = v14[1];
      v41 = *((float *)v14 + 2);
      v15 = TESObjectREFR_GetParentCell((TESObjectREFR *)a2);
      v16 = sub_5E2E20((TESObjectREFR *)a2, &v48, v39, v40, v41, v15, 0.0, 1, 0);
      v39 = *v16;
      v40 = v16[1];
      vtbl = a2->vtbl;
      v41 = *((float *)v16 + 2);
      v18 = vtbl->super.super.GetPos((TESObjectREFR *)a2);
      if ( !sub_8AA350((float *)&v39, v18) )
      {
LABEL_11:
        v20 = v40;
        v21 = v41;
        v22 = this->vtbl;
        *((_DWORD *)this + 0x9F) = v39;
        *((_DWORD *)this + 0xA0) = v20;
        *((float *)this + 0xA1) = v21;
        WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2);
        v23 = TESObjectREFR_GetParentCell((TESObjectREFR *)a2);
        if ( !((unsigned __int8 (__thiscall *)(Actor *, Actor *, int, int, float, TESObjectCELL *, TESWorldSpace *))v22[1].super.super.super.Unk_08)(
                this,
                a2,
                v39,
                v40,
                COERCE_FLOAT(LODWORD(v41)),
                v23,
                WorldSpace) )
          return;
        ((void (__thiscall *)(Actor *, Actor *, int))this->vtbl->Unk_8E)(this, a2, 0x101);
        v24 = this->vtbl;
        v37 = flt_A37CC8;
        sub_68A1A0((_DWORD *)LODWORD(this->members.super.super.pos[2]));
        v34 = v25;
        v32 = sub_68A190((_DWORD *)LODWORD(this->members.super.super.pos[2]));
        sub_68A160((_DWORD *)LODWORD(this->members.super.super.pos[2]));
        ((void (__thiscall *)(Actor *, Actor *, int, TESObjectCELL *, int, _DWORD))v24[1].super.super.super.Unk_16)(
          this,
          a2,
          v26,
          v32,
          v34,
          LODWORD(v37));
        goto LABEL_16;
      }
      v19 = sub_5E03E0((TESObjectREFR *)a2, &v48, (int)&v39);
      v39 = *v19;
      v40 = v19[1];
      v12 = *((float *)v19 + 2);
    }
    v41 = v12;
    goto LABEL_11;
  }
  sub_5E9A60(a2, v2);
  v27 = this->vtbl;
  if ( v28 )
  {
    ((void (__thiscall *)(Actor *, Actor *))v27->super.super.ChangeCell)(this, a2);
    sub_5F8000(a2);
    return;
  }
  ((void (__thiscall *)(Actor *, Actor *, int))v27->Unk_8E)(this, a2, 0x101);
  v29 = this->vtbl;
  v38 = flt_A37CC8;
  sub_68A1A0((_DWORD *)LODWORD(this->members.super.super.pos[2]));
  v35 = v30;
  v33 = sub_68A190((_DWORD *)LODWORD(this->members.super.super.pos[2]));
  sub_68A160((_DWORD *)LODWORD(this->members.super.super.pos[2]));
  ((void (__thiscall *)(Actor *, Actor *, int, TESObjectCELL *, int, _DWORD))v29[1].super.super.super.Unk_16)(
    this,
    a2,
    v31,
    v33,
    v35,
    LODWORD(v38));
LABEL_16:
  *((float *)this + 0x6A) = flt_B33E9C + *((float *)this + 0x6A);
}
