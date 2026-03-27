0x950F60: push    ebp
0x950F61: mov     ebp, esp
0x950F63: and     esp, 0FFFFFFF0h
0x950F66: sub     esp, 244h
0x950F6C: mov     eax, ds:0B30AACh
0x950F71: push    ebx
0x950F72: mov     ebx, large fs:2Ch
0x950F79: push    esi
0x950F7A: mov     esi, ecx
0x950F7C: mov     ecx, ds:0BA9DE4h
0x950F82: mov     [esp+24Ch+var_4], eax
0x950F89: mov     eax, [ebx+ecx*4]
0x950F8C: mov     edx, [eax+1A4h]
0x950F92: push    edi
0x950F93: cmp     edx, [eax+1A8h]
0x950F99: jnb     short loc_950FBF
0x950F9B: mov     edi, eax
0x950F9D: mov     ecx, [edi+1A4h]
0x950FA3: mov     dword ptr [ecx], offset aTtrcconvxpiece; "TtrcConvxPiece"
0x950FA9: rdtsc
0x950FAB: mov     [esp+250h+var_238], eax
0x950FAF: mov     eax, [esp+250h+var_238]
0x950FB3: mov     [ecx+4], eax
0x950FB6: add     ecx, 0Ch
0x950FB9: mov     [edi+1A4h], ecx
0x950FBF: mov     eax, [esi+20h]
0x950FC2: xor     edi, edi
0x950FC4: test    eax, eax
0x950FC6: mov     [esp+250h+var_238], 0FFFFFFFFh
0x950FCE: mov     [esp+250h+var_21C], 3F800000h
0x950FD6: mov     [esp+250h+var_23C], 7F7FFFFFh
0x950FDE: jle     loc_951078
0x950FE4: mov     ebx, [ebp+arg_4]
0x950FE7: mov     eax, [ebx+24h]
0x950FEA: test    eax, eax
0x950FEC: jz      short loc_95100A
0x950FEE: mov     ecx, eax
0x950FF0: mov     eax, [esi+1Ch]
0x950FF3: mov     eax, [eax+edi*4]
0x950FF6: mov     edx, [ecx]
0x950FF8: push    eax
0x950FF9: mov     eax, [esi+18h]
0x950FFC: push    eax
0x950FFD: push    ebx
0x950FFE: lea     eax, [esp+25Ch+var_231]
0x951002: push    eax
0x951003: call    dword ptr [edx]
0x951005: cmp     byte ptr [eax], 0
0x951008: jz      short loc_951065
0x95100A: mov     ecx, [esi+18h]
0x95100D: mov     edx, [ecx]
0x95100F: lea     eax, [esp+250h+var_210]
0x951013: push    eax
0x951014: mov     eax, [esi+1Ch]
0x951017: mov     eax, [eax+edi*4]
0x95101A: push    eax
0x95101B: call    dword ptr [edx+28h]
0x95101E: mov     edx, [eax]
0x951020: lea     ecx, [esp+250h+var_230]
0x951024: push    ecx
0x951025: push    ebx
0x951026: lea     ecx, [esp+258h+var_232]
0x95102A: push    ecx
0x95102B: mov     ecx, eax
0x95102D: call    dword ptr [edx+14h]
0x951030: cmp     byte ptr [eax], 0
0x951033: jz      short loc_951065
0x951035: fld     [esp+250h+var_21C]
0x951039: fcomp   [esp+250h+var_23C]
0x95103D: fnstsw  ax
0x95103F: test    ah, 5
0x951042: jp      short loc_951065
0x951044: mov     eax, [ebp+arg_8]
0x951047: mov     edx, [esp+250h+var_21C]
0x95104B: mov     ecx, [esp+250h+var_220]
0x95104F: movaps  xmm0, [esp+250h+var_230]
0x951054: mov     [esp+250h+var_238], edi
0x951058: mov     [esp+250h+var_23C], edx
0x95105C: movaps  xmmword ptr [eax], xmm0
0x95105F: mov     [eax+10h], ecx
0x951062: mov     [eax+14h], edx
0x951065: mov     eax, [esi+20h]
0x951068: inc     edi
0x951069: cmp     edi, eax
0x95106B: jl      loc_950FE7
0x951071: mov     ebx, large fs:2Ch
0x951078: mov     ecx, ds:0BA9DE4h
0x95107E: mov     eax, [ebx+ecx*4]
0x951081: mov     edx, [eax+1A4h]
0x951087: cmp     edx, [eax+1A8h]
0x95108D: jnb     short loc_9510B3
0x95108F: mov     ebx, eax
0x951091: mov     ecx, [ebx+1A4h]
0x951097: mov     dword ptr [ecx], offset aEt; "Et"
0x95109D: rdtsc
0x95109F: mov     [esp+250h+var_23C], eax
0x9510A3: mov     eax, [esp+250h+var_23C]
0x9510A7: mov     [ecx+4], eax
0x9510AA: add     ecx, 0Ch
0x9510AD: mov     [ebx+1A4h], ecx
0x9510B3: cmp     [esp+250h+var_238], 0FFFFFFFFh
0x9510B8: mov     eax, [ebp+arg_0]
0x9510BB: setnz   cl
0x9510BE: mov     [eax], cl
0x9510C0: mov     ecx, [esp+250h+var_4]
0x9510C7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9510CC: pop     edi
0x9510CD: pop     esi
0x9510CE: pop     ebx
0x9510CF: mov     esp, ebp
0x9510D1: pop     ebp
0x9510D2: retn    0Ch
