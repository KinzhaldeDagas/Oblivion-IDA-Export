// Verified (Oblivion): shader-hit factory skips when aeFlags bit 0x2 is set; otherwise allocates 0x4C bytes, constructs from target parent reference and ActiveEffect, invokes the virtual initializer, destroys failures, and registers successes with ActorProcessManager. It also pushes each successful shader object onto the returned BSSimpleList; this list and the manager therefore hold separate references/roles.
// positive sp value has been detected, the output may be wrong!
MagicShaderHitEffect **__usercall MagicHitEffect__BuildHitVFXList_::PlayShaderHitEffect@<eax>(
        _DWORD *a1@<ebp>,
        ActiveEffect *a2@<edi>)
{
  MagicShaderHitEffect *v2; // esi
  TESObjectREFR *v3; // eax
  MagicShaderHitEffect *v4; // esi
  MagicShaderHitEffect **result; // eax

  if ( (a2->members.aeFlags & 2) != 0 ) /*0x69dab4*/
    return (MagicShaderHitEffect **)a1; /*0x69dab4*/
  v2 = (MagicShaderHitEffect *)FormHeapAlloc(0x4Cu); /*0x69dac1*/
  if ( v2 ) /*0x69dad4*/
  {
    v3 = a2->members.target->vtbl->GetParentReference(a2->members.target); /*0x69dadf*/
    v4 = MagicShaderHitEffect_constr_args(v2, v3, a2); /*0x69dae9*/
  }
  else
  {
    v4 = 0; /*0x69daed*/
  }
  if ( !((unsigned __int8 (__thiscall *)(MagicShaderHitEffect *))v4->super.super.vtable[1].super.super.Destructor)(v4) ) /*0x69db02*/
  {
    ((void (__cdecl *)(int))v4->super.super.vtable->super.super.Destructor)(1); /*0x69db77*/
    return (MagicShaderHitEffect **)a1; /*0x69db79*/
  }
  ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], &v4->super.super); /*0x69db0a*/
  if ( a1 ) /*0x69db11*/
  {
    BSSimpleList_PushFront(a1, (int)v4); /*0x69db16*/
    return (MagicShaderHitEffect **)a1; /*0x69db1b*/
  }
  else
  {
    result = (MagicShaderHitEffect **)FormHeapAlloc(8u); /*0x69db32*/
    if ( result ) /*0x69db3c*/
    {
      *result = v4; /*0x69db3e*/
      result[1] = 0; /*0x69db40*/
    }
    else
    {
      return 0; /*0x69db5a*/
    }
  }
  return result; /*0x69db2f*/
}
