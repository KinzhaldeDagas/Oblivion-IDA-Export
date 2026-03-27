NiExtraData *__thiscall NiObjectNET_GetExtraData(NiObjectNET *this, const char *a2)
{
  DWORD CurrentThreadId; // eax
  __int16 v5; // di
  __int16 v6; // bp
  __int16 v7; // si
  int v8; // eax
  bool v9; // zf

  if ( !a2 )
    return 0;
  EnterCriticalSection(&stru_B3F600);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3F67C;
  dword_B3F678 = CurrentThreadId;
  v5 = this->members.m_extraDataListLen - 1;
  v6 = 0;
  if ( v5 < 0 )
  {
LABEL_9:
    v9 = dword_B3F67C-- == 1;
    if ( v9 )
      dword_B3F678 = 0;
    LeaveCriticalSection(&stru_B3F600);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v7 = (v6 + v5) >> 1;
      v8 = strcmp(a2, (const char *)sub_452A60((Atmosphere *)this->members.m_extraDataList[v7]));
      if ( !v8 )
        break;
      if ( v8 <= 0 )
        v5 = v7 - 1;
      else
        v6 = v7 + 1;
      if ( v6 > v5 )
        goto LABEL_9;
    }
    v9 = dword_B3F67C-- == 1;
    if ( v9 )
      dword_B3F678 = 0;
    LeaveCriticalSection(&stru_B3F600);
    return this->members.m_extraDataList[v7];
  }
}
