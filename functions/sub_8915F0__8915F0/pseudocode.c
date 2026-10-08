// TES4 authoritative: casts a 25-Havok-unit downward ray from one cached capsule endpoint and returns adjusted endpoint z on hit.
char __thiscall bhkCharacterProxy_RaycastCapsuleEndpointDown(_DWORD *this, int a2, float *a3)
{
  __int128 v4; // xmm0
  double v5; // st7
  __int128 v6; // xmm0
  _DWORD *v7; // ecx
  int HavokObject; // eax
  int v9; // eax
  int v10; // esi
  char result; // al
  char v12; // [esp+1Fh] [ebp-E5h]
  float v13; // [esp+20h] [ebp-E4h] BYREF
  _DWORD v14[9]; // [esp+24h] [ebp-E0h] BYREF
  float v15; // [esp+48h] [ebp-BCh]
  int v16; // [esp+54h] [ebp-B0h]
  _OWORD v17[2]; // [esp+64h] [ebp-A0h] BYREF
  char v18; // [esp+84h] [ebp-80h]
  float v19; // [esp+88h] [ebp-7Ch]
  float v20; // [esp+A8h] [ebp-5Ch]
  int v21; // [esp+B4h] [ebp-50h]
  hkVector4 v22; // [esp+C4h] [ebp-40h]
  int v23; // [esp+D4h] [ebp-30h]
  _DWORD *v24; // [esp+D8h] [ebp-2Ch]
  int v25; // [esp+DCh] [ebp-28h]
  int v26; // [esp+100h] [ebp-4h]

  v20 = 1.0; /*0x891637*/
  v15 = 1.0; /*0x89163e*/
  *(float *)&v14[1] = 1.0; /*0x891644*/
  v18 = 0; /*0x891648*/
  v19 = 0.0; /*0x89164f*/
  v21 = 0; /*0x891656*/
  v23 = 0; /*0x89165d*/
  v14[0] = &hkClosestRayHitCollector::`vftable'; /*0x891664*/
  v16 = 0; /*0x89166c*/
  v4 = *((_OWORD *)this + a2 + 0x38); /*0x891679*/
  *(_OWORD *)a3 = v4; /*0x89167d*/
  v5 = a3[2] - dbl_A492B0;                      // Downward ray target starts 25 Havok units below cached capsule endpoint z. /*0x891683*/
  v17[0] = v4; /*0x891689*/
  a3[2] = v5; /*0x891696*/
  v22 = unk_BA7A40; /*0x8916a0*/
  v6 = *(_OWORD *)a3; /*0x8916a8*/
  v26 = 0; /*0x8916ae*/
  v24 = v14; /*0x8916b5*/
  v25 = 0; /*0x8916bc*/
  v17[1] = v6; /*0x8916c3*/
  bhkCharacterProxy_GetCollisionFilterInfo(this, &v13);// TES4 authoritative capsule endpoint ray: uses proxy metadata collision filter info so the ray preserves actor identity/filtering. /*0x8916c8*/
  v19 = v13; /*0x8916d3*/
  if ( this && (v7 = (_DWORD *)*(this + 2)) != 0 ) /*0x8916e1*/
    HavokObject = bhkCollisionWrapper_GetHavokObject(v7); /*0x8916e3*/
  else
    HavokObject = 0; /*0x8916ea*/
  v9 = *(_DWORD *)(HavokObject + 8); /*0x8916ec*/
  if ( v9 ) /*0x8916f1*/
    v10 = *(_DWORD *)(v9 + 0x2B0); /*0x8916f3*/
  else
    v10 = 0; /*0x8916fb*/
  if ( v10 ) /*0x8916ff*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 0x58))(v10); /*0x891708*/
  v12 = (*(int (__thiscall **)(int, _OWORD *))(*(_DWORD *)v10 + 0x88))(v10, v17);// TES4 authoritative capsule endpoint ray: raw Havok-world vfunc +0x88 raycast from cached capsule endpoint downward 25 Havok units. Used for support slope sampling only. /*0x89171b*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 0x58))(v10); /*0x891726*/
  result = v12; /*0x891728*/
  if ( v12 ) /*0x89172e*/
  {
    v13 = 1.0 - v15; /*0x891738*/
    a3[2] = v13 * dbl_A492B0 + a3[2]; /*0x891749*/
  }
  return result; /*0x89174c*/
}
