0x8DB910: sub     esp, 18h
0x8DB913: push    ebx
0x8DB914: push    ebp
0x8DB915: push    esi
0x8DB916: mov     esi, ecx
0x8DB918: mov     ebx, [esi+84h]
0x8DB91E: mov     ebp, [esi+88h]
0x8DB924: push    edi
0x8DB925: mov     edi, [esp+28h+arg_0]
0x8DB929: cmp     di, 0FFFFh
0x8DB92E: mov     word ptr [esp+28h+var_18], di
0x8DB933: mov     [esp+28h+var_14], 0
0x8DB93B: mov     [esp+28h+var_10], ebx
0x8DB93F: mov     [esp+28h+var_C], ebp
0x8DB943: mov     [esp+28h+var_4], esi
0x8DB947: jz      short loc_8DB964
0x8DB949: mov     eax, [esi]
0x8DB94B: push    edi
0x8DB94C: call    dword ptr [eax+20h]
0x8DB94F: test    eax, eax
0x8DB951: jz      short loc_8DB95C
0x8DB953: add     eax, 8
0x8DB956: mov     [esp+28h+var_14], eax
0x8DB95A: jmp     short loc_8DB964
0x8DB95C: mov     [esp+28h+var_14], 0
0x8DB964: mov     edx, [esi+8]
0x8DB967: lea     ecx, [esp+28h+var_18]
0x8DB96B: push    ecx
0x8DB96C: push    edx
0x8DB96D: call    sub_8DC920
0x8DB972: mov     eax, [ebx+98h]
0x8DB978: add     esp, 8
0x8DB97B: test    eax, eax
0x8DB97D: jz      short loc_8DB98D
0x8DB97F: lea     eax, [esp+28h+var_18]
0x8DB983: push    eax
0x8DB984: push    ebx
0x8DB985: call    sub_8DC0A0
0x8DB98A: add     esp, 8
0x8DB98D: mov     eax, [ebp+98h]
0x8DB993: test    eax, eax
0x8DB995: jz      short loc_8DB9A5
0x8DB997: lea     ecx, [esp+28h+var_18]
0x8DB99B: push    ecx
0x8DB99C: push    ebp
0x8DB99D: call    sub_8DC0A0
0x8DB9A2: add     esp, 8
0x8DB9A5: push    edi
0x8DB9A6: lea     ecx, [esi+10h]
0x8DB9A9: call    sub_925C10
0x8DB9AE: mov     eax, [esi+4Ch]
0x8DB9B1: test    eax, eax
0x8DB9B3: jnz     short loc_8DBA02
0x8DB9B5: mov     eax, [esi+8]
0x8DB9B8: mov     ecx, [eax+0A0h]; lpCriticalSection
0x8DB9BE: test    ecx, ecx
0x8DB9C0: jnz     short loc_8DB9DB
0x8DB9C2: push    1
0x8DB9C4: add     esi, 74h ; 't'
0x8DB9C7: push    esi
0x8DB9C8: push    eax
0x8DB9C9: call    sub_8CB4E0
0x8DB9CE: add     esp, 0Ch
0x8DB9D1: pop     edi
0x8DB9D2: pop     esi
0x8DB9D3: pop     ebp
0x8DB9D4: pop     ebx
0x8DB9D5: add     esp, 18h
0x8DB9D8: retn    4
0x8DB9DB: call    sub_8A7720
0x8DB9E0: mov     eax, [esi+8]
0x8DB9E3: push    1
0x8DB9E5: lea     edx, [esi+74h]
0x8DB9E8: push    edx
0x8DB9E9: push    eax
0x8DB9EA: call    sub_8CB4E0
0x8DB9EF: mov     ecx, [esi+8]
0x8DB9F2: mov     edx, [ecx+0A0h]
0x8DB9F8: add     esp, 0Ch
0x8DB9FB: push    edx; lpCriticalSection
0x8DB9FC: call    dword ptr ds:0A28074h
0x8DBA02: pop     edi
0x8DBA03: pop     esi
0x8DBA04: pop     ebp
0x8DBA05: pop     ebx
0x8DBA06: add     esp, 18h
0x8DBA09: retn    4
