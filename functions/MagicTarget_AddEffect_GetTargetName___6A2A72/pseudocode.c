int __userpurge MagicTarget_AddEffect_::GetTargetName_@<eax>(int a1@<edi>, int a2, int a3, int a4)
{
  TESObjectREFR *v4; // eax

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1) )
  {
    v4 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
    TESObjectREFR_GetName(v4);
  }
  return MagicTarget_AddEffect_::PrintInvalidTarget_DebugMsg(a2, a3, a4);
}
