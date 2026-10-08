0x68D970: push    esi; Verified ActiveEffect destructor detaches each associated MagicHitEffect by setting bFinished and ownerActiveEffect=null, clears/frees only the HitEffectNode list, and relies on the ActorProcessManager reference added during PostLink to own the BSTempEffect object's later update/removal.
0x68D971: mov     esi, ecx
0x68D973: mov     eax, [esi+34h]
0x68D976: test    eax, eax
0x68D978: mov     dword ptr [esi], offset ??_7ActiveEffect@@6B@; const ActiveEffect::`vftable'
0x68D97E: jz      short ??1ActiveEffect@@UAE@XZ___ResetHitEffectList; Verified BSSimpleList_Clear frees successor HitEffectNode allocations and clears the root node's data; ActiveEffect::~ActiveEffect then frees the root/header. Hit-effect objects are detached first and are not deleted by this list clear.
0x68D980: mov     dl, 1
