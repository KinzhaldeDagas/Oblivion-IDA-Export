0x4015F0: push    esi
0x4015F1: mov     esi, [esp+4+arg_0]
0x4015F5: or      dword ptr [esi+4], 40000000h
0x4015FC: mov     eax, [esi+4]
0x4015FF: and     eax, 0FFFFFFFh
0x401604: xor     edx, edx
0x401606: mov     dword ptr [esi+0Ch], 0
0x40160D: mov     dword ptr [esi+8], 0
0x401614: div     dword ptr [ecx+4]
0x401617: push    edi
0x401618: sub     eax, 1
0x40161B: cmp     eax, [ecx+30h]
0x40161E: jl      short loc_401625
0x401620: lea     edi, [ecx+3Ch]
0x401623: jmp     short loc_40162B
0x401625: mov     edx, [ecx+34h]
0x401628: lea     edi, [edx+eax*8]
0x40162B: mov     eax, [edi+4]
0x40162E: test    eax, eax
0x401630: jz      short loc_401647
0x401632: mov     [esi+8], eax
0x401635: mov     edx, [eax+0Ch]
0x401638: test    edx, edx
0x40163A: mov     [esi+0Ch], edx
0x40163D: jz      short loc_401642
0x40163F: mov     [edx+8], esi
0x401642: mov     [eax+0Ch], esi
0x401645: jmp     short loc_401649
0x401647: mov     [edi], esi
0x401649: mov     [edi+4], esi
0x40164C: add     dword ptr [ecx+28h], 1
0x401650: mov     eax, [ecx+28h]
0x401653: cmp     eax, [ecx+2Ch]
0x401656: jle     short loc_40165B
0x401658: mov     [ecx+2Ch], eax
0x40165B: mov     eax, [esi+4]
0x40165E: and     eax, 0FFFFFFFh
0x401663: cmp     eax, 1000h
0x401668: pop     edi
0x401669: pop     esi
0x40166A: jg      short locret_40168A
0x40166C: sub     eax, [ecx+4]
0x40166F: cdq
0x401670: and     edx, 0FFh
0x401676: add     eax, edx
0x401678: sar     eax, 8
0x40167B: cmp     eax, 0FFFFFFFFh
0x40167E: jz      short locret_40168A
0x401680: mov     ecx, [ecx+44h]
0x401683: add     dword ptr [ecx+eax*8], 1
0x401687: lea     eax, [ecx+eax*8]
0x40168A: retn    4
