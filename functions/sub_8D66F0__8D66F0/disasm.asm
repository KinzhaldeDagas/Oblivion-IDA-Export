0x8D66F0: sub     esp, 24h
0x8D66F3: push    ebx
0x8D66F4: mov     ebx, large fs:2Ch
0x8D66FB: push    ebp
0x8D66FC: mov     ebp, ds:0BA9DE4h
0x8D6702: mov     eax, [ebx+ebp*4]
0x8D6705: mov     edx, [eax+1A8h]
0x8D670B: push    esi
0x8D670C: push    edi
0x8D670D: mov     edi, ecx
0x8D670F: mov     ecx, [eax+1A4h]
0x8D6715: cmp     ecx, edx
0x8D6717: jnb     short loc_8D673D
0x8D6719: mov     esi, eax
0x8D671B: mov     ecx, [esi+1A4h]
0x8D6721: mov     dword ptr [ecx], offset aTtsimulate; "TtSimulate"
0x8D6727: rdtsc
0x8D6729: mov     [esp+34h+var_24], eax
0x8D672D: mov     edx, [esp+34h+var_24]
0x8D6731: mov     [ecx+4], edx
0x8D6734: add     ecx, 0Ch
0x8D6737: mov     [esi+1A4h], ecx
0x8D673D: mov     eax, [esp+34h+arg_8]
0x8D6741: fld     [esp+34h+arg_4]
0x8D6745: mov     esi, [esp+34h+arg_0]
0x8D6749: mov     [edi+8], eax
0x8D674C: fadd    dword ptr [esi+10h]
0x8D674F: fstp    dword ptr [esi+10h]
0x8D6752: mov     eax, [edi+10h]
0x8D6755: cmp     eax, 1
0x8D6758: jz      loc_8D68B2
0x8D675E: fld     dword ptr [esi+10h]
0x8D6761: fsub    dword ptr [esi+18h]
0x8D6764: fabs
0x8D6766: fld     [esp+34h+arg_8]
0x8D676A: fmul    dword ptr ds:0A34BA0h
0x8D6770: fcompp
0x8D6772: fnstsw  ax
0x8D6774: test    ah, 41h
0x8D6777: jnz     short loc_8D6794
0x8D6779: fld     [esp+34h+arg_4]
0x8D677D: fdiv    [esp+34h+arg_8]
0x8D6781: fcomp   dword ptr ds:0A2FAACh
0x8D6787: fnstsw  ax
0x8D6789: test    ah, 41h
0x8D678C: jnz     short loc_8D6794
0x8D678E: mov     ecx, [esi+18h]
0x8D6791: mov     [esi+10h], ecx
0x8D6794: mov     eax, [edi+18h]
0x8D6797: test    eax, eax
0x8D6799: jz      short loc_8D67D3
0x8D679B: fld     dword ptr [esi+10h]
0x8D679E: fld     dword ptr [esi+18h]
0x8D67A1: fst     [esp+34h+var_24]
0x8D67A5: fcomp   st(1)
0x8D67A7: fnstsw  ax
0x8D67A9: test    ah, 5
0x8D67AC: jp      short loc_8D67BA
0x8D67AE: mov     edx, [esp+34h+var_24]
0x8D67B2: fstp    st
0x8D67B4: mov     [esp+34h+arg_0], edx
0x8D67B8: jmp     short loc_8D67BE
0x8D67BA: fstp    [esp+34h+arg_0]
0x8D67BE: mov     eax, [esp+34h+arg_0]
0x8D67C2: push    eax; float
0x8D67C3: push    esi; int
0x8D67C4: mov     ecx, edi
0x8D67C6: call    sub_8D33E0
0x8D67CB: test    eax, eax
0x8D67CD: jnz     loc_8D69AA
0x8D67D3: fld     dword ptr [esi+18h]
0x8D67D6: fcomp   dword ptr [esi+10h]
0x8D67D9: fnstsw  ax
0x8D67DB: test    ah, 1
0x8D67DE: jz      loc_8D69EE
0x8D67E4: mov     ecx, [edi+20h]
0x8D67E7: mov     dword ptr [edi+24h], 0
0x8D67EE: mov     edx, [ecx]
0x8D67F0: call    dword ptr [edx+8]
0x8D67F3: mov     ecx, esi
0x8D67F5: call    sub_8992B0
0x8D67FA: mov     ecx, [ebx+ebp*4]
0x8D67FD: mov     ecx, [ecx+19Ch]
0x8D6803: mov     edx, [ecx+2Ch]
0x8D6806: sub     edx, [ecx+20h]
0x8D6809: add     ecx, 20h ; ' '
0x8D680C: sub     edx, 10h
0x8D680F: cmp     eax, edx
0x8D6811: jle     short loc_8D6834
0x8D6813: mov     edx, ds:0BA7D98h
0x8D6819: mov     ecx, [edx+28h]
0x8D681C: add     ecx, [edx+14h]
0x8D681F: mov     edx, [edx+8]
0x8D6822: cmp     edx, ecx
0x8D6824: jg      short loc_8D682A
0x8D6826: xor     edx, edx
0x8D6828: jmp     short loc_8D682C
0x8D682A: sub     edx, ecx
0x8D682C: cmp     eax, edx
0x8D682E: jg      loc_8D69F9
0x8D6834: fld     [esp+34h+arg_8]
0x8D6838: mov     eax, [esi+18h]
0x8D683B: fadd    dword ptr [esi+18h]
0x8D683E: mov     [esi+14h], eax
0x8D6841: fst     dword ptr [esi+18h]
0x8D6844: fld     dword ptr [esi+14h]
0x8D6847: fst     [esp+34h+var_10]
0x8D684B: fld     st(1)
0x8D684D: fstp    [esp+34h+var_C]
0x8D6851: fxch    st(1)
0x8D6853: fsub    st, st(1)
0x8D6855: fstp    [esp+34h+var_8]
0x8D6859: fstp    st
0x8D685B: fld     dword ptr ds:0A2FAA8h
0x8D6861: fld     [esp+34h+var_8]
0x8D6865: fucompp
0x8D6867: fnstsw  ax
0x8D6869: test    ah, 44h
0x8D686C: jp      short loc_8D6878
0x8D686E: mov     [esp+34h+var_4], 0
0x8D6876: jmp     short loc_8D6886
0x8D6878: fld     dword ptr ds:0A2F948h
0x8D687E: fdiv    [esp+34h+var_8]
0x8D6882: fstp    [esp+34h+var_4]
0x8D6886: mov     ecx, [esi+5Ch]
0x8D6889: mov     edx, [ecx]
0x8D688B: lea     eax, [esp+34h+var_10]
0x8D688F: push    eax
0x8D6890: push    esi
0x8D6891: call    dword ptr [edx+0Ch]
0x8D6894: mov     ecx, [esi+14h]
0x8D6897: lea     edx, [esp+34h+var_10]
0x8D689B: push    edx
0x8D689C: mov     [esi+0Ch], ecx
0x8D689F: push    esi
0x8D68A0: mov     ecx, edi
0x8D68A2: call    sub_8D6E40
0x8D68A7: mov     eax, [edi+0Ch]
0x8D68AA: test    eax, eax
0x8D68AC: jnz     loc_8D6A4A
0x8D68B2: fld     dword ptr [esi+18h]
0x8D68B5: fld     dword ptr [esi+14h]
0x8D68B8: fst     [esp+34h+var_20]
0x8D68BC: fld     st(1)
0x8D68BE: fstp    [esp+34h+var_1C]
0x8D68C2: fxch    st(1)
0x8D68C4: fsub    st, st(1)
0x8D68C6: fstp    [esp+34h+var_18]
0x8D68CA: fstp    st
0x8D68CC: fld     dword ptr ds:0A2FAA8h
0x8D68D2: fld     [esp+34h+var_18]
0x8D68D6: fucompp
0x8D68D8: fnstsw  ax
0x8D68DA: test    ah, 44h
0x8D68DD: jp      short loc_8D68E9
0x8D68DF: mov     [esp+34h+var_14], 0
0x8D68E7: jmp     short loc_8D68F7
0x8D68E9: fld     dword ptr ds:0A2F948h
0x8D68EF: fdiv    [esp+34h+var_18]
0x8D68F3: fstp    [esp+34h+var_14]
0x8D68F7: lea     eax, [esp+34h+var_20]
0x8D68FB: push    eax
0x8D68FC: push    esi
0x8D68FD: mov     ecx, edi
0x8D68FF: call    sub_8D5B20
0x8D6904: mov     ecx, ds:0BA7D98h
0x8D690A: cmp     dword ptr [ecx+4], 1
0x8D690E: jz      loc_8D6A56
0x8D6914: cmp     dword ptr [edi+0Ch], 2
0x8D6918: mov     dword ptr [edi+10h], 0
0x8D691F: jnz     loc_8D675E
0x8D6925: mov     eax, [esi+110h]
0x8D692B: test    eax, eax
0x8D692D: jz      loc_8D6AED
0x8D6933: mov     eax, [ebx+ebp*4]
0x8D6936: mov     ecx, [eax+1A4h]
0x8D693C: cmp     ecx, [eax+1A8h]
0x8D6942: jnb     short loc_8D6968
0x8D6944: mov     edi, eax
0x8D6946: mov     ecx, [edi+1A4h]
0x8D694C: mov     dword ptr [ecx], offset aTtpostsimulate; "TtPostSimulateCb"
0x8D6952: rdtsc
0x8D6954: mov     [esp+34h+arg_8], eax
0x8D6958: mov     edx, [esp+34h+arg_8]
0x8D695C: mov     [ecx+4], edx
0x8D695F: add     ecx, 0Ch
0x8D6962: mov     [edi+1A4h], ecx
0x8D6968: fld     dword ptr [esi+10h]
0x8D696B: fld     dword ptr [esi+10h]
0x8D696E: fsub    [esp+34h+arg_4]
0x8D6972: fst     [esp+34h+var_20]
0x8D6976: fld     st(1)
0x8D6978: fstp    [esp+34h+var_1C]
0x8D697C: fxch    st(1)
0x8D697E: fsub    st, st(1)
0x8D6980: fstp    [esp+34h+var_18]
0x8D6984: fstp    st
0x8D6986: fld     dword ptr ds:0A2FAA8h
0x8D698C: fld     [esp+34h+var_18]
0x8D6990: fucompp
0x8D6992: fnstsw  ax
0x8D6994: test    ah, 44h
0x8D6997: jp      loc_8D6A9A
0x8D699D: mov     [esp+34h+var_14], 0
0x8D69A5: jmp     loc_8D6AA8
0x8D69AA: mov     eax, [ebx+ebp*4]
0x8D69AD: mov     edx, [eax+1A4h]
0x8D69B3: cmp     edx, [eax+1A8h]
0x8D69B9: jnb     short loc_8D69DF
0x8D69BB: mov     ebx, eax
0x8D69BD: mov     ecx, [ebx+1A4h]
0x8D69C3: mov     dword ptr [ecx], offset aEt; "Et"
0x8D69C9: rdtsc
0x8D69CB: mov     [esp+34h+arg_8], eax
0x8D69CF: mov     eax, [esp+34h+arg_8]
0x8D69D3: mov     [ecx+4], eax
0x8D69D6: add     ecx, 0Ch
0x8D69D9: mov     [ebx+1A4h], ecx
0x8D69DF: pop     edi
0x8D69E0: pop     esi
0x8D69E1: pop     ebp
0x8D69E2: mov     eax, 2
0x8D69E7: pop     ebx
0x8D69E8: add     esp, 24h
0x8D69EB: retn    0Ch
0x8D69EE: mov     ecx, [esi+10h]
0x8D69F1: mov     [esi+0Ch], ecx
0x8D69F4: jmp     loc_8D6925
0x8D69F9: mov     edx, ds:0BA7D98h
0x8D69FF: mov     eax, [ebx+ebp*4]
0x8D6A02: mov     dword ptr [edx+4], 1
0x8D6A09: mov     ecx, [eax+1A4h]
0x8D6A0F: cmp     ecx, [eax+1A8h]
0x8D6A15: jnb     short loc_8D6A3B
0x8D6A17: mov     ebx, eax
0x8D6A19: mov     ecx, [ebx+1A4h]
0x8D6A1F: mov     dword ptr [ecx], offset aEt; "Et"
0x8D6A25: rdtsc
0x8D6A27: mov     [esp+34h+arg_8], eax
0x8D6A2B: mov     edx, [esp+34h+arg_8]
0x8D6A2F: mov     [ecx+4], edx
0x8D6A32: add     ecx, 0Ch
0x8D6A35: mov     [ebx+1A4h], ecx
0x8D6A3B: pop     edi
0x8D6A3C: pop     esi
0x8D6A3D: pop     ebp
0x8D6A3E: mov     eax, 1
0x8D6A43: pop     ebx
0x8D6A44: add     esp, 24h
0x8D6A47: retn    0Ch
0x8D6A4A: mov     dword ptr [edi+10h], 1
0x8D6A51: jmp     loc_8D6925
0x8D6A56: mov     eax, [ebx+ebp*4]
0x8D6A59: mov     ecx, [eax+1A4h]
0x8D6A5F: cmp     ecx, [eax+1A8h]
0x8D6A65: jnb     short loc_8D6A8B
0x8D6A67: mov     ebx, eax
0x8D6A69: mov     ecx, [ebx+1A4h]
0x8D6A6F: mov     dword ptr [ecx], offset aEt; "Et"
0x8D6A75: rdtsc
0x8D6A77: mov     [esp+34h+arg_8], eax
0x8D6A7B: mov     edx, [esp+34h+arg_8]
0x8D6A7F: mov     [ecx+4], edx
0x8D6A82: add     ecx, 0Ch
0x8D6A85: mov     [ebx+1A4h], ecx
0x8D6A8B: pop     edi
0x8D6A8C: pop     esi
0x8D6A8D: pop     ebp
0x8D6A8E: mov     eax, 2
0x8D6A93: pop     ebx
0x8D6A94: add     esp, 24h
0x8D6A97: retn    0Ch
0x8D6A9A: fld     dword ptr ds:0A2F948h
0x8D6AA0: fdiv    [esp+34h+var_18]
0x8D6AA4: fstp    [esp+34h+var_14]
0x8D6AA8: lea     eax, [esp+34h+var_20]
0x8D6AAC: push    eax
0x8D6AAD: push    esi
0x8D6AAE: call    sub_8DCD60
0x8D6AB3: mov     eax, [ebx+ebp*4]
0x8D6AB6: mov     ecx, [eax+1A4h]
0x8D6ABC: mov     edx, [eax+1A8h]
0x8D6AC2: add     esp, 8
0x8D6AC5: cmp     ecx, edx
0x8D6AC7: jnb     short loc_8D6AED
0x8D6AC9: mov     esi, eax
0x8D6ACB: mov     ecx, [esi+1A4h]
0x8D6AD1: mov     dword ptr [ecx], offset aEt; "Et"
0x8D6AD7: rdtsc
0x8D6AD9: mov     [esp+34h+arg_8], eax
0x8D6ADD: mov     edx, [esp+34h+arg_8]
0x8D6AE1: mov     [ecx+4], edx
0x8D6AE4: add     ecx, 0Ch
0x8D6AE7: mov     [esi+1A4h], ecx
0x8D6AED: mov     eax, [ebx+ebp*4]
0x8D6AF0: mov     ecx, [eax+1A4h]
0x8D6AF6: cmp     ecx, [eax+1A8h]
0x8D6AFC: jnb     short loc_8D6B22
0x8D6AFE: mov     ebx, eax
0x8D6B00: mov     ecx, [ebx+1A4h]
0x8D6B06: mov     dword ptr [ecx], offset aEt; "Et"
0x8D6B0C: rdtsc
0x8D6B0E: mov     [esp+34h+arg_8], eax
0x8D6B12: mov     edx, [esp+34h+arg_8]
0x8D6B16: mov     [ecx+4], edx
0x8D6B19: add     ecx, 0Ch
0x8D6B1C: mov     [ebx+1A4h], ecx
0x8D6B22: pop     edi
0x8D6B23: pop     esi
0x8D6B24: pop     ebp
0x8D6B25: xor     eax, eax
0x8D6B27: pop     ebx
0x8D6B28: add     esp, 24h
0x8D6B2B: retn    0Ch
