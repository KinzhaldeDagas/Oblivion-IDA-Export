0x4E4FE0: push    ebx
0x4E4FE1: mov     ebx, [esp+4+arg_0]
0x4E4FE5: push    esi
0x4E4FE6: mov     esi, [esp+8+arg_4]
0x4E4FEA: push    edi
0x4E4FEB: push    esi
0x4E4FEC: push    ebx
0x4E4FED: mov     edi, ecx
0x4E4FEF: call    sub_4E4F70
0x4E4FF4: test    al, al
0x4E4FF6: jnz     short loc_4E502E
0x4E4FF8: push    ebx
0x4E4FF9: mov     ecx, edi
0x4E4FFB: call    sub_4E4E90
0x4E5000: mov     ebx, eax
0x4E5002: cmp     ebx, 0FFFFFFFFh
0x4E5005: jz      short loc_4E502E
0x4E5007: push    10h; Size
0x4E5009: call    FormHeapAlloc
0x4E500E: mov     [eax], bx
0x4E5011: mov     ecx, [esi]
0x4E5013: mov     [eax+4], ecx
0x4E5016: mov     edx, [esi+4]
0x4E5019: mov     [eax+8], edx
0x4E501C: mov     ecx, [esi+8]
0x4E501F: add     esp, 4
0x4E5022: mov     [eax+0Ch], ecx
0x4E5025: push    eax
0x4E5026: lea     ecx, [edi+28h]
0x4E5029: call    BSSimpleList_PushFront
0x4E502E: pop     edi
0x4E502F: pop     esi
0x4E5030: pop     ebx
0x4E5031: retn    8
