0x4352B0: push    esi; Async queued-KF completion bridge. If the queued task produced a KFModel at +0x28 and task state +0x0C is not cancelled state 6, forwards the model and AnimIdle context at +0x34 to AnimIdle_OnKFLoadComplete, then unregisters the queued task from the model loader.
0x4352B1: mov     esi, ecx
0x4352B3: mov     eax, [esi+28h]
0x4352B6: test    eax, eax
0x4352B8: jz      short loc_4352C9
0x4352BA: cmp     dword ptr [esi+0Ch], 6
0x4352BE: jz      short loc_4352C9
0x4352C0: mov     ecx, [esi+34h]
0x4352C3: push    eax
0x4352C4: call    AnimIdle_OnKFLoadComplete; Completes an asynchronous AnimIdle KF load. Stores KFModel at +0x08, binds the two actor-specific resources, holds the model reference, and marks phase 1. Completion mode +0x04 values 2/3 process playable queued state (3 also starts action 0x0B); mode 0 performs install-only; unsupported/no-ActorAnimData paths retain or destroy the holder as observed.
0x4352C9: mov     eax, ds:0B33A1Ch
0x4352CE: mov     ecx, [eax+0Ch]
0x4352D1: mov     edx, [ecx]
0x4352D3: mov     eax, [esi+34h]
0x4352D6: mov     edx, [edx+10h]
0x4352D9: push    eax
0x4352DA: call    edx
0x4352DC: pop     esi
0x4352DD: retn
