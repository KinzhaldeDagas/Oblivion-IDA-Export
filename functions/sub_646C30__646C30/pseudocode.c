float *__thiscall sub_646C30(_DWORD *this, float *a2, Actor *a3, char a4)
{
  float y; // edx
  BSExtraDataVtbl *ExtraPackage; // ebx
  BSExtraData *PackageExtraTarget; // ebp
  int v7; // ecx
  float z; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  float *v11; // eax
  float *v12; // ecx
  float *v13; // eax
  int v14; // ecx
  int v15; // edx
  float *result; // eax
  ActorVtbl *vtbl; // edx
  Actor *v18; // ecx
  float *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  ActorVtbl *v23; // edx
  Actor *v24; // ecx
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  char v28[12]; // [esp+10h] [ebp-48h] BYREF
  char v29; // [esp+1Ch] [ebp-3Ch] BYREF
  char v30; // [esp+28h] [ebp-30h] BYREF
  char v31; // [esp+34h] [ebp-24h] BYREF
  char v32; // [esp+40h] [ebp-18h] BYREF
  char v33; // [esp+4Ch] [ebp-Ch] BYREF
  int PackageExtraIndex; // [esp+5Ch] [ebp+4h]

  y = g_zeroNiPoint3.y; /*0x646c3d*/
  ExtraPackage = (BSExtraDataVtbl *)*(this + 2); /*0x646c44*/
  PackageExtraTarget = (BSExtraData *)*(this + 0xB); /*0x646c48*/
  v7 = *(this + 1); /*0x646c4b*/
  *a2 = g_zeroNiPoint3.x; /*0x646c53*/
  z = g_zeroNiPoint3.z; /*0x646c55*/
  a2[1] = y; /*0x646c5f*/
  a2[2] = z; /*0x646c62*/
  PackageExtraIndex = v7; /*0x646c65*/
  if ( !a4 ) /*0x646c69*/
  {
    if ( !ExtraPackage ) /*0x646c6d*/
      return a2; /*0x646ddf*/
    if ( TESPackage::IsTemporaryOverrideType((TESPackage *)ExtraPackage) ) /*0x646c75*/
    {
      ExtraPackage = ExtraDataList::GetExtraPackage(&a3->members.super.super.baseExtraList); /*0x646c8a*/
      PackageExtraIndex = ExtraDataList_GetPackageExtraIndex(&a3->members.super.super.baseExtraList); /*0x646c93*/
      PackageExtraTarget = ExtraDataList_GetPackageExtraTarget(&a3->members.super.super.baseExtraList); /*0x646c9c*/
    }
  }
  if ( !ExtraPackage ) /*0x646ca0*/
    return a2; /*0x646ca0*/
  Destructor = ExtraPackage[3].Destructor; /*0x646ca6*/
  if ( Destructor == (void (__thiscall *)(BSExtraData *))0xFFFFFFFF ) /*0x646cac*/
    return a2; /*0x646cac*/
  switch ( *(_DWORD *)(*(_DWORD *)(4 * (_DWORD)Destructor + 0xB152B0) + 4 * PackageExtraIndex) ) /*0x646cd0*/
  {
    case 0: /*0x646cd0*/
      if ( !ExtraPackage[4].CompareTo ) /*0x646cdb*/
        goto LABEL_31; /*0x646cdb*/
      v11 = sub_566B30((TESPackage *)ExtraPackage, (float *)v28, a3); /*0x646ce9*/
      goto LABEL_33; /*0x646cee*/
    case 1: /*0x646cd0*/
    case 2: /*0x646cd0*/
    case 3: /*0x646cd0*/
    case 6: /*0x646cd0*/
    case 8: /*0x646cd0*/
    case 0xD: /*0x646cd0*/
    case 0xE: /*0x646cd0*/
    case 0xF: /*0x646cd0*/
    case 0x20: /*0x646cd0*/
    case 0x28: /*0x646cd0*/
      goto LABEL_26;
    case 4: /*0x646cd0*/
      if ( !ExtraPackage[4].CompareTo ) /*0x646d37*/
        goto LABEL_13; /*0x646d37*/
      v12 = (float *)&v30; /*0x646d39*/
      goto LABEL_12; /*0x646d3d*/
    case 5: /*0x646cd0*/
      if ( !ExtraPackage[4].CompareTo ) /*0x646d43*/
        goto LABEL_13; /*0x646d43*/
      v12 = (float *)&v31; /*0x646d45*/
      goto LABEL_12; /*0x646d49*/
    case 7: /*0x646cd0*/
      if ( !ExtraPackage[4].CompareTo ) /*0x646d4f*/
        goto LABEL_13; /*0x646d4f*/
      v12 = (float *)&v32; /*0x646d51*/
      goto LABEL_12; /*0x646d55*/
    case 9: /*0x646cd0*/
      if ( PackageExtraTarget ) /*0x646d59*/
      {
        vtbl = (ActorVtbl *)PackageExtraTarget->vtbl; /*0x646d5b*/
        v18 = (Actor *)PackageExtraTarget; /*0x646d5e*/
      }
      else
      {
        vtbl = a3->vtbl; /*0x646d62*/
        v18 = a3; /*0x646d64*/
      }
      v19 = vtbl->super.super.GetPos((TESObjectREFR *)v18); /*0x646d6c*/
      v20 = *(_DWORD *)v19; /*0x646d6e*/
      v21 = *((_DWORD *)v19 + 1); /*0x646d70*/
      v22 = *((_DWORD *)v19 + 2); /*0x646d73*/
      *(_DWORD *)a2 = v20; /*0x646d76*/
      *((_DWORD *)a2 + 1) = v21; /*0x646d78*/
      *((_DWORD *)a2 + 2) = v22; /*0x646d7b*/
      goto LABEL_24; /*0x646d7b*/
    case 0x1E: /*0x646cd0*/
      if ( ExtraPackage[4].CompareTo ) /*0x646cf3*/
      {
        v12 = (float *)&v29; /*0x646cf9*/
        goto LABEL_12; /*0x646cf9*/
      }
LABEL_13:
      v11 = a3->vtbl->super.super.GetPos(a3); /*0x646d22*/
      goto LABEL_33; /*0x646d2e*/
    case 0x2C: /*0x646cd0*/
LABEL_24:
      if ( a4 || LOBYTE(ExtraPackage[4].Destructor) != 6 ) /*0x646d98*/
      {
LABEL_26:
        if ( PackageExtraTarget ) /*0x646da1*/
        {
          v23 = (ActorVtbl *)PackageExtraTarget->vtbl; /*0x646da3*/
          v24 = (Actor *)PackageExtraTarget; /*0x646da6*/
        }
        else
        {
LABEL_31:
          v23 = a3->vtbl; /*0x646dc2*/
          v24 = a3; /*0x646dc4*/
        }
        v11 = v23->super.super.GetPos((TESObjectREFR *)v24); /*0x646dcc*/
        goto LABEL_33; /*0x646dcc*/
      }
      if ( !ExtraPackage[4].CompareTo ) /*0x646dae*/
      {
        v11 = (float *)sub_4D79F0(a3); /*0x646dbb*/
LABEL_33:
        v25 = *(_DWORD *)v11; /*0x646dce*/
        v26 = *((_DWORD *)v11 + 1); /*0x646dd0*/
        v27 = *((_DWORD *)v11 + 2); /*0x646dd3*/
        *(_DWORD *)a2 = v25; /*0x646dd6*/
        *((_DWORD *)a2 + 1) = v26; /*0x646dd8*/
        *((_DWORD *)a2 + 2) = v27; /*0x646ddb*/
        return a2; /*0x646ddb*/
      }
      v12 = (float *)&v33; /*0x646db0*/
LABEL_12:
      v13 = sub_566B30((TESPackage *)ExtraPackage, v12, a3); /*0x646cfd*/
      v14 = *((_DWORD *)v13 + 1); /*0x646d08*/
      *a2 = *v13; /*0x646d0b*/
      v15 = *((_DWORD *)v13 + 2); /*0x646d0d*/
      *((_DWORD *)a2 + 1) = v14; /*0x646d11*/
      *((_DWORD *)a2 + 2) = v15; /*0x646d14*/
      result = a2; /*0x646d17*/
      break; /*0x646d1f*/
    default:
      goto LABEL_31;
  }
  return result; /*0x646d10*/
}
