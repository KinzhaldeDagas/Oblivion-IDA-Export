0x931FD0: mov     eax, [esp+arg_4]
0x931FD4: mov     ecx, [eax+8]
0x931FD7: sub     esp, 10h
0x931FDA: cmp     ecx, 1
0x931FDD: jz      loc_9320E9
0x931FE3: mov     ecx, [eax+4]
0x931FE6: mov     eax, [eax]
0x931FE8: mov     edx, [esp+10h+arg_10]
0x931FEC: push    esi
0x931FED: mov     esi, [esp+14h+arg_1C]
0x931FF1: mov     [esp+14h+var_C], eax
0x931FF5: movzx   eax, word ptr [edx+2]
0x931FF9: push    edi
0x931FFA: lea     edi, [ecx+eax*8]
0x931FFD: push    ebx
0x931FFE: mov     [esp+1Ch+var_8], ecx
0x932002: mov     [esp+1Ch+var_4], edi
0x932006: push    ebp
0x932007: jmp     short loc_932010
0x932009: align 10h
0x932010: mov     ax, [edi]
0x932013: cmp     ax, [esp+20h+arg_C]
0x932018: jnz     short loc_932024
0x93201A: mov     [esp+20h+var_10], 40800000h
0x932022: jmp     short loc_932051
0x932024: mov     ecx, [esp+20h+arg_18]
0x932028: mov     edx, [esp+20h+arg_14]
0x93202C: mov     ebp, [esp+20h+var_C]
0x932030: push    ecx
0x932031: mov     ecx, [esp+24h+arg_8]
0x932035: push    edx
0x932036: movzx   edx, ax
0x932039: mov     eax, [esp+28h+arg_0]
0x93203D: shl     edx, 4
0x932040: push    ecx
0x932041: add     edx, ebp
0x932043: push    edx
0x932044: push    eax
0x932045: call    sub_92D8F0
0x93204A: add     esp, 14h
0x93204D: fstp    [esp+20h+var_10]
0x932051: mov     ebp, [esi+4]
0x932054: mov     eax, [esi+8]
0x932057: lea     ebx, [ebp+1]
0x93205A: and     eax, 3FFFFFFFh
0x93205F: cmp     eax, ebx
0x932061: jge     short loc_932077
0x932063: add     eax, eax
0x932065: cmp     ebx, eax
0x932067: jl      short loc_93206B
0x932069: mov     eax, ebx
0x93206B: push    8
0x93206D: push    eax
0x93206E: push    esi
0x93206F: call    sub_8A6E40
0x932074: add     esp, 0Ch
0x932077: mov     ecx, [esi]
0x932079: mov     edx, [esp+20h+var_10]
0x93207D: lea     eax, [ecx+ebp*8]
0x932080: mov     [esi+4], ebx
0x932083: mov     [eax], edi
0x932085: mov     [eax+4], edx
0x932088: movzx   ecx, word ptr [edi+4]
0x93208C: mov     eax, [esp+20h+var_8]
0x932090: movzx   edx, word ptr [eax+ecx*8+2]
0x932095: lea     edi, [eax+edx*8]
0x932098: cmp     edi, [esp+20h+var_4]
0x93209C: jnz     loc_932010
0x9320A2: mov     eax, [esi+4]
0x9320A5: cmp     eax, 1
0x9320A8: pop     ebp
0x9320A9: pop     ebx
0x9320AA: jle     short loc_9320C0
0x9320AC: push    offset sub_92CA50
0x9320B1: dec     eax
0x9320B2: push    eax
0x9320B3: mov     eax, [esi]
0x9320B5: push    0
0x9320B7: push    eax
0x9320B8: call    sub_92CC50
0x9320BD: add     esp, 10h
0x9320C0: mov     ecx, [esp+18h+arg_18]
0x9320C4: mov     edx, [esp+18h+arg_14]
0x9320C8: mov     eax, [esp+18h+arg_10]
0x9320CC: push    esi
0x9320CD: push    ecx
0x9320CE: mov     ecx, [esp+20h+arg_8]
0x9320D2: push    edx
0x9320D3: mov     edx, [esp+24h+arg_4]
0x9320D7: push    eax
0x9320D8: mov     eax, [esp+28h+arg_0]
0x9320DC: push    ecx
0x9320DD: push    edx
0x9320DE: push    eax
0x9320DF: call    sub_931240
0x9320E4: add     esp, 1Ch
0x9320E7: pop     edi
0x9320E8: pop     esi
0x9320E9: add     esp, 10h
0x9320EC: retn
