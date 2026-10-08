// Verified ActiveEffect destructor detaches each hit-effect object by setting MagicHitEffect.bFinished=true and ownerActiveEffect=null, then advances through HitEffectNode.next. PostLink has already registered these objects with ActorProcessManager, which retains its own refcount.
int __usercall ActiveEffect::~ActiveEffect@<eax>(int a1@<esi>, int *a2@<eax>, char a3@<dl>)
{
  int v3; // ecx
  int *v4; // eax

  v3 = *a2; /*0x68d98d*/
  *(_BYTE *)(v3 + 0x24) = a3; /*0x68d98f*/
  *(_DWORD *)(v3 + 0x18) = 0; /*0x68d992*/
  v4 = (int *)a2[1]; /*0x68d999*/
  if ( v4 ) /*0x68d99e*/
    return ActiveEffect::~ActiveEffect(a1, v4, a3); /*0x68d99e*/
  else
    return ActiveEffect::~ActiveEffect(a1); /*0x68d99f*/
}
