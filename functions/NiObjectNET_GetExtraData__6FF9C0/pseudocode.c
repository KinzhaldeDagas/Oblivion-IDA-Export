// NiObjectNET::GetExtraData(name), native RET 4 behavior. Player shadow BBX lookups remain native after Pass247 rollback.
NiExtraData *__thiscall NiObjectNET_GetExtraData(NiObjectNET *this, const char *a2)
{
  DWORD CurrentThreadId; // eax
  __int16 v5; // di
  __int16 v6; // bp
  __int16 v7; // si
  int v8; // eax
  bool v9; // zf

  if ( !a2 ) /*0x6ff9c8*/
    return 0; /*0x6ff9ca*/
  EnterCriticalSection(&unk_B3F600); /*0x6ff9d8*/
  CurrentThreadId = GetCurrentThreadId(); /*0x6ff9de*/
  ++unk_B3F67C; /*0x6ff9e4*/
  unk_B3F678 = CurrentThreadId; /*0x6ff9eb*/
  v5 = this->members.m_extraDataListLen - 1; /*0x6ff9f8*/
  v6 = 0; /*0x6ff9fb*/
  if ( v5 < 0 ) /*0x6ffa00*/
  {
LABEL_9:
    v9 = unk_B3F67C-- == 1; /*0x6ffa5f*/
    if ( v9 ) /*0x6ffa66*/
      unk_B3F678 = 0; /*0x6ffa68*/
    LeaveCriticalSection(&unk_B3F600); /*0x6ffa77*/
    return 0; /*0x6ffa80*/
  }
  else
  {
    while ( 1 ) /*0x6ffa0c*/
    {
      v7 = (v6 + v5) >> 1; /*0x6ffa0c*/
      v8 = strcmp(a2, (const char *)Shared_GetPointerAtOffset08((Atmosphere *)this->members.m_extraDataList[v7])); /*0x6ffa25*/
      if ( !v8 ) /*0x6ffa48*/
        break; /*0x6ffa48*/
      if ( v8 <= 0 ) /*0x6ffa4a*/
        v5 = v7 - 1; /*0x6ffa57*/
      else
        v6 = v7 + 1; /*0x6ffa4f*/
      if ( v6 > v5 ) /*0x6ffa5d*/
        goto LABEL_9; /*0x6ffa5d*/
    }
    v9 = unk_B3F67C-- == 1; /*0x6ffa86*/
    if ( v9 ) /*0x6ffa8d*/
      unk_B3F678 = 0; /*0x6ffa8f*/
    LeaveCriticalSection(&unk_B3F600); /*0x6ffa9e*/
    return this->members.m_extraDataList[v7]; /*0x6ffaab*/
  }
}
