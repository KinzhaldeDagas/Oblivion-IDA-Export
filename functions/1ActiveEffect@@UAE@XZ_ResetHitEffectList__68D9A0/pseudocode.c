// Verified BSSimpleList_Clear frees successor HitEffectNode allocations and clears the root node's data; ActiveEffect::~ActiveEffect then frees the root/header. Hit-effect objects are detached first and are not deleted by this list clear.
int __usercall ActiveEffect::~ActiveEffect@<eax>(int a1@<esi>)
{
  _DWORD *v1; // ecx

  v1 = *(_DWORD **)(a1 + 0x34); /*0x68d9a0*/
  if ( v1 ) /*0x68d9a5*/
    BSSimpleList_Clear(v1); /*0x68d9a7*/
  return ActiveEffect::~ActiveEffect(a1);
}
