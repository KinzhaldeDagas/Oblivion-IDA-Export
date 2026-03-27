0x8D7F80: sub     esp, 18h
0x8D7F83: push    ebx
0x8D7F84: mov     ebx, ds:0BA9DE4h
0x8D7F8A: push    ebp
0x8D7F8B: push    esi
0x8D7F8C: push    edi
0x8D7F8D: mov     edi, large fs:2Ch
0x8D7F94: mov     eax, [edi+ebx*4]
0x8D7F97: mov     edx, [eax+1A4h]
0x8D7F9D: cmp     edx, [eax+1A8h]
0x8D7FA3: mov     [esp+28h+var_18], ecx
0x8D7FA7: jnb     short loc_8D7FCD
0x8D7FA9: mov     ebp, eax
0x8D7FAB: mov     esi, [ebp+1A4h]
0x8D7FB1: mov     dword ptr [esi], offset aTtsimulate; "TtSimulate"
0x8D7FB7: rdtsc
0x8D7FB9: mov     [esp+28h+var_14], eax
0x8D7FBD: mov     eax, [esp+28h+var_14]
0x8D7FC1: mov     [esi+4], eax
0x8D7FC4: add     esi, 0Ch
0x8D7FC7: mov     [ebp+1A4h], esi
0x8D7FCD: mov     edx, [esp+28h+arg_8]
0x8D7FD1: mov     esi, [esp+28h+arg_0]
0x8D7FD5: mov     [ecx+8], edx
0x8D7FD8: mov     ecx, esi
0x8D7FDA: call    sub_8992B0
0x8D7FDF: mov     ebp, [edi+ebx*4]
0x8D7FE2: mov     ecx, [ebp+19Ch]
0x8D7FE8: test    ecx, ecx
0x8D7FEA: mov     [esp+28h+arg_0], eax
0x8D7FEE: jnz     short loc_8D7FF6
0x8D7FF0: mov     ecx, ds:0BA7D9Ch
0x8D7FF6: mov     edx, [ecx+2Ch]
0x8D7FF9: sub     edx, [ecx+20h]
0x8D7FFC: sub     edx, 10h
0x8D7FFF: cmp     eax, edx
0x8D8001: jle     short loc_8D806C
0x8D8003: mov     eax, ds:0BA7D98h
0x8D8008: mov     edx, [eax+14h]
0x8D800B: mov     ecx, [eax+28h]
0x8D800E: add     ecx, edx
0x8D8010: mov     edx, [eax+8]
0x8D8013: cmp     edx, ecx
0x8D8015: jg      short loc_8D801B
0x8D8017: xor     edx, edx
0x8D8019: jmp     short loc_8D801D
0x8D801B: sub     edx, ecx
0x8D801D: cmp     [esp+28h+arg_0], edx
0x8D8021: jle     short loc_8D806C
0x8D8023: mov     edi, [edi+ebx*4]
0x8D8026: mov     dword ptr [eax+4], 1
0x8D802D: mov     eax, [edi+1A4h]
0x8D8033: cmp     eax, [edi+1A8h]
0x8D8039: jnb     short loc_8D805D
0x8D803B: mov     ecx, [ebp+1A4h]
0x8D8041: mov     dword ptr [ecx], offset aEt; "Et"
0x8D8047: rdtsc
0x8D8049: mov     [esp+28h+arg_8], eax
0x8D804D: mov     edx, [esp+28h+arg_8]
0x8D8051: mov     [ecx+4], edx
0x8D8054: add     ecx, 0Ch
0x8D8057: mov     [ebp+1A4h], ecx
0x8D805D: pop     edi
0x8D805E: pop     esi
0x8D805F: pop     ebp
0x8D8060: mov     eax, 1
0x8D8065: pop     ebx
0x8D8066: add     esp, 18h
0x8D8069: retn    0Ch
0x8D806C: fld     [esp+28h+arg_8]
0x8D8070: mov     eax, [esi+18h]
0x8D8073: fadd    dword ptr [esi+18h]
0x8D8076: mov     [esi+14h], eax
0x8D8079: fst     dword ptr [esi+18h]
0x8D807C: fst     dword ptr [esi+10h]
0x8D807F: fld     dword ptr [esi+14h]
0x8D8082: fst     [esp+28h+var_10]
0x8D8086: fld     st(1)
0x8D8088: fstp    [esp+28h+var_C]
0x8D808C: fxch    st(1)
0x8D808E: fsub    st, st(1)
0x8D8090: fstp    [esp+28h+var_8]
0x8D8094: fstp    st
0x8D8096: fld     dword ptr ds:0A2FAA8h
0x8D809C: fld     [esp+28h+var_8]
0x8D80A0: fucompp
0x8D80A2: fnstsw  ax
0x8D80A4: test    ah, 44h
0x8D80A7: jp      short loc_8D80B3
0x8D80A9: mov     [esp+28h+var_4], 0
0x8D80B1: jmp     short loc_8D80C1
0x8D80B3: fld     dword ptr ds:0A2F948h
0x8D80B9: fdiv    [esp+28h+var_8]
0x8D80BD: fstp    [esp+28h+var_4]
0x8D80C1: mov     ecx, [esi+5Ch]
0x8D80C4: mov     edx, [ecx]
0x8D80C6: lea     eax, [esp+28h+var_10]
0x8D80CA: push    eax
0x8D80CB: push    esi
0x8D80CC: call    dword ptr [edx+0Ch]
0x8D80CF: lea     ecx, [esp+28h+var_10]
0x8D80D3: push    ecx
0x8D80D4: mov     ecx, [esp+2Ch+var_18]
0x8D80D8: push    esi
0x8D80D9: call    sub_8D6E40
0x8D80DE: mov     edx, [esi+10h]
0x8D80E1: mov     ecx, [esp+28h+var_18]
0x8D80E5: lea     eax, [esp+28h+var_10]
0x8D80E9: push    eax
0x8D80EA: push    esi
0x8D80EB: mov     [esi+0Ch], edx
0x8D80EE: call    sub_8D7920
0x8D80F3: mov     ecx, ds:0BA7D98h
0x8D80F9: cmp     dword ptr [ecx+4], 1
0x8D80FD: jnz     short loc_8D8141
0x8D80FF: mov     edi, [edi+ebx*4]
0x8D8102: mov     edx, [edi+1A4h]
0x8D8108: cmp     edx, [edi+1A8h]
0x8D810E: jnb     short loc_8D8132
0x8D8110: mov     ecx, [ebp+1A4h]
0x8D8116: mov     dword ptr [ecx], offset aEt; "Et"
0x8D811C: rdtsc
0x8D811E: mov     [esp+28h+arg_8], eax
0x8D8122: mov     eax, [esp+28h+arg_8]
0x8D8126: mov     [ecx+4], eax
0x8D8129: add     ecx, 0Ch
0x8D812C: mov     [ebp+1A4h], ecx
0x8D8132: pop     edi
0x8D8133: pop     esi
0x8D8134: pop     ebp
0x8D8135: mov     eax, 2
0x8D813A: pop     ebx
0x8D813B: add     esp, 18h
0x8D813E: retn    0Ch
0x8D8141: mov     eax, [edi+ebx*4]
0x8D8144: mov     ecx, [eax+1A4h]
0x8D814A: cmp     ecx, [eax+1A8h]
0x8D8150: jnb     short loc_8D8174
0x8D8152: mov     ecx, [ebp+1A4h]
0x8D8158: mov     dword ptr [ecx], offset aTtpostsimulate; "TtPostSimulateCb"
0x8D815E: rdtsc
0x8D8160: mov     [esp+28h+arg_8], eax
0x8D8164: mov     edx, [esp+28h+arg_8]
0x8D8168: mov     [ecx+4], edx
0x8D816B: add     ecx, 0Ch
0x8D816E: mov     [ebp+1A4h], ecx
0x8D8174: lea     eax, [esp+28h+var_10]
0x8D8178: push    eax
0x8D8179: push    esi
0x8D817A: call    sub_8DCD60
0x8D817F: mov     eax, [edi+ebx*4]
0x8D8182: mov     ecx, [eax+1A4h]
0x8D8188: mov     edx, [eax+1A8h]
0x8D818E: add     esp, 8
0x8D8191: cmp     ecx, edx
0x8D8193: jnb     short loc_8D81B7
0x8D8195: mov     ecx, [ebp+1A4h]
0x8D819B: mov     dword ptr [ecx], offset aEt; "Et"
0x8D81A1: rdtsc
0x8D81A3: mov     [esp+28h+arg_8], eax
0x8D81A7: mov     edx, [esp+28h+arg_8]
0x8D81AB: mov     [ecx+4], edx
0x8D81AE: add     ecx, 0Ch
0x8D81B1: mov     [ebp+1A4h], ecx
0x8D81B7: mov     edi, [edi+ebx*4]
0x8D81BA: mov     eax, [edi+1A4h]
0x8D81C0: cmp     eax, [edi+1A8h]
0x8D81C6: jnb     short loc_8D81EA
0x8D81C8: mov     ecx, [ebp+1A4h]
0x8D81CE: mov     dword ptr [ecx], offset aEt; "Et"
0x8D81D4: rdtsc
0x8D81D6: mov     [esp+28h+arg_8], eax
0x8D81DA: mov     edx, [esp+28h+arg_8]
0x8D81DE: mov     [ecx+4], edx
0x8D81E1: add     ecx, 0Ch
0x8D81E4: mov     [ebp+1A4h], ecx
0x8D81EA: pop     edi
0x8D81EB: pop     esi
0x8D81EC: pop     ebp
0x8D81ED: xor     eax, eax
0x8D81EF: pop     ebx
0x8D81F0: add     esp, 18h
0x8D81F3: retn    0Ch
