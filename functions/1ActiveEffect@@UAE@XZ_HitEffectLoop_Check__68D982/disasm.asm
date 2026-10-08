0x68D982: cmp     dword ptr [eax+4], 0
0x68D986: jnz     short ??1ActiveEffect@@UAE@XZ___HitEffectLoop_Body; Verified ActiveEffect destructor detaches each hit-effect object by setting MagicHitEffect.bFinished=true and ownerActiveEffect=null, then advances through HitEffectNode.next. PostLink has already registered these objects with ActorProcessManager, which retains its own refcount.
0x68D988: cmp     dword ptr [eax], 0
0x68D98B: jz      short ??1ActiveEffect@@UAE@XZ___ResetHitEffectList; Verified BSSimpleList_Clear frees successor HitEffectNode allocations and clears the root node's data; ActiveEffect::~ActiveEffect then frees the root/header. Hit-effect objects are detached first and are not deleted by this list clear.
