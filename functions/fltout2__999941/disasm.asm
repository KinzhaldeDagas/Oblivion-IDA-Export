0x999941: push    ebp
0x999942: mov     ebp, esp
0x999944: sub     esp, 30h
0x999947: mov     eax, ___security_cookie
0x99994C: xor     eax, ebp
0x99994E: mov     [ebp+var_4], eax
0x999951: mov     eax, [ebp+arg_C]
0x999954: push    ebx
0x999955: mov     ebx, [ebp+arg_8]
0x999958: push    esi
0x999959: mov     [ebp+Dst], eax
0x99995C: push    edi
0x99995D: lea     eax, [ebp+arg_0]
0x999960: push    eax
0x999961: lea     eax, [ebp+var_10]
0x999964: push    eax
0x999965: call    ___dtold
0x99996A: pop     ecx
0x99996B: pop     ecx
0x99996C: lea     eax, [ebp+var_2C]
0x99996F: push    eax
0x999970: push    0
0x999972: push    11h
0x999974: sub     esp, 0Ch
0x999977: lea     esi, [ebp+var_10]
0x99997A: mov     edi, esp
0x99997C: movsd
0x99997D: movsd
0x99997E: movsw
0x999980: call    _$I10_OUTPUT
0x999985: mov     esi, [ebp+Dst]
0x999988: mov     [ebx+8], eax
0x99998B: movsx   eax, [ebp+var_2A]
0x99998F: mov     [ebx], eax
0x999991: movsx   eax, [ebp+var_2C]
0x999995: mov     [ebx+4], eax
0x999998: lea     eax, [ebp+Src]
0x99999B: push    eax; Src
0x99999C: push    [ebp+SizeInBytes]; SizeInBytes
0x99999F: push    esi; Dst
0x9999A0: call    _strcpy_s
0x9999A5: add     esp, 24h
0x9999A8: test    eax, eax
0x9999AA: jz      short loc_9999BB
0x9999AC: xor     eax, eax
0x9999AE: push    eax
0x9999AF: push    eax
0x9999B0: push    eax
0x9999B1: push    eax
0x9999B2: push    eax
0x9999B3: call    __invoke_watson
0x9999B8: add     esp, 14h
0x9999BB: mov     ecx, [ebp+var_4]
0x9999BE: pop     edi
0x9999BF: mov     [ebx+0Ch], esi
0x9999C2: pop     esi
0x9999C3: mov     eax, ebx
0x9999C5: xor     ecx, ebp
0x9999C7: pop     ebx
0x9999C8: call    @__security_check_cookie@4
0x9999CD: leave
0x9999CE: retn
