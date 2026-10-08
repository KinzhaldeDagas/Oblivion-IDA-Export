char __usercall sub_513280@<al>(
        double st6_0@<st1>,
        double a2@<st0>,
        __int64 a1,
        TESObjectREFR *a4,
        __int64 a5,
        ScriptEventList *a6,
        int a7,
        UInt32 *a3)
{
  __int16 v8; // bx
  double v9; // st5
  __int16 v10; // dx
  int v11; // ebx
  char *m_data; // esi
  char *v13; // ecx
  char *v15; // [esp+18h] [ebp-37Ch]
  char *v16; // [esp+24h] [ebp-370h]
  char v17; // [esp+28h] [ebp-36Ch]
  TESObjectREFR *v18; // [esp+40h] [ebp-354h]
  __int16 v19; // [esp+8Ch] [ebp-308h]
  __int16 v20; // [esp+8Ch] [ebp-308h]
  BSStringT v21; // [esp+9Ch] [ebp-2F8h] BYREF
  UInt32 v22; // [esp+A4h] [ebp-2F0h]
  ParamInfo *v23; // [esp+A8h] [ebp-2ECh]
  BSStringT v24; // [esp+ACh] [ebp-2E8h] BYREF
  char *v25; // [esp+B4h] [ebp-2E0h]
  double v26[10]; // [esp+FCh] [ebp-298h] BYREF
  char Format[516]; // [esp+14Ch] [ebp-248h] BYREF
  int v28; // [esp+390h] [ebp-4h]

  v23 = (ParamInfo *)a1; /*0x5132f4*/
  v22 = a5; /*0x5132fc*/
  if ( !Script_ExtractArgs( /*0x51330a*/
          (ParamInfo *)a1,
          (void *)HIDWORD(a1),
          a3,
          a4,
          (TESObjectREFR *)a5,
          (Script *)HIDWORD(a5),
          a6,
          Format) )
    return 0; /*0x51330a*/
  v19 = *(_WORD *)(*a3 + HIDWORD(a1)); /*0x513325*/
  *a3 += 2; /*0x513329*/
  _memset((int)v26, 0, sizeof(v26)); /*0x51332b*/
  v8 = 0; /*0x513335*/
  if ( v19 > 0 ) /*0x51333c*/
  {
    do /*0x513354*/
    {
      v18 = (TESObjectREFR *)v22; /*0x513354*/
      v26[v8] = 0.0; /*0x51335a*/
      if ( !ExecuteScriptInstruction_( /*0x51336a*/
              (int)&v26[v8],
              (UInt8 *)HIDWORD(a1),
              a3,
              (TESForm *)a4,
              v18,
              (Script *)HIDWORD(a5),
              a6,
              1) )
        return 0; /*0x513374*/
    }
    while ( ++v8 < v19 ); /*0x513354*/
  }
  v21.m_data = 0; /*0x513386*/
  v21.m_dataLen = 0; /*0x51338a*/
  v21.m_bufLen = 0; /*0x51338f*/
  v28 = 0; /*0x5133a2*/
  v9 = v26[0]; /*0x51340f*/
  BSStringT_Static_Format(&v21, Format, v26[0], v26[1], v26[2], v26[3], v26[4], v26[5], v26[6], v26[7], v26[8], v26[9]); /*0x51341b*/
  v10 = *(_WORD *)(*a3 + HIDWORD(a1)); /*0x513422*/
  *a3 += 2; /*0x513438*/
  v20 = v10; /*0x513441*/
  ArrayConstructor( /*0x513445*/
    (char *)&v24,
    8u,
    0xA,
    (void (__thiscall *)(char *))BSStringT_constr,
    (void (__thiscall *)(void *))BSStringT_Clear);
  v11 = 0; /*0x51344a*/
  LOBYTE(v28) = 1; /*0x513451*/
  if ( v20 > 0 ) /*0x513459*/
  {
    while ( Script_ExtractArgs( /*0x51348d*/
              v23,
              (void *)HIDWORD(a1),
              a3,
              a4,
              (TESObjectREFR *)v22,
              (Script *)HIDWORD(a5),
              a6,
              Format) )
    {
      BSStringT_Set(&v24 + (__int16)v11++, Format, 0); /*0x5134a0*/
      if ( (__int16)v11 >= v20 ) /*0x5134ad*/
        goto LABEL_8; /*0x5134ad*/
    }
    goto LABEL_17; /*0x51348d*/
  }
LABEL_8:
  if ( v20 < 1 ) /*0x5134b5*/
    BSStringT_Set(&v24, (const char *)MEMORY[0xB38D38], 0); /*0x5134c4*/
  if ( a4 && (a4->member.super.flags & 0x4000) == 0 ) /*0x5134da*/
  {
    MEMORY[0xB361C8] = a4->member.super.refID; /*0x5134df*/
LABEL_16:
    m_data = v21.m_data; /*0x513520*/
    v13 = v25; /*0x513564*/
    v17 = (char)v25; /*0x513571*/
    v16 = v24.m_data; /*0x513572*/
    v15 = v21.m_data; /*0x51357a*/
    ShowMessageBox_button = 0xFF; /*0x51357b*/
    ShowUIMessageBox(v13, v9, st6_0, a2, v15, (int)ShowMessageBox_Callback, 0, v16, v17); /*0x513582*/
    LOBYTE(v28) = 0; /*0x513598*/
    _LN21((char *)&v24, 8u, 0xA, (void (__thiscall *)(void *))BSStringT_Clear); /*0x5135a0*/
    FormHeapFree((unsigned int)m_data); /*0x5135a6*/
    return 1; /*0x5135b0*/
  }
  if ( HIDWORD(a5) ) /*0x513511*/
  {
    MEMORY[0xB361C8] = *(_DWORD *)(HIDWORD(a5) + 0xC); /*0x51351a*/
    goto LABEL_16; /*0x51351a*/
  }
LABEL_17:
  LOBYTE(v28) = 0; /*0x5135b2*/
  _LN21((char *)&v24, 8u, 0xA, (void (__thiscall *)(void *))BSStringT_Clear); /*0x5135c8*/
  FormHeapFree((unsigned int)v21.m_data); /*0x5135d2*/
  return 0; /*0x5135dc*/
}
