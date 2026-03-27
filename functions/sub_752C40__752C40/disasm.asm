0x752C40: mov     eax, [esp+arg_4]
0x752C44: push    ebx
0x752C45: push    ebp
0x752C46: push    esi
0x752C47: mov     esi, [esp+0Ch+arg_0]
0x752C4B: push    edi
0x752C4C: push    eax
0x752C4D: push    esi
0x752C4E: mov     edi, ecx
0x752C50: call    sub_700770
0x752C55: mov     ecx, [esi+8]
0x752C58: mov     ebp, [edi+8]
0x752C5B: push    ecx
0x752C5C: call    FormHeapFree
0x752C61: mov     eax, ebp
0x752C63: add     esp, 4
0x752C66: lea     edx, [eax+1]
0x752C69: lea     esp, [esp+0]
0x752C70: mov     cl, [eax]
0x752C72: add     eax, 1
0x752C75: test    cl, cl
0x752C77: jnz     short loc_752C70
0x752C79: sub     eax, edx
0x752C7B: lea     ebx, [eax+1]
0x752C7E: push    ebx; Size
0x752C7F: call    FormHeapAlloc
0x752C84: push    ebp; Src
0x752C85: push    ebx; SizeInBytes
0x752C86: push    eax; Dst
0x752C87: mov     [esi+8], eax
0x752C8A: call    _strcpy_s
0x752C8F: mov     edx, [edi+0Ch]
0x752C92: add     esp, 10h
0x752C95: mov     [esi+0Ch], edx
0x752C98: mov     al, [edi+14h]
0x752C9B: pop     edi
0x752C9C: mov     [esi+14h], al
0x752C9F: pop     esi
0x752CA0: pop     ebp
0x752CA1: pop     ebx
0x752CA2: retn    8
