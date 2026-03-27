char __cdecl sub_95D540(float *a1, float *a2, int a3, float *a4)
{
  int v5; // eax
  int v6; // ebx
  float *v7; // eax
  float *v8; // esi
  float *v9; // eax
  float *v10; // eax
  int v11[3]; // [esp+14h] [ebp-18h] BYREF
  float v12[3]; // [esp+20h] [ebp-Ch] BYREF
  float v13; // [esp+3Ch] [ebp+10h]

  if ( !a4 || *(_BYTE *)(a3 + 0x11) && ((_BYTE)a4[6] & 1) != 0 )
    return 0;
  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)a4 + 8))(a4);
  v6 = v5;
  if ( v5 && (*(_BYTE *)(v5 + 0x18) & 0x40) != 0 )
    return 0;
  if ( !sub_96E4C0(a4, a1, a2) )
    return 0;
  if ( v6 )
    return sub_95D730(a1, a2, (_DWORD *)a3, (int)a4);
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a4 + 0x10))(a4) )
    return sub_95C530(a1, a2, a3, (NiGeometryData *)a4);
  if ( !byte_BA9A6C )
    return 0;
  if ( !NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B4021C, (NiObject *)a4) )
    return 0;
  sub_4121A0(a4 + 0x22, (float *)v11, a1);
  if ( sub_47D9E0(a2, (float *)v11) < *(float *)&SrcStr )
    return 0;
  v7 = (float *)FormHeapAlloc(0x44u);
  v8 = v7 ? sub_95A2D0(v7, (int)a4) : 0;
  sub_95A360((_DWORD *)a3, (int)v8);
  v13 = sub_404C90((float *)v11);
  v8[5] = v13;
  if ( *(_DWORD *)(a3 + 8) != 1 )
    return 0;
  v9 = sub_4707B0(a2, (float *)v11, v13);
  v10 = sub_47D9B0(a1, v12, v9);
  v8[2] = *v10;
  v8[3] = v10[1];
  v8[4] = v10[2];
  return 0;
}
