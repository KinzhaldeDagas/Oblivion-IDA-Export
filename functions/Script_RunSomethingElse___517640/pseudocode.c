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

  v22 = a3;
  if ( !a5 || (a5->super.member.flags & 8) == 0 )
    return 0;
  if ( this->script )
  {
    script = this->script;
    v6 = a5->super.vtbl->GetEditorName(a5);
    v7 = (const char *)((int (__thiscall *)(Script *, const char *))script->super.vtbl->GetEditorName)(script, v6);
    PrintError("Nested call to ScriptRunner::Run.  Script '%s' attempting to execute script '%s'.", v7, v15);
    return 0;
  }
  this->script = a5;
  sub_4F32E0(v23);
  v24 = 0;
  *(_DWORD *)ArgList = 0xFFFF;
  a7 = 0;
  if ( a3 )
    this->unk04 = (*((int (__thiscall **)(BSStringT *))a3->m_data + 0x5C))(a3);
  else
    this->unk04 = 0;
  v9 = 0;
  this->eventList = a4;
  v10 = a5->info.dataLength == 0;
  a9 = 0;
  a10 = 0;
  a11 = 0;
  if ( !v10 )
  {
    while ( 1 )
    {
      ++a11;
      this->unk10 = 0;
      a8 = 0;
      if ( !sub_516830(this, a5, (int *)ArgList, &a7, &a8, &a9, v9 != 0) )
        break;
      v11 = a7;
      if ( v9 )
      {
        a10 = --v9;
      }
      else
      {
        v12 = (BSStringT *)a9;
        if ( !a9 )
        {
          v12 = v22;
          a9 = (int)v22;
        }
        if ( !CommandInfo_Execute_(this, a5, *(int *)ArgList, v12, (int)&a8, a7, &a10, a11, 0, 1) )
          goto LABEL_18;
        v9 = a10;
      }
      v13 = a8 + v11;
      v14 = v13 < a5->info.dataLength;
      a7 = v13;
      if ( !v14 )
        goto LABEL_18;
    }
    a5->info.dataLength = 0;
  }
LABEL_18:
  this->script = 0;
  v24 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(v23);
  return 1;
}
