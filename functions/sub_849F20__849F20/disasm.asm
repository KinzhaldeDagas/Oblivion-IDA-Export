0x849F20: push    0FFFFFFFFh
0x849F22: push    offset SEH_882120
0x849F27: mov     eax, large fs:0
0x849F2D: push    eax
0x849F2E: push    ebx
0x849F2F: push    ebp
0x849F30: push    esi
0x849F31: push    edi
0x849F32: mov     eax, ds:0B30AACh
0x849F37: xor     eax, esp
0x849F39: push    eax
0x849F3A: lea     eax, [esp+20h+var_C]
0x849F3E: mov     large fs:0, eax
0x849F44: mov     ebx, ecx
0x849F46: mov     esi, [esp+20h+arg_8]
0x849F4A: mov     eax, [esi+10h]
0x849F4D: mov     edi, ds:0B45670h
0x849F53: push    eax
0x849F54: call    sub_848C40
0x849F59: mov     esi, [esi+0Ch]
0x849F5C: push    esi
0x849F5D: mov     ecx, ebx
0x849F5F: call    sub_848E50
0x849F64: mov     eax, [edi+24h]
0x849F67: mov     ebp, [esp+20h+arg_C]
0x849F6B: mov     esi, [eax]
0x849F6D: mov     edx, [ebp+0]
0x849F70: mov     eax, [edx+88h]
0x849F76: push    0
0x849F78: mov     ecx, ebp
0x849F7A: mov     [esp+24h+arg_8], esi
0x849F7E: call    eax
0x849F80: mov     esi, [esi+4]
0x849F83: cmp     esi, eax
0x849F85: mov     [esp+20h+arg_C], eax
0x849F89: jz      short loc_849FC6
0x849F8B: test    esi, esi
0x849F8D: jz      short loc_849FAF
0x849F8F: lea     ecx, [esi+4]
0x849F92: push    ecx; lpAddend
0x849F93: call    dword ptr ds:0A2807Ch
0x849F99: test    eax, eax
0x849F9B: jnz     short loc_849FAB
0x849F9D: test    esi, esi
0x849F9F: jz      short loc_849FAB
0x849FA1: mov     edx, [esi]
0x849FA3: mov     eax, [edx]
0x849FA5: push    1
0x849FA7: mov     ecx, esi
0x849FA9: call    eax
0x849FAB: mov     eax, [esp+20h+arg_C]
0x849FAF: test    eax, eax
0x849FB1: mov     esi, [esp+20h+arg_8]
0x849FB5: mov     [esi+4], eax
0x849FB8: jz      short loc_849FCA
0x849FBA: add     eax, 4
0x849FBD: push    eax; lpAddend
0x849FBE: call    dword ptr ds:0A28078h
0x849FC4: jmp     short loc_849FCA
0x849FC6: mov     esi, [esp+20h+arg_8]
0x849FCA: test    esi, esi
0x849FCC: jz      short loc_849FE9
0x849FCE: cmp     byte ptr ds:0B42CDDh, 0
0x849FD5: jz      short loc_849FE9
0x849FD7: mov     edx, [ebp+0]
0x849FDA: mov     eax, [edx+78h]
0x849FDD: mov     ecx, ebp
0x849FDF: call    eax
0x849FE1: push    eax
0x849FE2: mov     ecx, esi
0x849FE4: call    sub_7715E0
0x849FE9: mov     ecx, [edi+24h]
0x849FEC: mov     esi, [ecx+4]
0x849FEF: mov     edx, [ebp+0]
0x849FF2: mov     eax, [edx+8Ch]
0x849FF8: push    0
0x849FFA: mov     ecx, ebp
0x849FFC: mov     [esp+24h+arg_8], esi
0x84A000: call    eax
0x84A002: test    eax, eax
0x84A004: jz      short loc_84A01B
0x84A006: mov     edx, [ebp+0]
0x84A009: mov     eax, [edx+8Ch]
0x84A00F: push    0
0x84A011: mov     ecx, ebp
0x84A013: call    eax
0x84A015: mov     [esp+20h+arg_C], eax
0x84A019: jmp     short loc_84A03A
0x84A01B: test    dword ptr [ebp+1Ch], 80h
0x84A022: jbe     short loc_84A030
0x84A024: mov     ecx, ds:0B430F0h
0x84A02A: mov     [esp+20h+arg_C], ecx
0x84A02E: jmp     short loc_84A03A
0x84A030: mov     edx, ds:0B430DCh
0x84A036: mov     [esp+20h+arg_C], edx
0x84A03A: mov     esi, [esi+4]
0x84A03D: cmp     esi, [esp+20h+arg_C]
0x84A041: jz      short loc_84A07E
0x84A043: test    esi, esi
0x84A045: jz      short loc_84A063
0x84A047: lea     eax, [esi+4]
0x84A04A: push    eax; lpAddend
0x84A04B: call    dword ptr ds:0A2807Ch
0x84A051: test    eax, eax
0x84A053: jnz     short loc_84A063
0x84A055: test    esi, esi
0x84A057: jz      short loc_84A063
0x84A059: mov     edx, [esi]
0x84A05B: mov     eax, [edx]
0x84A05D: push    1
0x84A05F: mov     ecx, esi
0x84A061: call    eax
0x84A063: mov     eax, [esp+20h+arg_C]
0x84A067: test    eax, eax
0x84A069: mov     esi, [esp+20h+arg_8]
0x84A06D: mov     [esi+4], eax
0x84A070: jz      short loc_84A082
0x84A072: add     eax, 4
0x84A075: push    eax; lpAddend
0x84A076: call    dword ptr ds:0A28078h
0x84A07C: jmp     short loc_84A082
0x84A07E: mov     esi, [esp+20h+arg_8]
0x84A082: test    esi, esi
0x84A084: jz      short loc_84A0A1
0x84A086: cmp     byte ptr ds:0B42CDDh, 0
0x84A08D: jz      short loc_84A0A1
0x84A08F: mov     edx, [ebp+0]
0x84A092: mov     eax, [edx+78h]
0x84A095: mov     ecx, ebp
0x84A097: call    eax
0x84A099: push    eax
0x84A09A: mov     ecx, esi
0x84A09C: call    sub_7715E0
0x84A0A1: mov     esi, 1
0x84A0A6: add     [edi+60h], esi
0x84A0A9: mov     [esp+20h+arg_8], edi
0x84A0AD: mov     edx, [ebx+38h]
0x84A0B0: lea     ecx, [esp+20h+arg_8]
0x84A0B4: push    ecx
0x84A0B5: push    edx
0x84A0B6: lea     ecx, [ebx+40h]
0x84A0B9: mov     [esp+28h+var_4], 0
0x84A0C1: call    sub_76CE40
0x84A0C6: or      eax, 0FFFFFFFFh
0x84A0C9: add     [edi+60h], eax
0x84A0CC: mov     [esp+20h+var_4], eax
0x84A0D0: jnz     short loc_84A0D9
0x84A0D2: mov     ecx, edi
0x84A0D4: call    sub_7604D0
0x84A0D9: add     [ebx+38h], esi
0x84A0DC: mov     ecx, [esp+20h+var_C]
0x84A0E0: mov     large fs:0, ecx
0x84A0E7: pop     ecx
0x84A0E8: pop     edi
0x84A0E9: pop     esi
0x84A0EA: pop     ebp
0x84A0EB: pop     ebx
0x84A0EC: add     esp, 0Ch
0x84A0EF: retn    10h
