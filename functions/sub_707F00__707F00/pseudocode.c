unsigned int __thiscall sub_707F00(int *this, int a2)
{
  signed int v2; // ebx
  int *v3; // esi
  void (__cdecl *v4)(int, int *, int, int *, int); // edx
  unsigned __int16 *v5; // ebp
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  unsigned __int16 v7; // ax
  unsigned __int8 v8; // cl
  void (__cdecl *v9)(int, int *, int, int *, int); // eax
  Ni2DBuffer *v10; // eax
  int v11; // ecx
  unsigned int result; // eax
  int v13; // esi
  int v14; // [esp-18h] [ebp-50h]
  int v15; // [esp-18h] [ebp-50h]
  int v16; // [esp-14h] [ebp-4Ch]
  unsigned __int16 v18; // [esp+10h] [ebp-28h]
  int v19; // [esp+14h] [ebp-24h] BYREF
  int v20; // [esp+18h] [ebp-20h] BYREF
  NiPoint3 v21; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD v22[4]; // [esp+28h] [ebp-10h] BYREF

  v2 = a2; /*0x707f04*/
  v3 = this; /*0x707f0a*/
  sub_6FFCE0((NiRenderer *)this, (unsigned int *)a2); /*0x707f11*/
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x707f1c*/
  v5 = (unsigned __int16 *)(v3 + 6); /*0x707f28*/
  v16 = *(_DWORD *)(v2 + 0x21C); /*0x707f2c*/
  a2 = 2; /*0x707f2d*/
  v4(v16, v3 + 6, 2, &a2, 1); /*0x707f35*/
  if ( *(_DWORD *)(v2 + 0xD8) < 0x401000Bu ) /*0x707f44*/
    *v5 = *v5 & 7 | (2 * (*v5 & 0xFFF8)); /*0x707f59*/
  if ( *(_DWORD *)(v2 + 0xD8) < 0x401000Cu ) /*0x707f67*/
    *v5 = *v5 & 0xF | (0x10 * (*v5 & 0xFFF0 | 7)); /*0x707f84*/
  if ( *(_DWORD *)(v2 + 0xD8) < 0x5000001u ) /*0x707f92*/
    *v5 = (unsigned __int8)*v5 | (unsigned __int16)(2 * (*v5 & 0xFF00)); /*0x707fa7*/
  sub_709430((char *)v3 + 0x54, v2); /*0x707fb0*/
  sub_711B90((char *)v3 + 0x30, v2); /*0x707fb9*/
  v14 = *(_DWORD *)(v2 + 0x21C); /*0x707fd5*/
  v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v14 + 4); /*0x707fd6*/
  a2 = 4; /*0x707fd9*/
  v6(v14, v3 + 0x18, 4, &a2, 1); /*0x707fdd*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x5000013u ) /*0x707fec*/
  {
    sub_712AE0((unsigned int *)v2); /*0x708124*/
    sub_712A20((unsigned int *)v2); /*0x70812b*/
  }
  else
  {
    v7 = *v5; /*0x707ff2*/
    v8 = *v5; /*0x707ff8*/
    v21.x = 0.0; /*0x707ffb*/
    v21.y = 0.0; /*0x707fff*/
    v21.z = 0.0; /*0x708003*/
    v18 = (v8 >> 1) & 7; /*0x708013*/
    *v5 = (v7 >> 3) ^ ((unsigned __int8)v7 ^ ((unsigned __int8)v7 >> 3)) & 1; /*0x70802a*/
    sub_709430((char *)&v21, v2); /*0x70802e*/
    sub_712AE0((unsigned int *)v2); /*0x708035*/
    v15 = *(_DWORD *)(v2 + 0x21C); /*0x708059*/
    v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v15 + 4); /*0x70805a*/
    if ( *(_DWORD *)(v2 + 0xD8) >= 0x4010000u ) /*0x708051*/
    {
      v19 = 1; /*0x70807d*/
      v9(v15, &a2, 1, &v19, 1); /*0x708085*/
    }
    else
    {
      v19 = 4; /*0x70805d*/
      v9(v15, &v20, 4, &v19, 1); /*0x708061*/
      LOBYTE(a2) = v20 != 0; /*0x70806b*/
    }
    if ( !strcmp((const char *)(v2 + 0x384), "NiCollisionSwitch") && (*(_BYTE *)v5 & 8) == 0 ) /*0x7080a8*/
      v18 = 4; /*0x7080aa*/
    if ( ((_BYTE)a2 || NiPoint3__NotEqual(&v21, &g_zeroNiPoint3) || v18 != 2) /*0x7080e2*/
      && (v10 = (Ni2DBuffer *)sub_712520((int)"NiCollisionData")) != 0 )
    {
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x2A, v10); /*0x7080f1*/
      v22[1] = v18; /*0x708100*/
      v11 = *(this + 0x2A); /*0x708104*/
      v22[2] = (unsigned __int8)a2; /*0x708106*/
      v22[0] = this; /*0x70810a*/
      v22[3] = v2; /*0x70810e*/
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 0x58))(v11, v22); /*0x70811c*/
      v3 = this; /*0x70811e*/
    }
    else
    {
      v3 = this; /*0x708132*/
    }
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA000102u ) /*0x708141*/
  {
    *(_WORD *)(v2 + 0x258) = *v5; /*0x708147*/
    *v5 &= 0x3Fu; /*0x70814e*/
  }
  result = *(_DWORD *)(v2 + 0xD8); /*0x708153*/
  if ( result < 0xA000106 ) /*0x70815e*/
  {
    v13 = v3[0x2A]; /*0x708160*/
    if ( v13 ) /*0x708168*/
      result = (*(int (__thiscall **)(int, unsigned int, _DWORD))(*(_DWORD *)v13 + 0x5C))(v13, result, 0); /*0x708174*/
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0x14000004u ) /*0x708180*/
    *v5 &= ~0x40u; /*0x708182*/
  *v5 = *v5 & 0xFFE1 | 0xE; /*0x708196*/
  return result; /*0x708195*/
}
