// ScriptEffect Remove vfunc: normally runs ScriptEffectFinish and destroys the event list; save/load flags can suppress Finish and only destroy the list.
int __usercall ScriptEffect_Remove@<eax>(ScriptEffect *a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  unsigned int flags; // eax

  if ( *((_DWORD *)a1 + 0xE) && ((flags = g_TESSaveLoadGame->flags, (flags & 0x800) == 0) || (flags & 2) != 0) ) /*0x6a4640*/
    return ScriptEffect_Remove_::RunFinishEvent((int)a1, a2, a3); /*0x6a4641*/
  else
    return ScriptEffect_Remove_::DestroyEventList(a1); /*0x6a4628*/
}
