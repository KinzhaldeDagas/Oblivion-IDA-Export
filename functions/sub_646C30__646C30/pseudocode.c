float *__thiscall sub_646C30(_DWORD *this, float *a2, Actor *a3, char a4)
{
  int v4; // edx
  TESPackage *ExtraPackage; // ebx
  BSExtraData *v6; // ebp
  int v7; // ecx
  float v9; // eax
  UInt32 procedureArrayIndex; // eax
  BSExtraDataMembr *v11; // eax
  char *v12; // ecx
  float *v13; // eax
  int v14; // ecx
  int v15; // edx
  float *result; // eax
  int (__thiscall **vtbl)(Actor *); // edx
  Actor *v18; // ecx
  int *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int (__thiscall **v23)(Actor *); // edx
  Actor *v24; // ecx
  int v25; // ecx
  BSExtraData *next; // edx
  int v27; // eax
  char v28[12]; // [esp+10h] [ebp-48h] BYREF
  char v29; // [esp+1Ch] [ebp-3Ch] BYREF
  char v30; // [esp+28h] [ebp-30h] BYREF
  char v31; // [esp+34h] [ebp-24h] BYREF
  char v32; // [esp+40h] [ebp-18h] BYREF
  char v33; // [esp+4Ch] [ebp-Ch] BYREF
  int v34; // [esp+5Ch] [ebp+4h]

  v4 = *((_DWORD *)&Vector3_InitValue_ + 1);
  ExtraPackage = (TESPackage *)*(this + 2);
  v6 = (BSExtraData *)*(this + 0xB);
  v7 = *(this + 1);
  *a2 = Vector3_InitValue_;
  v9 = dword_B3F9B0;
  *((_DWORD *)a2 + 1) = v4;
  a2[2] = v9;
  v34 = v7;
  if ( !a4 )
  {
    if ( !ExtraPackage )
      return a2;
    if ( sub_567770((char *)ExtraPackage) )
    {
      ExtraPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&a3->members.super.super.baseExtraList);
      v34 = sub_41FB40(&a3->members.super.super.baseExtraList);
      v6 = sub_41FB60(&a3->members.super.super.baseExtraList);
    }
  }
  if ( !ExtraPackage )
    return a2;
  procedureArrayIndex = ExtraPackage->members.procedureArrayIndex;
  if ( procedureArrayIndex == 0xFFFFFFFF )
    return a2;
  switch ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0) + 4 * v34) )
  {
    case 0:
      if ( !ExtraPackage->members.location )
        goto LABEL_31;
      v11 = (BSExtraDataMembr *)sub_566B30(ExtraPackage, (int)v28, a3);
      goto LABEL_33;
    case 1:
    case 2:
    case 3:
    case 6:
    case 8:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x20:
    case 0x28:
      goto LABEL_26;
    case 4:
      if ( !ExtraPackage->members.location )
        goto LABEL_13;
      v12 = &v30;
      goto LABEL_12;
    case 5:
      if ( !ExtraPackage->members.location )
        goto LABEL_13;
      v12 = &v31;
      goto LABEL_12;
    case 7:
      if ( !ExtraPackage->members.location )
        goto LABEL_13;
      v12 = &v32;
      goto LABEL_12;
    case 9:
      if ( v6 )
      {
        vtbl = (int (__thiscall **)(Actor *))v6->vtbl;
        v18 = (Actor *)v6;
      }
      else
      {
        vtbl = (int (__thiscall **)(Actor *))a3->vtbl;
        v18 = a3;
      }
      v19 = (int *)vtbl[0x5D](v18);
      v20 = *v19;
      v21 = v19[1];
      v22 = v19[2];
      *(_DWORD *)a2 = v20;
      *((_DWORD *)a2 + 1) = v21;
      *((_DWORD *)a2 + 2) = v22;
      goto LABEL_24;
    case 0x1E:
      if ( ExtraPackage->members.location )
      {
        v12 = &v29;
        goto LABEL_12;
      }
LABEL_13:
      v11 = (BSExtraDataMembr *)a3->vtbl->super.super.GetPos((TESObjectREFR *)a3);
      goto LABEL_33;
    case 0x2C:
LABEL_24:
      if ( a4 || ExtraPackage->members.type != 6 )
      {
LABEL_26:
        if ( v6 )
        {
          v23 = (int (__thiscall **)(Actor *))v6->vtbl;
          v24 = (Actor *)v6;
        }
        else
        {
LABEL_31:
          v23 = (int (__thiscall **)(Actor *))a3->vtbl;
          v24 = a3;
        }
        v11 = (BSExtraDataMembr *)v23[0x5D](v24);
        goto LABEL_33;
      }
      if ( !ExtraPackage->members.location )
      {
        v11 = sub_4D79F0(a3);
LABEL_33:
        v25 = *(_DWORD *)&v11->type;
        next = v11->next;
        v27 = *(_DWORD *)&v11[1].type;
        *(_DWORD *)a2 = v25;
        *((_DWORD *)a2 + 1) = next;
        *((_DWORD *)a2 + 2) = v27;
        return a2;
      }
      v12 = &v33;
LABEL_12:
      v13 = (float *)sub_566B30(ExtraPackage, (int)v12, a3);
      v14 = *((_DWORD *)v13 + 1);
      *a2 = *v13;
      v15 = *((_DWORD *)v13 + 2);
      *((_DWORD *)a2 + 1) = v14;
      *((_DWORD *)a2 + 2) = v15;
      result = a2;
      break;
    default:
      goto LABEL_31;
  }
  return result;
}
