0x74C910: push    ebp
0x74C911: push    edi
0x74C912: mov     edi, [esp+8+arg_0]
0x74C916: test    edi, edi
0x74C918: mov     ebp, ecx
0x74C91A: jz      loc_74C9F6
0x74C920: push    esi
0x74C921: lea     esi, [edi+4]
0x74C924: push    esi; lpAddend
0x74C925: mov     [esp+10h+arg_0], edi
0x74C929: call    dword ptr ds:0A28078h
0x74C92F: lea     eax, [esp+0Ch+arg_0]
0x74C933: push    eax
0x74C934: lea     ecx, [ebp+50h]
0x74C937: call    sub_74C5D0
0x74C93C: push    esi; lpAddend
0x74C93D: call    dword ptr ds:0A2807Ch
0x74C943: test    eax, eax
0x74C945: jnz     short loc_74C951
0x74C947: mov     edx, [edi]
0x74C949: mov     eax, [edx]
0x74C94B: push    1
0x74C94D: mov     ecx, edi
0x74C94F: call    eax
0x74C951: mov     eax, [edi+0B8h]
0x74C957: test    eax, eax
0x74C959: push    ebx
0x74C95A: push    0Ch; Size
0x74C95C: jz      short loc_74C992
0x74C95E: mov     ebx, [eax+0Ch]
0x74C961: call    FormHeapAlloc
0x74C966: add     esp, 4
0x74C969: test    ebx, ebx
0x74C96B: jz      short loc_74C99A
0x74C96D: test    eax, eax
0x74C96F: jz      short loc_74C985
0x74C971: mov     ecx, eax
0x74C973: call    sub_74A750
0x74C978: mov     esi, eax
0x74C97A: push    ebx; a2
0x74C97B: lea     ecx, [esi+8]; this
0x74C97E: call    NiSmartPointer_Set??
0x74C983: jmp     short loc_74C9AB
0x74C985: xor     esi, esi
0x74C987: push    ebx; a2
0x74C988: lea     ecx, [esi+8]; this
0x74C98B: call    NiSmartPointer_Set??
0x74C990: jmp     short loc_74C9AB
0x74C992: call    FormHeapAlloc
0x74C997: add     esp, 4
0x74C99A: test    eax, eax
0x74C99C: jz      short loc_74C9A9
0x74C99E: mov     ecx, eax
0x74C9A0: call    sub_74A750
0x74C9A5: mov     esi, eax
0x74C9A7: jmp     short loc_74C9AB
0x74C9A9: xor     esi, esi
0x74C9AB: test    esi, esi
0x74C9AD: mov     [esp+10h+arg_0], esi
0x74C9B1: pop     ebx
0x74C9B2: jz      short loc_74C9BE
0x74C9B4: lea     ecx, [esi+4]
0x74C9B7: push    ecx; lpAddend
0x74C9B8: call    dword ptr ds:0A28078h
0x74C9BE: lea     edx, [esp+0Ch+arg_0]
0x74C9C2: push    edx
0x74C9C3: lea     ecx, [ebp+60h]
0x74C9C6: call    sub_74C6A0
0x74C9CB: test    esi, esi
0x74C9CD: jz      short loc_74C9E7
0x74C9CF: lea     eax, [esi+4]
0x74C9D2: push    eax; lpAddend
0x74C9D3: call    dword ptr ds:0A2807Ch
0x74C9D9: test    eax, eax
0x74C9DB: jnz     short loc_74C9E7
0x74C9DD: mov     edx, [esi]
0x74C9DF: mov     eax, [edx]
0x74C9E1: push    1
0x74C9E3: mov     ecx, esi
0x74C9E5: call    eax
0x74C9E7: mov     eax, [edi+0B4h]
0x74C9ED: test    eax, eax
0x74C9EF: pop     esi
0x74C9F0: jz      short loc_74C9F6
0x74C9F2: or      byte ptr [eax+30h], 33h
0x74C9F6: pop     edi
0x74C9F7: pop     ebp
0x74C9F8: retn    4
