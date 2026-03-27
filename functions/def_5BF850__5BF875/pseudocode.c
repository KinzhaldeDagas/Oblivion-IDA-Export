// local variable allocation has failed, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
void __usercall def_5BF850(int a1@<edi>, int esi0@<esi>, double a3@<st1>)
{
  int v3; // ebx
  unsigned int RandomLargeInteger; // ebp
  char v5; // di
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // edi
  int v9; // ebx
  Tile *v10; // ecx
  Tile *v11; // ecx
  double v12; // st7
  int SkillMasteryLevel; // eax
  Tile *v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // eax
  double v18; // st7
  int v19; // eax
  char *m_data; // edi
  PlayerCharacter *v21; // [esp-34h] [ebp-3Ch]
  int v22; // [esp-30h] [ebp-38h]
  float v23; // [esp-28h] [ebp-30h]
  float v24; // [esp-1Ch] [ebp-24h]
  float v25; // [esp-1Ch] [ebp-24h]
  float v26; // [esp-1Ch] [ebp-24h]
  BSStringT v27; // [esp-8h] [ebp-10h] BYREF
  int v28; // [esp+0h] [ebp-8h]
  _DWORD *a2; // [esp+4h] [ebp-4h] OVERLAPPED
  _UNKNOWN *retaddr; // [esp+8h] [ebp+0h]

  if ( a1 + 1 < 4 )
    JUMPOUT(0x5BF821);
  v3 = 0x64;
  v28 = 4;
  do
  {
    RandomLargeInteger = GetRandomLargeInteger_(0);
    *(_QWORD *)&a2 = (__int64)flt_B33E9C;
    v5 = GetRandomLargeInteger_((unsigned int)a2);
    GetRandomLargeInteger_(RandomLargeInteger);
    v6 = v5 & 3;
    v7 = 0;
    do
    {
      if ( ++v7 > 3 )
        v7 = 0;
      if ( *(_DWORD *)(esi0 + 0x14 * v7 + 0x34) == 0xFFFFFFFF )
        --v6;
    }
    while ( v6 >= 0 );
    *(_DWORD *)(esi0 + 0x14 * v7 + 0x34) = v3;
    v3 -= 0x19;
    --v28;
  }
  while ( v28 );
  sub_5BE380((_DWORD *)esi0);
  v8 = (_DWORD *)(esi0 + 0x30);
  v9 = 4;
  do
  {
    switch ( v8[1] )
    {
      case 0x19:
        a2 = (_DWORD *)(*v8 + 1);
        v10 = *(Tile **)(esi0 + 0x98);
        goto LABEL_16;
      case 0x32:
        v10 = *(Tile **)(esi0 + 0x9C);
        a2 = (_DWORD *)(*v8 + 1);
        goto LABEL_16;
      case 0x4B:
        v10 = *(Tile **)(esi0 + 0xA0);
        a2 = (_DWORD *)(*v8 + 1);
        goto LABEL_16;
      case 0x64:
        a2 = (_DWORD *)(*v8 + 1);
        v10 = *(Tile **)(esi0 + 0xA4);
LABEL_16:
        v24 = (float)(int)a2;
        Tile_SetFloat(v10, (_DWORD *)0xFAE, v24);
        break;
      default:
        break;
    }
    v8 += 5;
    --v9;
  }
  while ( v9 );
  sub_5BEA90(0);
  v11 = *(Tile **)(esi0 + 0xBC);
  v25 = fConstant_2;
  *(_DWORD *)(esi0 + 0x88) = 0;
  Tile_SetFloat(v11, (_DWORD *)0xFAF, v25);
  if ( sub_5BE870((int)v8, esi0) )
    v12 = fConstant_2;
  else
    v12 = 1.0;
  v26 = v12;
  Tile_SetFloat(*(Tile **)(esi0 + 0xB8), (_DWORD *)0xFAF, v26);
  SkillMasteryLevel = Actor_GetSkillMasteryLevel(0x20);
  v14 = *(Tile **)(esi0 + 0xC0);
  if ( SkillMasteryLevel < 1 )
  {
    Tile_SetFloat(v14, (_DWORD *)0xFB1, 1.0);
  }
  else
  {
    Tile_SetFloat(v14, (_DWORD *)0xFB1, fConstant_2);
    Tile_SetFloat(*(Tile **)(esi0 + 0xC0), (_DWORD *)0xFAF, 1.0);
  }
  v15 = *(_DWORD *)(esi0 + 0xD8);
  v23 = COERCE_FLOAT(
          (*(int (__thiscall **)(int, int, float, float))(*(_DWORD *)v15 + 0x284))(
            v15,
            0x20,
            fPersuasionMod,
            fPersuasionCurve));
  v22 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef);
  v21 = TESDataHandler_g_PlayerRef;
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x224))(v15);
  sub_547A90(v16, (int)v21, v22, COERCE_FLOAT(0x20), v23);
  v27.m_dataLen = 0;
  v27.m_bufLen = 0;
  *(float *)&v27.m_data = (float)v17;
  v18 = *(float *)&v27.m_data;
  v27.m_data = 0;
  *(float *)(esi0 + 0x7C) = v18;
  retaddr = 0;
  v19 = Double_To_SInt32(v18);
  BSStringT_Static_Format(&v27, "%i", v19);
  m_data = v27.m_data;
  Tile_SetString(*(_DWORD **)(esi0 + 0x90), (_DWORD *)0xFDE, v27.m_data);
  *(_DWORD *)(esi0 + 0xEC) = (*(int (__thiscall **)(_DWORD, PlayerCharacter *))(**(_DWORD **)(esi0 + 0xD8) + 0x224))(
                               *(_DWORD *)(esi0 + 0xD8),
                               TESDataHandler_g_PlayerRef);
  *(_DWORD *)(esi0 + 0xF0) = 0;
  sub_5BF170(a3, 0);
  FormHeapFree((unsigned int)m_data);
}
