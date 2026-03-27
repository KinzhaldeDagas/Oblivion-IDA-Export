char __cdecl sub_513600(__int64 a1, char *a4, __int64 argC, ScriptEventList *arg14, int a5, UInt32 *a3)
{
  __int16 v8; // bx
  char *v9; // esi
  unsigned int m_dataLen; // eax
  char *m_data; // [esp+3Ch] [ebp-2D8h]
  TESObjectREFR *v12; // [esp+40h] [ebp-2D4h]
  Script *v13; // [esp+44h] [ebp-2D0h]
  ScriptEventList *duration; // [esp+48h] [ebp-2CCh]
  float duration_4; // [esp+4Ch] [ebp-2C8h]
  __int16 v16; // [esp+64h] [ebp-2B0h]
  int v17; // [esp+64h] [ebp-2B0h]
  BSStringT string; // [esp+68h] [ebp-2ACh] BYREF
  va_list v19; // [esp+70h] [ebp-2A4h]
  void *l; // [esp+74h] [ebp-2A0h]
  TESObjectREFR *v21; // [esp+78h] [ebp-29Ch]
  double v22[10]; // [esp+7Ch] [ebp-298h] BYREF
  char Format[516]; // [esp+CCh] [ebp-248h] BYREF
  int v24; // [esp+310h] [ebp-4h]

  v19 = (va_list)HIDWORD(argC);
  l = arg14;
  string.m_data = a4;
  v21 = (TESObjectREFR *)argC;
  if ( !Script_ExtractArgs(
          (ParamInfo *)a1,
          (void *)HIDWORD(a1),
          a3,
          (TESObjectREFR *)a4,
          (TESObjectREFR *)argC,
          (Script *)HIDWORD(argC),
          arg14,
          Format) )
    return 0;
  v16 = *(_WORD *)(*a3 + HIDWORD(a1));
  *a3 += 2;
  _memset(v22, 0, sizeof(v22));
  v8 = 0;
  if ( v16 > 0 )
  {
    do
    {
      duration = (ScriptEventList *)l;
      v13 = (Script *)v19;
      v12 = v21;
      m_data = string.m_data;
      v22[v8] = 0.0;
      if ( !ExecuteScriptInstruction_((int)&v22[v8], (UInt8 *)HIDWORD(a1), a3, (TESForm *)m_data, v12, v13, duration, 1) )
        return 0;
    }
    while ( ++v8 < v16 );
  }
  string.m_data = 0;
  *(_DWORD *)&string.m_dataLen = 0;
  v24 = 0;
  BSStringT_Static_Format(
    &string,
    Format,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v22[7],
    v22[8],
    v22[9]);
  v17 = *(_DWORD *)(*a3 + HIDWORD(a1));
  *a3 += 4;
  if ( !v17 )
    v17 = 0xA;
  v9 = string.m_data;
  if ( string.m_dataLen == (__int16)0xFFFF )
    m_dataLen = strlen(string.m_data);
  else
    m_dataLen = (unsigned __int16)string.m_dataLen;
  if ( m_dataLen )
  {
    duration_4 = (float)v17;
    GameUI_QueueMessage(string.m_data, 0, 1u, duration_4);
  }
  FormHeapFree((unsigned int)v9);
  return 1;
}
