0x981AAC: push    10h
0x981AAE: push    offset stru_AFF8E0
0x981AB3: call    __SEH_prolog4
0x981AB8: xor     eax, eax
0x981ABA: mov     ebx, [ebp+Memory]
0x981ABD: xor     edi, edi
0x981ABF: cmp     ebx, edi
0x981AC1: setnz   al
0x981AC4: cmp     eax, edi
0x981AC6: jnz     short loc_981AE5
0x981AC8: call    __errno
0x981ACD: mov     dword ptr [eax], 16h
0x981AD3: push    edi
0x981AD4: push    edi
0x981AD5: push    edi
0x981AD6: push    edi
0x981AD7: push    edi
0x981AD8: call    __invalid_parameter
0x981ADD: add     esp, 14h
0x981AE0: or      eax, 0FFFFFFFFh
0x981AE3: jmp     short loc_981B38
0x981AE5: cmp     dword ptr ds:0BAABC0h, 3
0x981AEC: jnz     short loc_981B26
0x981AEE: push    4
0x981AF0: call    __lock
0x981AF5: pop     ecx
0x981AF6: mov     [ebp+ms_exc.registration.TryLevel], edi
0x981AF9: push    ebx
0x981AFA: call    ___sbh_find_block
0x981AFF: pop     ecx
0x981B00: mov     [ebp+var_20], eax
0x981B03: cmp     eax, edi
0x981B05: jz      short loc_981B12
0x981B07: mov     esi, [ebx-4]
0x981B0A: sub     esi, 9
0x981B0D: mov     [ebp+var_1C], esi
0x981B10: jmp     short loc_981B15
0x981B12: mov     esi, [ebp+var_1C]
0x981B15: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x981B1C: call    __msize___$LN12
