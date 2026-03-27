0x58CA50: push    0FFFFFFFFh
0x58CA52: push    offset SEH_5ACE20
0x58CA57: mov     eax, large fs:0
0x58CA5D: push    eax
0x58CA5E: sub     esp, 8
0x58CA61: push    ebx
0x58CA62: push    ebp
0x58CA63: push    esi
0x58CA64: push    edi
0x58CA65: mov     eax, ds:0B30AACh
0x58CA6A: xor     eax, esp
0x58CA6C: push    eax
0x58CA6D: lea     eax, [esp+28h+var_C]
0x58CA71: mov     large fs:0, eax
0x58CA77: mov     esi, ecx
0x58CA79: mov     eax, [esp+28h+a2]
0x58CA7D: mov     bl, [esi+1Ah]
0x58CA80: xor     ebp, ebp
0x58CA82: push    ebp; a3
0x58CA83: push    eax; a2
0x58CA84: lea     ecx, [esp+30h+var_14]; this
0x58CA88: mov     byte ptr [esi+1Ah], 0
0x58CA8C: mov     [esp+30h+var_14.m_data], ebp
0x58CA90: mov     [esp+30h+var_14.m_dataLen], bp
0x58CA95: mov     [esp+30h+var_14.m_bufLen], bp
0x58CA9A: call    BSStringT_Set
0x58CA9F: mov     edi, [esp+28h+var_14.m_data]
0x58CAA3: cmp     edi, ebp
0x58CAA5: mov     [esp+28h+var_4], ebp
0x58CAA9: jz      short loc_58CAD4
0x58CAAB: mov     ax, [esp+28h+var_14.m_dataLen]
0x58CAB0: cmp     ax, 0FFFFh
0x58CAB4: jnz     short loc_58CACD
0x58CAB6: mov     eax, edi
0x58CAB8: lea     edx, [eax+1]
0x58CABB: jmp     short loc_58CAC0
0x58CABD: align 10h
0x58CAC0: mov     cl, [eax]
0x58CAC2: add     eax, 1
0x58CAC5: test    cl, cl
0x58CAC7: jnz     short loc_58CAC0
0x58CAC9: sub     eax, edx
0x58CACB: jmp     short loc_58CAD0
0x58CACD: movzx   eax, ax
0x58CAD0: cmp     eax, ebp
0x58CAD2: jnz     short loc_58CAE7
0x58CAD4: push    ebp; a3
0x58CAD5: push    offset word_A36430; a2
0x58CADA: lea     ecx, [esp+30h+var_14]; this
0x58CADE: call    BSStringT_Set
0x58CAE3: mov     edi, [esp+28h+var_14.m_data]
0x58CAE7: test    bl, bl
0x58CAE9: jnz     short loc_58CB2E
0x58CAEB: cmp     edi, ebp
0x58CAED: jz      short loc_58CB1F
0x58CAEF: mov     eax, [esi+8]
0x58CAF2: cmp     eax, ebp
0x58CAF4: jz      short loc_58CB1F
0x58CAF6: mov     ecx, edi
0x58CAF8: mov     dl, [eax]
0x58CAFA: cmp     dl, [ecx]
0x58CAFC: jnz     short loc_58CB18
0x58CAFE: test    dl, dl
0x58CB00: jz      short loc_58CB14
0x58CB02: mov     dl, [eax+1]
0x58CB05: cmp     dl, [ecx+1]
0x58CB08: jnz     short loc_58CB18
0x58CB0A: add     eax, 2
0x58CB0D: add     ecx, 2
0x58CB10: test    dl, dl
0x58CB12: jnz     short loc_58CAF8
0x58CB14: xor     eax, eax
0x58CB16: jmp     short loc_58CB2A
0x58CB18: sbb     eax, eax
0x58CB1A: sbb     eax, 0FFFFFFFFh
0x58CB1D: jmp     short loc_58CB2A
0x58CB1F: xor     eax, eax
0x58CB21: cmp     edi, ebp
0x58CB23: setz    al
0x58CB26: lea     eax, [eax+eax-1]
0x58CB2A: cmp     eax, ebp
0x58CB2C: jz      short loc_58CB4D
0x58CB2E: push    ebp; a3
0x58CB2F: lea     ecx, [esi+8]; this
0x58CB32: push    edi; a2
0x58CB33: call    BSStringT_Set
0x58CB38: fldz
0x58CB3A: mov     ecx, esi
0x58CB3C: fstp    dword ptr [esi+4]
0x58CB3F: call    sub_588930
0x58CB44: push    1
0x58CB46: mov     ecx, esi
0x58CB48: call    DoActionEnumeration
0x58CB4D: push    edi
0x58CB4E: call    FormHeapFree
0x58CB53: add     esp, 4
0x58CB56: mov     ecx, [esp+28h+var_C]
0x58CB5A: mov     large fs:0, ecx
0x58CB61: pop     ecx
0x58CB62: pop     edi
0x58CB63: pop     esi
0x58CB64: pop     ebp
0x58CB65: pop     ebx
0x58CB66: add     esp, 14h
0x58CB69: retn    4
