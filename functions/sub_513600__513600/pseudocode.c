char __cdecl sub_513600(__int64 a1, char *a4, __int64 argC, ScriptEventList *arg14, int a5, UInt32 *a3)
{
  __int16 v7; // bx
  char *v8; // esi
  unsigned int m_dataLen; // eax
  char *m_data; // [esp+3Ch] [ebp-2D8h]
  TESObjectREFR *v11; // [esp+40h] [ebp-2D4h]
  Script *v12; // [esp+44h] [ebp-2D0h]
  ScriptEventList *duration; // [esp+48h] [ebp-2CCh]
  float duration_4; // [esp+4Ch] [ebp-2C8h]
  __int16 v15; // [esp+64h] [ebp-2B0h]
  int v16; // [esp+64h] [ebp-2B0h]
  BSStringT string; // [esp+68h] [ebp-2ACh] BYREF
  va_list v18; // [esp+70h] [ebp-2A4h]
  void *l; // [esp+74h] [ebp-2A0h]
  TESObjectREFR *v20; // [esp+78h] [ebp-29Ch]
  double v21[10]; // [esp+7Ch] [ebp-298h] BYREF
  char Format[516]; // [esp+CCh] [ebp-248h] BYREF
  int v23; // [esp+310h] [ebp-4h]

  v18 = (va_list)HIDWORD(argC); /*0x51364f*/
  l = arg14; /*0x51365b*/
  string.m_data = a4; /*0x513671*/
  v20 = (TESObjectREFR *)argC; /*0x513675*/
  if ( !Script_ExtractArgs( /*0x513679*/
          (ParamInfo *)a1,
          (void *)HIDWORD(a1),
          a3,
          (TESObjectREFR *)a4,
          (TESObjectREFR *)argC,
          (Script *)HIDWORD(argC),
          arg14,
          Format) )
    return 0; /*0x513687*/
  v15 = *(_WORD *)(*a3 + HIDWORD(a1)); /*0x51369e*/
  *a3 += 2; /*0x5136a2*/
  _memset((int)v21, 0, sizeof(v21)); /*0x5136a4*/
  v7 = 0; /*0x5136ae*/
  if ( v15 > 0 ) /*0x5136b5*/
  {
    do /*0x5136c3*/
    {
      duration = (ScriptEventList *)l; /*0x5136c3*/
      v12 = (Script *)v18; /*0x5136c8*/
      v11 = v20; /*0x5136cd*/
      m_data = string.m_data; /*0x5136ce*/
      v21[v7] = 0.0; /*0x5136d3*/
      if ( !ExecuteScriptInstruction_((int)&v21[v7], (UInt8 *)HIDWORD(a1), a3, (TESForm *)m_data, v11, v12, duration, 1) ) /*0x5136dd*/
        return 0; /*0x5136e7*/
    }
    while ( ++v7 < v15 ); /*0x5136c3*/
  }
  string.m_data = 0; /*0x5136f5*/
  *(_DWORD *)&string.m_dataLen = 0; /*0x5136f9*/
  v23 = 0; /*0x51370e*/
  BSStringT_Static_Format( /*0x513781*/
    &string,
    Format,
    v21[0],
    v21[1],
    v21[2],
    v21[3],
    v21[4],
    v21[5],
    v21[6],
    v21[7],
    v21[8],
    v21[9]);
  v16 = *(_DWORD *)(*a3 + HIDWORD(a1)); /*0x513793*/
  *a3 += 4; /*0x513797*/
  if ( !v16 ) /*0x513799*/
    v16 = 0xA; /*0x51379b*/
  v8 = string.m_data; /*0x5137ac*/
  if ( string.m_dataLen == (__int16)0xFFFF ) /*0x5137b0*/
    m_dataLen = strlen(string.m_data); /*0x5137b4*/
  else
    m_dataLen = (unsigned __int16)string.m_dataLen; /*0x5137c4*/
  if ( m_dataLen ) /*0x5137c9*/
  {
    duration_4 = (float)v16; /*0x5137d0*/
    GameUI_QueueMessage(string.m_data, 0, 1u, duration_4); /*0x5137d8*/
  }
  FormHeapFree((unsigned int)v8); /*0x5137e1*/
  return 1; /*0x5137eb*/
}
