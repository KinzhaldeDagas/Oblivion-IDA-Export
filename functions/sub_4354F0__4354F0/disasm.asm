0x4354F0: push    0FFFFFFFFh
0x4354F2: push    offset SEH_438060
0x4354F7: mov     eax, large fs:0
0x4354FD: push    eax
0x4354FE: push    ecx
0x4354FF: push    ebx
0x435500: push    esi
0x435501: mov     eax, ___security_cookie
0x435506: xor     eax, esp
0x435508: push    eax
0x435509: lea     eax, [esp+1Ch+var_C]
0x43550D: mov     large fs:0, eax
0x435513: mov     [esp+1Ch+var_10], 0
0x43551B: mov     ecx, [ecx+8]
0x43551E: mov     eax, [ecx]
0x435520: mov     eax, [eax+4]
0x435523: lea     edx, [esp+1Ch+var_10]
0x435527: push    edx
0x435528: mov     edx, [esp+20h+arg_0]
0x43552C: push    edx
0x43552D: mov     [esp+24h+var_4], 0
0x435535: call    eax
0x435537: mov     bl, al
0x435539: mov     eax, [esp+1Ch+var_10]
0x43553D: test    eax, eax
0x43553F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x435547: jz      short loc_435567
0x435549: mov     esi, eax
0x43554B: add     eax, 8
0x43554E: push    eax; lpAddend
0x43554F: call    ds:InterlockedDecrement
0x435555: test    eax, eax
0x435557: jnz     short loc_435567
0x435559: test    esi, esi
0x43555B: jz      short loc_435567
0x43555D: mov     edx, [esi]
0x43555F: mov     eax, [edx]
0x435561: push    1
0x435563: mov     ecx, esi
0x435565: call    eax
0x435567: mov     al, bl
0x435569: mov     ecx, [esp+1Ch+var_C]
0x43556D: mov     large fs:0, ecx
0x435574: pop     ecx
0x435575: pop     esi
0x435576: pop     ebx
0x435577: add     esp, 10h
0x43557A: retn    4
