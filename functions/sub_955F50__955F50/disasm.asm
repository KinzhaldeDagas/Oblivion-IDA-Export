0x955F50: push    ebp
0x955F51: mov     ebp, esp
0x955F53: and     esp, 0FFFFFFF8h
0x955F56: sub     esp, 84h
0x955F5C: push    ebx
0x955F5D: push    esi
0x955F5E: push    edi
0x955F5F: mov     edi, [ebp+arg_0]
0x955F62: mov     al, [edi+38h]
0x955F65: test    al, al
0x955F67: mov     ebx, ecx
0x955F69: jz      short loc_955F79
0x955F6B: mov     eax, 3
0x955F70: pop     edi
0x955F71: pop     esi
0x955F72: pop     ebx
0x955F73: mov     esp, ebp
0x955F75: pop     ebp
0x955F76: retn    0Ch
0x955F79: mov     esi, [ebp+arg_8]
0x955F7C: mov     eax, [esi]
0x955F7E: cmp     eax, [ebx+14h]
0x955F81: jg      loc_956028
0x955F87: mov     cl, [esi+4]
0x955F8A: test    cl, cl
0x955F8C: jnz     loc_956028
0x955F92: cdq
0x955F93: idiv    dword ptr [ebx+60h]
0x955F96: test    edx, edx
0x955F98: jnz     loc_956028
0x955F9E: mov     byte ptr [esi+4], 1
0x955FA2: mov     ecx, [ebx+14h]
0x955FA5: mov     [esp+90h+var_78], ecx
0x955FA9: mov     cl, [edi+38h]
0x955FAC: or      eax, 0FFFFFFFFh
0x955FAF: test    cl, cl
0x955FB1: jnz     short loc_956014
0x955FB3: jmp     short loc_955FC0
0x955FB5: mov     esi, [ebp+arg_8]
0x955FB8: jmp     short loc_955FC0
0x955FBA: align 10h
0x955FC0: mov     edx, [ebx+10h]
0x955FC3: mov     eax, [edx+0Ch]
0x955FC6: mov     edx, [ebp+arg_4]
0x955FC9: mov     ecx, 12h
0x955FCE: lea     edi, [esp+90h+var_48]
0x955FD2: rep movsd
0x955FD4: mov     esi, [ebp+arg_0]
0x955FD7: lea     ecx, [esp+90h+var_48]
0x955FDB: push    ecx
0x955FDC: push    edx
0x955FDD: push    esi
0x955FDE: mov     ecx, ebx
0x955FE0: mov     [esp+9Ch+var_74], eax
0x955FE4: call    sub_955F50
0x955FE9: mov     ecx, [ebx+24h]
0x955FEC: cmp     ecx, [ebx+20h]
0x955FEF: jg      short loc_956011
0x955FF1: mov     edx, [ebx+10h]
0x955FF4: mov     ecx, [esp+90h+var_74]
0x955FF8: cmp     ecx, [edx+0Ch]
0x955FFB: jnz     short loc_95600A
0x955FFD: mov     ecx, [ebx+14h]
0x956000: test    ecx, ecx
0x956002: jl      short loc_956011
0x956004: sub     ecx, [ebx+60h]
0x956007: mov     [ebx+14h], ecx
0x95600A: mov     cl, [esi+38h]
0x95600D: test    cl, cl
0x95600F: jz      short loc_955FB5
0x956011: mov     esi, [ebp+arg_8]
0x956014: mov     edx, [esp+90h+var_78]
0x956018: mov     [ebx+14h], edx
0x95601B: mov     byte ptr [esi+4], 0
0x95601F: pop     edi
0x956020: pop     esi
0x956021: pop     ebx
0x956022: mov     esp, ebp
0x956024: pop     ebp
0x956025: retn    0Ch
0x956028: mov     al, [edi+4]
0x95602B: test    al, al
0x95602D: jz      short loc_956091
0x95602F: push    edi
0x956030: mov     ecx, ebx
0x956032: call    sub_954800
0x956037: cmp     dword ptr [edi+8], 16h
0x95603B: jl      short loc_956048
0x95603D: mov     eax, [esi]
0x95603F: cmp     eax, [ebx+14h]
0x956042: jle     loc_95624D
0x956048: mov     ecx, [ebx+24h]
0x95604B: mov     eax, [ebp+arg_4]
0x95604E: inc     ecx
0x95604F: mov     [ebx+24h], ecx
0x956052: mov     ecx, [ebx+10h]
0x956055: mov     edx, [ecx+0Ch]
0x956058: push    esi
0x956059: push    eax
0x95605A: push    edi
0x95605B: mov     ecx, ebx
0x95605D: mov     [esp+9Ch+var_74], edx
0x956061: call    sub_954AF0
0x956066: push    esi
0x956067: push    edi
0x956068: mov     ecx, ebx
0x95606A: call    sub_9549C0
0x95606F: mov     ecx, [ebx+10h]
0x956072: mov     edx, [ecx+0Ch]
0x956075: mov     ecx, [esp+90h+var_74]
0x956079: mov     [edi+5Ch], edx
0x95607C: mov     eax, [ebx+10h]
0x95607F: mov     eax, [eax+0Ch]
0x956082: mov     byte ptr [edi+38h], 1
0x956086: sub     eax, ecx
0x956088: pop     edi
0x956089: pop     esi
0x95608A: pop     ebx
0x95608B: mov     esp, ebp
0x95608D: pop     ebp
0x95608E: retn    0Ch
0x956091: cmp     byte ptr [edi+3Ch], 1
0x956095: mov     [esp+90h+var_5C], 0
0x95609A: jnz     short loc_9560AD
0x95609C: mov     edx, [ebp+arg_4]
0x95609F: lea     ecx, [esp+90h+var_5C]
0x9560A3: push    ecx
0x9560A4: push    esi
0x9560A5: push    edx
0x9560A6: mov     ecx, ebx
0x9560A8: call    sub_954DB0
0x9560AD: mov     eax, [ebp+arg_4]
0x9560B0: push    esi
0x9560B1: push    eax
0x9560B2: push    edi
0x9560B3: mov     ecx, ebx
0x9560B5: call    sub_954860
0x9560BA: mov     ecx, [edi+0B8h]
0x9560C0: push    ecx
0x9560C1: mov     ecx, ebx
0x9560C3: call    sub_9553B0
0x9560C8: lea     edx, [esp+90h+var_68]
0x9560CC: push    edx
0x9560CD: mov     [esp+94h+var_70], eax
0x9560D1: lea     eax, [esp+94h+var_6C]
0x9560D5: push    eax
0x9560D6: push    esi
0x9560D7: push    edi
0x9560D8: mov     ecx, ebx
0x9560DA: call    sub_9558D0
0x9560DF: or      eax, 0FFFFFFFFh
0x9560E2: mov     [esp+90h+var_74], eax
0x9560E6: mov     [esp+90h+var_7C], eax
0x9560EA: mov     eax, [edi+0F0h]
0x9560F0: test    eax, eax
0x9560F2: mov     [esp+90h+var_78], eax
0x9560F6: jz      short loc_956134
0x9560F8: lea     ecx, [ebx+30h]
0x9560FB: push    ecx
0x9560FC: push    eax
0x9560FD: push    esi
0x9560FE: lea     ecx, [esp+9Ch+var_48]
0x956102: call    sub_954D20
0x956107: mov     eax, [esp+90h+var_78]
0x95610B: lea     edx, [esp+90h+var_48]
0x95610F: push    edx
0x956110: push    esi
0x956111: push    eax
0x956112: mov     ecx, ebx
0x956114: call    sub_955F50
0x956119: test    eax, eax
0x95611B: mov     [esp+90h+var_7C], eax
0x95611F: jl      short loc_956134
0x956121: mov     eax, [esp+90h+var_78]
0x956125: mov     ecx, [eax+5Ch]
0x956128: mov     [esp+90h+var_74], ecx
0x95612C: push    eax
0x95612D: mov     ecx, ebx
0x95612F: call    sub_9547B0
0x956134: mov     eax, [edi+0ECh]
0x95613A: test    eax, eax
0x95613C: mov     [esp+90h+var_78], eax
0x956140: jz      loc_95624D
0x956146: lea     edx, [ebx+30h]
0x956149: push    edx
0x95614A: push    eax
0x95614B: push    esi
0x95614C: lea     ecx, [esp+9Ch+var_48]
0x956150: call    sub_954D20
0x956155: mov     ecx, [esp+90h+var_78]
0x956159: lea     eax, [esp+90h+var_48]
0x95615D: push    eax
0x95615E: push    esi
0x95615F: push    ecx
0x956160: mov     ecx, ebx
0x956162: call    sub_955F50
0x956167: test    eax, eax
0x956169: mov     [esp+90h+var_60], eax
0x95616D: jl      loc_95624D
0x956173: mov     eax, [esp+90h+var_78]
0x956177: mov     edx, [eax+5Ch]
0x95617A: push    eax
0x95617B: mov     ecx, ebx
0x95617D: mov     [esp+94h+var_78], edx
0x956181: call    sub_9547B0
0x956186: mov     eax, [esp+90h+var_7C]
0x95618A: test    eax, eax
0x95618C: jl      loc_95624D
0x956192: push    esi
0x956193: push    edi
0x956194: lea     eax, [esp+98h+var_7D]
0x956198: push    eax
0x956199: mov     ecx, ebx
0x95619B: call    sub_954830
0x9561A0: cmp     byte ptr [eax], 0
0x9561A3: jz      loc_95624D
0x9561A9: push    edi
0x9561AA: mov     ecx, ebx
0x9561AC: call    sub_954800
0x9561B1: mov     edx, [ebx+24h]
0x9561B4: mov     ecx, [ebx+10h]
0x9561B7: mov     eax, [esp+90h+var_74]
0x9561BB: inc     edx
0x9561BC: push    eax
0x9561BD: mov     eax, [esp+94h+var_6C]
0x9561C1: mov     [ebx+24h], edx
0x9561C4: mov     edx, [ecx+0Ch]
0x9561C7: mov     ecx, [esp+94h+var_78]
0x9561CB: push    ecx
0x9561CC: mov     ecx, [esp+98h+var_68]
0x9561D0: mov     [esp+98h+var_64], edx
0x9561D4: mov     edx, [esp+98h+var_70]
0x9561D8: push    edx
0x9561D9: push    eax
0x9561DA: push    ecx
0x9561DB: mov     ecx, ebx
0x9561DD: call    sub_955240
0x9561E2: mov     edx, [ebp+arg_4]
0x9561E5: mov     eax, [esi+34h]
0x9561E8: sub     eax, [edx+34h]
0x9561EB: jz      short loc_9561F5
0x9561ED: push    eax
0x9561EE: mov     ecx, ebx
0x9561F0: call    sub_954980
0x9561F5: mov     eax, [ebp+arg_4]
0x9561F8: push    esi
0x9561F9: push    eax
0x9561FA: push    edi
0x9561FB: mov     ecx, ebx
0x9561FD: call    sub_954AA0
0x956202: push    esi
0x956203: push    edi
0x956204: mov     ecx, ebx
0x956206: call    sub_9549C0
0x95620B: mov     al, [esp+90h+var_5C]
0x95620F: test    al, al
0x956211: jz      short loc_95621F
0x956213: lea     ecx, [esp+90h+var_5C]
0x956217: push    ecx
0x956218: mov     ecx, ebx
0x95621A: call    sub_954940
0x95621F: mov     edx, [ebx+10h]
0x956222: mov     eax, [edx+0Ch]
0x956225: mov     esi, [esp+90h+var_64]
0x956229: mov     edx, [esp+90h+var_60]
0x95622D: mov     [edi+5Ch], eax
0x956230: mov     byte ptr [edi+38h], 1
0x956234: mov     ecx, [ebx+10h]
0x956237: mov     eax, [ecx+0Ch]
0x95623A: mov     ecx, [esp+90h+var_7C]
0x95623E: sub     eax, esi
0x956240: add     eax, edx
0x956242: add     eax, ecx
0x956244: pop     edi
0x956245: pop     esi
0x956246: pop     ebx
0x956247: mov     esp, ebp
0x956249: pop     ebp
0x95624A: retn    0Ch
0x95624D: pop     edi
0x95624E: pop     esi
0x95624F: or      eax, 0FFFFFFFFh
0x956252: pop     ebx
0x956253: mov     esp, ebp
0x956255: pop     ebp
0x956256: retn    0Ch
