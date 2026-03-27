0x447580: sub     esp, 18h
0x447583: push    ebx
0x447584: mov     ebx, ecx
0x447586: push    ebp
0x447587: lea     ebp, [ebx+0C0h]
0x44758D: mov     ecx, ebp
0x44758F: mov     [esp+20h+var_8], ebx
0x447593: call    sub_5A56F0
0x447598: mov     ecx, [ebx+0D0h]
0x44759E: mov     [esp+20h+var_10], ecx
0x4475A2: xor     eax, eax
0x4475A4: add     ecx, 0FFFFFFFFh
0x4475A7: test    ecx, ecx
0x4475A9: mov     [esp+20h+var_18], eax
0x4475AD: jle     loc_4476A2
0x4475B3: push    esi
0x4475B4: push    edi
0x4475B5: jmp     short loc_4475C4
0x4475B7: jmp     short loc_4475C0
0x4475B9: align 10h
0x4475C0: mov     eax, [esp+28h+var_18]
0x4475C4: mov     ecx, [ebx+0C4h]
0x4475CA: mov     ecx, [ecx+eax*4]
0x4475CD: lea     esi, [eax+1]
0x4475D0: cmp     esi, [esp+28h+var_10]
0x4475D4: mov     [esp+28h+var_C], ecx
0x4475D8: mov     edi, ecx
0x4475DA: mov     [esp+28h+var_14], eax
0x4475DE: mov     [esp+28h+var_4], esi
0x4475E2: jge     short loc_44762A
0x4475E4: test    edi, edi
0x4475E6: mov     edx, [ebx+0C4h]
0x4475EC: mov     ebx, [edx+esi*4]
0x4475EF: jz      short loc_447613
0x4475F1: test    ebx, ebx
0x4475F3: jz      short loc_447619
0x4475F5: push    offset EmptyString; Str2
0x4475FA: push    offset EmptyString; Str1
0x4475FF: call    __strcmp
0x447604: mov     ecx, [esp+30h+var_C]
0x447608: add     esp, 8
0x44760B: test    eax, eax
0x44760D: mov     eax, [esp+28h+var_18]
0x447611: jge     short loc_447619
0x447613: mov     [esp+28h+var_14], esi
0x447617: mov     edi, ebx
0x447619: mov     ebx, [esp+28h+var_8]
0x44761D: add     esi, 1
0x447620: cmp     esi, [esp+28h+var_10]
0x447624: jl      short loc_4475E4
0x447626: mov     esi, [esp+28h+var_4]
0x44762A: test    edi, edi
0x44762C: jz      short loc_44768B
0x44762E: cmp     edi, ecx
0x447630: jz      short loc_44768B
0x447632: cmp     eax, [ebp+0Ch]
0x447635: jb      short loc_44763C
0x447637: mov     [ebp+0Ch], esi
0x44763A: jmp     short loc_447645
0x44763C: mov     edx, [ebp+4]
0x44763F: cmp     dword ptr [edx+eax*4], 0
0x447643: jnz     short loc_447649
0x447645: add     dword ptr [ebp+10h], 1
0x447649: mov     edx, [ebp+4]
0x44764C: mov     [edx+eax*4], edi
0x44764F: mov     eax, [esp+28h+var_14]
0x447653: cmp     eax, [ebp+0Ch]
0x447656: jb      short loc_447668
0x447658: test    ecx, ecx
0x44765A: lea     edx, [eax+1]
0x44765D: mov     [ebp+0Ch], edx
0x447660: jz      short loc_447685
0x447662: add     dword ptr [ebp+10h], 1
0x447666: jmp     short loc_447685
0x447668: test    ecx, ecx
0x44766A: mov     edx, [ebp+4]
0x44766D: jz      short loc_44767B
0x44766F: cmp     dword ptr [edx+eax*4], 0
0x447673: jnz     short loc_447685
0x447675: add     dword ptr [ebp+10h], 1
0x447679: jmp     short loc_447685
0x44767B: cmp     dword ptr [edx+eax*4], 0
0x44767F: jz      short loc_447685
0x447681: add     dword ptr [ebp+10h], 0FFFFFFFFh
0x447685: mov     edx, [ebp+4]
0x447688: mov     [edx+eax*4], ecx
0x44768B: mov     ecx, [esp+28h+var_10]
0x44768F: mov     eax, esi
0x447691: add     ecx, 0FFFFFFFFh
0x447694: cmp     eax, ecx
0x447696: mov     [esp+28h+var_18], eax
0x44769A: jl      loc_4475C0
0x4476A0: pop     edi
0x4476A1: pop     esi
0x4476A2: pop     ebp
0x4476A3: pop     ebx
0x4476A4: add     esp, 18h
0x4476A7: retn
