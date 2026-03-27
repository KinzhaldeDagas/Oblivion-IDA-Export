0x72D090: sub     esp, 14h
0x72D093: mov     eax, ds:0B30AACh
0x72D098: xor     eax, esp
0x72D09A: mov     [esp+14h+var_4], eax
0x72D09E: mov     eax, [esp+14h+arg_0]
0x72D0A2: push    ebp
0x72D0A3: push    esi
0x72D0A4: mov     esi, ecx
0x72D0A6: mov     [esp+1Ch+var_10], eax
0x72D0AA: movzx   eax, word ptr [esi+1Eh]
0x72D0AE: mov     ebp, [esp+1Ch+arg_4]
0x72D0B2: xor     ecx, ecx
0x72D0B4: lea     eax, [eax+eax*2]
0x72D0B7: mov     edx, 2
0x72D0BC: mul     edx
0x72D0BE: seto    cl
0x72D0C1: push    edi
0x72D0C2: neg     ecx
0x72D0C4: or      ecx, eax
0x72D0C6: push    ecx; Size
0x72D0C7: call    FormHeapAlloc
0x72D0CC: xor     edi, edi
0x72D0CE: add     esp, 4
0x72D0D1: cmp     [esi+1Eh], di
0x72D0D5: mov     [esi+14h], eax
0x72D0D8: jbe     short loc_72D149
0x72D0DA: push    ebx
0x72D0DB: mov     ebx, [esp+24h+arg_8]
0x72D0DF: mov     [esp+24h+var_14], edi
0x72D0E3: mov     eax, [ebp+0]
0x72D0E6: mov     eax, [eax+60h]
0x72D0E9: lea     ecx, [esp+24h+var_8]
0x72D0ED: push    ecx
0x72D0EE: lea     edx, [esp+28h+var_A]
0x72D0F2: push    edx
0x72D0F3: mov     edx, [esp+2Ch+var_10]
0x72D0F7: lea     ecx, [esp+2Ch+var_C]
0x72D0FB: push    ecx
0x72D0FC: mov     ecx, [edx]
0x72D0FE: movzx   edx, word ptr [ecx+edi*2]
0x72D102: push    edx
0x72D103: mov     ecx, ebp
0x72D105: call    eax
0x72D107: movzx   edx, [esp+24h+var_C]
0x72D10C: movzx   edx, word ptr [ebx+edx*2]
0x72D110: mov     eax, [esi+14h]
0x72D113: mov     ecx, [esp+24h+var_14]
0x72D117: add     eax, ecx
0x72D119: mov     [eax], dx
0x72D11C: movzx   edx, [esp+24h+var_A]
0x72D121: movzx   edx, word ptr [ebx+edx*2]
0x72D125: mov     [eax+2], dx
0x72D129: movzx   edx, [esp+24h+var_8]
0x72D12E: movzx   edx, word ptr [ebx+edx*2]
0x72D132: mov     [eax+4], dx
0x72D136: movzx   eax, word ptr [esi+1Eh]
0x72D13A: add     edi, 1
0x72D13D: add     ecx, 6
0x72D140: cmp     edi, eax
0x72D142: mov     [esp+24h+var_14], ecx
0x72D146: jb      short loc_72D0E3
0x72D148: pop     ebx
0x72D149: mov     ecx, [esp+20h+var_4]
0x72D14D: pop     edi
0x72D14E: pop     esi
0x72D14F: pop     ebp
0x72D150: xor     ecx, esp
0x72D152: call    @__security_check_cookie@4; __security_check_cookie(x)
0x72D157: add     esp, 14h
0x72D15A: retn    0Ch
