NiAVObject *__thiscall sub_8B7FA0(hkVector4 **this, int a2)
{
  hkVector4 *v3; // eax
  hkVector4 *v4; // eax
  double v5; // rt0
  NiAVObject *result; // eax
  NiObjectNET *v7; // esi
  float v8; // [esp+14h] [ebp-2Ch] BYREF
  float v9; // [esp+18h] [ebp-28h]
  float v10; // [esp+1Ch] [ebp-24h]
  __m128 v11; // [esp+20h] [ebp-20h] BYREF

  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = v3 + 1;
  else
    v4 = &stru_BA7A40;
  v11 = *(__m128 *)v4;
  sub_43F3E0(&v8, &v11);
  v5 = dbl_A3D0C0;
  v8 = v8 * v5;
  v9 = v9 * v5;
  v10 = v5 * v10;
  result = sub_6FBC40(&v8, 0);
  v7 = (NiObjectNET *)result;
  if ( result )
  {
    ((void (__thiscall *)(hkVector4 **, NiAVObject *))LODWORD((*this)[9].z))(this, result);
    NiObjectNET_SetName(v7, "bhkBoxShape");
    return (*(NiAVObject *(__thiscall **)(int, NiObjectNET *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v7, 0);
  }
  return result;
}
