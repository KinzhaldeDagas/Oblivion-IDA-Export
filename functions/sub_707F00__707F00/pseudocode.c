unsigned int __thiscall sub_707F00(int *this, int a2)
{
  _DWORD *v2; // ebx
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
  float v21[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD v22[4]; // [esp+28h] [ebp-10h] BYREF

  v2 = (_DWORD *)a2;
  v3 = this;
  sub_6FFCE0(this, (unsigned int *)a2);
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v2[0x87] + 4);
  v5 = (unsigned __int16 *)(v3 + 6);
  v16 = v2[0x87];
  a2 = 2;
  v4(v16, v3 + 6, 2, &a2, 1);
  if ( v2[0x36] < 0x401000Bu )
    *v5 = *v5 & 7 | (2 * (*v5 & 0xFFF8));
  if ( v2[0x36] < 0x401000Cu )
    *v5 = *v5 & 0xF | (0x10 * (*v5 & 0xFFF0 | 7));
  if ( v2[0x36] < 0x5000001u )
    *v5 = (unsigned __int8)*v5 | (unsigned __int16)(2 * (*v5 & 0xFF00));
  sub_709430((char *)v3 + 0x54, (signed int)v2);
  sub_711B90((char *)v3 + 0x30, (int)v2);
  v14 = v2[0x87];
  v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v14 + 4);
  a2 = 4;
  v6(v14, v3 + 0x18, 4, &a2, 1);
  if ( v2[0x36] >= 0x5000013u )
  {
    sub_712AE0(v2);
    sub_712A20(v2);
  }
  else
  {
    v7 = *v5;
    v8 = *v5;
    v21[0] = 0.0;
    v21[1] = 0.0;
    v21[2] = 0.0;
    v18 = (v8 >> 1) & 7;
    *v5 = (v7 >> 3) ^ ((unsigned __int8)v7 ^ ((unsigned __int8)v7 >> 3)) & 1;
    sub_709430((char *)v21, (signed int)v2);
    sub_712AE0(v2);
    v15 = v2[0x87];
    v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v15 + 4);
    if ( v2[0x36] >= 0x4010000u )
    {
      v19 = 1;
      v9(v15, &a2, 1, &v19, 1);
    }
    else
    {
      v19 = 4;
      v9(v15, &v20, 4, &v19, 1);
      LOBYTE(a2) = v20 != 0;
    }
    if ( !strcmp((const char *)v2 + 0x384, "NiCollisionSwitch") && (*(_BYTE *)v5 & 8) == 0 )
      v18 = 4;
    if ( ((_BYTE)a2 || sub_8AA390(v21, &Vector3_InitValue_) || v18 != 2)
      && (v10 = (Ni2DBuffer *)sub_712520((int)"NiCollisionData")) != 0 )
    {
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x2A, v10);
      v22[1] = v18;
      v11 = *(this + 0x2A);
      v22[2] = (unsigned __int8)a2;
      v22[0] = this;
      v22[3] = v2;
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 0x58))(v11, v22);
      v3 = this;
    }
    else
    {
      v3 = this;
    }
  }
  if ( v2[0x36] < 0xA000102u )
  {
    *((_WORD *)v2 + 0x12C) = *v5;
    *v5 &= 0x3Fu;
  }
  result = v2[0x36];
  if ( result < 0xA000106 )
  {
    v13 = v3[0x2A];
    if ( v13 )
      result = (*(int (__thiscall **)(int, unsigned int, _DWORD))(*(_DWORD *)v13 + 0x5C))(v13, result, 0);
  }
  if ( v2[0x36] < 0x14000004u )
    *v5 &= ~0x40u;
  *v5 = *v5 & 0xFFE1 | 0xE;
  return result;
}
