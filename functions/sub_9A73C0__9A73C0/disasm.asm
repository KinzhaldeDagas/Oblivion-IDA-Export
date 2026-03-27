0x9A73C0: push    ebp
0x9A73C1: mov     ebp, esp
0x9A73C3: and     esp, 0FFFFFFF0h
0x9A73C6: sub     esp, 1E4h
0x9A73CC: push    ebx
0x9A73CD: push    esi
0x9A73CE: mov     esi, [ebp+arg_4]
0x9A73D1: mov     ebx, [esi+10h]
0x9A73D4: lea     eax, [ebx-1]; switch 87 cases
0x9A73D7: cmp     eax, 56h
0x9A73DA: push    edi
0x9A73DB: mov     edx, ecx
0x9A73DD: ja      def_9A73EA; jumptable 009A73EA default case, cases 33-36,69-72,78-81
0x9A73E3: movzx   eax, ds:byte_9A7F20[eax]
0x9A73EA: jmp     ds:jpt_9A73EA[eax*4]; switch jump
0x9A73F1: xor     al, al; jumptable 009A73EA cases 1,2,13,14
0x9A73F3: cmp     ebx, 2
0x9A73F6: mov     [esp+1F0h+var_1D6], al
0x9A73FA: mov     cl, 1
0x9A73FC: jz      short loc_9A7403
0x9A73FE: cmp     ebx, 0Eh
0x9A7401: jnz     short loc_9A7405
0x9A7403: mov     al, cl
0x9A7405: cmp     ebx, 0Dh
0x9A7408: jz      short loc_9A740F
0x9A740A: cmp     ebx, 0Eh
0x9A740D: jnz     short loc_9A7413
0x9A740F: mov     [esp+1F0h+var_1D6], cl
0x9A7413: mov     esi, [edx+2Ch]
0x9A7416: mov     ebx, [ebp+arg_0]
0x9A7419: add     esi, 9C0h
0x9A741F: mov     ecx, 10h
0x9A7424: lea     edi, [esp+1F0h+var_1C0]
0x9A7428: rep movsd
0x9A742A: shl     ebx, 6
0x9A742D: lea     esi, [esp+1F0h+var_1C0]
0x9A7431: test    al, al
0x9A7433: lea     ebx, flt_BAA9E0[ebx]
0x9A7439: mov     ecx, 10h
0x9A743E: mov     edi, ebx
0x9A7440: rep movsd
0x9A7442: jz      short loc_9A744D
0x9A7444: push    ebx
0x9A7445: push    0
0x9A7447: push    ebx
0x9A7448: call    D3DXMatrixInverse_0
0x9A744D: cmp     [esp+1F0h+var_1D6], 0
0x9A7452: jz      short loc_9A745B
0x9A7454: push    ebx
0x9A7455: push    ebx
0x9A7456: call    D3DXMatrixTranspose_0
0x9A745B: mov     eax, 9
0x9A7460: pop     edi
0x9A7461: pop     esi
0x9A7462: pop     ebx
0x9A7463: mov     esp, ebp
0x9A7465: pop     ebp
0x9A7466: retn    20h ; ' '
0x9A7469: xor     al, al; jumptable 009A73EA cases 3,4,15,16
0x9A746B: cmp     ebx, 4
0x9A746E: mov     [esp+1F0h+var_1D6], al
0x9A7472: mov     cl, 1
0x9A7474: jz      short loc_9A747B
0x9A7476: cmp     ebx, 10h
0x9A7479: jnz     short loc_9A747D
0x9A747B: mov     al, cl
0x9A747D: cmp     ebx, 0Fh
0x9A7480: jz      short loc_9A7487
0x9A7482: cmp     ebx, 10h
0x9A7485: jnz     short loc_9A748B
0x9A7487: mov     [esp+1F0h+var_1D6], cl
0x9A748B: mov     esi, [edx+2Ch]
0x9A748E: mov     ebx, [ebp+arg_0]
0x9A7491: add     esi, 980h
0x9A7497: shl     ebx, 6
0x9A749A: test    al, al
0x9A749C: mov     ecx, 10h
0x9A74A1: lea     edi, [esp+1F0h+var_1C0]
0x9A74A5: rep movsd
0x9A74A7: lea     ebx, flt_BAA9E0[ebx]
0x9A74AD: mov     ecx, 10h
0x9A74B2: lea     esi, [esp+1F0h+var_1C0]
0x9A74B6: mov     edi, ebx
0x9A74B8: rep movsd
0x9A74BA: jz      short loc_9A74C5
0x9A74BC: push    ebx
0x9A74BD: push    0
0x9A74BF: push    ebx
0x9A74C0: call    D3DXMatrixInverse_0
0x9A74C5: cmp     [esp+1F0h+var_1D6], 0
0x9A74CA: jz      short loc_9A745B
0x9A74CC: push    ebx
0x9A74CD: push    ebx
0x9A74CE: call    D3DXMatrixTranspose_0
0x9A74D3: mov     eax, 9
0x9A74D8: pop     edi
0x9A74D9: pop     esi
0x9A74DA: pop     ebx
0x9A74DB: mov     esp, ebp
0x9A74DD: pop     ebp
0x9A74DE: retn    20h ; ' '
0x9A74E1: xor     al, al; jumptable 009A73EA cases 5,6,17,18
0x9A74E3: cmp     ebx, 6
0x9A74E6: mov     [esp+1F0h+var_1D6], al
0x9A74EA: mov     cl, 1
0x9A74EC: jz      short loc_9A74F3
0x9A74EE: cmp     ebx, 12h
0x9A74F1: jnz     short loc_9A74F5
0x9A74F3: mov     al, cl
0x9A74F5: cmp     ebx, 11h
0x9A74F8: jz      short loc_9A74FF
0x9A74FA: cmp     ebx, 12h
0x9A74FD: jnz     short loc_9A7503
0x9A74FF: mov     [esp+1F0h+var_1D6], cl
0x9A7503: mov     ebx, [ebp+arg_0]
0x9A7506: mov     esi, [edx+2Ch]
0x9A7509: shl     ebx, 6
0x9A750C: lea     ebx, flt_BAA9E0[ebx]
0x9A7512: add     esi, 940h
0x9A7518: test    al, al
0x9A751A: mov     ecx, 10h
0x9A751F: mov     edi, ebx
0x9A7521: rep movsd
0x9A7523: jz      short loc_9A752E
0x9A7525: push    ebx
0x9A7526: push    0
0x9A7528: push    ebx
0x9A7529: call    D3DXMatrixInverse_0
0x9A752E: cmp     [esp+1F0h+var_1D6], 0
0x9A7533: jz      loc_9A745B
0x9A7539: push    ebx
0x9A753A: push    ebx
0x9A753B: call    D3DXMatrixTranspose_0
0x9A7540: mov     eax, 9
0x9A7545: pop     edi
0x9A7546: pop     esi
0x9A7547: pop     ebx
0x9A7548: mov     esp, ebp
0x9A754A: pop     ebp
0x9A754B: retn    20h ; ' '
0x9A754E: cmp     ebx, 8; jumptable 009A73EA cases 7,8,19,20
0x9A7551: mov     [esp+1F0h+var_1D6], 0
0x9A7556: mov     [esp+1F0h+var_1D5], 0
0x9A755B: mov     cl, 1
0x9A755D: jz      short loc_9A7564
0x9A755F: cmp     ebx, 14h
0x9A7562: jnz     short loc_9A7568
0x9A7564: mov     [esp+1F0h+var_1D6], cl
0x9A7568: cmp     ebx, 13h
0x9A756B: jz      short loc_9A7572
0x9A756D: cmp     ebx, 14h
0x9A7570: jnz     short loc_9A7576
0x9A7572: mov     [esp+1F0h+var_1D5], cl
0x9A7576: mov     eax, [edx+2Ch]
0x9A7579: lea     esi, [eax+940h]
0x9A757F: add     eax, 980h
0x9A7584: mov     ecx, 10h
0x9A7589: lea     edi, [esp+1F0h+var_180]
0x9A758D: rep movsd
0x9A758F: mov     esi, eax
0x9A7591: mov     ecx, 10h
0x9A7596: lea     edi, [esp+1F0h+var_1C0]
0x9A759A: rep movsd
0x9A759C: lea     ecx, [esp+1F0h+var_1C0]
0x9A75A0: push    ecx
0x9A75A1: lea     edx, [esp+1F4h+var_180]
0x9A75A5: push    edx
0x9A75A6: lea     eax, [esp+1F8h+var_80]
0x9A75AD: push    eax
0x9A75AE: call    D3DXMatrixMultiply_0
0x9A75B3: mov     ebx, [ebp+arg_0]
0x9A75B6: shl     ebx, 6
0x9A75B9: cmp     [esp+1F0h+var_1D6], 0
0x9A75BE: lea     ebx, flt_BAA9E0[ebx]
0x9A75C4: mov     ecx, 10h
0x9A75C9: lea     esi, [esp+1F0h+var_80]
0x9A75D0: mov     edi, ebx
0x9A75D2: rep movsd
0x9A75D4: jz      short loc_9A75DF
0x9A75D6: push    ebx
0x9A75D7: push    0
0x9A75D9: push    ebx
0x9A75DA: call    D3DXMatrixInverse_0
0x9A75DF: cmp     [esp+1F0h+var_1D5], 0
0x9A75E4: jmp     loc_9A7452
0x9A75E9: cmp     ebx, 0Ah; jumptable 009A73EA cases 9,10,21,22
0x9A75EC: mov     [esp+1F0h+var_1D5], 0
0x9A75F1: mov     [esp+1F0h+var_1D6], 0
0x9A75F6: mov     cl, 1
0x9A75F8: jz      short loc_9A75FF
0x9A75FA: cmp     ebx, 16h
0x9A75FD: jnz     short loc_9A7603
0x9A75FF: mov     [esp+1F0h+var_1D5], cl
0x9A7603: cmp     ebx, 15h
0x9A7606: jz      short loc_9A760D
0x9A7608: cmp     ebx, 16h
0x9A760B: jnz     short loc_9A7611
0x9A760D: mov     [esp+1F0h+var_1D6], cl
0x9A7611: mov     eax, [edx+2Ch]
0x9A7614: lea     esi, [eax+980h]
0x9A761A: add     eax, 9C0h
0x9A761F: mov     ecx, 10h
0x9A7624: lea     edi, [esp+1F0h+var_1C0]
0x9A7628: rep movsd
0x9A762A: mov     esi, eax
0x9A762C: mov     ecx, 10h
0x9A7631: lea     edi, [esp+1F0h+var_180]
0x9A7635: rep movsd
0x9A7637: lea     ecx, [esp+1F0h+var_180]
0x9A763B: push    ecx
0x9A763C: lea     edx, [esp+1F4h+var_1C0]
0x9A7640: push    edx
0x9A7641: lea     eax, [esp+1F8h+var_C0]
0x9A7648: push    eax
0x9A7649: call    D3DXMatrixMultiply_0
0x9A764E: mov     ebx, [ebp+arg_0]
0x9A7651: shl     ebx, 6
0x9A7654: cmp     [esp+1F0h+var_1D5], 0
0x9A7659: lea     esi, [esp+1F0h+var_C0]
0x9A7660: jmp     loc_9A7433
0x9A7665: cmp     ebx, 0Ch; jumptable 009A73EA cases 11,12,23,24
0x9A7668: mov     [esp+1F0h+var_1D5], 0
0x9A766D: mov     [esp+1F0h+var_1D6], 0
0x9A7672: mov     cl, 1
0x9A7674: jz      short loc_9A767B
0x9A7676: cmp     ebx, 18h
0x9A7679: jnz     short loc_9A767F
0x9A767B: mov     [esp+1F0h+var_1D5], cl
0x9A767F: cmp     ebx, 17h
0x9A7682: jz      short loc_9A7689
0x9A7684: cmp     ebx, 18h
0x9A7687: jnz     short loc_9A768D
0x9A7689: mov     [esp+1F0h+var_1D6], cl
0x9A768D: mov     eax, [edx+2Ch]
0x9A7690: lea     esi, [eax+940h]
0x9A7696: mov     ecx, 10h
0x9A769B: lea     edi, [esp+1F0h+var_1C0]
0x9A769F: rep movsd
0x9A76A1: lea     esi, [eax+980h]
0x9A76A7: add     eax, 9C0h
0x9A76AC: mov     ecx, 10h
0x9A76B1: lea     edi, [esp+1F0h+var_180]
0x9A76B5: rep movsd
0x9A76B7: mov     esi, eax
0x9A76B9: mov     ecx, 10h
0x9A76BE: lea     edi, [esp+1F0h+var_100]
0x9A76C5: rep movsd
0x9A76C7: lea     ecx, [esp+1F0h+var_180]
0x9A76CB: push    ecx
0x9A76CC: lea     edx, [esp+1F4h+var_1C0]
0x9A76D0: push    edx
0x9A76D1: lea     eax, [esp+1F8h+var_140]
0x9A76D8: push    eax
0x9A76D9: call    D3DXMatrixMultiply_0
0x9A76DE: lea     ecx, [esp+1F0h+var_100]
0x9A76E5: push    ecx
0x9A76E6: lea     edx, [esp+1F4h+var_140]
0x9A76ED: push    edx
0x9A76EE: lea     eax, [esp+1F8h+var_40]
0x9A76F5: push    eax
0x9A76F6: call    D3DXMatrixMultiply_0
0x9A76FB: mov     ebx, [ebp+arg_0]
0x9A76FE: shl     ebx, 6
0x9A7701: cmp     [esp+1F0h+var_1D5], 0
0x9A7706: lea     esi, [esp+1F0h+var_40]
0x9A770D: jmp     loc_9A7433
0x9A7712: mov     eax, [ebp+arg_C]; jumptable 009A73EA cases 25-28
0x9A7715: test    eax, eax
0x9A7717: jz      def_9A73EA; jumptable 009A73EA default case, cases 33-36,69-72,78-81
0x9A771D: mov     esi, [eax+28h]
0x9A7720: mov     ecx, 10h
0x9A7725: lea     edi, [esp+1F0h+var_140]
0x9A772C: rep movsd
0x9A772E: mov     edi, [ebp+arg_0]
0x9A7731: shl     edi, 6
0x9A7734: cmp     ebx, 1Ah
0x9A7737: lea     edi, flt_BAA9E0[edi]
0x9A773D: mov     ecx, 10h
0x9A7742: lea     esi, [esp+1F0h+var_140]
0x9A7749: mov     [esp+1F0h+var_1D0], edi
0x9A774D: rep movsd
0x9A774F: mov     [esp+1F0h+var_1D5], 0
0x9A7754: mov     [esp+1F0h+var_1D6], 0
0x9A7759: mov     cl, 1
0x9A775B: jz      short loc_9A7762
0x9A775D: cmp     ebx, 1Ch
0x9A7760: jnz     short loc_9A7766
0x9A7762: mov     [esp+1F0h+var_1D5], cl
0x9A7766: cmp     ebx, 1Bh
0x9A7769: jz      short loc_9A7770
0x9A776B: cmp     ebx, 1Ch
0x9A776E: jnz     short loc_9A7774
0x9A7770: mov     [esp+1F0h+var_1D6], cl
0x9A7774: mov     esi, [edx+2Ch]
0x9A7777: add     esi, 980h
0x9A777D: mov     ecx, 10h
0x9A7782: lea     edi, [esp+1F0h+var_100]
0x9A7789: rep movsd
0x9A778B: mov     esi, [esp+1F0h+var_1D0]
0x9A778F: lea     ecx, [esp+1F0h+var_100]
0x9A7796: push    ecx
0x9A7797: push    esi
0x9A7798: push    esi
0x9A7799: call    D3DXMatrixMultiply_0
0x9A779E: cmp     [esp+1F0h+var_1D5], 0
0x9A77A3: jz      short loc_9A77AE
0x9A77A5: push    esi
0x9A77A6: push    0
0x9A77A8: push    esi
0x9A77A9: call    D3DXMatrixInverse_0
0x9A77AE: cmp     [esp+1F0h+var_1D6], 0
0x9A77B3: jz      loc_9A745B
0x9A77B9: push    esi
0x9A77BA: push    esi
0x9A77BB: call    D3DXMatrixTranspose_0
0x9A77C0: mov     eax, 9
0x9A77C5: pop     edi
0x9A77C6: pop     esi
0x9A77C7: pop     ebx
0x9A77C8: mov     esp, ebp
0x9A77CA: pop     ebp
0x9A77CB: retn    20h ; ' '
0x9A77CE: mov     eax, [ebp+arg_C]; jumptable 009A73EA cases 29-32
0x9A77D1: test    eax, eax
0x9A77D3: jz      def_9A73EA; jumptable 009A73EA default case, cases 33-36,69-72,78-81
0x9A77D9: mov     esi, [eax+28h]
0x9A77DC: mov     ecx, 10h
0x9A77E1: lea     edi, [esp+1F0h+var_140]
0x9A77E8: rep movsd
0x9A77EA: mov     edi, [ebp+arg_0]
0x9A77ED: shl     edi, 6
0x9A77F0: cmp     ebx, 1Eh
0x9A77F3: lea     edi, flt_BAA9E0[edi]
0x9A77F9: mov     ecx, 10h
0x9A77FE: lea     esi, [esp+1F0h+var_140]
0x9A7805: mov     [esp+1F0h+var_1D0], edi
0x9A7809: rep movsd
0x9A780B: mov     [esp+1F0h+var_1D5], 0
0x9A7810: mov     [esp+1F0h+var_1D6], 0
0x9A7815: mov     cl, 1
0x9A7817: jz      short loc_9A781E
0x9A7819: cmp     ebx, 20h ; ' '
0x9A781C: jnz     short loc_9A7822
0x9A781E: mov     [esp+1F0h+var_1D5], cl
0x9A7822: cmp     ebx, 1Fh
0x9A7825: jz      short loc_9A782C
0x9A7827: cmp     ebx, 20h ; ' '
0x9A782A: jnz     short loc_9A7830
0x9A782C: mov     [esp+1F0h+var_1D6], cl
0x9A7830: mov     eax, [edx+2Ch]
0x9A7833: lea     esi, [eax+980h]
0x9A7839: mov     ecx, 10h
0x9A783E: lea     edi, [esp+1F0h+var_100]
0x9A7845: rep movsd
0x9A7847: lea     esi, [eax+9C0h]
0x9A784D: mov     ecx, 10h
0x9A7852: lea     edi, [esp+1F0h+var_180]
0x9A7856: lea     edx, [esp+1F0h+var_100]
0x9A785D: rep movsd
0x9A785F: mov     esi, [esp+1F0h+var_1D0]
0x9A7863: push    edx
0x9A7864: push    esi
0x9A7865: push    esi
0x9A7866: call    D3DXMatrixMultiply_0
0x9A786B: lea     eax, [esp+1F0h+var_180]
0x9A786F: push    eax
0x9A7870: push    esi
0x9A7871: push    esi
0x9A7872: call    D3DXMatrixMultiply_0
0x9A7877: cmp     [esp+1F0h+var_1D5], 0
0x9A787C: jz      short loc_9A7887
0x9A787E: push    esi
0x9A787F: push    0
0x9A7881: push    esi
0x9A7882: call    D3DXMatrixInverse_0
0x9A7887: cmp     [esp+1F0h+var_1D6], 0
0x9A788C: jz      loc_9A745B
0x9A7892: push    esi
0x9A7893: push    esi
0x9A7894: call    D3DXMatrixTranspose_0
0x9A7899: mov     eax, 9
0x9A789E: pop     edi
0x9A789F: pop     esi
0x9A78A0: pop     ebx
0x9A78A1: mov     esp, ebp
0x9A78A3: pop     ebp
0x9A78A4: retn    20h ; ' '
0x9A78A7: mov     ecx, [ebp+arg_10]; jumptable 009A73EA cases 37-40
0x9A78AA: mov     ecx, [ecx+20h]
0x9A78AD: xor     eax, eax
0x9A78AF: test    ecx, ecx
0x9A78B1: mov     byte ptr [esp+1F0h+var_1D4], al
0x9A78B5: mov     byte ptr [esp+1F0h+var_1D0], al
0x9A78B9: jz      short loc_9A78EE
0x9A78BB: mov     edx, [ecx+20h]
0x9A78BE: mov     ecx, [edx]
0x9A78C0: test    ecx, ecx
0x9A78C2: jz      short loc_9A78EE
0x9A78C4: mov     ecx, [ecx+0Ch]
0x9A78C7: test    ecx, ecx
0x9A78C9: jz      short loc_9A78EE
0x9A78CB: call    sub_76C710
0x9A78D0: cmp     ebx, 26h ; '&'
0x9A78D3: mov     cl, 1
0x9A78D5: jz      short loc_9A78DC
0x9A78D7: cmp     ebx, 28h ; '('
0x9A78DA: jnz     short loc_9A78E0
0x9A78DC: mov     byte ptr [esp+1F0h+var_1D4], cl
0x9A78E0: cmp     ebx, 27h ; '''
0x9A78E3: jz      short loc_9A78EA
0x9A78E5: cmp     ebx, 28h ; '('
0x9A78E8: jnz     short loc_9A78EE
0x9A78EA: mov     byte ptr [esp+1F0h+var_1D0], cl
0x9A78EE: mov     ecx, [esp+1F0h+var_1D0]
0x9A78F2: mov     edx, [esp+1F0h+var_1D4]
0x9A78F6: push    ecx
0x9A78F7: push    edx
0x9A78F8: push    eax
0x9A78F9: mov     eax, [ebp+arg_0]
0x9A78FC: shl     eax, 6
0x9A78FF: add     eax, offset flt_BAA9E0
0x9A7904: push    eax
0x9A7905: call    sub_9A5510
0x9A790A: add     esp, 10h
0x9A790D: mov     eax, 9
0x9A7912: pop     edi
0x9A7913: pop     esi
0x9A7914: pop     ebx
0x9A7915: mov     esp, ebp
0x9A7917: pop     ebp
0x9A7918: retn    20h ; ' '
0x9A791B: mov     ecx, [ebp+arg_10]; jumptable 009A73EA cases 41-44
0x9A791E: mov     ecx, [ecx+20h]
0x9A7921: xor     eax, eax
0x9A7923: test    ecx, ecx
0x9A7925: mov     byte ptr [esp+1F0h+var_1D0], al
0x9A7929: mov     byte ptr [esp+1F0h+var_1D4], al
0x9A792D: jz      short loc_9A7963
0x9A792F: mov     edx, [ecx+20h]
0x9A7932: mov     ecx, [edx+14h]
0x9A7935: test    ecx, ecx
0x9A7937: jz      short loc_9A7963
0x9A7939: mov     ecx, [ecx+0Ch]
0x9A793C: test    ecx, ecx
0x9A793E: jz      short loc_9A7963
0x9A7940: call    sub_76C710
0x9A7945: cmp     ebx, 2Ah ; '*'
0x9A7948: mov     cl, 1
0x9A794A: jz      short loc_9A7951
0x9A794C: cmp     ebx, 2Ch ; ','
0x9A794F: jnz     short loc_9A7955
0x9A7951: mov     byte ptr [esp+1F0h+var_1D0], cl
0x9A7955: cmp     ebx, 2Bh ; '+'
0x9A7958: jz      short loc_9A795F
0x9A795A: cmp     ebx, 2Ch ; ','
0x9A795D: jnz     short loc_9A7963
0x9A795F: mov     byte ptr [esp+1F0h+var_1D4], cl
0x9A7963: mov     ecx, [esp+1F0h+var_1D4]
0x9A7967: mov     edx, [esp+1F0h+var_1D0]
0x9A796B: jmp     short loc_9A78F6
0x9A796D: mov     ecx, [ebp+arg_10]; jumptable 009A73EA cases 45-48
0x9A7970: mov     ecx, [ecx+20h]
0x9A7973: xor     eax, eax
0x9A7975: test    ecx, ecx
0x9A7977: mov     byte ptr [esp+1F0h+var_1D0], al
0x9A797B: mov     byte ptr [esp+1F0h+var_1D4], al
0x9A797F: jz      short loc_9A79B5
0x9A7981: mov     edx, [ecx+20h]
0x9A7984: mov     ecx, [edx+8]
0x9A7987: test    ecx, ecx
0x9A7989: jz      short loc_9A79B5
0x9A798B: mov     ecx, [ecx+0Ch]
0x9A798E: test    ecx, ecx
0x9A7990: jz      short loc_9A79B5
0x9A7992: call    sub_76C710
0x9A7997: cmp     ebx, 2Eh ; '.'
0x9A799A: mov     cl, 1
0x9A799C: jz      short loc_9A79A3
0x9A799E: cmp     ebx, 30h ; '0'
0x9A79A1: jnz     short loc_9A79A7
0x9A79A3: mov     byte ptr [esp+1F0h+var_1D0], cl
0x9A79A7: cmp     ebx, 2Fh ; '/'
0x9A79AA: jz      short loc_9A79B1
0x9A79AC: cmp     ebx, 30h ; '0'
0x9A79AF: jnz     short loc_9A79B5
0x9A79B1: mov     byte ptr [esp+1F0h+var_1D4], cl
0x9A79B5: mov     ecx, [esp+1F0h+var_1D4]
0x9A79B9: mov     edx, [esp+1F0h+var_1D0]
0x9A79BD: jmp     loc_9A78F6
0x9A79C2: mov     ecx, [ebp+arg_10]; jumptable 009A73EA cases 49-52
0x9A79C5: mov     ecx, [ecx+20h]
0x9A79C8: xor     eax, eax
0x9A79CA: test    ecx, ecx
0x9A79CC: mov     byte ptr [esp+1F0h+var_1D0], al
0x9A79D0: mov     byte ptr [esp+1F0h+var_1D4], al
0x9A79D4: jz      short loc_9A7A0A
0x9A79D6: mov     edx, [ecx+20h]
0x9A79D9: mov     ecx, [edx+0Ch]
0x9A79DC: test    ecx, ecx
0x9A79DE: jz      short loc_9A7A0A
0x9A79E0: mov     ecx, [ecx+0Ch]
0x9A79E3: test    ecx, ecx
0x9A79E5: jz      short loc_9A7A0A
0x9A79E7: call    sub_76C710
0x9A79EC: cmp     ebx, 32h ; '2'
0x9A79EF: mov     cl, 1
0x9A79F1: jz      short loc_9A79F8
0x9A79F3: cmp     ebx, 34h ; '4'
0x9A79F6: jnz     short loc_9A79FC
0x9A79F8: mov     byte ptr [esp+1F0h+var_1D0], cl
0x9A79FC: cmp     ebx, 33h ; '3'
0x9A79FF: jz      short loc_9A7A06
0x9A7A01: cmp     ebx, 34h ; '4'
0x9A7A04: jnz     short loc_9A7A0A
0x9A7A06: mov     byte ptr [esp+1F0h+var_1D4], cl
0x9A7A0A: mov     ecx, [esp+1F0h+var_1D4]
0x9A7A0E: mov     edx, [esp+1F0h+var_1D0]
0x9A7A12: jmp     loc_9A78F6
0x9A7A17: mov     ecx, [ebp+arg_10]; jumptable 009A73EA cases 53-56
0x9A7A1A: mov     ecx, [ecx+20h]
0x9A7A1D: xor     eax, eax
0x9A7A1F: test    ecx, ecx
0x9A7A21: mov     byte ptr [esp+1F0h+var_1D0], al
0x9A7A25: mov     byte ptr [esp+1F0h+var_1D4], al
0x9A7A29: jz      short loc_9A7A5F
0x9A7A2B: mov     edx, [ecx+20h]
0x9A7A2E: mov     ecx, [edx+10h]
0x9A7A31: test    ecx, ecx
0x9A7A33: jz      short loc_9A7A5F
0x9A7A35: mov     ecx, [ecx+0Ch]
0x9A7A38: test    ecx, ecx
0x9A7A3A: jz      short loc_9A7A5F
0x9A7A3C: call    sub_76C710
0x9A7A41: cmp     ebx, 36h ; '6'
0x9A7A44: mov     cl, 1
0x9A7A46: jz      short loc_9A7A4D
0x9A7A48: cmp     ebx, 38h ; '8'
0x9A7A4B: jnz     short loc_9A7A51
0x9A7A4D: mov     byte ptr [esp+1F0h+var_1D0], cl
0x9A7A51: cmp     ebx, 37h ; '7'
0x9A7A54: jz      short loc_9A7A5B
0x9A7A56: cmp     ebx, 38h ; '8'
0x9A7A59: jnz     short loc_9A7A5F
0x9A7A5B: mov     byte ptr [esp+1F0h+var_1D4], cl
0x9A7A5F: mov     ecx, [esp+1F0h+var_1D4]
0x9A7A63: mov     edx, [esp+1F0h+var_1D0]
0x9A7A67: jmp     loc_9A78F6
0x9A7A6C: mov     ecx, [ebp+arg_10]; jumptable 009A73EA cases 57-60
0x9A7A6F: mov     ecx, [ecx+20h]
0x9A7A72: xor     eax, eax
0x9A7A74: test    ecx, ecx
0x9A7A76: mov     byte ptr [esp+1F0h+var_1D0], al
0x9A7A7A: mov     byte ptr [esp+1F0h+var_1D4], al
0x9A7A7E: jz      short loc_9A7AB4
0x9A7A80: mov     edx, [ecx+20h]
0x9A7A83: mov     ecx, [edx+14h]
0x9A7A86: test    ecx, ecx
0x9A7A88: jz      short loc_9A7AB4
0x9A7A8A: mov     ecx, [ecx+0Ch]
0x9A7A8D: test    ecx, ecx
0x9A7A8F: jz      short loc_9A7AB4
0x9A7A91: call    sub_76C710
0x9A7A96: cmp     ebx, 3Ah ; ':'
0x9A7A99: mov     cl, 1
0x9A7A9B: jz      short loc_9A7AA2
0x9A7A9D: cmp     ebx, 3Ch ; '<'
0x9A7AA0: jnz     short loc_9A7AA6
0x9A7AA2: mov     byte ptr [esp+1F0h+var_1D0], cl
0x9A7AA6: cmp     ebx, 3Bh ; ';'
0x9A7AA9: jz      short loc_9A7AB0
0x9A7AAB: cmp     ebx, 3Ch ; '<'
0x9A7AAE: jnz     short loc_9A7AB4
0x9A7AB0: mov     byte ptr [esp+1F0h+var_1D4], cl
0x9A7AB4: mov     ecx, [esp+1F0h+var_1D4]
0x9A7AB8: mov     edx, [esp+1F0h+var_1D0]
0x9A7ABC: jmp     loc_9A78F6
0x9A7AC1: mov     ecx, [ebp+arg_10]; jumptable 009A73EA cases 61-64
0x9A7AC4: mov     ecx, [ecx+20h]
0x9A7AC7: xor     eax, eax
0x9A7AC9: test    ecx, ecx
0x9A7ACB: mov     byte ptr [esp+1F0h+var_1D0], al
0x9A7ACF: mov     byte ptr [esp+1F0h+var_1D4], al
0x9A7AD3: jz      short loc_9A7B0D
0x9A7AD5: mov     edx, [esi+18h]
0x9A7AD8: mov     ecx, [ecx+20h]
0x9A7ADB: mov     ecx, [ecx+edx*4+18h]
0x9A7ADF: test    ecx, ecx
0x9A7AE1: jz      short loc_9A7B0D
0x9A7AE3: mov     ecx, [ecx+0Ch]
0x9A7AE6: test    ecx, ecx
0x9A7AE8: jz      short loc_9A7B0D
0x9A7AEA: call    sub_76C710
0x9A7AEF: cmp     ebx, 3Eh ; '>'
0x9A7AF2: mov     cl, 1
0x9A7AF4: jz      short loc_9A7AFB
0x9A7AF6: cmp     ebx, 40h ; '@'
0x9A7AF9: jnz     short loc_9A7AFF
0x9A7AFB: mov     byte ptr [esp+1F0h+var_1D0], cl
0x9A7AFF: cmp     ebx, 3Fh ; '?'
0x9A7B02: jz      short loc_9A7B09
0x9A7B04: cmp     ebx, 40h ; '@'
0x9A7B07: jnz     short loc_9A7B0D
0x9A7B09: mov     byte ptr [esp+1F0h+var_1D4], cl
0x9A7B0D: mov     edx, [esp+1F0h+var_1D4]
0x9A7B11: mov     ecx, [esp+1F0h+var_1D0]
0x9A7B15: push    edx
0x9A7B16: mov     edx, [ebp+arg_0]
0x9A7B19: push    ecx
0x9A7B1A: shl     edx, 6
0x9A7B1D: push    eax
0x9A7B1E: add     edx, offset flt_BAA9E0
0x9A7B24: push    edx
0x9A7B25: jmp     loc_9A7905
0x9A7B2A: mov     eax, [ebp+arg_10]; jumptable 009A73EA cases 65-68
0x9A7B2D: mov     ecx, [eax+20h]
0x9A7B30: xor     edi, edi
0x9A7B32: test    ecx, ecx
0x9A7B34: mov     byte ptr [esp+1F0h+var_1D0], 0
0x9A7B39: mov     byte ptr [esp+1F0h+var_1D4], 0
0x9A7B3E: jz      short loc_9A7B79
0x9A7B40: mov     edx, [esi+18h]
0x9A7B43: push    edx
0x9A7B44: call    sub_6D1920
0x9A7B49: test    eax, eax
0x9A7B4B: jz      short loc_9A7B79
0x9A7B4D: mov     ecx, [eax+0Ch]
0x9A7B50: test    ecx, ecx
0x9A7B52: jz      short loc_9A7B79
0x9A7B54: call    sub_76C710
0x9A7B59: cmp     ebx, 42h ; 'B'
0x9A7B5C: mov     edi, eax
0x9A7B5E: mov     cl, 1
0x9A7B60: jz      short loc_9A7B67
0x9A7B62: cmp     ebx, 44h ; 'D'
0x9A7B65: jnz     short loc_9A7B6B
0x9A7B67: mov     byte ptr [esp+1F0h+var_1D0], cl
0x9A7B6B: cmp     ebx, 43h ; 'C'
0x9A7B6E: jz      short loc_9A7B75
0x9A7B70: cmp     ebx, 44h ; 'D'
0x9A7B73: jnz     short loc_9A7B79
0x9A7B75: mov     byte ptr [esp+1F0h+var_1D4], cl
0x9A7B79: mov     eax, [esp+1F0h+var_1D4]
0x9A7B7D: mov     ecx, [esp+1F0h+var_1D0]
0x9A7B81: mov     edx, [ebp+arg_0]
0x9A7B84: push    eax
0x9A7B85: push    ecx
0x9A7B86: shl     edx, 6
0x9A7B89: push    edi
0x9A7B8A: add     edx, offset flt_BAA9E0
0x9A7B90: push    edx
0x9A7B91: jmp     loc_9A7905
0x9A7B96: mov     eax, [ebp+arg_10]; jumptable 009A73EA case 73
0x9A7B99: mov     ecx, [eax+10h]
0x9A7B9C: test    ecx, ecx
0x9A7B9E: jz      def_9A73EA; jumptable 009A73EA default case, cases 33-36,69-72,78-81
0x9A7BA4: fld     dword ptr [ecx+28h]
0x9A7BA7: mov     eax, [ebp+arg_0]
0x9A7BAA: shl     eax, 4
0x9A7BAD: fstp    dword ptr [eax+0BAAA70h]
0x9A7BB3: fld     dword ptr [ecx+2Ch]
0x9A7BB6: fstp    dword ptr [eax+0BAAA74h]
0x9A7BBC: fld     dword ptr [ecx+30h]
0x9A7BBF: fstp    dword ptr [eax+0BAAA78h]
0x9A7BC5: fld     dword ptr [ecx+50h]
0x9A7BC8: fstp    dword ptr [eax+0BAAA7Ch]
0x9A7BCE: mov     eax, 0Ah
0x9A7BD3: pop     edi
0x9A7BD4: pop     esi
0x9A7BD5: pop     ebx
0x9A7BD6: mov     esp, ebp
0x9A7BD8: pop     ebp
0x9A7BD9: retn    20h ; ' '
0x9A7BDC: mov     ecx, [ebp+arg_10]; jumptable 009A73EA case 74
0x9A7BDF: mov     ecx, [ecx+10h]
0x9A7BE2: test    ecx, ecx
0x9A7BE4: jz      def_9A73EA; jumptable 009A73EA default case, cases 33-36,69-72,78-81
0x9A7BEA: fld     dword ptr [ecx+1Ch]
0x9A7BED: mov     eax, [ebp+arg_0]
0x9A7BF0: shl     eax, 4
0x9A7BF3: fstp    dword ptr [eax+0BAAA70h]
0x9A7BF9: fld     dword ptr [ecx+20h]
0x9A7BFC: fstp    dword ptr [eax+0BAAA74h]
0x9A7C02: fld     dword ptr [ecx+24h]
0x9A7C05: fstp    dword ptr [eax+0BAAA78h]
0x9A7C0B: fld     dword ptr [ecx+50h]
0x9A7C0E: fstp    dword ptr [eax+0BAAA7Ch]
0x9A7C14: mov     eax, 0Ah
0x9A7C19: pop     edi
0x9A7C1A: pop     esi
0x9A7C1B: pop     ebx
0x9A7C1C: mov     esp, ebp
0x9A7C1E: pop     ebp
0x9A7C1F: retn    20h ; ' '
0x9A7C22: mov     edx, [ebp+arg_10]; jumptable 009A73EA case 75
0x9A7C25: mov     ecx, [edx+10h]
0x9A7C28: test    ecx, ecx
0x9A7C2A: jz      def_9A73EA; jumptable 009A73EA default case, cases 33-36,69-72,78-81
0x9A7C30: fld     dword ptr [ecx+34h]
0x9A7C33: mov     eax, [ebp+arg_0]
0x9A7C36: shl     eax, 4
0x9A7C39: fstp    dword ptr [eax+0BAAA70h]
0x9A7C3F: fld     dword ptr [ecx+38h]
0x9A7C42: fstp    dword ptr [eax+0BAAA74h]
0x9A7C48: fld     dword ptr [ecx+3Ch]
0x9A7C4B: fstp    dword ptr [eax+0BAAA78h]
0x9A7C51: fld     dword ptr [ecx+50h]
0x9A7C54: fstp    dword ptr [eax+0BAAA7Ch]
0x9A7C5A: mov     eax, 0Ah
0x9A7C5F: pop     edi
0x9A7C60: pop     esi
0x9A7C61: pop     ebx
0x9A7C62: mov     esp, ebp
0x9A7C64: pop     ebp
0x9A7C65: retn    20h ; ' '
0x9A7C68: mov     eax, [ebp+arg_10]; jumptable 009A73EA case 76
0x9A7C6B: mov     ecx, [eax+10h]
0x9A7C6E: test    ecx, ecx
0x9A7C70: jz      def_9A73EA; jumptable 009A73EA default case, cases 33-36,69-72,78-81
0x9A7C76: fld     dword ptr [ecx+40h]
0x9A7C79: mov     eax, [ebp+arg_0]
0x9A7C7C: shl     eax, 4
0x9A7C7F: fstp    dword ptr [eax+0BAAA70h]
0x9A7C85: fld     dword ptr [ecx+44h]
0x9A7C88: fstp    dword ptr [eax+0BAAA74h]
0x9A7C8E: fld     dword ptr [ecx+48h]
0x9A7C91: fstp    dword ptr [eax+0BAAA78h]
0x9A7C97: fld     dword ptr [ecx+50h]
0x9A7C9A: fstp    dword ptr [eax+0BAAA7Ch]
0x9A7CA0: mov     eax, 0Ah
0x9A7CA5: pop     edi
0x9A7CA6: pop     esi
0x9A7CA7: pop     ebx
0x9A7CA8: mov     esp, ebp
0x9A7CAA: pop     ebp
0x9A7CAB: retn    20h ; ' '
0x9A7CAE: mov     ecx, [ebp+arg_10]; jumptable 009A73EA case 77
0x9A7CB1: mov     ecx, [ecx+10h]
0x9A7CB4: test    ecx, ecx
0x9A7CB6: jz      def_9A73EA; jumptable 009A73EA default case, cases 33-36,69-72,78-81
0x9A7CBC: fld     dword ptr [ecx+4Ch]
0x9A7CBF: mov     eax, [ebp+arg_0]
0x9A7CC2: shl     eax, 4
0x9A7CC5: fstp    dword ptr [eax+0BAAA70h]
0x9A7CCB: fld     dword ptr [ecx+4Ch]
0x9A7CCE: fstp    dword ptr [eax+0BAAA74h]
0x9A7CD4: fld     dword ptr [ecx+4Ch]
0x9A7CD7: fstp    dword ptr [eax+0BAAA78h]
0x9A7CDD: fld     dword ptr [ecx+4Ch]
0x9A7CE0: fstp    dword ptr [eax+0BAAA7Ch]
0x9A7CE6: mov     eax, 0Ah
0x9A7CEB: pop     edi
0x9A7CEC: pop     esi
0x9A7CED: pop     ebx
0x9A7CEE: mov     esp, ebp
0x9A7CF0: pop     ebp
0x9A7CF1: retn    20h ; ' '
0x9A7CF4: mov     edx, off_B329E4; jumptable 009A73EA cases 82-86
0x9A7CFA: mov     ecx, [ebp+arg_8]
0x9A7CFD: push    edx
0x9A7CFE: call    NiObjectNET_GetExtraData
0x9A7D03: test    eax, eax
0x9A7D05: jnz     short loc_9A7D15
0x9A7D07: mov     eax, 80000010h
0x9A7D0C: pop     edi
0x9A7D0D: pop     esi
0x9A7D0E: pop     ebx
0x9A7D0F: mov     esp, ebp
0x9A7D11: pop     ebp
0x9A7D12: retn    20h ; ' '
0x9A7D15: fld     dword ptr [eax+0Ch]
0x9A7D18: lea     eax, [ebx-52h]; switch 5 cases
0x9A7D1B: cmp     eax, 4
0x9A7D1E: fstp    [esp+1F0h+var_1D0]
0x9A7D22: ja      def_9A73EA; jumptable 009A73EA default case, cases 33-36,69-72,78-81
0x9A7D28: jmp     ds:jpt_9A7D28[eax*4]; switch jump
0x9A7D2F: fld     [esp+1F0h+var_1D0]; jumptable 009A7D28 case 82
0x9A7D33: mov     eax, [ebp+arg_0]
0x9A7D36: shl     eax, 4
0x9A7D39: fst     dword ptr [eax+0BAAA70h]
0x9A7D3F: fst     dword ptr [eax+0BAAA74h]
0x9A7D45: fst     dword ptr [eax+0BAAA78h]
0x9A7D4B: fstp    dword ptr [eax+0BAAA7Ch]
0x9A7D51: mov     eax, 7
0x9A7D56: pop     edi
0x9A7D57: pop     esi
0x9A7D58: pop     ebx
0x9A7D59: mov     esp, ebp
0x9A7D5B: pop     ebp
0x9A7D5C: retn    20h ; ' '
0x9A7D5F: fld     [esp+1F0h+var_1D0]; jumptable 009A7D28 case 83
0x9A7D63: call    __CIsin
0x9A7D68: fstp    [esp+1F0h+var_1D4]
0x9A7D6C: fld     [esp+1F0h+var_1D4]
0x9A7D70: fstp    [esp+1F0h+var_1D4]
0x9A7D74: fld     [esp+1F0h+var_1D4]
0x9A7D78: jmp     short loc_9A7D33
0x9A7D7A: fld     [esp+1F0h+var_1D0]; jumptable 009A7D28 case 84
0x9A7D7E: call    __CIcos
0x9A7D83: fstp    [esp+1F0h+var_1D4]
0x9A7D87: fld     [esp+1F0h+var_1D4]
0x9A7D8B: fstp    [esp+1F0h+var_1D4]
0x9A7D8F: fld     [esp+1F0h+var_1D4]
0x9A7D93: jmp     short loc_9A7D33
0x9A7D95: fld     [esp+1F0h+var_1D0]; jumptable 009A7D28 case 85
0x9A7D99: call    __CItan
0x9A7D9E: fstp    [esp+1F0h+var_1D4]
0x9A7DA2: fld     [esp+1F0h+var_1D4]
0x9A7DA6: fstp    [esp+1F0h+var_1D4]
0x9A7DAA: fld     [esp+1F0h+var_1D4]
0x9A7DAE: jmp     short loc_9A7D33
0x9A7DB0: mov     esi, [ebp+arg_0]; jumptable 009A7D28 case 86
0x9A7DB3: fld     [esp+1F0h+var_1D0]
0x9A7DB7: shl     esi, 4
0x9A7DBA: fst     dword ptr [esi+0BAAA70h]
0x9A7DC0: call    __CIsin
0x9A7DC5: fstp    [esp+1F0h+var_1D4]
0x9A7DC9: fld     [esp+1F0h+var_1D4]
0x9A7DCD: fstp    dword ptr [esi+0BAAA74h]
0x9A7DD3: fld     [esp+1F0h+var_1D0]
0x9A7DD7: call    __CIcos
0x9A7DDC: fstp    [esp+1F0h+var_1D4]
0x9A7DE0: fld     [esp+1F0h+var_1D4]
0x9A7DE4: fstp    dword ptr [esi+0BAAA78h]
0x9A7DEA: fld     [esp+1F0h+var_1D0]
0x9A7DEE: call    __CItan
0x9A7DF3: fstp    [esp+1F0h+var_1D4]
0x9A7DF7: fld     [esp+1F0h+var_1D4]
0x9A7DFB: mov     eax, 7
0x9A7E00: fstp    dword ptr [esi+0BAAA7Ch]
0x9A7E06: pop     edi
0x9A7E07: pop     esi
0x9A7E08: pop     ebx
0x9A7E09: mov     esp, ebp
0x9A7E0B: pop     ebp
0x9A7E0C: retn    20h ; ' '
0x9A7E0F: fldz; jumptable 009A73EA case 87
0x9A7E11: mov     esi, [ebp+arg_0]
0x9A7E14: mov     eax, [ebp+arg_14]
0x9A7E17: shl     esi, 4
0x9A7E1A: test    eax, eax
0x9A7E1C: fst     dword ptr [esi+0BAAA70h]
0x9A7E22: fst     dword ptr [esi+0BAAA74h]
0x9A7E28: fstp    dword ptr [esi+0BAAA78h]
0x9A7E2E: fld1
0x9A7E30: fstp    dword ptr [esi+0BAAA7Ch]
0x9A7E36: jz      short loc_9A7EA4
0x9A7E38: mov     edi, [eax+0Ch]
0x9A7E3B: test    edi, edi
0x9A7E3D: jz      short loc_9A7EA4
0x9A7E3F: mov     eax, [edi+4]
0x9A7E42: mov     edi, [edi]
0x9A7E44: push    eax
0x9A7E45: push    offset dword_B40224
0x9A7E4A: call    NiRTTI_Cast
0x9A7E4F: add     esp, 8
0x9A7E52: test    eax, eax
0x9A7E54: jz      short loc_9A7EA0
0x9A7E56: fld     dword ptr [eax+0DCh]
0x9A7E5C: push    ecx
0x9A7E5D: lea     ecx, [esp+1F4h+var_1CC]
0x9A7E61: fstp    [esp+1F4h+var_1F4]; float
0x9A7E64: push    ecx; int
0x9A7E65: lea     ecx, [eax+0E0h]
0x9A7E6B: call    sub_775F60
0x9A7E70: fld     [esp+1F0h+var_1CC]
0x9A7E74: fadd    dword ptr [esi+0BAAA70h]
0x9A7E7A: fstp    dword ptr [esi+0BAAA70h]
0x9A7E80: fld     [esp+1F0h+var_1C8]
0x9A7E84: fadd    dword ptr [esi+0BAAA74h]
0x9A7E8A: fstp    dword ptr [esi+0BAAA74h]
0x9A7E90: fld     dword ptr [esi+0BAAA78h]
0x9A7E96: fadd    [esp+1F0h+var_1C4]
0x9A7E9A: fstp    dword ptr [esi+0BAAA78h]
0x9A7EA0: test    edi, edi
0x9A7EA2: jnz     short loc_9A7E3F
0x9A7EA4: mov     eax, 7
0x9A7EA9: pop     edi
0x9A7EAA: pop     esi
0x9A7EAB: pop     ebx
0x9A7EAC: mov     esp, ebp
0x9A7EAE: pop     ebp
0x9A7EAF: retn    20h ; ' '
0x9A7EB2: pop     edi; jumptable 009A73EA default case, cases 33-36,69-72,78-81
0x9A7EB3: pop     esi
0x9A7EB4: xor     eax, eax
0x9A7EB6: pop     ebx
0x9A7EB7: mov     esp, ebp
0x9A7EB9: pop     ebp
0x9A7EBA: retn    20h ; ' '
