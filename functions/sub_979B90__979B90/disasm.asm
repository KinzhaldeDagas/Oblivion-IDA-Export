0x979B90: push    esi
0x979B91: mov     esi, [esp+4+arg_0]
0x979B95: test    esi, esi
0x979B97: push    edi
0x979B98: mov     edi, ecx
0x979B9A: jnz     short loc_979BA3
0x979B9C: pop     edi
0x979B9D: xor     al, al
0x979B9F: pop     esi
0x979BA0: retn    1Ch
0x979BA3: push    ebx
0x979BA4: mov     ebx, [esp+0Ch+arg_14]
0x979BA8: cmp     ebx, [edi+88h]
0x979BAE: jz      short loc_979BC6
0x979BB0: mov     eax, [esp+0Ch+arg_4]
0x979BB4: add     eax, 64h ; 'd'
0x979BB7: push    eax
0x979BB8: lea     ecx, [edi+4]
0x979BBB: call    sub_97AEC0
0x979BC0: mov     [edi+88h], ebx
0x979BC6: mov     ebx, [esp+0Ch+arg_18]
0x979BCA: cmp     ebx, [esi+88h]
0x979BD0: push    ebp
0x979BD1: mov     ebp, [esp+10h+arg_8]
0x979BD5: jz      short loc_979BE9
0x979BD7: lea     ecx, [ebp+64h]
0x979BDA: push    ecx
0x979BDB: lea     ecx, [esi+4]
0x979BDE: call    sub_97AEC0
0x979BE3: mov     [esi+88h], ebx
0x979BE9: lea     edx, [esi+4]
0x979BEC: push    edx
0x979BED: lea     ecx, [edi+4]
0x979BF0: call    sub_97AFC0
0x979BF5: test    eax, eax
0x979BF7: jnz     short loc_979C02
0x979BF9: pop     ebp
0x979BFA: pop     ebx
0x979BFB: pop     edi
0x979BFC: xor     al, al
0x979BFE: pop     esi
0x979BFF: retn    1Ch
0x979C02: cmp     [esp+10h+arg_C], 0
0x979C07: jz      loc_979E32
0x979C0D: cmp     [esp+10h+arg_10], 0
0x979C12: jz      loc_979E32
0x979C18: mov     eax, [edi]
0x979C1A: mov     edx, [eax+4]
0x979C1D: mov     ecx, edi
0x979C1F: call    edx
0x979C21: test    al, al
0x979C23: mov     eax, [esi]
0x979C25: mov     edx, [eax+4]
0x979C28: mov     ecx, esi
0x979C2A: jz      loc_979CB5
0x979C30: call    edx
0x979C32: test    al, al
0x979C34: jnz     loc_979E32
0x979C3A: mov     ecx, esi
0x979C3C: call    sub_977510
0x979C41: test    al, al
0x979C43: jz      loc_979E32
0x979C49: mov     eax, [esp+10h+arg_10]
0x979C4D: mov     ecx, [esp+10h+arg_14]
0x979C51: mov     edx, [edi]
0x979C53: mov     edx, [edx+8]
0x979C56: push    ebx
0x979C57: push    ecx
0x979C58: mov     ecx, [esp+18h+arg_4]
0x979C5C: add     eax, 0FFFFFFFFh
0x979C5F: push    eax
0x979C60: mov     [esp+1Ch+arg_10], eax
0x979C64: mov     eax, [esp+1Ch+arg_C]
0x979C68: push    eax
0x979C69: mov     eax, [esi+80h]
0x979C6F: push    ebp
0x979C70: push    ecx
0x979C71: push    eax
0x979C72: mov     ecx, edi
0x979C74: call    edx
0x979C76: test    al, al
0x979C78: jnz     loc_979E26
0x979C7E: mov     ecx, [esp+10h+arg_14]
0x979C82: mov     edx, [esp+10h+arg_10]
0x979C86: mov     eax, [edi]
0x979C88: push    ebx
0x979C89: push    ecx
0x979C8A: mov     ecx, [esp+18h+arg_C]
0x979C8E: push    edx
0x979C8F: mov     edx, [esp+1Ch+arg_4]
0x979C93: push    ecx
0x979C94: mov     ecx, [esi+84h]
0x979C9A: push    ebp
0x979C9B: push    edx
0x979C9C: mov     edx, [eax+8]
0x979C9F: push    ecx
0x979CA0: mov     ecx, edi
0x979CA2: call    edx
0x979CA4: test    al, al
0x979CA6: jnz     loc_979E26
0x979CAC: pop     ebp
0x979CAD: pop     ebx
0x979CAE: pop     edi
0x979CAF: xor     eax, eax
0x979CB1: pop     esi
0x979CB2: retn    1Ch
0x979CB5: call    edx
0x979CB7: test    al, al
0x979CB9: mov     ecx, [edi+80h]
0x979CBF: jz      short loc_979D3C
0x979CC1: test    ecx, ecx
0x979CC3: jz      loc_979E32
0x979CC9: cmp     dword ptr [edi+84h], 0
0x979CD0: jz      loc_979E32
0x979CD6: mov     eax, [esp+10h+arg_C]
0x979CDA: mov     edx, [ecx]
0x979CDC: mov     edx, [edx+8]
0x979CDF: add     eax, 0FFFFFFFFh
0x979CE2: push    ebx
0x979CE3: mov     [esp+14h+arg_C], eax
0x979CE7: mov     eax, [esp+14h+arg_14]
0x979CEB: push    eax
0x979CEC: mov     eax, [esp+18h+arg_10]
0x979CF0: push    eax
0x979CF1: mov     eax, [esp+1Ch+arg_C]
0x979CF5: push    eax
0x979CF6: mov     eax, [esp+20h+arg_4]
0x979CFA: push    ebp
0x979CFB: push    eax
0x979CFC: push    esi
0x979CFD: call    edx
0x979CFF: test    al, al
0x979D01: jnz     loc_979E26
0x979D07: mov     edx, [esp+10h+arg_14]
0x979D0B: mov     ecx, [edi+84h]
0x979D11: mov     eax, [ecx]
0x979D13: mov     eax, [eax+8]
0x979D16: push    ebx
0x979D17: push    edx
0x979D18: mov     edx, [esp+18h+arg_10]
0x979D1C: push    edx
0x979D1D: mov     edx, [esp+1Ch+arg_C]
0x979D21: push    edx
0x979D22: mov     edx, [esp+20h+arg_4]
0x979D26: push    ebp
0x979D27: push    edx
0x979D28: push    esi
0x979D29: call    eax
0x979D2B: test    al, al
0x979D2D: jnz     loc_979E26
0x979D33: pop     ebp
0x979D34: pop     ebx
0x979D35: pop     edi
0x979D36: xor     eax, eax
0x979D38: pop     esi
0x979D39: retn    1Ch
0x979D3C: test    ecx, ecx
0x979D3E: jz      loc_979E32
0x979D44: cmp     dword ptr [edi+84h], 0
0x979D4B: jz      loc_979E32
0x979D51: mov     eax, [esp+10h+arg_10]
0x979D55: mov     edx, [esp+10h+arg_C]
0x979D59: add     eax, 0FFFFFFFFh
0x979D5C: mov     [esp+10h+arg_C], eax
0x979D60: mov     eax, [esp+10h+arg_14]
0x979D64: push    ebx
0x979D65: push    eax
0x979D66: mov     eax, [esp+18h+arg_C]
0x979D6A: push    eax
0x979D6B: add     edx, 0FFFFFFFFh
0x979D6E: mov     [esp+1Ch+arg_0], edx
0x979D72: mov     eax, [esp+1Ch+arg_0]
0x979D76: mov     edx, [ecx]
0x979D78: mov     edx, [edx+8]
0x979D7B: push    eax
0x979D7C: mov     eax, [esp+20h+arg_4]
0x979D80: push    ebp
0x979D81: push    eax
0x979D82: mov     eax, [esi+80h]
0x979D88: push    eax
0x979D89: call    edx
0x979D8B: test    al, al
0x979D8D: jnz     loc_979E26
0x979D93: mov     edx, [esp+10h+arg_14]
0x979D97: mov     ecx, [edi+80h]
0x979D9D: mov     eax, [ecx]
0x979D9F: mov     eax, [eax+8]
0x979DA2: push    ebx
0x979DA3: push    edx
0x979DA4: mov     edx, [esp+18h+arg_C]
0x979DA8: push    edx
0x979DA9: mov     edx, [esp+1Ch+arg_0]
0x979DAD: push    edx
0x979DAE: mov     edx, [esp+20h+arg_4]
0x979DB2: push    ebp
0x979DB3: push    edx
0x979DB4: mov     edx, [esi+84h]
0x979DBA: push    edx
0x979DBB: call    eax
0x979DBD: test    al, al
0x979DBF: jnz     short loc_979E26
0x979DC1: mov     eax, [esp+10h+arg_14]
0x979DC5: mov     ecx, [edi+84h]
0x979DCB: mov     edx, [ecx]
0x979DCD: mov     edx, [edx+8]
0x979DD0: push    ebx
0x979DD1: push    eax
0x979DD2: mov     eax, [esp+18h+arg_C]
0x979DD6: push    eax
0x979DD7: mov     eax, [esp+1Ch+arg_0]
0x979DDB: push    eax
0x979DDC: mov     eax, [esp+20h+arg_4]
0x979DE0: push    ebp
0x979DE1: push    eax
0x979DE2: mov     eax, [esi+80h]
0x979DE8: push    eax
0x979DE9: call    edx
0x979DEB: test    al, al
0x979DED: jnz     short loc_979E26
0x979DEF: mov     edx, [esp+10h+arg_14]
0x979DF3: mov     ecx, [edi+84h]
0x979DF9: mov     eax, [ecx]
0x979DFB: mov     eax, [eax+8]
0x979DFE: push    ebx
0x979DFF: push    edx
0x979E00: mov     edx, [esp+18h+arg_C]
0x979E04: push    edx
0x979E05: mov     edx, [esp+1Ch+arg_0]
0x979E09: push    edx
0x979E0A: mov     edx, [esp+20h+arg_4]
0x979E0E: push    ebp
0x979E0F: push    edx
0x979E10: mov     edx, [esi+84h]
0x979E16: push    edx
0x979E17: call    eax
0x979E19: test    al, al
0x979E1B: jnz     short loc_979E26
0x979E1D: pop     ebp
0x979E1E: pop     ebx
0x979E1F: pop     edi
0x979E20: xor     eax, eax
0x979E22: pop     esi
0x979E23: retn    1Ch
0x979E26: pop     ebp
0x979E27: pop     ebx
0x979E28: pop     edi
0x979E29: mov     eax, 1
0x979E2E: pop     esi
0x979E2F: retn    1Ch
0x979E32: pop     ebp
0x979E33: pop     ebx
0x979E34: pop     edi
0x979E35: mov     al, 1
0x979E37: pop     esi
0x979E38: retn    1Ch
