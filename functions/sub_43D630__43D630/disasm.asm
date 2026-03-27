0x43D630: push    0FFFFFFFFh
0x43D632: push    offset SEH_43D630
0x43D637: mov     eax, large fs:0
0x43D63D: push    eax
0x43D63E: push    ebx
0x43D63F: push    esi
0x43D640: push    edi
0x43D641: mov     eax, ___security_cookie
0x43D646: xor     eax, esp
0x43D648: push    eax
0x43D649: lea     eax, [esp+1Ch+var_C]
0x43D64D: mov     large fs:0, eax
0x43D653: mov     esi, ecx
0x43D655: mov     edi, [esi+14h]
0x43D658: mov     eax, [edi+4]
0x43D65B: push    eax; dwTlsIndex
0x43D65C: mov     [esp+20h+var_4], 0
0x43D664: call    ds:TlsGetValue
0x43D66A: test    eax, eax
0x43D66C: jnz     short loc_43D676
0x43D66E: push    esi; a2
0x43D66F: mov     ecx, edi; this
0x43D671: call    ThreadSpecificInterfaceManager_AddInterface
0x43D676: mov     edx, [esp+1Ch+arg_0]
0x43D67A: lea     ecx, [esp+1Ch+Comperand]
0x43D67E: push    ecx; Comperand
0x43D67F: push    edx; LONG
0x43D680: mov     ecx, eax
0x43D682: call    sub_43C630
0x43D687: mov     esi, [esp+1Ch+Comperand]
0x43D68B: test    esi, esi
0x43D68D: mov     bl, al
0x43D68F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x43D697: jz      short loc_43D6B1
0x43D699: lea     eax, [esi+8]
0x43D69C: push    eax; lpAddend
0x43D69D: call    ds:InterlockedDecrement
0x43D6A3: test    eax, eax
0x43D6A5: jnz     short loc_43D6B1
0x43D6A7: mov     edx, [esi]
0x43D6A9: mov     eax, [edx]
0x43D6AB: push    1
0x43D6AD: mov     ecx, esi
0x43D6AF: call    eax
0x43D6B1: mov     al, bl
0x43D6B3: mov     ecx, dword ptr [esp+1Ch+var_C]
0x43D6B7: mov     large fs:0, ecx
0x43D6BE: pop     ecx
0x43D6BF: pop     edi
0x43D6C0: pop     esi
0x43D6C1: pop     ebx
0x43D6C2: add     esp, 0Ch
0x43D6C5: retn    8
