0x6FFE90: push    0FFFFFFFFh
0x6FFE92: push    offset SEH_6FFE90
0x6FFE97: mov     eax, large fs:0
0x6FFE9D: push    eax
0x6FFE9E: push    ebx
0x6FFE9F: push    ebp
0x6FFEA0: push    esi
0x6FFEA1: push    edi
0x6FFEA2: mov     eax, ds:0B30AACh
0x6FFEA7: xor     eax, esp
0x6FFEA9: push    eax
0x6FFEAA: lea     eax, [esp+20h+var_C]
0x6FFEAE: mov     large fs:0, eax
0x6FFEB4: mov     esi, [esp+20h+arg_0]
0x6FFEB8: test    esi, esi
0x6FFEBA: jz      loc_6FFFB4
0x6FFEC0: mov     edi, [ecx+0Ch]
0x6FFEC3: test    edi, edi
0x6FFEC5: lea     ebx, [ecx+0Ch]
0x6FFEC8: jz      loc_6FFFB4
0x6FFECE: cmp     edi, esi
0x6FFED0: jnz     short loc_6FFF3E
0x6FFED2: lea     ebp, [esi+4]
0x6FFED5: push    ebp; lpAddend
0x6FFED6: mov     [esp+24h+arg_0], esi
0x6FFEDA: call    dword ptr ds:0A28078h
0x6FFEE0: mov     eax, [esi+34h]
0x6FFEE3: push    eax; a2
0x6FFEE4: mov     ecx, ebx; this
0x6FFEE6: mov     [esp+24h+var_4], 0
0x6FFEEE: call    NiSmartPointer_Set??
0x6FFEF3: mov     edi, [esi+34h]
0x6FFEF6: test    edi, edi
0x6FFEF8: mov     ebx, ds:0A2807Ch
0x6FFEFE: jz      short loc_6FFF1F
0x6FFF00: lea     eax, [edi+4]
0x6FFF03: push    eax; lpAddend
0x6FFF04: call    ebx ; InterlockedDecrement
0x6FFF06: test    eax, eax
0x6FFF08: jnz     short loc_6FFF18
0x6FFF0A: test    edi, edi
0x6FFF0C: jz      short loc_6FFF18
0x6FFF0E: mov     edx, [edi]
0x6FFF10: mov     eax, [edx]
0x6FFF12: push    1
0x6FFF14: mov     ecx, edi
0x6FFF16: call    eax
0x6FFF18: mov     dword ptr [esi+34h], 0
0x6FFF1F: push    ebp; lpAddend
0x6FFF20: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6FFF28: call    ebx ; InterlockedDecrement
0x6FFF2A: test    eax, eax
0x6FFF2C: jnz     loc_6FFFB4
0x6FFF32: mov     edx, [esi]
0x6FFF34: mov     eax, [edx]
0x6FFF36: push    1
0x6FFF38: mov     ecx, esi
0x6FFF3A: call    eax
0x6FFF3C: jmp     short loc_6FFFB4
0x6FFF3E: mov     eax, [edi+34h]
0x6FFF41: test    eax, eax
0x6FFF43: jz      short loc_6FFFB4
0x6FFF45: cmp     eax, esi
0x6FFF47: jz      short loc_6FFF54
0x6FFF49: mov     edi, eax
0x6FFF4B: mov     eax, [eax+34h]
0x6FFF4E: test    eax, eax
0x6FFF50: jnz     short loc_6FFF45
0x6FFF52: jmp     short loc_6FFFB4
0x6FFF54: test    eax, eax
0x6FFF56: jz      short loc_6FFFB4
0x6FFF58: lea     ecx, [esi+4]
0x6FFF5B: push    ecx; lpAddend
0x6FFF5C: mov     [esp+24h+arg_0], esi
0x6FFF60: call    dword ptr ds:0A28078h
0x6FFF66: mov     eax, [esi+34h]
0x6FFF69: push    eax
0x6FFF6A: mov     ecx, edi
0x6FFF6C: mov     [esp+24h+var_4], 1
0x6FFF74: call    sub_6C61E0
0x6FFF79: mov     edi, [esi+34h]
0x6FFF7C: test    edi, edi
0x6FFF7E: jz      short loc_6FFFA3
0x6FFF80: lea     edx, [edi+4]
0x6FFF83: push    edx; lpAddend
0x6FFF84: call    dword ptr ds:0A2807Ch
0x6FFF8A: test    eax, eax
0x6FFF8C: jnz     short loc_6FFF9C
0x6FFF8E: test    edi, edi
0x6FFF90: jz      short loc_6FFF9C
0x6FFF92: mov     eax, [edi]
0x6FFF94: mov     edx, [eax]
0x6FFF96: push    1
0x6FFF98: mov     ecx, edi
0x6FFF9A: call    edx
0x6FFF9C: mov     dword ptr [esi+34h], 0
0x6FFFA3: lea     ecx, [esp+20h+arg_0]; this
0x6FFFA7: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6FFFAF: call    sub_7016A0
0x6FFFB4: mov     ecx, dword ptr [esp+20h+var_C]
0x6FFFB8: mov     large fs:0, ecx
0x6FFFBF: pop     ecx
0x6FFFC0: pop     edi
0x6FFFC1: pop     esi
0x6FFFC2: pop     ebp
0x6FFFC3: pop     ebx
0x6FFFC4: add     esp, 0Ch
0x6FFFC7: retn    4
