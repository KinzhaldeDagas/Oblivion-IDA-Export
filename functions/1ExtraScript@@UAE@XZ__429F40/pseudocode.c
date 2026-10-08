void __thiscall ExtraScript::~ExtraScript(ExtraScript *this)
{
  ScriptEventList *v2; // edi

  *(_DWORD *)this = &ExtraScript::`vftable'; /*0x429f69*/
  v2 = *((ScriptEventList **)this + 4); /*0x429f6f*/
  if ( v2 ) /*0x429f7c*/
  {
    ScriptEventList_destr__(v2); /*0x429f80*/
    FormHeapFree((unsigned int)v2); /*0x429f86*/
  }
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x429f8e*/
  *((_DWORD *)this + 4) = 0; /*0x429f94*/
}
