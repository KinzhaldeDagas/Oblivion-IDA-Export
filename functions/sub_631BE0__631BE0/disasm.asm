0x631BE0: push    ebp
0x631BE1: mov     ebp, [esp+4+arg_0]
0x631BE5: push    esi
0x631BE6: push    edi
0x631BE7: mov     edi, ecx
0x631BE9: mov     eax, [edi]
0x631BEB: mov     edx, [eax+3B0h]
0x631BF1: push    ebp
0x631BF2: call    edx
0x631BF4: mov     esi, eax
0x631BF6: test    esi, esi
0x631BF8: jnz     short loc_631C26
0x631BFA: push    10h; Size
0x631BFC: call    FormHeapAlloc
0x631C01: add     esp, 4
0x631C04: test    eax, eax
0x631C06: jz      short loc_631C16
0x631C08: mov     [eax], esi
0x631C0A: mov     [eax+4], esi
0x631C0D: mov     byte ptr [eax+8], 0
0x631C11: mov     [eax+0Ch], esi
0x631C14: jmp     short loc_631C18
0x631C16: xor     eax, eax
0x631C18: mov     ecx, [edi+18Ch]
0x631C1E: push    eax
0x631C1F: mov     esi, eax
0x631C21: call    BSSimpleList_PushFront
0x631C26: mov     eax, [esp+0Ch+arg_4]
0x631C2A: mov     cl, byte ptr [esp+0Ch+arg_8]
0x631C2E: mov     edx, [esp+0Ch+arg_C]
0x631C32: mov     [esi+4], eax
0x631C35: pop     edi
0x631C36: mov     [esi], ebp
0x631C38: mov     [esi+8], cl
0x631C3B: mov     [esi+0Ch], edx
0x631C3E: mov     eax, esi
0x631C40: pop     esi
0x631C41: pop     ebp
0x631C42: retn    10h
