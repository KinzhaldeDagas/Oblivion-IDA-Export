int __userpurge sub_48B080@<eax>(
        double st6_0@<st1>,
        double a2@<st0>,
        TESObjectREFR *a3,
        TESForm *a4,
        signed int a5,
        TESObjectREFR *a6,
        float *a7,
        NiPoint3 *a8)
{
  double v8; // st5
  float *v9; // eax
  float x; // ecx
  float y; // edx
  NiTransform *v12; // eax
  NiPoint3 *p_rot; // eax
  float v14; // ecx
  float v15; // edx
  float z; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  int v18; // eax
  int v19; // esi
  TESWorldSpace *WorldSpace; // [esp+4h] [ebp-60h]
  float v22; // [esp+10h] [ebp-54h] BYREF
  float v23; // [esp+14h] [ebp-50h]
  float v24; // [esp+18h] [ebp-4Ch]
  NiTransform v25; // [esp+1Ch] [ebp-48h] BYREF

  if ( a7 ) /*0x48b08e*/
  {
    v22 = *a7; /*0x48b092*/
    v23 = a7[1]; /*0x48b099*/
    v8 = a7[2]; /*0x48b09d*/
  }
  else
  {
    v9 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a3->vtbl->GetPos)( /*0x48b0af*/
                    a3,
                    a2,
                    st6_0);
    v22 = *v9; /*0x48b0b3*/
    x = a3->member.rot.x; /*0x48b0ba*/
    v23 = v9[1]; /*0x48b0bd*/
    y = a3->member.rot.y; /*0x48b0c4*/
    v24 = v9[2]; /*0x48b0c7*/
    v25.rot.data[0][2] = a3->member.rot.z; /*0x48b0d1*/
    *(_QWORD *)&v25.rot.data[0][0] = __PAIR64__(LODWORD(y), LODWORD(x)); /*0x48b0e5*/
    sub_711580(&v25.pos.x, x, y, v25.rot.data[0][2]); /*0x48b0f8*/
    v25.rot.data[1][0] = 0.0; /*0x48b103*/
    v25.rot.data[1][1] = flt_A3D8F0; /*0x48b112*/
    a2 = flt_A37CC8; /*0x48b117*/
    v25.rot.data[1][2] = flt_A37CC8; /*0x48b121*/
    v12 = sub_7101F0((NiTransform *)&v25.pos, &v25, (NiPoint3 *)v25.rot.data[1]); /*0x48b125*/
    v22 = v12->rot.data[0][0] + v22; /*0x48b130*/
    v23 = v12->rot.data[0][1] + v23; /*0x48b13b*/
    v8 = v12->rot.data[0][2] + v24; /*0x48b142*/
  }
  p_rot = a8; /*0x48b146*/
  v24 = v8; /*0x48b14a*/
  if ( !a8 ) /*0x48b150*/
  {
    p_rot = &a3->member.rot; /*0x48b154*/
    if ( !a3 ) /*0x48b157*/
      p_rot = &g_zeroNiPoint3; /*0x48b159*/
  }
  v14 = p_rot->x; /*0x48b15e*/
  v15 = p_rot->y; /*0x48b160*/
  z = p_rot->z; /*0x48b163*/
  *(_QWORD *)&v25.rot.data[2][0] = __PAIR64__(LODWORD(v15), LODWORD(v14)); /*0x48b166*/
  v25.rot.data[2][2] = z; /*0x48b175*/
  WorldSpace = TESObjectREFR_GetWorldSpace(a3); /*0x48b17e*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3); /*0x48b181*/
  TESDataHandler_PlaceObjectRef(v8, st6_0, a2, a4, (int)&v22, (int)v25.rot.data[2], DwordAtOffset40, WorldSpace, a6); /*0x48b19c*/
  v19 = v18; /*0x48b1a1*/
  if ( a5 > 1 ) /*0x48b1aa*/
    ExtraDataList_SetExtraCount((ExtraDataList *)(v18 + 0x44), a5); /*0x48b1b0*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v19 + 0x40))(v19, 0x20); /*0x48b1be*/
  return v19; /*0x48b1c2*/
}
