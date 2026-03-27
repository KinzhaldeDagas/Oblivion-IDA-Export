0x434D40: mov     eax, 32D0h
0x434D45: call    __alloca_probe
0x434D4A: mov     eax, ___security_cookie
0x434D4F: xor     eax, esp
0x434D51: mov     [esp+32D0h+var_4], eax
0x434D58: mov     eax, [esp+32D0h+arg_4]
0x434D5F: push    ebx
0x434D60: mov     ebx, [esp+32D4h+arg_0]
0x434D67: push    ebp
0x434D68: mov     ebp, ecx
0x434D6A: mov     ecx, [ebp+24h]
0x434D6D: test    ecx, ecx
0x434D6F: push    esi
0x434D70: jz      short loc_434DC8
0x434D72: mov     edx, [ebp+20h]
0x434D75: test    edx, edx
0x434D77: jz      short loc_434D9F
0x434D79: mov     esi, [ecx+8]
0x434D7C: mov     ecx, [ecx+0Ch]
0x434D7F: and     esi, 3FFFFFFFh
0x434D85: push    esi
0x434D86: and     ecx, 7FFFFFFFh
0x434D8C: push    ecx
0x434D8D: push    edx
0x434D8E: push    eax
0x434D8F: push    offset aQueuedSSWithFi; "Queued %s %s with file entry offset %i "...
0x434D94: push    ebx
0x434D95: call    __sprintf
0x434D9A: add     esp, 18h
0x434D9D: jmp     short loc_434DDB
0x434D9F: test    ecx, ecx
0x434DA1: jz      short loc_434DC8
0x434DA3: mov     edx, [ecx+8]
0x434DA6: mov     ecx, [ecx+0Ch]
0x434DA9: and     edx, 3FFFFFFFh
0x434DAF: push    edx
0x434DB0: and     ecx, 7FFFFFFFh
0x434DB6: push    ecx
0x434DB7: push    eax
0x434DB8: push    offset aQueuedSWithFil; "Queued %s with file entry offset %i and"...
0x434DBD: push    ebx
0x434DBE: call    __sprintf
0x434DC3: add     esp, 14h
0x434DC6: jmp     short loc_434DDB
0x434DC8: mov     edx, [ebp+20h]
0x434DCB: push    edx
0x434DCC: push    eax
0x434DCD: push    offset aQueuedSS; "Queued %s %s"
0x434DD2: push    ebx
0x434DD3: call    __sprintf
0x434DD8: add     esp, 10h
0x434DDB: mov     eax, [ebp+1Ch]
0x434DDE: test    eax, eax
0x434DE0: jz      loc_434E83
0x434DE6: xor     esi, esi
0x434DE8: cmp     [eax+0Ah], si
0x434DEC: mov     [esp+32DCh+var_32D0], esi
0x434DF0: jbe     loc_434E83
0x434DF6: push    edi
0x434DF7: mov     eax, [eax+4]
0x434DFA: mov     ecx, [eax+esi*4]
0x434DFD: test    ecx, ecx
0x434DFF: jz      short loc_434E6C
0x434E01: mov     edx, [ecx]
0x434E03: mov     edx, [edx+10h]
0x434E06: lea     eax, [esp+32E0h+var_32CC]
0x434E0A: push    eax
0x434E0B: call    edx
0x434E0D: test    al, al
0x434E0F: jz      short loc_434E6C
0x434E11: mov     eax, ebx
0x434E13: add     eax, 0FFFFFFFFh
0x434E16: mov     cl, [eax+1]
0x434E19: add     eax, 1
0x434E1C: test    cl, cl
0x434E1E: jnz     short loc_434E16
0x434E20: mov     ecx, ds:dword_A36724
0x434E26: mov     [eax], ecx
0x434E28: mov     dl, ds:byte_A36728
0x434E2E: mov     [eax+4], dl
0x434E31: lea     eax, [esp+32E0h+var_32CC]
0x434E35: mov     ecx, eax
0x434E37: mov     dl, [eax]
0x434E39: add     eax, 1
0x434E3C: test    dl, dl
0x434E3E: jnz     short loc_434E37
0x434E40: mov     edi, ebx
0x434E42: sub     eax, ecx
0x434E44: mov     esi, ecx
0x434E46: add     edi, 0FFFFFFFFh
0x434E49: lea     esp, [esp+0]
0x434E50: mov     cl, [edi+1]
0x434E53: add     edi, 1
0x434E56: test    cl, cl
0x434E58: jnz     short loc_434E50
0x434E5A: mov     ecx, eax
0x434E5C: shr     ecx, 2
0x434E5F: rep movsd
0x434E61: mov     ecx, eax
0x434E63: and     ecx, 3
0x434E66: rep movsb
0x434E68: mov     esi, [esp+32E0h+var_32D0]
0x434E6C: mov     eax, [ebp+1Ch]
0x434E6F: movzx   ecx, word ptr [eax+0Ah]
0x434E73: add     esi, 1
0x434E76: cmp     esi, ecx
0x434E78: mov     [esp+32E0h+var_32D0], esi
0x434E7C: jb      loc_434DF7
0x434E82: pop     edi
0x434E83: mov     ecx, [esp+32DCh+var_4]
0x434E8A: pop     esi
0x434E8B: pop     ebp
0x434E8C: pop     ebx
0x434E8D: xor     ecx, esp
0x434E8F: mov     al, 1
0x434E91: call    @__security_check_cookie@4; __security_check_cookie(x)
0x434E96: add     esp, 32D0h
0x434E9C: retn    8
