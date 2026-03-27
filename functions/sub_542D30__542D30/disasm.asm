0x542D30: push    0FFFFFFFFh
0x542D32: push    offset SEH_5DC520
0x542D37: mov     eax, large fs:0
0x542D3D: push    eax
0x542D3E: sub     esp, 8
0x542D41: push    esi
0x542D42: push    edi
0x542D43: mov     eax, ds:0B30AACh
0x542D48: xor     eax, esp
0x542D4A: push    eax
0x542D4B: lea     eax, [esp+20h+var_C]
0x542D4F: mov     large fs:0, eax
0x542D55: xor     edi, edi
0x542D57: mov     [esp+20h+var_14.m_data], edi
0x542D5B: mov     [esp+20h+var_14.m_dataLen], di
0x542D60: mov     [esp+20h+var_14.m_bufLen], di
0x542D65: mov     esi, [esp+20h+arg_4]
0x542D69: test    esi, esi
0x542D6B: mov     [esp+20h+var_4], edi
0x542D6F: jz      short loc_542DC4
0x542D71: movzx   eax, word ptr [esi+8]
0x542D75: cmp     ax, 0FFFFh
0x542D79: jnz     short loc_542D8E
0x542D7B: mov     eax, [esi+4]
0x542D7E: lea     edx, [eax+1]
0x542D81: mov     cl, [eax]
0x542D83: add     eax, 1
0x542D86: test    cl, cl
0x542D88: jnz     short loc_542D81
0x542D8A: sub     eax, edx
0x542D8C: jmp     short loc_542D91
0x542D8E: movzx   eax, ax
0x542D91: test    eax, eax
0x542D93: jz      short loc_542DC4
0x542D95: mov     eax, [esi]
0x542D97: mov     edx, [eax+14h]
0x542D9A: mov     ecx, esi
0x542D9C: call    edx
0x542D9E: push    0; a3
0x542DA0: push    eax; a2
0x542DA1: lea     ecx, [esp+28h+var_14]; this
0x542DA5: call    BSStringT_Set
0x542DAA: mov     esi, [esi+4]
0x542DAD: test    esi, esi
0x542DAF: jnz     short loc_542DB6
0x542DB1: mov     esi, offset EmptyString
0x542DB6: push    esi
0x542DB7: lea     ecx, [esp+24h+var_14]
0x542DBB: call    BSStringT_Append
0x542DC0: mov     edi, [esp+20h+var_14.m_data]
0x542DC4: mov     eax, [esp+20h+arg_C]
0x542DC8: mov     ecx, [esp+20h+arg_8]
0x542DCC: mov     edx, [esp+20h+arg_0]
0x542DD0: push    eax; int
0x542DD1: push    ecx; int
0x542DD2: mov     ecx, ds:0B365C4h
0x542DD8: push    edi; Str1
0x542DD9: push    edx; int
0x542DDA: add     ecx, 0F8h ; 'ø'
0x542DE0: call    sub_544160
0x542DE5: push    edi
0x542DE6: call    FormHeapFree
0x542DEB: add     esp, 4
0x542DEE: mov     ecx, [esp+20h+var_C]
0x542DF2: mov     large fs:0, ecx
0x542DF9: pop     ecx
0x542DFA: pop     edi
0x542DFB: pop     esi
0x542DFC: add     esp, 14h
0x542DFF: retn
