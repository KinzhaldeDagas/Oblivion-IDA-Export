UInt8 __thiscall ScriptRunner_RunEventScript(
        ScriptRunner *this,
        Script *a5,
        TESObjectREFR *a3,
        ScriptEventList *a4,
        TESFormVtbl *argC,
        char a6,
        bool arg14,
        bool arg18,
        float arg1C)
{
  Script *script; // ebx
  const char *v11; // eax
  const char *v12; // eax
  ScriptEventList *EventList; // eax
  int v15; // ebp
  bool v16; // zf
  BSStringT *v17; // eax
  bool v18; // cf
  ScriptEventList *v19; // ebp
  UInt8 unkA1; // bl
  const char *v21; // [esp-4h] [ebp-770h]
  char v22; // [esp+16h] [ebp-756h]
  bool InterfaceSingleton0x50; // [esp+17h] [ebp-755h]
  int a7; // [esp+18h] [ebp-754h] BYREF
  int a8; // [esp+1Ch] [ebp-750h] BYREF
  __int64 a9; // [esp+20h] [ebp-74Ch] BYREF
  int a11; // [esp+28h] [ebp-744h]
  LONGLONG v28; // [esp+2Ch] [ebp-740h]
  ScriptEventList *v29; // [esp+34h] [ebp-738h]
  char ArgList[4]; // [esp+38h] [ebp-734h] BYREF
  LARGE_INTEGER PerformanceCount; // [esp+3Ch] [ebp-730h] BYREF
  LARGE_INTEGER v32; // [esp+44h] [ebp-728h] BYREF
  _DWORD v33[452]; // [esp+4Ch] [ebp-720h] BYREF
  unsigned int v34; // [esp+768h] [ebp-4h]

  LODWORD(v28) = a3; /*0x51737b*/
  InterfaceSingleton0x50 = GetInterfaceSingleton0x50(); /*0x517388*/
  PerformanceCount.QuadPart = 0; /*0x51738c*/
  if ( InterfaceSingleton0x50 ) /*0x517394*/
  {
    if ( !*((_QWORD *)&MEMORY[0xB36208] + 1) ) /*0x517396*/
      QueryPerformanceFrequency((LARGE_INTEGER *)&MEMORY[0xB36208] + 1); /*0x5173a8*/
    QueryPerformanceCounter(&PerformanceCount); /*0x5173b3*/
  }
  this->unkA1 = 0; /*0x5173bb*/
  if ( !a5 || (a5->super.member.flags & 8) == 0 ) /*0x5173d0*/
    return 0; /*0x51760e*/
  if ( this->script ) /*0x5173d6*/
  {
    script = this->script; /*0x5173e3*/
    v11 = a5->super.vtbl->GetEditorName(a5); /*0x5173e8*/
    v12 = (const char *)((int (__thiscall *)(Script *, const char *))script->super.vtbl->GetEditorName)(script, v11); /*0x5173f5*/
    PrintError("Nested call to ScriptRunner::Run.  Script '%s' attempting to execute script '%s'.", v12, v21); /*0x5173fd*/
    return this->unkA1; /*0x517402*/
  }
  else
  {
    this->script = a5; /*0x517414*/
    sub_4F32E0(v33); /*0x517417*/
    v34 = 0; /*0x517425*/
    v29 = 0; /*0x51742c*/
    this->unk18[3] = 0; /*0x517430*/
    this->unk18[2] = 0; /*0x517433*/
    *(_DWORD *)ArgList = 0xFFFF; /*0x517436*/
    a7 = 0; /*0x51743e*/
    this->unk00 = (UInt32)argC; /*0x517442*/
    if ( a3 ) /*0x517444*/
      this->unk04 = (UInt32)a3->vtbl->GetBaseForm(a3); /*0x517453*/
    else
      this->unk04 = 0; /*0x517458*/
    EventList = a4;                             // Event run uses caller-provided ScriptEventList when available; otherwise it creates a temporary event list for this run. /*0x51745b*/
    if ( !a4 ) /*0x517464*/
    {
      EventList = (ScriptEventList *)Script_CreateEventList((char *)a5); /*0x517468*/
      v29 = EventList; /*0x51746d*/
    }
    this->eventList = EventList;                // Hot Reload OBSE decode: ScriptRunner::RunEventScript stores the effective ScriptEventList in runner->eventList here. /*0x517471*/
    if ( BYTE1(a5->info.type) ) /*0x517474*/
    {                                           // For script-effect scripts, ensure eventList->m_scriptEffectInfo exists before storing event flags/delta.
      if ( !EventList->m_scriptEffectInfo ) /*0x51747b*/
        this->eventList->m_scriptEffectInfo = (ScriptEffectInfo *)FormHeapAlloc(8u); /*0x51748d*/
      LOBYTE(this->eventList->m_scriptEffectInfo->scriptRefID) = arg14;// Store ScriptEffectStart boolean in low byte of m_scriptEffectInfo->scriptRefID. /*0x5174a4*/
      BYTE1(this->eventList->m_scriptEffectInfo->scriptRefID) = arg18;// Store ScriptEffectFinish boolean in second byte of m_scriptEffectInfo->scriptRefID. /*0x5174b3*/
      *(float *)&this->eventList->m_scriptEffectInfo->school = arg1C;// Store ScriptEffectElapsedSeconds/update delta in m_scriptEffectInfo +4. /*0x5174bc*/
    }
    v15 = 0;                                    // Hot Reload OBSE hook point: eventList is valid and bytecode execution has not started. Plugin rebuilds reloaded script event vars here, then restores xor ebp/cmp dataLength. /*0x5174bf*/
    v16 = a5->info.dataLength == 0; /*0x5174c1*/
    a9 = 0; /*0x5174c8*/
    v22 = 0; /*0x5174cc*/
    a11 = 0; /*0x5174d0*/
    if ( !v16 ) /*0x5174d4*/
    {
      do /*0x5174da*/
      {
        ++a11; /*0x5174da*/
        this->unk10 = 0; /*0x5174ec*/
        a8 = 0; /*0x5174ef*/
        if ( !sub_516830(this, a5, (int *)ArgList, &a7, &a8, (int *)&a9 + 1, v15 != 0) ) /*0x51750a*/
        {
          a5->info.dataLength = 0; /*0x517571*/
          break; /*0x517574*/
        }
        if ( v15 ) /*0x51750e*/
        {
          LODWORD(a9) = --v15; /*0x517513*/
        }
        else
        {
          if ( *(_DWORD *)ArgList == 0x1E ) /*0x517520*/
            break; /*0x517520*/
          v17 = (BSStringT *)HIDWORD(a9); /*0x517522*/
          if ( !HIDWORD(a9) ) /*0x517528*/
          {
            v17 = (BSStringT *)v28; /*0x51752a*/
            HIDWORD(a9) = v28; /*0x51752e*/
          }
          if ( !ScriptRunner_ExecuteCompiledInstruction(this, a5, *(int *)ArgList, v17, (int)&a8, a7, &a9, a11, 0, 0) ) /*0x517554*/
          {
            v22 = 1; /*0x517576*/
            break; /*0x517576*/
          }
          v15 = a9; /*0x517556*/
        }
        v18 = a8 + a7 < a5->info.dataLength; /*0x517562*/
        a7 += a8; /*0x517565*/
      }
      while ( v18 ); /*0x5174da*/
    }
    if ( !a6 && !v22 ) /*0x517588*/
      sub_4FA0E0((Script *)this->eventList); /*0x51758d*/
    v19 = v29; /*0x517592*/
    if ( v29 ) /*0x517598*/
    {
      ScriptEventList_destr__(v29); /*0x51759c*/
      FormHeapFree((unsigned int)v19); /*0x5175a2*/
    }
    this->script = 0; /*0x5175ae*/
    if ( InterfaceSingleton0x50 ) /*0x5175b1*/
    {
      QueryPerformanceCounter(&v32); /*0x5175b8*/
      v28 = v32.QuadPart - PerformanceCount.QuadPart; /*0x5175ce*/
      *(float *)&v28 = (double)(v32.QuadPart - PerformanceCount.QuadPart) / (double)*((__int64 *)&MEMORY[0xB36208] + 1); /*0x5175e2*/
      *(float *)&a5->unk34 = *(float *)&a5->unk34 + *(float *)&v28; /*0x5175ed*/
    }
    unkA1 = this->unkA1; /*0x5175f0*/
    v34 = 0xFFFFFFFF; /*0x5175fa*/
    Shared_NoOpVirtual_60D0A0(v33); /*0x517605*/
    return unkA1; /*0x51760a*/
  }
}
