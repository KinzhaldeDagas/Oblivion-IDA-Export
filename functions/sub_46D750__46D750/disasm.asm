0x46D750: push    ebp
0x46D751: mov     ebp, esp
0x46D753: sub     esp, 8
0x46D756: mov     eax, ds:0B30AACh
0x46D75B: xor     eax, ebp
0x46D75D: mov     [ebp+var_4], eax
0x46D760: mov     eax, [ebp+a1]
0x46D763: mov     [ebp+var_8], ecx
0x46D766: mov     ecx, [eax+254h]
0x46D76C: mov     eax, 0AAAAAAABh
0x46D771: mul     ecx
0x46D773: push    ebx
0x46D774: push    esi
0x46D775: mov     esi, edx
0x46D777: shr     esi, 4
0x46D77A: lea     edx, [esi+esi*2]
0x46D77D: add     edx, edx
0x46D77F: add     edx, edx
0x46D781: add     edx, edx
0x46D783: sub     ecx, edx
0x46D785: push    edi
0x46D786: jnz     short loc_46D7C6
0x46D788: lea     edi, [esi+esi*2]
0x46D78B: add     edi, edi
0x46D78D: add     edi, edi
0x46D78F: add     edi, edi
0x46D791: test    esi, esi
0x46D793: jz      short loc_46D7C6
0x46D795: mov     eax, edi
0x46D797: call    __alloca?
0x46D79C: mov     ebx, esp
0x46D79E: push    edi
0x46D79F: push    0
0x46D7A1: push    ebx
0x46D7A2: call    __memset
0x46D7A7: mov     ecx, [ebp+a1]; a1
0x46D7AA: add     esp, 0Ch
0x46D7AD: push    edi; a4
0x46D7AE: push    ebx; Dst
0x46D7AF: call    TESFile_GetChunkData
0x46D7B4: mov     eax, [ebp+arg_8]
0x46D7B7: mov     ecx, [ebp+arg_4]
0x46D7BA: push    eax
0x46D7BB: push    ecx
0x46D7BC: mov     ecx, [ebp+var_8]
0x46D7BF: push    esi
0x46D7C0: push    ebx
0x46D7C1: call    sub_46D610
0x46D7C6: lea     esp, [ebp-14h]
0x46D7C9: pop     edi
0x46D7CA: pop     esi
0x46D7CB: pop     ebx
0x46D7CC: mov     ecx, [ebp+var_4]
0x46D7CF: xor     ecx, ebp
0x46D7D1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x46D7D6: mov     esp, ebp
0x46D7D8: pop     ebp
0x46D7D9: retn    0Ch
