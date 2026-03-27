double __thiscall sub_685140(char *this, TESObjectREFR *arg0, float a3)
{
  _DWORD *v5; // eax
  int v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  char *v11; // esi
  float *v12; // eax
  double v13; // st5
  int v14; // eax
  float v15; // ecx
  float v16; // edx
  float v17; // eax
  float *v18; // eax
  double x; // st7
  TESObjectREFRVtbl *vtbl; // ebx
  TESObjectREFR *v21; // ebx
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v23; // eax
  float a4; // [esp+0h] [ebp-4Ch]
  float v25; // [esp+14h] [ebp-38h]
  float v26; // [esp+18h] [ebp-34h]
  NiPoint3 a2; // [esp+1Ch] [ebp-30h] BYREF
  NiPoint3 v28; // [esp+28h] [ebp-24h] BYREF
  float v29; // [esp+34h] [ebp-18h]
  float v30; // [esp+38h] [ebp-14h]
  float v31; // [esp+3Ch] [ebp-10h]
  float v32; // [esp+40h] [ebp-Ch]
  float v33; // [esp+44h] [ebp-8h]
  float v34; // [esp+48h] [ebp-4h]
  float v35; // [esp+50h] [ebp+4h]
  float v36; // [esp+50h] [ebp+4h]
  float v37; // [esp+50h] [ebp+4h]
  float v38; // [esp+50h] [ebp+4h]
  float v39; // [esp+50h] [ebp+4h]

  if ( !arg0 )
    return 0.0;
  if ( a3 <= 0.0 )
    return 0.0;
  if ( !IsWeaponReady(arg0) )
    return 0.0;
  if ( ((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0) )
  {
    v5 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0);
    if ( !IsWeaponReady(v5) )
      return 0.0;
  }
  if ( !TESObjectREFR_GetParentCell(arg0) )
    return sub_68A300(this, (Concurrency::details::SchedulerBase *)arg0, a3);
  v26 = sub_5E65B0(arg0);
  v7 = (int)arg0->vtbl->GetPos(arg0);
  v8 = *(float *)v7;
  v9 = *(float *)(v7 + 4);
  v10 = *(float *)(v7 + 8);
  a2.x = v8;
  a2.y = v9;
  a2.z = v10;
  v11 = (char *)sub_42B410((BSExtraData *)(this + 0x14));
  while ( v11 )
  {
    v12 = (float *)sub_6899C0(v11);
    v28.x = a2.x - *v12;
    v28.y = a2.y - v12[1];
    v28.z = a2.z - v12[2];
    v13 = v28.x * v28.x;
    v35 = v28.y * v28.y + v13 + v28.z * v28.z;
    v36 = sqrt(v35);
    v25 = v36;
    v37 = v36 / v26;
    if ( v37 >= (double)a3 )
    {
      v39 = a3;
      a3 = 0.0;
      v18 = (float *)sub_6899C0(v11);
      v28.x = *v18 - a2.x;
      v28.y = v18[1] - a2.y;
      v28.z = v18[2] - a2.z;
      sub_43F350(&v28.x);
      v29 = v28.x * v26;
      v30 = v28.y * v26;
      v31 = v26 * v28.z;
      v32 = v29 * v39;
      v33 = v30 * v39;
      v34 = v39 * v31;
      v29 = v32 + a2.x;
      a2.x = v29;
      v30 = v33 + a2.y;
      a2.y = v30;
      v31 = v34 + a2.z;
      x = arg0->member.rot.x;
      a2.z = v31;
      if ( x != dbl_A3A5B0 )
      {
        vtbl = arg0->vtbl;
        a4 = sub_683CB0(&v28.x);
        vtbl[1].super.MarkAsModified((TESForm *)arg0, LODWORD(a4));
      }
      *((float *)this + 7) = flt_A32048;
      *((float *)this + 9) = 0.0;
      break;
    }
    v14 = sub_6899C0(v11);
    v15 = *(float *)v14;
    v16 = *(float *)(v14 + 4);
    v17 = *(float *)(v14 + 8);
    a2.x = v15;
    a2.y = v16;
    a2.z = v17;
    sub_68C170((int *)this + 5, v11);
    v11 = (char *)sub_42B410((BSExtraData *)(this + 0x14));
    a3 = a3 - v37;
    if ( !v11 )
    {
      sub_68B4F0((int *)this, v13, v37, (float ***)arg0);
      v11 = (char *)sub_42B410((BSExtraData *)(this + 0x14));
      if ( !v11 )
      {
        if ( sub_68A140(this) )
        {
          v38 = sub_6899D0((float *)this);
          if ( v38 > 0.0 )
          {
            if ( v25 < (double)v38 )
              v38 = v25;
            sub_43F350(&v28.x);
            NiPoint3::MutliplyByValue(&v28, v38);
            a2.x = v28.x + a2.x;
            a2.y = v28.y + a2.y;
            a2.z = v28.z + a2.z;
          }
        }
      }
    }
    if ( 0.0 == a3 )
      break;
  }
  TESObjectREFR_SetPosition(arg0, a2.x, a2.y, a2.z);
  v21 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0);
  if ( v21 )
  {
    TESObjectREFR_SetPosition(v21, a2.x, a2.y, a2.z);
    CharProxy = MobileObject_GetCharProxy((MobileObject *)v21);
    if ( CharProxy )
      sub_452A10(CharProxy, &a2);
  }
  v23 = MobileObject_GetCharProxy((MobileObject *)arg0);
  if ( v23 )
    sub_452A10(v23, &a2);
  if ( !v11 )
  {
    ((void (__thiscall *)(TESObjectREFR *, int))arg0->vtbl->Unk_60)(arg0, 1);
    if ( *(this + 0x2C) < 0 )
      (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 0x30))(this, 1);
  }
  return a3;
}
