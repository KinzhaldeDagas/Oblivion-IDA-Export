0x68E62B: mov     edi, [esi]
0x68E62D: mov     edx, [edi]
0x68E62F: mov     eax, [edx+84h]
0x68E635: push    0
0x68E637: push    ebp
0x68E638: push    ebx
0x68E639: mov     ecx, edi
0x68E63B: call    eax
0x68E63D: push    edi
0x68E63E: mov     ecx, offset ActorProcessManager_ptr
0x68E643: call    sub_678D30
0x68E648: mov     esi, [esi+4]
0x68E64B: test    esi, esi
0x68E64D: jnz     short ActiveEffect_Base_PostLink___LoopTest
