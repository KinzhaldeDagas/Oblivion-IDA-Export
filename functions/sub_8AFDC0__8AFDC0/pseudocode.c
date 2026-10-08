// [Collision research 2026-10-07] Native trunk factory descriptor:8A5790 init,filter40009 at+0/+20,shape+4/+24,mass+B0=0,friction+BC=A3F424,motion+D0=7,material9;ctor533290 wrapper1C. Captured by native instruction emulation in out/collision_full_v144/native_body_oracle.json. Extra solid-body prototype discarded after user clarified existing authored tree contact works. v144 does not add extra solids.
bhkRefObject *__cdecl BSTreeModel_CreateTrunkCapsuleShape(float trunkLength, float radius)
{
  double v2; // st6
  double v3; // st4
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi
  float v6; // esi
  bhkRefObject *v7; // eax
  bhkRefObject *v8; // esi
  int v9; // ecx
  float v11; // [esp+10h] [ebp-134h]
  OB_CollisionCapsuleCinfo_010201A0 info; // [esp+14h] [ebp-130h] BYREF
  float v13[5]; // [esp+44h] [ebp-100h] BYREF
  int v14; // [esp+58h] [ebp-ECh]
  int v15; // [esp+64h] [ebp-E0h]
  float v16; // [esp+68h] [ebp-DCh]
  float v17; // [esp+F4h] [ebp-50h]
  float v18; // [esp+100h] [ebp-44h]
  char v19; // [esp+114h] [ebp-30h]
  int v20; // [esp+140h] [ebp-4h]

  info.endpointA[3] = 0.0; /*0x8afe03*/
  info.material = 0; /*0x8afe07*/
  info.endpointB[3] = 0.0; /*0x8afe0b*/
  v2 = radius; /*0x8afe0f*/
  if ( trunkLength <= v2 + v2 ) /*0x8afe20*/
    trunkLength = v2 + v2 + dbl_A2F928; /*0x8afe28*/
  v3 = hkFactor; /*0x8afe33*/
  info.radius = v2 * v3; /*0x8afe3d*/
  info.endpointA[0] = 0.0; /*0x8afe43*/
  info.endpointA[1] = 0.0; /*0x8afe47*/
  v11 = trunkLength - v2; /*0x8afe52*/
  info.endpointA[2] = v3 * v11; /*0x8afe5e*/
  info.endpointB[0] = 0.0; /*0x8afe62*/
  info.endpointB[1] = 0.0; /*0x8afe66*/
  info.endpointB[2] = info.radius; /*0x8afe6e*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8afe72*/
  v20 = 0; /*0x8afe80*/
  if ( v4 ) /*0x8afe87*/
    v5 = OB_bhkCapsuleShape_CtorFromCinfo_010201A0(v4, &info); /*0x8afe95*/
  else
    v5 = 0; /*0x8afe99*/
  v20 = 0xFFFFFFFF; /*0x8afe9d*/
  if ( !v5 ) /*0x8afea8*/
    return 0; /*0x8aff7a*/
  v5[1].members.m_uiRefCount = 9; /*0x8afeb2*/
  sub_8A5790(v13); /*0x8afeb9*/
  v6 = *(float *)&v5->hkObject; /*0x8afec0*/
  v17 = 0.0; /*0x8afec3*/
  v18 = flt_A3F424; /*0x8afed7*/
  v20 = 1; /*0x8afede*/
  v19 = 7; /*0x8afee9*/
  LODWORD(v13[0]) = 0x40009; /*0x8afef1*/
  v15 = 0x40009; /*0x8afef5*/
  v13[1] = v6; /*0x8afef9*/
  v16 = v6; /*0x8afefd*/
  v7 = (bhkRefObject *)FormHeapAlloc(0x1Cu); /*0x8aff01*/
  LOBYTE(v20) = 2; /*0x8aff0f*/
  if ( v7 ) /*0x8aff17*/
    v8 = sub_533290(v7, (int)v13); /*0x8aff25*/
  else
    v8 = 0; /*0x8aff29*/
  v20 = 0xFFFFFFFF; /*0x8aff31*/
  if ( v14 >= 0 ) /*0x8aff3c*/
  {
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8aff4e*/
    if ( !v9 ) /*0x8aff56*/
      v9 = unk_BA7D9C; /*0x8aff58*/
    sub_8A75D0(v9, (_DWORD *)LODWORD(v13[3]), 8 * v14, 0x14); /*0x8aff71*/
  }
  return v8; /*0x8aff7c*/
}
