void __thiscall ExtraScript::~ExtraScript(ExtraScript *this)
{
  ScriptEventList *v2; // edi

  *(_DWORD *)this = &ExtraScript::`vftable';
  v2 = *((ScriptEventList **)this + 4);
  if ( v2 )
  {
    ScriptEventList_destr__(v2);
    FormHeapFree((unsigned int)v2);
  }
  *(_DWORD *)this = &BSExtraData::`vftable';
  *((_DWORD *)this + 4) = 0;
}
