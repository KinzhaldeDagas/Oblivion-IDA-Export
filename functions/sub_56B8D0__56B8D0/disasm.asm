0x56B8D0: push    edi; [Verified] BSTECreateTask vtable +0x4C Run. A nonnull taskController_0C is invoked through virtual +0x4C only while bNiParallelWaitFallback_0B3F944 is clear. That normal execution path releases/clears the controller. With fallback set, Run skips both invocation and that local release; its final vtable +0x54 ReturnToPool dispatch releases/clears any remaining reference and returns the task to the pool.
0x56B8D1: mov     edi, ecx
0x56B8D3: mov     ecx, [edi+0Ch]
0x56B8D6: test    ecx, ecx
0x56B8D8: jz      short loc_56B916
0x56B8DA: cmp     byte ptr ds:0B3F944h, 0; 3DTheft decode 2026-05-16: BSTECreateTask::Run skips the wrapped task vfunc +0x4C when byte_B3F944 is set by the manager wait helper.
0x56B8E1: jnz     short loc_56B916
0x56B8E3: mov     eax, [ecx]
0x56B8E5: mov     edx, [eax+4Ch]
0x56B8E8: push    esi
0x56B8E9: call    edx
0x56B8EB: mov     esi, [edi+0Ch]
0x56B8EE: test    esi, esi
0x56B8F0: jz      short loc_56B915
0x56B8F2: lea     eax, [esi+4]
0x56B8F5: push    eax; lpAddend
0x56B8F6: call    dword ptr ds:0A2807Ch
0x56B8FC: test    eax, eax
0x56B8FE: jnz     short loc_56B90E
0x56B900: test    esi, esi
0x56B902: jz      short loc_56B90E
0x56B904: mov     edx, [esi]
0x56B906: mov     eax, [edx]
0x56B908: push    1
0x56B90A: mov     ecx, esi
0x56B90C: call    eax
0x56B90E: mov     dword ptr [edi+0Ch], 0
0x56B915: pop     esi
0x56B916: mov     edx, [edi]
0x56B918: mov     eax, [edx+54h]
0x56B91B: mov     ecx, edi
0x56B91D: pop     edi
0x56B91E: jmp     eax
