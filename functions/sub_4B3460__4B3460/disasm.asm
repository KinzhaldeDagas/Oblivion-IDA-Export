0x4B3460: sub     esp, 108h
0x4B3466: mov     eax, ds:0B30AACh
0x4B346B: xor     eax, esp
0x4B346D: mov     [esp+108h+var_4], eax
0x4B3474: push    ebx
0x4B3475: mov     ebx, [esp+10Ch+arg_0]
0x4B347C: push    esi
0x4B347D: push    edi
0x4B347E: push    8; Size
0x4B3480: mov     esi, ecx
0x4B3482: call    FormHeapAlloc
0x4B3487: add     esp, 4
0x4B348A: test    eax, eax
0x4B348C: jz      short loc_4B349C
0x4B348E: mov     byte ptr [eax], 0
0x4B3491: mov     dword ptr [eax+4], 0
0x4B3498: mov     edi, eax
0x4B349A: jmp     short loc_4B349E
0x4B349C: xor     edi, edi
0x4B349E: lea     eax, [esp+114h+Str]
0x4B34A2: push    esi; int
0x4B34A3: push    eax; Str
0x4B34A4: call    sub_46D540
0x4B34A9: add     esp, 8
0x4B34AC: lea     ecx, [esp+114h+Str]
0x4B34B0: push    ecx
0x4B34B1: push    esi
0x4B34B2: push    ebx
0x4B34B3: mov     ecx, edi
0x4B34B5: call    sub_46D750
0x4B34BA: push    edi
0x4B34BB: mov     ecx, esi
0x4B34BD: call    sub_4B3400
0x4B34C2: mov     ecx, [esp+114h+var_4]
0x4B34C9: pop     edi
0x4B34CA: pop     esi
0x4B34CB: pop     ebx
0x4B34CC: xor     ecx, esp
0x4B34CE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B34D3: add     esp, 108h
0x4B34D9: retn    4
