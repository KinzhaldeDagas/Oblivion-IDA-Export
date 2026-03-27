0x851CA0: push    0FFFFFFFFh
0x851CA2: push    offset SEH_851CA0
0x851CA7: mov     eax, large fs:0
0x851CAD: push    eax
0x851CAE: push    ecx
0x851CAF: push    ebx
0x851CB0: push    ebp
0x851CB1: push    esi
0x851CB2: push    edi
0x851CB3: mov     eax, ds:0B30AACh
0x851CB8: xor     eax, esp
0x851CBA: push    eax
0x851CBB: lea     eax, [esp+24h+var_C]
0x851CBF: mov     large fs:0, eax
0x851CC5: mov     [esp+24h+var_10], ecx
0x851CC9: mov     ebx, [esp+24h+arg_C]
0x851CCD: mov     edi, [ebx+0E0h]
0x851CD3: test    edi, edi
0x851CD5: mov     esi, ds:0B45BD0h
0x851CDB: jz      loc_851E4D
0x851CE1: mov     eax, [esi+24h]
0x851CE4: mov     edx, [ebx]
0x851CE6: mov     ebp, [eax]
0x851CE8: mov     eax, [edx+8Ch]
0x851CEE: push    0
0x851CF0: mov     ecx, ebx
0x851CF2: call    eax
0x851CF4: test    eax, eax
0x851CF6: jz      short loc_851D08
0x851CF8: mov     edx, [ebx]
0x851CFA: mov     eax, [edx+8Ch]
0x851D00: push    0
0x851D02: mov     ecx, ebx
0x851D04: call    eax
0x851D06: jmp     short loc_851D1B
0x851D08: test    dword ptr [ebx+1Ch], 80h
0x851D0F: mov     eax, ds:0B430F0h
0x851D14: ja      short loc_851D1B
0x851D16: mov     eax, ds:0B430DCh
0x851D1B: push    eax; a2
0x851D1C: mov     ecx, ebp; this
0x851D1E: call    sub_76C910
0x851D23: test    ebp, ebp
0x851D25: jz      short loc_851D41
0x851D27: cmp     byte ptr ds:0B42CDDh, 0
0x851D2E: jz      short loc_851D41
0x851D30: mov     edx, [ebx]
0x851D32: mov     eax, [edx+78h]
0x851D35: mov     ecx, ebx
0x851D37: call    eax
0x851D39: push    eax
0x851D3A: mov     ecx, ebp
0x851D3C: call    sub_7715E0
0x851D41: mov     ecx, [esi+24h]
0x851D44: mov     eax, [edi+8]
0x851D47: test    eax, eax
0x851D49: mov     ebp, [ecx+4]
0x851D4C: mov     ecx, ebp; this
0x851D4E: jz      short loc_851D53
0x851D50: push    eax
0x851D51: jmp     short loc_851D5A
0x851D53: mov     edx, ds:0B43120h
0x851D59: push    edx; a2
0x851D5A: call    sub_76C910
0x851D5F: push    3
0x851D61: mov     ecx, ebp
0x851D63: call    sub_7715E0
0x851D68: test    ebp, ebp
0x851D6A: jz      short loc_851D86
0x851D6C: cmp     byte ptr ds:0B42CDDh, 0
0x851D73: jz      short loc_851D86
0x851D75: mov     eax, [ebx]
0x851D77: mov     edx, [eax+78h]
0x851D7A: mov     ecx, ebx
0x851D7C: call    edx
0x851D7E: push    eax
0x851D7F: mov     ecx, ebp
0x851D81: call    sub_7715E0
0x851D86: cmp     dword ptr [esi+30h], 0
0x851D8A: mov     ebp, [edi+5Ch]
0x851D8D: jnz     short loc_851D97
0x851D8F: call    sub_772DF0
0x851D94: mov     [esi+30h], eax
0x851D97: mov     ecx, [esi+30h]
0x851D9A: push    0
0x851D9C: push    ebp
0x851D9D: push    13h
0x851D9F: call    sub_772CD0
0x851DA4: cmp     dword ptr [esi+30h], 0
0x851DA8: mov     ebp, [edi+60h]
0x851DAB: jnz     short loc_851DB5
0x851DAD: call    sub_772DF0
0x851DB2: mov     [esi+30h], eax
0x851DB5: mov     ecx, [esi+30h]
0x851DB8: push    0
0x851DBA: push    ebp
0x851DBB: push    14h
0x851DBD: call    sub_772CD0
0x851DC2: cmp     dword ptr [esi+30h], 0
0x851DC6: mov     ebp, [edi+64h]
0x851DC9: jnz     short loc_851DD3
0x851DCB: call    sub_772DF0
0x851DD0: mov     [esi+30h], eax
0x851DD3: mov     ecx, [esi+30h]
0x851DD6: push    1
0x851DD8: push    ebp
0x851DD9: push    0ABh ; '«'
0x851DDE: call    sub_772CD0
0x851DE3: cmp     dword ptr [esi+30h], 0
0x851DE7: mov     edi, [edi+68h]
0x851DEA: jnz     short loc_851DF4
0x851DEC: call    sub_772DF0
0x851DF1: mov     [esi+30h], eax
0x851DF4: mov     ecx, [esi+30h]
0x851DF7: push    0
0x851DF9: push    edi
0x851DFA: push    17h
0x851DFC: call    sub_772CD0
0x851E01: mov     eax, [esp+24h+arg_0]
0x851E05: mov     edi, [esp+24h+var_10]
0x851E09: push    ebx
0x851E0A: push    eax
0x851E0B: mov     ecx, edi
0x851E0D: call    sub_7D1C90
0x851E12: mov     ebx, 1
0x851E17: add     [esi+60h], ebx
0x851E1A: mov     [esp+24h+arg_C], esi
0x851E1E: mov     edx, [edi+38h]
0x851E21: lea     ecx, [esp+24h+arg_C]
0x851E25: push    ecx
0x851E26: push    edx
0x851E27: lea     ecx, [edi+40h]
0x851E2A: mov     [esp+2Ch+var_4], 0
0x851E32: call    sub_76CE40
0x851E37: or      eax, 0FFFFFFFFh
0x851E3A: add     [esi+60h], eax
0x851E3D: mov     [esp+24h+var_4], eax
0x851E41: jnz     short loc_851E4A
0x851E43: mov     ecx, esi
0x851E45: call    sub_7604D0
0x851E4A: add     [edi+38h], ebx
0x851E4D: mov     ecx, dword ptr [esp+24h+var_C]
0x851E51: mov     large fs:0, ecx
0x851E58: pop     ecx
0x851E59: pop     edi
0x851E5A: pop     esi
0x851E5B: pop     ebp
0x851E5C: pop     ebx
0x851E5D: add     esp, 10h
0x851E60: retn    10h
