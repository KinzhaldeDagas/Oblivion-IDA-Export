bhkRefObject *__cdecl sub_8AFDC0(float a1, float a2)
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
  int v12; // [esp+14h] [ebp-130h] BYREF
  float v13; // [esp+18h] [ebp-12Ch]
  float v14; // [esp+24h] [ebp-120h]
  float v15; // [esp+28h] [ebp-11Ch]
  float v16; // [esp+2Ch] [ebp-118h]
  float v17; // [esp+30h] [ebp-114h]
  float v18; // [esp+34h] [ebp-110h]
  float v19; // [esp+38h] [ebp-10Ch]
  float v20; // [esp+3Ch] [ebp-108h]
  float v21; // [esp+40h] [ebp-104h]
  float v22[5]; // [esp+44h] [ebp-100h] BYREF
  int v23; // [esp+58h] [ebp-ECh]
  int v24; // [esp+64h] [ebp-E0h]
  float v25; // [esp+68h] [ebp-DCh]
  float v26; // [esp+F4h] [ebp-50h]
  float v27; // [esp+100h] [ebp-44h]
  char v28; // [esp+114h] [ebp-30h]
  int v29; // [esp+140h] [ebp-4h]

  v17 = 0.0;
  v12 = 0;
  v21 = 0.0;
  v2 = a2;
  if ( a1 <= v2 + v2 )
    a1 = v2 + v2 + dbl_A2F928;
  v3 = hkFactor;
  v13 = v2 * v3;
  v14 = 0.0;
  v15 = 0.0;
  v11 = a1 - v2;
  v16 = v3 * v11;
  v18 = 0.0;
  v19 = 0.0;
  v20 = v13;
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u);
  v29 = 0;
  if ( v4 )
    v5 = sub_563BB0(v4, (int)&v12);
  else
    v5 = 0;
  v29 = 0xFFFFFFFF;
  if ( !v5 )
    return 0;
  v5[1].members.m_uiRefCount = 9;
  sub_8A5790(v22);
  v6 = *(float *)&v5->hkObject;
  v26 = 0.0;
  v27 = flt_A3F424;
  v29 = 1;
  v28 = 7;
  LODWORD(v22[0]) = 0x40009;
  v24 = 0x40009;
  v22[1] = v6;
  v25 = v6;
  v7 = (bhkRefObject *)FormHeapAlloc(0x1Cu);
  LOBYTE(v29) = 2;
  if ( v7 )
    v8 = sub_533290(v7, (int)v22);
  else
    v8 = 0;
  v29 = 0xFFFFFFFF;
  if ( v23 >= 0 )
  {
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, (_DWORD *)LODWORD(v22[3]), 8 * v23, 0x14);
  }
  return v8;
}
