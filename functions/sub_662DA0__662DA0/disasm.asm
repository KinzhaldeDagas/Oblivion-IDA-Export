0x662DA0: push    ecx
0x662DA1: push    ebx
0x662DA2: push    ebp
0x662DA3: push    esi
0x662DA4: push    edi
0x662DA5: mov     edi, ecx
0x662DA7: mov     eax, [edi+624h]
0x662DAD: xor     ebp, ebp
0x662DAF: xor     ebx, ebx
0x662DB1: test    eax, eax
0x662DB3: jnz     short loc_662DC5
0x662DB5: call    Magic_GetDefaultPlayerSpell
0x662DBA: test    eax, eax
0x662DBC: jz      short loc_662DFF
0x662DBE: add     eax, 18h
0x662DC1: test    eax, eax
0x662DC3: jz      short loc_662DFF
0x662DC5: lea     esi, [eax+0Ch]
0x662DC8: test    esi, esi
0x662DCA: jz      short loc_662DFF
0x662DCC: lea     esp, [esp+0]
0x662DD0: cmp     [esi+8], ebx
0x662DD3: jnz     short loc_662DDA
0x662DD5: cmp     [esi+4], ebx
0x662DD8: jz      short loc_662DFF
0x662DDA: mov     ecx, [esi+4]
0x662DDD: mov     eax, [ecx+1Ch]
0x662DE0: cmp     dword ptr [eax+98h], 454C4554h
0x662DEA: jnz     short loc_662DF3
0x662DEC: call    EffectItem_GetMagnitude
0x662DF1: add     ebp, eax
0x662DF3: mov     esi, [esi+8]
0x662DF6: test    esi, esi
0x662DF8: jz      short loc_662DFF
0x662DFA: add     esi, 0FFFFFFFCh
0x662DFD: jnz     short loc_662DD0
0x662DFF: mov     ecx, [edi+58h]
0x662E02: mov     edx, [ecx]
0x662E04: mov     eax, [edx+13Ch]
0x662E0A: call    eax
0x662E0C: test    al, al
0x662E0E: jz      short loc_662E89
0x662E10: mov     ecx, [edi+58h]
0x662E13: mov     edx, [ecx]
0x662E15: mov     eax, [edx+0ECh]
0x662E1B: push    1
0x662E1D: call    eax
0x662E1F: test    eax, eax
0x662E21: jz      short loc_662E4B
0x662E23: mov     eax, [eax+8]
0x662E26: push    0; int
0x662E28: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x662E2D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x662E32: push    0; int
0x662E34: push    eax; void *
0x662E35: call    OblivionDynamicCast
0x662E3A: add     esp, 14h
0x662E3D: test    eax, eax
0x662E3F: jz      short loc_662E4B
0x662E41: add     eax, 60h ; '`'
0x662E44: jz      short loc_662E4B
0x662E46: mov     eax, [eax+4]
0x662E49: jmp     short loc_662E4D
0x662E4B: xor     eax, eax
0x662E4D: test    eax, eax
0x662E4F: jz      short loc_662E89
0x662E51: lea     esi, [eax+24h]
0x662E54: test    esi, esi
0x662E56: jz      short loc_662E89
0x662E58: cmp     dword ptr [esi+8], 0
0x662E5C: jnz     short loc_662E64
0x662E5E: cmp     dword ptr [esi+4], 0
0x662E62: jz      short loc_662E89
0x662E64: mov     ecx, [esi+4]
0x662E67: mov     edx, [ecx+1Ch]
0x662E6A: cmp     dword ptr [edx+98h], 454C4554h
0x662E74: jnz     short loc_662E7D
0x662E76: call    EffectItem_GetMagnitude
0x662E7B: add     ebx, eax
0x662E7D: mov     esi, [esi+8]
0x662E80: test    esi, esi
0x662E82: jz      short loc_662E89
0x662E84: add     esi, 0FFFFFFFCh
0x662E87: jnz     short loc_662E58
0x662E89: cmp     ebp, ebx
0x662E8B: jle     short loc_662E95
0x662E8D: mov     eax, ebp
0x662E8F: mov     [esp+14h+var_4], eax
0x662E93: jmp     short loc_662E9B
0x662E95: mov     eax, ebx
0x662E97: mov     [esp+14h+var_4], ebx
0x662E9B: fild    [esp+14h+var_4]
0x662E9F: mov     esi, [edi]
0x662EA1: test    eax, eax
0x662EA3: setnle  al
0x662EA6: mov     [edi+6E6h], al
0x662EAC: fmul    dword ptr ds:0B37DB8h
0x662EB2: call    Double_To_SInt32
0x662EB7: mov     edx, [esi+290h]
0x662EBD: push    eax
0x662EBE: push    3Ch ; '<'
0x662EC0: mov     ecx, edi
0x662EC2: call    edx
0x662EC4: pop     edi
0x662EC5: pop     esi
0x662EC6: pop     ebp
0x662EC7: pop     ebx
0x662EC8: pop     ecx
0x662EC9: retn
