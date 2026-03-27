UInt8 __thiscall Script_RunSomething__(
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

  LODWORD(v28) = a3;
  InterfaceSingleton0x50 = GetInterfaceSingleton0x50();
  PerformanceCount.QuadPart = 0;
  if ( InterfaceSingleton0x50 )
  {
    if ( !*((_QWORD *)&stru_B36208 + 1) )
      QueryPerformanceFrequency((LARGE_INTEGER *)&stru_B36208 + 1);
    QueryPerformanceCounter(&PerformanceCount);
  }
  this->unkA1 = 0;
  if ( !a5 || (a5->super.member.flags & 8) == 0 )
    return 0;
  if ( this->script )
  {
    script = this->script;
    v11 = a5->super.vtbl->GetEditorName(a5);
    v12 = (const char *)((int (__thiscall *)(Script *, const char *))script->super.vtbl->GetEditorName)(script, v11);
    PrintError("Nested call to ScriptRunner::Run.  Script '%s' attempting to execute script '%s'.", v12, v21);
    return this->unkA1;
  }
  else
  {
    this->script = a5;
    sub_4F32E0(v33);
    v34 = 0;
    v29 = 0;
    this->unk18[3] = 0;
    this->unk18[2] = 0;
    *(_DWORD *)ArgList = 0xFFFF;
    a7 = 0;
    this->unk00 = (UInt32)argC;
    if ( a3 )
      this->unk04 = (UInt32)a3->vtbl->GetBaseForm(a3);
    else
      this->unk04 = 0;
    EventList = a4;
    if ( !a4 )
    {
      EventList = (ScriptEventList *)Script_CreateEventList((char *)a5);
      v29 = EventList;
    }
    this->eventList = EventList;
    if ( BYTE1(a5->info.type) )
    {
      if ( !EventList->m_scriptEffectInfo )
        this->eventList->m_scriptEffectInfo = (ScriptEffectInfo *)FormHeapAlloc(8u);
      LOBYTE(this->eventList->m_scriptEffectInfo->scriptRefID) = arg14;
      BYTE1(this->eventList->m_scriptEffectInfo->scriptRefID) = arg18;
      *(float *)&this->eventList->m_scriptEffectInfo->school = arg1C;
    }
    v15 = 0;
    v16 = a5->info.dataLength == 0;
    a9 = 0;
    v22 = 0;
    a11 = 0;
    if ( !v16 )
    {
      do
      {
        ++a11;
        this->unk10 = 0;
        a8 = 0;
        if ( !sub_516830(this, a5, (int *)ArgList, &a7, &a8, (int *)&a9 + 1, v15 != 0) )
        {
          a5->info.dataLength = 0;
          break;
        }
        if ( v15 )
        {
          LODWORD(a9) = --v15;
        }
        else
        {
          if ( *(_DWORD *)ArgList == 0x1E )
            break;
          v17 = (BSStringT *)HIDWORD(a9);
          if ( !HIDWORD(a9) )
          {
            v17 = (BSStringT *)v28;
            HIDWORD(a9) = v28;
          }
          if ( !CommandInfo_Execute_(this, a5, *(int *)ArgList, v17, (int)&a8, a7, &a9, a11, 0, 0) )
          {
            v22 = 1;
            break;
          }
          v15 = a9;
        }
        v18 = a8 + a7 < a5->info.dataLength;
        a7 += a8;
      }
      while ( v18 );
    }
    if ( !a6 && !v22 )
      sub_4FA0E0((Script *)this->eventList);
    v19 = v29;
    if ( v29 )
    {
      ScriptEventList_destr__(v29);
      FormHeapFree((unsigned int)v19);
    }
    this->script = 0;
    if ( InterfaceSingleton0x50 )
    {
      QueryPerformanceCounter(&v32);
      v28 = v32.QuadPart - PerformanceCount.QuadPart;
      *(float *)&v28 = (double)(v32.QuadPart - PerformanceCount.QuadPart) / (double)*((__int64 *)&stru_B36208 + 1);
      *(float *)&a5->unk34 = *(float *)&a5->unk34 + *(float *)&v28;
    }
    unkA1 = this->unkA1;
    v34 = 0xFFFFFFFF;
    TESTexture::ClearComponentReferences(v33);
    return unkA1;
  }
}
