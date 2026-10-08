char __thiscall Script_RunSomethingElse__(ScriptRunner *this, Script *a5, BSStringT *a3, ScriptEventList *a4)
{
  Script *script; // esi
  const char *v6; // eax
  const char *v7; // eax
  int v9; // ebx
  bool v10; // zf
  int v11; // ebp
  BSStringT *v12; // eax
  UInt32 v13; // ebp
  bool v14; // cf
  const char *v15; // [esp-4h] [ebp-754h]
  int a8; // [esp+14h] [ebp-73Ch] BYREF
  int a7; // [esp+18h] [ebp-738h] BYREF
  int a11; // [esp+1Ch] [ebp-734h]
  int a9; // [esp+20h] [ebp-730h] BYREF
  int a10; // [esp+24h] [ebp-72Ch] BYREF
  char ArgList[4]; // [esp+28h] [ebp-728h] BYREF
  BSStringT *v22; // [esp+2Ch] [ebp-724h]
  _DWORD v23[452]; // [esp+30h] [ebp-720h] BYREF
  unsigned int v24; // [esp+74Ch] [ebp-4h]

  v22 = a3; /*0x51768f*/
  if ( !a5 || (a5->super.member.flags & 8) == 0 ) /*0x51769d*/
    return 0; /*0x51769d*/
  if ( this->script ) /*0x51769f*/
  {
    script = this->script; /*0x5176ac*/
    v6 = a5->super.vtbl->GetEditorName(a5); /*0x5176b1*/
    v7 = (const char *)((int (__thiscall *)(Script *, const char *))script->super.vtbl->GetEditorName)(script, v6); /*0x5176be*/
    PrintError("Nested call to ScriptRunner::Run.  Script '%s' attempting to execute script '%s'.", v7, v15); /*0x5176c6*/
    return 0; /*0x5176f7*/
  }
  this->script = a5; /*0x5176fe*/
  sub_4F32E0(v23); /*0x517701*/
  v24 = 0; /*0x517708*/
  *(_DWORD *)ArgList = 0xFFFF; /*0x51770f*/
  a7 = 0; /*0x517717*/
  if ( a3 ) /*0x51771b*/
    this->unk04 = (*((int (__thiscall **)(BSStringT *))a3->m_data + 0x5C))(a3); /*0x517729*/
  else
    this->unk04 = 0; /*0x51772e*/
  v9 = 0; /*0x517738*/
  this->eventList = a4; /*0x51773a*/
  v10 = a5->info.dataLength == 0; /*0x51773d*/
  a9 = 0; /*0x517740*/
  a10 = 0; /*0x517744*/
  a11 = 0; /*0x517748*/
  if ( !v10 ) /*0x51774c*/
  {
    while ( 1 ) /*0x517756*/
    {
      ++a11; /*0x517756*/
      this->unk10 = 0; /*0x517768*/
      a8 = 0; /*0x51776b*/
      if ( !sub_516830(this, a5, (int *)ArgList, &a7, &a8, &a9, v9 != 0) ) /*0x51777f*/
        break; /*0x51777f*/
      v11 = a7; /*0x51778a*/
      if ( v9 ) /*0x51778e*/
      {
        a10 = --v9; /*0x517793*/
      }
      else
      {
        v12 = (BSStringT *)a9; /*0x517799*/
        if ( !a9 ) /*0x51779f*/
        {
          v12 = v22; /*0x5177a1*/
          a9 = (int)v22; /*0x5177a5*/
        }
        if ( !ScriptRunner_ExecuteCompiledInstruction(this, a5, *(int *)ArgList, v12, (int)&a8, a7, &a10, a11, 0, 1) ) /*0x5177cd*/
          goto LABEL_18; /*0x5177cd*/
        v9 = a10; /*0x5177cf*/
      }
      v13 = a8 + v11; /*0x5177d3*/
      v14 = v13 < a5->info.dataLength; /*0x5177d7*/
      a7 = v13; /*0x5177da*/
      if ( !v14 ) /*0x5177de*/
        goto LABEL_18; /*0x5177de*/
    }
    a5->info.dataLength = 0; /*0x517804*/
  }
LABEL_18:
  this->script = 0; /*0x5177e6*/
  v24 = 0xFFFFFFFF; /*0x5177ed*/
  Shared_NoOpVirtual_60D0A0(v23); /*0x5177f8*/
  return 1; /*0x5176d0*/
}
