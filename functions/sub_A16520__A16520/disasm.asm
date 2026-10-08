0xA16520: push    esi
0xA16521: mov     esi, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0xA16527: test    esi, esi
0xA16529: jz      short loc_A16547
0xA1652B: lea     eax, [esi+4]
0xA1652E: push    eax; lpAddend
0xA1652F: call    ds:InterlockedDecrement
0xA16535: test    eax, eax
0xA16537: jnz     short loc_A16547
0xA16539: test    esi, esi
0xA1653B: jz      short loc_A16547
0xA1653D: mov     edx, [esi]
0xA1653F: mov     eax, [edx]
0xA16541: push    1
0xA16543: mov     ecx, esi
0xA16545: call    eax
0xA16547: pop     esi
0xA16548: retn
