0x6F08E0: push    0FFFFFFFFh
0x6F08E2: push    offset SEH_6F08E0
0x6F08E7: mov     eax, large fs:0
0x6F08ED: push    eax
0x6F08EE: sub     esp, 8
0x6F08F1: push    ebx
0x6F08F2: push    ebp
0x6F08F3: push    esi
0x6F08F4: push    edi
0x6F08F5: mov     eax, ds:0B30AACh
0x6F08FA: xor     eax, esp
0x6F08FC: push    eax
0x6F08FD: lea     eax, [esp+28h+var_C]
0x6F0901: mov     large fs:0, eax
0x6F0907: mov     esi, ecx
0x6F0909: mov     ecx, [esi+4]
0x6F090C: xor     edi, edi
0x6F090E: cmp     ecx, edi
0x6F0910: mov     [esp+28h+var_4], edi
0x6F0914: jnz     short loc_6F091A
0x6F0916: xor     eax, eax
0x6F0918: jmp     short loc_6F0930
0x6F091A: mov     edx, [esi+8]
0x6F091D: sub     edx, ecx
0x6F091F: mov     eax, 66666667h
0x6F0924: imul    edx
0x6F0926: sar     edx, 3
0x6F0929: mov     eax, edx
0x6F092B: shr     eax, 1Fh
0x6F092E: add     eax, edx
0x6F0930: mov     ebx, [esp+28h+arg_0]
0x6F0934: cmp     eax, ebx
0x6F0936: jnb     short loc_6F0971
0x6F0938: cmp     ecx, edi
0x6F093A: jz      short loc_6F0952
0x6F093C: mov     edx, [esi+8]
0x6F093F: sub     edx, ecx
0x6F0941: mov     eax, 66666667h
0x6F0946: imul    edx
0x6F0948: sar     edx, 3
0x6F094B: mov     edi, edx
0x6F094D: shr     edi, 1Fh
0x6F0950: add     edi, edx
0x6F0952: mov     ebp, [esi+8]
0x6F0955: cmp     ecx, ebp
0x6F0957: jbe     short loc_6F095E
0x6F0959: call    __invalid_parameter_noinfo
0x6F095E: lea     eax, [esp+28h+arg_4]
0x6F0962: push    eax
0x6F0963: sub     ebx, edi
0x6F0965: push    ebx
0x6F0966: push    ebp
0x6F0967: push    esi
0x6F0968: mov     ecx, esi
0x6F096A: call    sub_6F05C0
0x6F096F: jmp     short loc_6F09D1
0x6F0971: cmp     ecx, edi
0x6F0973: jz      short loc_6F09D1
0x6F0975: mov     edi, [esi+8]
0x6F0978: mov     edx, edi
0x6F097A: sub     edx, ecx
0x6F097C: mov     eax, 66666667h
0x6F0981: imul    edx
0x6F0983: sar     edx, 3
0x6F0986: mov     eax, edx
0x6F0988: shr     eax, 1Fh
0x6F098B: add     eax, edx
0x6F098D: cmp     ebx, eax
0x6F098F: jnb     short loc_6F09D1
0x6F0991: cmp     ecx, edi
0x6F0993: jbe     short loc_6F099A
0x6F0995: call    __invalid_parameter_noinfo
0x6F099A: mov     ebp, [esi+4]
0x6F099D: cmp     ebp, [esi+8]
0x6F09A0: jbe     short loc_6F09A7
0x6F09A2: call    __invalid_parameter_noinfo
0x6F09A7: lea     ecx, [ebx+ebx*4]
0x6F09AA: lea     ebx, [ebp+ecx*4+0]
0x6F09AE: cmp     ebx, [esi+8]
0x6F09B1: mov     [esp+28h+var_10], ebp
0x6F09B5: ja      short loc_6F09BC
0x6F09B7: cmp     ebx, [esi+4]
0x6F09BA: jnb     short loc_6F09C1
0x6F09BC: call    __invalid_parameter_noinfo
0x6F09C1: push    edi
0x6F09C2: push    esi
0x6F09C3: push    ebx
0x6F09C4: push    esi
0x6F09C5: lea     edx, [esp+38h+var_14]
0x6F09C9: push    edx
0x6F09CA: mov     ecx, esi
0x6F09CC: call    sub_559240
0x6F09D1: mov     eax, [esp+28h+arg_C]
0x6F09D5: test    eax, eax
0x6F09D7: jz      short loc_6F09E2
0x6F09D9: push    eax
0x6F09DA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F09DF: add     esp, 4
0x6F09E2: mov     ecx, [esp+28h+var_C]
0x6F09E6: mov     large fs:0, ecx
0x6F09ED: pop     ecx
0x6F09EE: pop     edi
0x6F09EF: pop     esi
0x6F09F0: pop     ebp
0x6F09F1: pop     ebx
0x6F09F2: add     esp, 14h
0x6F09F5: retn    18h
0x788FA0: push    esi
0x788FA1: mov     esi, ecx
0x788FA3: mov     eax, [esi+8]
0x788FA6: test    eax, eax
0x788FA8: jz      short loc_788FB3
0x788FAA: push    eax
0x788FAB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x788FB0: add     esp, 4
0x788FB3: mov     dword ptr [esi+8], 0
0x788FBA: mov     dword ptr [esi+0Ch], 0
0x788FC1: mov     dword ptr [esi+10h], 0
0x788FC8: pop     esi
0x788FC9: retn
0x9C86F0: lea     ecx, [ebp+8]
0x9C86F3: jmp     loc_788FA0
0x9C86F8: mov     edx, [esp+arg_4]
0x9C86FC: lea     eax, [edx-18h]
0x9C86FF: mov     ecx, [edx-1Ch]
0x9C8702: xor     ecx, eax
0x9C8704: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8709: mov     eax, offset stru_AF0BD4
0x9C870E: jmp     ___CxxFrameHandler3
