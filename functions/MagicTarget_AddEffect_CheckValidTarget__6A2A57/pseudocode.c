int __usercall MagicTarget_AddEffect_::CheckValidTarget@<eax>(int a1@<ebp>, int a2@<edi>, int a3, int a4, int a5)
{
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x34))(a1) )
    return MagicTarget_AddEffect_::CheckIsWearableEnch();
  if ( bGameSetting_MagicTargetDebugMsg__ )
    return MagicTarget_AddEffect_::GetTargetName_(a2, a3, a4, a5);
  return MagicTarget_AddEffect_::Return_0(a3, a4, a5);
}
