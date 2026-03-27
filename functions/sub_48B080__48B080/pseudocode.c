int __userpurge sub_48B080@<eax>(
        double st6_0@<st1>,
        double a2@<st0>,
        TESObjectREFR *a3,
        int a4,
        signed int a5,
        TESObjectREFR *a6,
        float *a7,
        NiPoint3 *a8)
{
  double v9; // st5
  float *v10; // eax
  float x; // ecx
  float y; // edx
  NiTransform *v13; // eax
  NiPoint3 *p_rot; // eax
  float v15; // ecx
  float v16; // edx
  float z; // eax
  TESObjectCELL *ParentCell; // eax
  int v19; // eax
  int v20; // esi
  int WorldSpace; // [esp+4h] [ebp-60h]
  float v23; // [esp+10h] [ebp-54h] BYREF
  float v24; // [esp+14h] [ebp-50h]
  float v25; // [esp+18h] [ebp-4Ch]
  NiTransform v26; // [esp+1Ch] [ebp-48h] BYREF

  if ( a7 )
  {
    v23 = *a7;
    v24 = a7[1];
    v9 = a7[2];
  }
  else
  {
    v10 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a3->vtbl->GetPos)(
                     a3,
                     a2,
                     st6_0);
    v23 = *v10;
    x = a3->member.rot.x;
    v24 = v10[1];
    y = a3->member.rot.y;
    v25 = v10[2];
    v26.rot.data[0][2] = a3->member.rot.z;
    *(_QWORD *)&v26.rot.data[0][0] = __PAIR64__(LODWORD(y), LODWORD(x));
    sub_711580(&v26.pos.x, x, y, v26.rot.data[0][2]);
    v26.rot.data[1][0] = 0.0;
    v26.rot.data[1][1] = flt_A3D8F0;
    v26.rot.data[1][2] = flt_A37CC8;
    v13 = sub_7101F0((NiTransform *)&v26.pos, &v26, (NiPoint3 *)v26.rot.data[1]);
    v23 = v13->rot.data[0][0] + v23;
    v24 = v13->rot.data[0][1] + v24;
    v9 = v13->rot.data[0][2] + v25;
  }
  p_rot = a8;
  v25 = v9;
  if ( !a8 )
  {
    p_rot = &a3->member.rot;
    if ( !a3 )
      p_rot = (NiPoint3 *)&Vector3_InitValue_;
  }
  v15 = p_rot->x;
  v16 = p_rot->y;
  z = p_rot->z;
  *(_QWORD *)&v26.rot.data[2][0] = __PAIR64__(LODWORD(v16), LODWORD(v15));
  v26.rot.data[2][2] = z;
  WorldSpace = TESObjectREFR_GetWorldSpace(a3);
  ParentCell = TESObjectREFR_GetParentCell(a3);
  TESDataHandler_PlaceObjectRef(v9, st6_0, a4, (int)&v23, (int)v26.rot.data[2], ParentCell, WorldSpace, a6);
  v20 = v19;
  if ( a5 > 1 )
    ExtraDataList_SetExtraCount((ExtraDataList *)(v19 + 0x44), a5);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v20 + 0x40))(v20, 0x20);
  return v20;
}
