double __thiscall sub_685140(char *this, TESObjectREFR *arg0, float a3)
{
  _DWORD *v5; // eax
  float *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  char *LinkedDoor; // esi
  float *Head; // eax
  char *v13; // eax
  float v14; // ecx
  float v15; // edx
  float v16; // eax
  float *v17; // eax
  double x; // st7
  TESObjectREFRVtbl *vtbl; // ebx
  TESObjectREFR *v20; // ebx
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v22; // eax
  float a4; // [esp+0h] [ebp-4Ch]
  float v24; // [esp+14h] [ebp-38h]
  float v25; // [esp+18h] [ebp-34h]
  NiPoint3 a2; // [esp+1Ch] [ebp-30h] BYREF
  NiPoint3 v27; // [esp+28h] [ebp-24h] BYREF
  float v28; // [esp+34h] [ebp-18h]
  float v29; // [esp+38h] [ebp-14h]
  float v30; // [esp+3Ch] [ebp-10h]
  float v31; // [esp+40h] [ebp-Ch]
  float v32; // [esp+44h] [ebp-8h]
  float v33; // [esp+48h] [ebp-4h]
  float v34; // [esp+50h] [ebp+4h]
  float v35; // [esp+50h] [ebp+4h]
  float v36; // [esp+50h] [ebp+4h]
  float v37; // [esp+50h] [ebp+4h]
  float v38; // [esp+50h] [ebp+4h]

  if ( !arg0 ) /*0x68514f*/
    return 0.0; /*0x68514f*/
  if ( a3 <= 0.0 ) /*0x685160*/
    return 0.0; /*0x685160*/
  if ( !IsWeaponReady(arg0) ) /*0x685168*/
    return 0.0; /*0x685168*/
  if ( ((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0) ) /*0x68517f*/
  {
    v5 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0); /*0x68518f*/
    if ( !IsWeaponReady(v5) ) /*0x685193*/
      return 0.0; /*0x685523*/
  }
  if ( !Shared_GetDwordAtOffset40(arg0) ) /*0x6851a2*/
    return sub_68A300((float ***)this, arg0, a3); /*0x6851b6*/
  v25 = sub_5E65B0(arg0);                       // AI path interpolation uses sub_5E65B0(actor) as movement speed for segment timing, so no run/swim/fly flags means walk speed even when no direction bits are set. /*0x6851cc*/
  v7 = arg0->vtbl->GetPos(arg0); /*0x6851e2*/
  v8 = *v7; /*0x6851e4*/
  v9 = v7[1]; /*0x6851e6*/
  v10 = v7[2]; /*0x6851e9*/
  a2.x = v8; /*0x6851ec*/
  a2.y = v9; /*0x6851f5*/
  a2.z = v10; /*0x6851f9*/
  LinkedDoor = (char *)TeleportData_GetLinkedDoor((TeleportData *)(this + 0x14)); /*0x685202*/
  while ( LinkedDoor ) /*0x685206*/
  {
    Head = (float *)EmbeddedList_GetHead(LinkedDoor); /*0x68520e*/
    v27.x = a2.x - *Head; /*0x685219*/
    v27.y = a2.y - Head[1]; /*0x685224*/
    v27.z = a2.z - Head[2]; /*0x68522f*/
    v34 = v27.y * v27.y + v27.x * v27.x + v27.z * v27.z; /*0x68524f*/
    v35 = sqrt(v34); /*0x68525c*/
    v24 = v35; /*0x685266*/
    v36 = v35 / v25; /*0x685272*/
    if ( v36 >= (double)a3 ) /*0x685285*/
    {
      v38 = a3; /*0x68537c*/
      a3 = 0.0; /*0x685382*/
      v17 = (float *)EmbeddedList_GetHead(LinkedDoor); /*0x685386*/
      v27.x = *v17 - a2.x; /*0x685395*/
      v27.y = v17[1] - a2.y; /*0x6853a0*/
      v27.z = v17[2] - a2.z; /*0x6853ab*/
      Vector3_NormalizeInPlace(&v27.x); /*0x6853af*/
      v28 = v27.x * v25; /*0x6853c4*/
      v29 = v27.y * v25; /*0x6853ce*/
      v30 = v25 * v27.z; /*0x6853d6*/
      v31 = v28 * v38; /*0x6853e8*/
      v32 = v29 * v38; /*0x6853f2*/
      v33 = v38 * v30; /*0x6853fa*/
      v28 = v31 + a2.x; /*0x685406*/
      a2.x = v28; /*0x685412*/
      v29 = v32 + a2.y; /*0x68541a*/
      a2.y = v29; /*0x685426*/
      v30 = v33 + a2.z; /*0x68542e*/
      x = arg0->member.rot.x; /*0x685436*/
      a2.z = v30; /*0x685439*/
      if ( x != dbl_A3A5B0 ) /*0x685448*/
      {
        vtbl = arg0->vtbl; /*0x68544a*/
        a4 = Vector3_CalculateHeadingRadiansXY(&v27.x); /*0x685456*/
        vtbl[1].super.MarkAsModified((TESForm *)arg0, LODWORD(a4)); /*0x685461*/
      }
      *((float *)this + 7) = flt_A32048; /*0x685469*/
      *((float *)this + 9) = 0.0; /*0x68546e*/
      break; /*0x68546e*/
    }
    v13 = EmbeddedList_GetHead(LinkedDoor); /*0x68528d*/
    v14 = *(float *)v13; /*0x685292*/
    v15 = *((float *)v13 + 1); /*0x685294*/
    v16 = *((float *)v13 + 2); /*0x685297*/
    a2.x = v14; /*0x68529a*/
    a2.y = v15; /*0x6852a1*/
    a2.z = v16; /*0x6852a5*/
    sub_68C170((NiSurfaceData **)this + 5, (NiDX92DBufferData *)LinkedDoor); /*0x6852a9*/
    LinkedDoor = (char *)TeleportData_GetLinkedDoor((TeleportData *)(this + 0x14)); /*0x6852bd*/
    a3 = a3 - v36; /*0x6852c1*/
    if ( !LinkedDoor ) /*0x6852c5*/
    {
      sub_68B4F0((int *)this, v36, (float ***)arg0); /*0x6852ce*/
      LinkedDoor = (char *)TeleportData_GetLinkedDoor((TeleportData *)(this + 0x14)); /*0x6852da*/
      if ( !LinkedDoor && sub_68A140(this) ) /*0x6852e6*/
      {
        v37 = sub_6899D0((float *)this); /*0x6852f6*/
        if ( v37 > 0.0 ) /*0x685309*/
        {
          if ( v24 < (double)v37 ) /*0x685318*/
            v37 = v24; /*0x68531a*/
          Vector3_NormalizeInPlace(&v27.x); /*0x685326*/
          NiPoint3::MutliplyByValue(&v27, v37); /*0x685339*/
          a2.x = v27.x + a2.x; /*0x685346*/
          a2.y = v27.y + a2.y; /*0x685352*/
          a2.z = v27.z + a2.z; /*0x68535e*/
        }
      }
    }
    if ( 0.0 == a3 ) /*0x685371*/
      break; /*0x685371*/
  }
  TESObjectREFR_SetPosition(arg0, a2.x, a2.y, a2.z); /*0x685471*/
  v20 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0); /*0x68549d*/
  if ( v20 ) /*0x6854a1*/
  {
    TESObjectREFR_SetPosition(v20, a2.x, a2.y, a2.z); /*0x6854be*/
    CharProxy = MobileObject_GetCharProxy((MobileObject *)v20); /*0x6854c5*/
    if ( CharProxy ) /*0x6854cc*/
      sub_452A10(CharProxy, &a2); /*0x6854d5*/
  }
  v22 = MobileObject_GetCharProxy((MobileObject *)arg0); /*0x6854dc*/
  if ( v22 ) /*0x6854e3*/
    sub_452A10(v22, &a2); /*0x6854ec*/
  if ( !LinkedDoor ) /*0x6854f3*/
  {
    ((void (__thiscall *)(TESObjectREFR *, int))arg0->vtbl->Unk_60)(arg0, 1); /*0x685501*/
    if ( *(this + 0x2C) < 0 ) /*0x685507*/
      (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 0x30))(this, 1); /*0x685513*/
  }
  return a3; /*0x6851bb*/
}
