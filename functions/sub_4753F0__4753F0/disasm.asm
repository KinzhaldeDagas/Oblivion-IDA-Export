0x4753F0: push    esi; Install-only path for the queued AnimIdle at ActorAnimData +0xD0. Requires phase 1 and a successful ActorAnimData_InstallKFModel, then cleans/frees the AnimIdle and clears +0xD0 without calling ActorAnimData_PlayEncodedGroup.
0x4753F1: mov     esi, ecx
0x4753F3: mov     eax, [esi+0D0h]
0x4753F9: test    eax, eax
0x4753FB: jz      short loc_47543B
0x4753FD: cmp     dword ptr [eax], 1
0x475400: jnz     short loc_47543B
0x475402: mov     eax, [eax+8]
0x475405: push    0
0x475407: push    eax
0x475408: call    ActorAnimData_InstallKFModel; CustomAnimSupport decode: installs a parsed KFModel into ActorAnimData as AnimSequenceSingle/Multiple or defers it. Historical constructor-style name is not canonical.
0x47540D: test    al, al
0x47540F: jz      short loc_47543B
0x475411: push    edi
0x475412: mov     edi, [esi+0D0h]
0x475418: test    edi, edi
0x47541A: jz      short loc_47542C
0x47541C: mov     ecx, edi
0x47541E: call    AnimIdle_CleanupLoadedResources; AnimIdle owned-resource cleanup. Detaches/releases the two actor-bound resources at +0x1C/+0x20, releases the loaded model/path and sequence references, cleans removed controllers, and cancels matching actor high-process action 0x0B before releasing the held sequence.
0x475423: push    edi
0x475424: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x475429: add     esp, 4
0x47542C: pop     edi
0x47542D: mov     dword ptr [esi+0D0h], 0
0x475437: mov     al, 1
0x475439: pop     esi
0x47543A: retn
0x47543B: xor     al, al
0x47543D: pop     esi
0x47543E: retn
