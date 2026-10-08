0x68D98D: mov     ecx, [eax]; Verified ActiveEffect destructor detaches each hit-effect object by setting MagicHitEffect.bFinished=true and ownerActiveEffect=null, then advances through HitEffectNode.next. PostLink has already registered these objects with ActorProcessManager, which retains its own refcount.
0x68D98F: mov     [ecx+24h], dl
0x68D992: mov     dword ptr [ecx+18h], 0
0x68D999: mov     eax, [eax+4]
0x68D99C: test    eax, eax
0x68D99E: jnz     short ??1ActiveEffect@@UAE@XZ___HitEffectLoop_Check
