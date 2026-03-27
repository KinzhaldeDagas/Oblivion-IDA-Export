0x7B8150: mov     eax, [esp+arg_0]
0x7B8154: push    esi
0x7B8155: mov     esi, [eax+0BCh]
0x7B815B: test    esi, esi
0x7B815D: jz      short loc_7B819C
0x7B815F: mov     edx, [esi]
0x7B8161: mov     eax, [edx+4]
0x7B8164: mov     ecx, esi
0x7B8166: call    eax
0x7B8168: test    eax, eax
0x7B816A: jz      short loc_7B817E
0x7B816C: lea     esp, [esp+0]
0x7B8170: cmp     eax, offset byte_B42884
0x7B8175: jz      short loc_7B8198
0x7B8177: mov     eax, [eax+4]
0x7B817A: test    eax, eax
0x7B817C: jnz     short loc_7B8170
0x7B817E: xor     al, al
0x7B8180: neg     al
0x7B8182: sbb     eax, eax
0x7B8184: and     eax, esi
0x7B8186: jz      short loc_7B819C
0x7B8188: push    esi
0x7B8189: push    offset ImageSpaceShaderRTTI???
0x7B818E: call    NiRTTI_Cast
0x7B8193: add     esp, 8
0x7B8196: pop     esi
0x7B8197: retn
0x7B8198: mov     al, 1
0x7B819A: jmp     short loc_7B8180
0x7B819C: xor     eax, eax
0x7B819E: pop     esi
0x7B819F: retn
