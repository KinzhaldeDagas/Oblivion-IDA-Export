0x93F250: push    ebp
0x93F251: mov     ebp, esp
0x93F253: and     esp, 0FFFFFFF0h
0x93F256: sub     esp, 264h
0x93F25C: mov     eax, ds:0B30AACh
0x93F261: mov     ecx, large fs:2Ch
0x93F268: mov     edx, ds:0BA9DE4h
0x93F26E: push    ebx
0x93F26F: push    esi
0x93F270: mov     [esp+26Ch+var_4], eax
0x93F277: mov     eax, [ecx+edx*4]
0x93F27A: mov     esi, [eax+1A4h]
0x93F280: push    edi
0x93F281: cmp     esi, [eax+1A8h]
0x93F287: jnb     short loc_93F2AD
0x93F289: mov     esi, eax
0x93F28B: mov     ecx, [esi+1A4h]
0x93F291: mov     dword ptr [ecx], offset aTtgsk; "TtGsk"
0x93F297: rdtsc
0x93F299: mov     [esp+270h+var_264], eax
0x93F29D: mov     eax, [esp+270h+var_264]
0x93F2A1: mov     [ecx+4], eax
0x93F2A4: add     ecx, 0Ch
0x93F2A7: mov     [esi+1A4h], ecx
0x93F2AD: mov     ebx, [ebp+arg_4]
0x93F2B0: mov     edi, [ebp+arg_0]
0x93F2B3: mov     ecx, [edi]
0x93F2B5: mov     edx, [ebx+8]
0x93F2B8: mov     eax, [edi+8]
0x93F2BB: mov     esi, [ebx]
0x93F2BD: push    edx
0x93F2BE: mov     [esp+274h+var_264], ecx
0x93F2C2: push    eax
0x93F2C3: lea     ecx, [esp+278h+var_260]
0x93F2C7: call    sub_8B1FF0
0x93F2CC: mov     edx, [esi]
0x93F2CE: mov     ecx, esi
0x93F2D0: call    dword ptr [edx+8]
0x93F2D3: cmp     eax, 6
0x93F2D6: jnz     short loc_93F2F1
0x93F2D8: mov     ecx, [esp+270h+var_264]
0x93F2DC: lea     eax, [esp+270h+var_260]
0x93F2E0: push    eax
0x93F2E1: push    esi
0x93F2E2: push    ecx
0x93F2E3: lea     ecx, [esp+27Ch+var_10]
0x93F2EA: call    sub_93EF30
0x93F2EF: jmp     short loc_93F308
0x93F2F1: mov     eax, [esp+270h+var_264]
0x93F2F5: lea     edx, [esp+270h+var_260]
0x93F2F9: push    edx
0x93F2FA: push    esi
0x93F2FB: push    eax
0x93F2FC: lea     ecx, [esp+27Ch+var_10]
0x93F303: call    sub_93EE40
0x93F308: mov     ecx, large fs:2Ch
0x93F30F: mov     edx, ds:0BA9DE4h
0x93F315: mov     eax, [ecx+edx*4]
0x93F318: mov     esi, [eax+1A4h]
0x93F31E: cmp     esi, [eax+1A8h]
0x93F324: jnb     short loc_93F34A
0x93F326: mov     esi, eax
0x93F328: mov     ecx, [esi+1A4h]
0x93F32E: mov     dword ptr [ecx], offset aStgsk; "StGsk"
0x93F334: rdtsc
0x93F336: mov     [esp+270h+var_264], eax
0x93F33A: mov     edx, [esp+270h+var_264]
0x93F33E: mov     [ecx+4], edx
0x93F341: add     ecx, 0Ch
0x93F344: mov     [esi+1A4h], ecx
0x93F34A: mov     eax, [esp+270h+var_8]
0x93F351: mov     esi, [edi]
0x93F353: mov     edi, [ebx]
0x93F355: movsx   ecx, al
0x93F358: movsx   eax, ah
0x93F35B: mov     [esp+270h+var_18C], eax
0x93F362: mov     ax, word ptr [esp+270h+var_8+2]
0x93F36A: movsx   edx, al
0x93F36D: movsx   eax, ah
0x93F370: mov     [esp+270h+var_184], eax
0x93F377: lea     eax, [esp+270h+var_170]
0x93F37E: push    eax
0x93F37F: push    ecx
0x93F380: mov     [esp+278h+var_190], ecx
0x93F387: lea     ecx, [esp+278h+var_10]
0x93F38E: mov     [esp+278h+var_188], edx
0x93F395: mov     edx, [esi]
0x93F397: push    ecx
0x93F398: mov     ecx, esi
0x93F39A: mov     [esp+27Ch+var_180], 0
0x93F3A2: mov     [esp+27Ch+var_17C], 0
0x93F3AD: call    dword ptr [edx+28h]
0x93F3B0: mov     ecx, [esp+270h+var_18C]
0x93F3B7: mov     edx, [edi]
0x93F3B9: lea     eax, [esp+270h+var_B0]
0x93F3C0: push    eax
0x93F3C1: mov     eax, [esp+274h+var_190]
0x93F3C8: push    ecx
0x93F3C9: lea     ecx, [esp+eax*2+278h+var_10]
0x93F3D0: push    ecx
0x93F3D1: mov     ecx, edi
0x93F3D3: call    dword ptr [edx+28h]
0x93F3D6: lea     edx, [esp+270h+var_1A0]
0x93F3DD: push    edx
0x93F3DE: lea     eax, [esp+274h+var_260]
0x93F3E2: push    eax
0x93F3E3: push    edi
0x93F3E4: push    esi
0x93F3E5: lea     ecx, [esp+280h+var_190]
0x93F3EC: call    sub_93C690
0x93F3F1: test    eax, eax
0x93F3F3: jnz     loc_93F57C
0x93F3F9: lea     ecx, [esp+50h]
0x93F3FD: push    ecx
0x93F3FE: lea     edx, [esp+274h+var_1A0]
0x93F405: push    edx
0x93F406: lea     ecx, [esp+278h+var_190]
0x93F40D: call    sub_93B740
0x93F412: mov     ecx, [ebp+arg_0]
0x93F415: mov     edx, [ecx+8]
0x93F418: lea     eax, [esp+50h]
0x93F41C: push    eax
0x93F41D: push    edx
0x93F41E: lea     ecx, [esp+98h]
0x93F425: call    sub_88FE00
0x93F42A: fld     [esp+270h+anonymous_1]
0x93F42E: fsub    dword ptr [esi+0Ch]
0x93F431: mov     eax, [ebp+arg_8]
0x93F434: fsub    dword ptr [edi+0Ch]
0x93F437: fst     [esp+270h+anonymous_1]
0x93F43B: fld     st
0x93F43D: fcomp   dword ptr [eax+8]
0x93F440: fnstsw  ax
0x93F442: test    ah, 5
0x93F445: jp      loc_93F57A
0x93F44B: fld     dword ptr [esi+0Ch]
0x93F44E: movaps  xmm2, xmmword ptr [esp+50h]
0x93F453: movaps  xmm3, [esp+270h+anonymous_4]
0x93F458: fchs
0x93F45A: movaps  xmm5, [esp+270h+anonymous_2]
0x93F45F: fstp    [esp+270h+var_264]
0x93F463: movss   xmm0, [esp+270h+var_264]
0x93F469: mov     eax, [ebx+8]
0x93F46C: fld     st
0x93F46E: movaps  xmm1, xmm0
0x93F471: fchs
0x93F473: shufps  xmm1, xmm0, 0
0x93F477: fstp    [esp+270h+var_264]
0x93F47B: movaps  xmm0, [esp+270h+anonymous_0]
0x93F480: mulps   xmm1, xmm2
0x93F483: addps   xmm0, xmm1
0x93F486: movss   xmm1, [esp+270h+var_264]
0x93F48C: mov     ecx, [ebp+arg_0]
0x93F48F: movaps  [esp+270h+anonymous_0], xmm0
0x93F494: movaps  xmm4, xmm1
0x93F497: shufps  xmm4, xmm1, 0
0x93F49B: mulps   xmm4, xmm2
0x93F49E: addps   xmm0, xmm4
0x93F4A1: movaps  xmm4, [esp+270h+anonymous_3]
0x93F4A6: subps   xmm0, xmm3
0x93F4A9: movaps  xmm3, xmmword ptr [esp+270h+var_260]
0x93F4AE: movaps  xmm1, xmm3
0x93F4B1: shufps  xmm1, xmm5, 44h ; 'D'
0x93F4B5: shufps  xmm3, xmm5, 0EEh ; 'î'
0x93F4B9: movaps  xmm5, xmm1
0x93F4BC: movaps  xmm2, xmm4
0x93F4BF: shufps  xmm2, xmm4, 44h ; 'D'
0x93F4C3: movaps  xmm7, xmm4
0x93F4C6: shufps  xmm7, xmm4, 0EEh ; 'î'
0x93F4CA: movaps  xmm4, xmm0
0x93F4CD: shufps  xmm4, xmm0, 55h ; 'U'
0x93F4D1: shufps  xmm1, xmm2, 88h ; 'ˆ'
0x93F4D5: movaps  xmm6, xmm0
0x93F4D8: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x93F4DC: shufps  xmm5, xmm2, 0DDh ; 'Ý'
0x93F4E0: mulps   xmm5, xmm4
0x93F4E3: movaps  xmm4, xmm0
0x93F4E6: shufps  xmm4, xmm0, 0
0x93F4EA: mulps   xmm1, xmm4
0x93F4ED: movaps  xmm0, xmm1
0x93F4F0: addps   xmm0, xmm5
0x93F4F3: shufps  xmm3, xmm7, 88h ; 'ˆ'
0x93F4F7: mulps   xmm3, xmm6
0x93F4FA: addps   xmm0, xmm3
0x93F4FD: movaps  xmmword ptr [esp+270h+var_1F8+8], xmm0
0x93F505: movaps  xmm2, xmm0
0x93F508: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93F50C: mov     [esp+270h+var_1B0], ecx
0x93F513: mov     ecx, [ebp+arg_C]
0x93F516: mov     edx, [ecx]
0x93F518: mov     [esp+270h+var_1AC], ebx
0x93F51F: movaps  xmm1, xmmword ptr [eax+30h]
0x93F523: movaps  xmm3, xmmword ptr [eax+20h]
0x93F527: mulps   xmm3, xmm2
0x93F52A: movaps  xmm2, xmmword ptr [eax+10h]
0x93F52E: addps   xmm3, xmm1
0x93F531: movaps  xmm1, xmm0
0x93F534: shufps  xmm1, xmm0, 55h ; 'U'
0x93F538: mulps   xmm2, xmm1
0x93F53B: movaps  xmm1, xmm0
0x93F53E: shufps  xmm1, xmm0, 0
0x93F542: movaps  xmm0, xmmword ptr [eax]
0x93F545: mulps   xmm0, xmm1
0x93F548: addps   xmm0, xmm2
0x93F54B: addps   xmm0, xmm3
0x93F54E: movaps  xmmword ptr [esp+270h+var_1D8+8], xmm0
0x93F556: movaps  xmm0, xmmword ptr [esp+90h]
0x93F55E: lea     eax, [esp+270h+var_1D8+8]
0x93F565: movaps  [esp+270h+var_1C0], xmm0
0x93F56D: fstp    dword ptr [esp+270h+var_1C0+0Ch]
0x93F574: push    eax
0x93F575: call    dword ptr [edx+4]
0x93F578: jmp     short loc_93F57C
0x93F57A: fstp    st
0x93F57C: mov     ecx, large fs:2Ch
0x93F583: mov     edx, ds:0BA9DE4h
0x93F589: mov     eax, [ecx+edx*4]
0x93F58C: mov     esi, [eax+1A4h]
0x93F592: cmp     esi, [eax+1A8h]
0x93F598: jnb     short loc_93F5BE
0x93F59A: mov     esi, eax
0x93F59C: mov     ecx, [esi+1A4h]
0x93F5A2: mov     dword ptr [ecx], offset aEt; "Et"
0x93F5A8: rdtsc
0x93F5AA: mov     [esp+270h+var_264], eax
0x93F5AE: mov     edx, [esp+270h+var_264]
0x93F5B2: mov     [ecx+4], edx
0x93F5B5: add     ecx, 0Ch
0x93F5B8: mov     [esi+1A4h], ecx
0x93F5BE: mov     ecx, [esp+270h+var_4]
0x93F5C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x93F5CA: pop     edi
0x93F5CB: pop     esi
0x93F5CC: pop     ebx
0x93F5CD: mov     esp, ebp
0x93F5CF: pop     ebp
0x93F5D0: retn
