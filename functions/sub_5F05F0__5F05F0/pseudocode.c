void __userpurge sub_5F05F0(
        Actor *a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        Actor *a7,
        _DWORD *a8,
        int a9)
{
  _DWORD *v9; // esi
  NiAVObject *v11; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  int v13; // ebx
  double v14; // st5
  LowProcess *process; // ecx
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  _DWORD v20[5]; // [esp+30h] [ebp-24h] BYREF
  char v21; // [esp+44h] [ebp-10h]
  char v22; // [esp+45h] [ebp-Fh]
  char *v23; // [esp+48h] [ebp-Ch]
  int v24; // [esp+4Ch] [ebp-8h]
  _DWORD *v25; // [esp+50h] [ebp-4h]

  v9 = a8; /*0x5f05fa*/
  if ( !a8 /*0x5f0632*/
    && a7
    && a7->vtbl->super.super.GetNiNode((TESObjectREFR *)a7)
    && (v11 = (NiAVObject *)a7->vtbl->super.super.GetNiNode((TESObjectREFR *)a7),
        (BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v11)) != 0) )
  {
    v9 = (_DWORD *)BhkCollisionObjectRecursive[4]; /*0x5f0634*/
    v13 = *(_DWORD *)(sub_494F10(v9) + 0x10); /*0x5f063e*/
  }
  else
  {
    v13 = a9; /*0x5f0643*/
  }
  *(float *)&v20[4] = kHeadBodyNormalMatchRadius; /*0x5f0655*/
  v14 = flt_A2FE7C; /*0x5f065d*/
  v20[1] = a5; /*0x5f0663*/
  *(float *)&v20[3] = v14; /*0x5f0667*/
  process = a1->members.super.process; /*0x5f066b*/
  v25 = v9; /*0x5f066e*/
  v24 = 0; /*0x5f0676*/
  v21 = 0x1F; /*0x5f067e*/
  v22 = v13; /*0x5f0683*/
  v20[0] = a4; /*0x5f0687*/
  v20[2] = a6; /*0x5f068b*/
  v23 = (char *)v9 + (_DWORD)a1; /*0x5f068f*/
  if ( process && (v16 = (int)process->GetEquippedWeaponData(process, 1)) != 0 ) /*0x5f06a3*/
    v17 = *(_DWORD *)(v16 + 8); /*0x5f06a5*/
  else
    v17 = 0; /*0x5f06aa*/
  if ( a7 && a7->vtbl->super.super.IsActor((TESObjectREFR *)a7) ) /*0x5f06bb*/
  {
    if ( v17 ) /*0x5f06c3*/
      v18 = *(char *)(v17 + 0x90); /*0x5f06c5*/
    else
      v18 = 0xFFFFFFFF; /*0x5f06ce*/
    sub_6AF880(a2, a3, a1, 0.0, COERCE_INT(0.0), a7, v18, 0xFFFFFFFF, 0xFFFFFFFF, 0, 0); /*0x5f06e8*/
  }
  else
  {
    if ( v13 != 6 ) /*0x5f06fd*/
    {
      if ( v17 ) /*0x5f0701*/
        v19 = *(char *)(v17 + 0x90); /*0x5f0703*/
      else
        v19 = 0xFFFFFFFF; /*0x5f070c*/
      v14 = 0.0; /*0x5f070f*/
      sub_6AF880(a2, a3, a1, 0.0, COERCE_INT(0.0), a1, v19, 0xFFFFFFFF, 0xFFFFFFFF, 1, 0); /*0x5f0726*/
    }
    sub_6B0C70(v14, a3, COERCE_FLOAT(v20)); /*0x5f0733*/
  }
}
