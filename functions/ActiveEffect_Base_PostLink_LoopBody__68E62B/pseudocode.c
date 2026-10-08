// Verified BSTempEffect ownership handoff after load: each +0x84 postLink callback receives owner ActiveEffect, linkContext, and null fallback; ActorProcessManager_RegisterTempEffect increments its refcount and inserts it. ActiveEffect::~ActiveEffect later clears ownerActiveEffect/sets bFinished and frees only its association nodes; the manager releases its own object reference after Update returns false or its parent cell unloads.
int __usercall ActiveEffect_Base_PostLink_::LoopBody@<eax>(int a1@<ebx>, int a2@<ebp>, BSTempEffect **a3@<esi>, int a4)
{
  BSTempEffect *v4; // edi
  BSTempEffect **v5; // esi

  v4 = *a3; /*0x68e62b*/
  ((void (__thiscall *)(_DWORD, int, int, _DWORD))(*a3)->vtable[1].super.Load)(*a3, a1, a2, 0); /*0x68e63b*/
  ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], v4); /*0x68e643*/
  v5 = (BSTempEffect **)a3[1]; /*0x68e648*/
  if ( v5 ) /*0x68e64d*/
    return ActiveEffect_Base_PostLink_::LoopTest(a1, a2, v5, a4); /*0x68e64d*/
  else
    return ActiveEffect_Base_PostLink_::LoopExit(a4); /*0x68e64e*/
}
