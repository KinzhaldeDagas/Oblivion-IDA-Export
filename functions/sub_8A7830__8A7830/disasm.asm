0x8A7830: push    esi
0x8A7831: push    edi
0x8A7832: mov     edi, ecx
0x8A7834: mov     ecx, [edi+14h]; lpCriticalSection
0x8A7837: call    sub_8A7720
0x8A783C: mov     eax, [edi+0Ch]
0x8A783F: xor     esi, esi
0x8A7841: test    eax, eax
0x8A7843: jle     short loc_8A786C
0x8A7845: push    ebx
0x8A7846: mov     ebx, [esp+0Ch+arg_8]
0x8A784A: push    ebp
0x8A784B: mov     ebp, [esp+10h+arg_4]
0x8A784F: nop
0x8A7850: mov     eax, [edi+8]
0x8A7853: mov     ecx, [eax+esi*4]
0x8A7856: mov     eax, [esp+10h+arg_0]
0x8A785A: mov     edx, [ecx]
0x8A785C: push    ebx
0x8A785D: push    ebp
0x8A785E: push    eax
0x8A785F: call    dword ptr [edx+8]
0x8A7862: mov     eax, [edi+0Ch]
0x8A7865: inc     esi
0x8A7866: cmp     esi, eax
0x8A7868: jl      short loc_8A7850
0x8A786A: pop     ebp
0x8A786B: pop     ebx
0x8A786C: mov     ecx, [edi+14h]
0x8A786F: push    ecx; lpCriticalSection
0x8A7870: call    dword ptr ds:0A28074h
0x8A7876: pop     edi
0x8A7877: pop     esi
0x8A7878: retn    0Ch
