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
  __int16 v9; // bx
  double v10; // st5
  __int16 v11; // dx
  int v12; // ebx
  char *m_data; // esi
  int v14; // ecx
  char *v16; // [esp+18h] [ebp-37Ch]
  char *v17; // [esp+24h] [ebp-370h]
  char v18; // [esp+28h] [ebp-36Ch]
  TESObjectREFR *v19; // [esp+40h] [ebp-354h]
  __int16 v20; // [esp+8Ch] [ebp-308h]
  __int16 v21; // [esp+8Ch] [ebp-308h]
  BSStringT v22; // [esp+9Ch] [ebp-2F8h] BYREF
  UInt32 v23; // [esp+A4h] [ebp-2F0h]
  ParamInfo *v24; // [esp+A8h] [ebp-2ECh]
  BSStringT v25; // [esp+ACh] [ebp-2E8h] BYREF
  int v26; // [esp+B4h] [ebp-2E0h]
  double v27[10]; // [esp+FCh] [ebp-298h] BYREF
  char Format[516]; // [esp+14Ch] [ebp-248h] BYREF
  int v29; // [esp+390h] [ebp-4h]
  int savedregs; // [esp+394h] [ebp+0h] BYREF

  v24 = (ParamInfo *)a1;
  v23 = a5;
  if ( !Script_ExtractArgs(
          (ParamInfo *)a1,
          (void *)HIDWORD(a1),
          a3,
          a4,
          (TESObjectREFR *)a5,
          (Script *)HIDWORD(a5),
          a6,
          Format) )
    return 0;
  v20 = *(_WORD *)(*a3 + HIDWORD(a1));
  *a3 += 2;
  _memset(v27, 0, sizeof(v27));
  v9 = 0;
  if ( v20 > 0 )
  {
    do
    {
      v19 = (TESObjectREFR *)v23;
      v27[v9] = 0.0;
      if ( !ExecuteScriptInstruction_(
              (int)&v27[v9],
              (UInt8 *)HIDWORD(a1),
              a3,
              (TESForm *)a4,
              v19,
              (Script *)HIDWORD(a5),
              a6,
              1) )
        return 0;
    }
    while ( ++v9 < v20 );
  }
  v22.m_data = 0;
  v22.m_dataLen = 0;
  v22.m_bufLen = 0;
  v29 = 0;
  v10 = v27[0];
  BSStringT_Static_Format(&v22, Format, v27[0], v27[1], v27[2], v27[3], v27[4], v27[5], v27[6], v27[7], v27[8], v27[9]);
  v11 = *(_WORD *)(*a3 + HIDWORD(a1));
  *a3 += 2;
  v21 = v11;
  ArrayConstructor(&v25, 8u, 0xA, (int)BSStringT_constr, (void (__thiscall *)(void *))BSStringT_Clear);
  v12 = 0;
  LOBYTE(v29) = 1;
  if ( v21 > 0 )
  {
    while ( Script_ExtractArgs(
              v24,
              (void *)HIDWORD(a1),
              a3,
              a4,
              (TESObjectREFR *)v23,
              (Script *)HIDWORD(a5),
              a6,
              Format) )
    {
      BSStringT_Set(&v25 + (__int16)v12++, Format, 0);
      if ( (__int16)v12 >= v21 )
        goto LABEL_8;
    }
    goto LABEL_17;
  }
LABEL_8:
  if ( v21 < 1 )
    BSStringT_Set(&v25, (const char *)sDone, 0);
  if ( a4 && (a4->member.super.flags & 0x4000) == 0 )
  {
    ShowMessageBox_pScriptRefID = a4->member.super.refID;
LABEL_16:
    m_data = v22.m_data;
    v14 = v26;
    v18 = v26;
    v17 = v25.m_data;
    v16 = v22.m_data;
    ShowMessageBox_button = 0xFF;
    ShowUIMessageBox(v14, (char)&savedregs, v10, st6_0, a2, v16, (int)ShowMessageBox_Callback, 0, v17, v18);
    LOBYTE(v29) = 0;
    _LN21(&v25, 8u, 0xA, (void (__thiscall *)(void *))BSStringT_Clear);
    FormHeapFree((unsigned int)m_data);
    return 1;
  }
  if ( HIDWORD(a5) )
  {
    ShowMessageBox_pScriptRefID = *(_DWORD *)(HIDWORD(a5) + 0xC);
    goto LABEL_16;
  }
LABEL_17:
  LOBYTE(v29) = 0;
  _LN21(&v25, 8u, 0xA, (void (__thiscall *)(void *))BSStringT_Clear);
  FormHeapFree((unsigned int)v22.m_data);
  return 0;
}
