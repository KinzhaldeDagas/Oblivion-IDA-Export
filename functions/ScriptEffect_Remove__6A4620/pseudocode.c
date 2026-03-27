int __usercall ScriptEffect_Remove@<eax>(ScriptEffect *a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  UInt32 flags; // eax

  if ( *((_DWORD *)a1 + 0xE) && ((flags = SaveLoad_CurrentSavegame->flags, (flags & 0x800) == 0) || (flags & 2) != 0) )
    return ScriptEffect_Remove_::RunFinishEvent((int)a1, a2, a3);
  else
    return ScriptEffect_Remove_::DestroyEventList(a1);
}
