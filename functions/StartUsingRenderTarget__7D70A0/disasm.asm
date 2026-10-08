0x7D70A0: push    esi; Begin a render-target-group stack entry: resolve null to the default group, end any currently ready group, begin the requested group, then strong-own it on the ten-entry global stack.
0x7D70A1: mov     esi, ds:0B3F928h
0x7D70A7: push    edi
0x7D70A8: mov     edi, [esp+8+a2]
0x7D70AC: test    edi, edi
0x7D70AE: jnz     short loc_7D70BB
0x7D70B0: mov     eax, [esi]
0x7D70B2: mov     edx, [eax+7Ch]
0x7D70B5: mov     ecx, esi
0x7D70B7: call    edx
0x7D70B9: mov     edi, eax
0x7D70BB: cmp     byte ptr [esi+20Ch], 0; If another target group is ready, end it before beginning the new stack entry.
0x7D70C2: jz      short loc_7D70CB
0x7D70C4: mov     ecx, esi; this
0x7D70C6: call    NiDX9Renderer_EndRenderTargetGroupLocked; Locked target-group end wrapper: run EndUsingRenderTargetGroup, release the renderer lock, and clear IsReady. It does not itself bind another target.
0x7D70CB: test    edi, edi
0x7D70CD: mov     eax, edi
0x7D70CF: jnz     short loc_7D70DE
0x7D70D1: mov     ecx, ds:0B3F928h
0x7D70D7: mov     eax, [ecx]
0x7D70D9: mov     edx, [eax+7Ch]
0x7D70DC: call    edx
0x7D70DE: mov     ecx, [esp+8+clearFlags]
0x7D70E2: push    ecx; clearFlags
0x7D70E3: mov     ecx, ds:0B3F928h; this
0x7D70E9: push    eax; targetGroup
0x7D70EA: call    NiDX9Renderer_BeginRenderTargetGroupLocked; Begin the selected render-target group with the caller's clear flags.
0x7D70EF: mov     eax, ds:0B45D74h
0x7D70F4: cmp     eax, 0Ah
0x7D70F7: jnb     short loc_7D710D; The global render-target ownership stack accepts at most ten entries.
0x7D70F9: push    edi; a2
0x7D70FA: lea     ecx, ds:0B45D78h[eax*4]; this
0x7D7101: call    NiSmartPointer_Set??; Strong-own the selected group in the next stack slot.
0x7D7106: add     dword ptr ds:0B45D74h, 1
0x7D710D: pop     edi
0x7D710E: pop     esi
0x7D710F: retn
