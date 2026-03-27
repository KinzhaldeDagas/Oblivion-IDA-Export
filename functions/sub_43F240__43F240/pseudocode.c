void __stdcall sub_43F240(TESForm *a1)
{
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))a1->vtbl[1].CopyFrom)(a1) )
  {
    ((void (__thiscall *)(TESForm *))a1->vtbl[2].super.CompareTo)(a1);
    sub_674E10(&ActorProcessManager_ptr, a1);
  }
}
