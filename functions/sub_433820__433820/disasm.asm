0x433820: push    0FFFFFFFFh
0x433822: push    offset SEH_43D630
0x433827: mov     eax, large fs:0
0x43382D: push    eax
0x43382E: push    ebx
0x43382F: push    esi
0x433830: push    edi
0x433831: mov     eax, ___security_cookie
0x433836: xor     eax, esp
0x433838: push    eax
0x433839: lea     eax, [esp+1Ch+var_C]
0x43383D: mov     large fs:0, eax
0x433843: mov     esi, ecx
0x433845: mov     edi, [esi+14h]
0x433848: mov     eax, [edi+4]
0x43384B: push    eax; dwTlsIndex
0x43384C: mov     [esp+20h+var_4], 0
0x433854: call    ds:TlsGetValue
0x43385A: test    eax, eax
0x43385C: jnz     short loc_433866
0x43385E: push    esi; a2
0x43385F: mov     ecx, edi; this
0x433861: call    ThreadSpecificInterfaceManager_AddInterface
0x433866: mov     edx, [esp+1Ch+arg_0]
0x43386A: lea     ecx, [esp+1Ch+Comperand]
0x43386E: push    ecx; Comperand
0x43386F: push    edx; LONG
0x433870: mov     ecx, eax
0x433872: call    sub_4334B0
0x433877: mov     esi, [esp+1Ch+Comperand]
0x43387B: test    esi, esi
0x43387D: mov     bl, al
0x43387F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x433887: jz      short loc_4338A1
0x433889: lea     eax, [esi+8]
0x43388C: push    eax; lpAddend
0x43388D: call    ds:InterlockedDecrement
0x433893: test    eax, eax
0x433895: jnz     short loc_4338A1
0x433897: mov     edx, [esi]
0x433899: mov     eax, [edx]
0x43389B: push    1
0x43389D: mov     ecx, esi
0x43389F: call    eax
0x4338A1: mov     al, bl
0x4338A3: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4338A7: mov     large fs:0, ecx
0x4338AE: pop     ecx
0x4338AF: pop     edi
0x4338B0: pop     esi
0x4338B1: pop     ebx
0x4338B2: add     esp, 0Ch
0x4338B5: retn    8
