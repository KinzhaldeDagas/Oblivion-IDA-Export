0x557250: push    ebp
0x557251: mov     ebp, esp
0x557253: push    0FFFFFFFFh
0x557255: push    offset SEH_557250
0x55725A: mov     eax, large fs:0
0x557260: push    eax
0x557261: sub     esp, 8
0x557264: push    ebx
0x557265: push    esi
0x557266: push    edi
0x557267: mov     eax, ds:0B30AACh
0x55726C: xor     eax, ebp
0x55726E: push    eax
0x55726F: lea     eax, [ebp+var_C]
0x557272: mov     large fs:0, eax
0x557278: mov     [ebp+var_10], esp
0x55727B: mov     esi, ecx
0x55727D: mov     [ebp+var_14], esi
0x557280: mov     ebx, [ebp+arg_0]
0x557283: mov     eax, [ebx+4]
0x557286: xor     edi, edi
0x557288: cmp     eax, edi
0x55728A: jnz     short loc_557290
0x55728C: xor     eax, eax
0x55728E: jmp     short loc_5572A3
0x557290: mov     ecx, [ebx+8]
0x557293: sub     ecx, eax
0x557295: mov     eax, 2AAAAAABh
0x55729A: imul    ecx
0x55729C: mov     eax, edx
0x55729E: shr     eax, 1Fh
0x5572A1: add     eax, edx
0x5572A3: cmp     eax, edi
0x5572A5: mov     [esi+4], edi
0x5572A8: mov     [esi+8], edi
0x5572AB: mov     [esi+0Ch], edi
0x5572AE: jz      short loc_557318
0x5572B0: cmp     eax, 0FFFFFFFFh
0x5572B3: jbe     short loc_5572BA
0x5572B5: call    sub_790B90
0x5572BA: lea     edi, [eax+eax*2]
0x5572BD: add     edi, edi
0x5572BF: push    edi; Size
0x5572C0: call    FormHeapAlloc
0x5572C5: add     edi, eax
0x5572C7: mov     [esi+4], eax
0x5572CA: mov     [esi+8], eax
0x5572CD: mov     [esi+0Ch], edi
0x5572D0: mov     edi, [ebx+8]
0x5572D3: add     esp, 4
0x5572D6: cmp     [ebx+4], edi
0x5572D9: mov     [ebp+var_4], 0
0x5572E0: jbe     short loc_5572E7
0x5572E2: call    __invalid_parameter_noinfo
0x5572E7: mov     ecx, [ebx+4]
0x5572EA: cmp     ecx, [ebx+8]
0x5572ED: mov     [ebp+arg_0], ecx
0x5572F0: jbe     short loc_5572FA
0x5572F2: call    __invalid_parameter_noinfo
0x5572F7: mov     ecx, [ebp+arg_0]
0x5572FA: mov     eax, [esi+4]
0x5572FD: mov     byte ptr [ebp+arg_0], 0
0x557301: mov     edx, [ebp+arg_0]
0x557304: push    edx
0x557305: mov     edx, [ebp+arg_0]
0x557308: push    edx
0x557309: push    esi
0x55730A: push    eax
0x55730B: push    edi
0x55730C: push    ecx
0x55730D: call    sub_5567D0
0x557312: add     esp, 18h
0x557315: mov     [esi+8], eax
0x557318: mov     eax, esi
0x55731A: mov     ecx, [ebp+var_C]
0x55731D: mov     large fs:0, ecx
0x557324: pop     ecx
0x557325: pop     edi
0x557326: pop     esi
0x557327: pop     ebx
0x557328: mov     esp, ebp
0x55732A: pop     ebp
0x55732B: retn    4
0x55732E: mov     ecx, [ebp+var_14]; void *
0x557331: call    sub_794EB0
0x557336: push    0
0x557338: push    0
0x55733A: call    ThrowException??
