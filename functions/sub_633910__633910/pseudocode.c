void __thiscall sub_633910(Actor *this, Actor *a2)
{
  double v2; // st7
  NiPoint3 *v4; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  char v6; // al
  float *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  double v11; // rt0
  float v12; // eax
  float *v13; // eax
  TESObjectCELL *v14; // eax
  float *v15; // eax
  ActorVtbl *vtbl; // edx
  float *v17; // eax
  float *v18; // eax
  __int64 v19; // kr00_8
  ActorVtbl *v20; // ebx
  UInt32 v21; // eax
  ActorVtbl *v22; // ebx
  int v23; // eax
  int v24; // eax
  ActorVtbl *v25; // edx
  char v26; // al
  ActorVtbl *v27; // ebx
  int v28; // eax
  int v29; // eax
  TESObjectCELL *v30; // [esp+18h] [ebp-48h]
  TESObjectCELL *v31; // [esp+18h] [ebp-48h]
  int v32; // [esp+1Ch] [ebp-44h]
  int v33; // [esp+1Ch] [ebp-44h]
  TESWorldSpace *WorldSpace; // [esp+20h] [ebp-40h]
  float v35; // [esp+20h] [ebp-40h]
  float v36; // [esp+20h] [ebp-40h]
  NiPoint3 v37; // [esp+30h] [ebp-30h] BYREF
  float v38; // [esp+3Ch] [ebp-24h]
  float v39; // [esp+40h] [ebp-20h]
  float v40; // [esp+44h] [ebp-1Ch]
  float v41; // [esp+48h] [ebp-18h]
  float v42; // [esp+4Ch] [ebp-14h]
  float v43; // [esp+50h] [ebp-10h]
  int v44; // [esp+54h] [ebp-Ch] BYREF
  float v45; // [esp+58h] [ebp-8h]
  float v46; // [esp+5Ch] [ebp-4h]

  v2 = flt_A2F918; /*0x633910*/
  if ( v2 < *((float *)this + 0x6A) ) /*0x63392d*/
  {
    ((void (__thiscall *)(Actor *, Actor *))this->vtbl->super.super.ChangeCell)(this, a2); /*0x633938*/
    sub_5F8000(a2); /*0x63393c*/
    v4 = (NiPoint3 *)a2->vtbl->super.super.GetPos(a2); /*0x633955*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x633957*/
    Actor_ChoosePathGridSteeringPosition( /*0x633979*/
      (TESObjectREFR *)a2,
      (float *)&v44,
      *v4,
      DwordAtOffset40,
      COERCE_FLOAT(1),
      0.0,
      0);
    ((void (__thiscall *)(Actor *, int *))a2->vtbl->super.Unk_73)(a2, &v44); /*0x63398d*/
    return; /*0x633995*/
  }
  if ( LOBYTE(this->members.templateForm) ) /*0x633998*/
  {
    sub_5E9A60(a2, v2); /*0x6339a7*/
    if ( v6 ) /*0x6339b0*/
    {
      ((void (__thiscall *)(Actor *, Actor *))this->vtbl->super.super.ChangeCell)(this, a2); /*0x6339bb*/
      sub_5F8000(a2); /*0x6339bf*/
      return; /*0x6339ca*/
    }
    if ( sub_64ADA0(this) ) /*0x6339cd*/
    {
      v7 = a2->vtbl->super.super.GetPos(a2); /*0x6339e0*/
      v8 = *v7; /*0x6339ec*/
      v9 = v7[1]; /*0x6339f0*/
      v10 = v7[2]; /*0x6339f3*/
      v11 = dbl_A2FC70; /*0x6339f6*/
      v41 = v8; /*0x6339f8*/
      v38 = *(float *)&v44 * v11; /*0x6339fc*/
      v42 = v9; /*0x633a00*/
      v43 = v10; /*0x633a08*/
      v39 = v45 * v11; /*0x633a0e*/
      v40 = v11 * v46; /*0x633a16*/
      *(float *)&v44 = v38 + v8; /*0x633a22*/
      LODWORD(v37.x) = v44; /*0x633a2e*/
      v45 = v39 + v9; /*0x633a36*/
      v37.y = v45; /*0x633a42*/
      v46 = v40 + v10; /*0x633a4a*/
      v12 = v46; /*0x633a4e*/
    }
    else
    {
      v13 = a2->vtbl->super.super.GetPos(a2); /*0x633a5f*/
      v37 = *(NiPoint3 *)sub_62E790((float *)&v44, *v13, v13[1], v13[2], flt_A342A4, flt_A342A4); /*0x633a93*/
      v14 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x633aad*/
      v15 = Actor_ChoosePathGridSteeringPosition((TESObjectREFR *)a2, (float *)&v44, v37, v14, 0.0, COERCE_FLOAT(1), 0); /*0x633ad3*/
      v37.x = *v15; /*0x633ada*/
      v37.y = v15[1]; /*0x633ae1*/
      vtbl = a2->vtbl; /*0x633ae8*/
      v37.z = v15[2]; /*0x633aea*/
      v17 = vtbl->super.super.GetPos((TESObjectREFR *)a2); /*0x633af6*/
      if ( !sub_8AA350(&v37.x, v17) ) /*0x633b04*/
      {
LABEL_11:
        v19 = *(_QWORD *)&v37.y; /*0x633b2b*/
        v20 = this->vtbl; /*0x633b37*/
        *((_DWORD *)this + 0x9F) = LODWORD(v37.x); /*0x633b39*/
        *((_QWORD *)this + 0x50) = v19; /*0x633b3f*/
        WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2); /*0x633b52*/
        v21 = Shared_GetDwordAtOffset40(a2); /*0x633b55*/
        if ( !((unsigned __int8 (__thiscall *)(Actor *, Actor *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))v20[1].super.super.super.Unk_08)( /*0x633b81*/
                this,
                a2,
                LODWORD(v37.x),
                LODWORD(v37.y),
                LODWORD(v37.z),
                v21,
                WorldSpace) )
          return; /*0x633b81*/
        ((void (__thiscall *)(Actor *, Actor *, int))this->vtbl->Unk_8E)(this, a2, 0x101); /*0x633b97*/
        v22 = this->vtbl; /*0x633b9f*/
        v35 = flt_A37CC8; /*0x633ba5*/
        sub_68A1A0((_DWORD *)LODWORD(this->members.super.super.pos[2])); /*0x633ba8*/
        v32 = v23; /*0x633bb0*/
        v30 = sub_68A190((_DWORD *)LODWORD(this->members.super.super.pos[2])); /*0x633bb9*/
        sub_68A160((float ***)LODWORD(this->members.super.super.pos[2])); /*0x633bba*/
        ((void (__thiscall *)(Actor *, Actor *, int, TESObjectCELL *, int, _DWORD))v22[1].super.super.super.Unk_16)( /*0x633bc9*/
          this,
          a2,
          v24,
          v30,
          v32,
          LODWORD(v35));
        goto LABEL_16; /*0x633bcb*/
      }
      v18 = sub_5E03E0((TESObjectREFR *)a2, (float *)&v44, &v37.x); /*0x633b12*/
      v37.x = *v18; /*0x633b19*/
      v37.y = v18[1]; /*0x633b20*/
      v12 = v18[2]; /*0x633b24*/
    }
    v37.z = v12; /*0x633b27*/
    goto LABEL_11; /*0x633b27*/
  }
  sub_5E9A60(a2, v2); /*0x633bcd*/
  v25 = this->vtbl; /*0x633bd4*/
  if ( v26 ) /*0x633bd8*/
  {
    ((void (__thiscall *)(Actor *, Actor *))v25->super.super.ChangeCell)(this, a2); /*0x633be1*/
    sub_5F8000(a2); /*0x633be5*/
    return; /*0x633bf0*/
  }
  ((void (__thiscall *)(Actor *, Actor *, int))v25->Unk_8E)(this, a2, 0x101); /*0x633bff*/
  v27 = this->vtbl; /*0x633c07*/
  v36 = flt_A37CC8; /*0x633c0d*/
  sub_68A1A0((_DWORD *)LODWORD(this->members.super.super.pos[2])); /*0x633c10*/
  v33 = v28; /*0x633c18*/
  v31 = sub_68A190((_DWORD *)LODWORD(this->members.super.super.pos[2])); /*0x633c21*/
  sub_68A160((float ***)LODWORD(this->members.super.super.pos[2])); /*0x633c22*/
  ((void (__thiscall *)(Actor *, Actor *, int, TESObjectCELL *, int, _DWORD))v27[1].super.super.super.Unk_16)( /*0x633c31*/
    this,
    a2,
    v29,
    v31,
    v33,
    LODWORD(v36));
LABEL_16:
  *((float *)this + 0x6A) = *(float *)&MEMORY[0xB33E90][0xC] + *((float *)this + 0x6A); /*0x633c33*/
}
