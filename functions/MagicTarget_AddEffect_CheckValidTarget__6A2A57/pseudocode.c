// OBMEFix verification 2026-05-30: MagicTarget_AddEffect loads ActiveEffect vtable +0x34, pushes MagicTarget (edi), sets ecx=ActiveEffect (ebp), and calls IsTargetValid before insertion.
int __usercall MagicTarget_AddEffect_::CheckValidTarget@<eax>(
        _DWORD *a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        void *a11,
        float a12)
{
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x34))(a1) ) /*0x6a2a60*/
    return MagicTarget_AddEffect_::CheckIsWearableEnch(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12); /*0x6a2a64*/
  if ( MEMORY[0xB3355C] ) /*0x6a2a66*/
    return MagicTarget_AddEffect_::GetTargetName_(a2, a4, a5, a6); /*0x6a2a6d*/
  return MagicTarget_AddEffect_::Return_0(a4, a5, a6);// Verified target gate call: ECX is the cloned ActiveEffect and the stack argument is the current MagicTarget; dispatches ActiveEffect vtable slot +0x34. LockEffect/OpenEffect route to LockOrOpenEffect_ValidTarget, which RTTI-requires NonActorMagicTarget and a TESObjectDOOR or TESObjectCONT base form. False prevents insertion and destroys the clone.
}
