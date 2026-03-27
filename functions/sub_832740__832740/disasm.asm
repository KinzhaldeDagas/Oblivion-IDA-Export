0x832740: push    0FFFFFFFFh
0x832742: push    offset SEH_832740
0x832747: mov     eax, large fs:0
0x83274D: push    eax
0x83274E: sub     esp, 0Ch
0x832751: push    ebx
0x832752: push    ebp
0x832753: push    esi
0x832754: push    edi
0x832755: mov     eax, ds:0B30AACh
0x83275A: xor     eax, esp
0x83275C: push    eax
0x83275D: lea     eax, [esp+2Ch+var_C]
0x832761: mov     large fs:0, eax
0x832767: xor     esi, esi
0x832769: xor     edi, edi
0x83276B: mov     [esp+2Ch+var_14], esi
0x83276F: mov     [esp+2Ch+var_4], edi
0x832773: mov     [esp+2Ch+a3], edi
0x832777: mov     eax, ds:0B459F4h
0x83277C: cmp     eax, edi
0x83277E: mov     ebp, 1
0x832783: mov     byte ptr [esp+2Ch+var_4], 1
0x832788: jz      short loc_832797
0x83278A: mov     esi, eax
0x83278C: cmp     esi, edi
0x83278E: mov     [esp+2Ch+var_14], esi
0x832792: jz      short loc_832797
0x832794: add     [esi+60h], ebp
0x832797: mov     eax, [esi+18h]
0x83279A: or      ebx, 0FFFFFFFFh
0x83279D: cmp     eax, 6
0x8327A0: jnb     loc_832A3A
0x8327A6: lea     eax, [esp+2Ch+var_10]
0x8327AA: push    eax
0x8327AB: call    sub_772630
0x8327B0: add     esp, 4
0x8327B3: mov     eax, [eax]
0x8327B5: test    eax, eax
0x8327B7: jz      short loc_8327C2
0x8327B9: mov     edi, eax
0x8327BB: add     [edi+5Ch], ebp
0x8327BE: mov     [esp+2Ch+a3], edi
0x8327C2: mov     eax, [esp+2Ch+var_10]
0x8327C6: test    eax, eax
0x8327C8: mov     byte ptr [esp+2Ch+var_4], 1
0x8327CD: jz      short loc_8327E1
0x8327CF: add     [eax+5Ch], ebx
0x8327D2: mov     ecx, eax
0x8327D4: add     eax, 5Ch ; '\'
0x8327D7: cmp     dword ptr [eax], 0
0x8327DA: jnz     short loc_8327E1
0x8327DC: call    sub_772560
0x8327E1: push    2
0x8327E3: push    1
0x8327E5: push    0
0x8327E7: push    edi
0x8327E8: call    sub_801110
0x8327ED: mov     ecx, [esi+14h]
0x8327F0: add     esp, 10h
0x8327F3: push    edi; a3
0x8327F4: push    ecx; a2
0x8327F5: mov     ecx, esi; this
0x8327F7: call    sub_760010
0x8327FC: lea     edx, [esp+2Ch+var_10]
0x832800: push    edx
0x832801: call    sub_772630
0x832806: add     esp, 4
0x832809: mov     ebp, eax
0x83280B: cmp     edi, [ebp+0]
0x83280E: mov     byte ptr [esp+2Ch+var_4], 3
0x832813: jz      short loc_832834
0x832815: test    edi, edi
0x832817: jz      short loc_832825
0x832819: add     [edi+5Ch], ebx
0x83281C: jnz     short loc_832825
0x83281E: mov     ecx, edi
0x832820: call    sub_772560
0x832825: mov     edi, [ebp+0]
0x832828: test    edi, edi
0x83282A: mov     [esp+2Ch+a3], edi
0x83282E: jz      short loc_832834
0x832830: add     dword ptr [edi+5Ch], 1
0x832834: mov     eax, [esp+2Ch+var_10]
0x832838: test    eax, eax
0x83283A: mov     byte ptr [esp+2Ch+var_4], 1
0x83283F: jz      short loc_832853
0x832841: add     [eax+5Ch], ebx
0x832844: mov     ecx, eax
0x832846: add     eax, 5Ch ; '\'
0x832849: cmp     dword ptr [eax], 0
0x83284C: jnz     short loc_832853
0x83284E: call    sub_772560
0x832853: push    2
0x832855: push    1
0x832857: push    1
0x832859: push    edi
0x83285A: call    sub_801110
0x83285F: add     esp, 10h
0x832862: push    edi; a3
0x832863: push    1; a2
0x832865: mov     ecx, esi; this
0x832867: call    sub_760010
0x83286C: lea     eax, [esp+2Ch+var_10]
0x832870: push    eax
0x832871: call    sub_772630
0x832876: add     esp, 4
0x832879: mov     ebp, eax
0x83287B: cmp     edi, [ebp+0]
0x83287E: mov     byte ptr [esp+2Ch+var_4], 4
0x832883: jz      short loc_8328A4
0x832885: test    edi, edi
0x832887: jz      short loc_832895
0x832889: add     [edi+5Ch], ebx
0x83288C: jnz     short loc_832895
0x83288E: mov     ecx, edi
0x832890: call    sub_772560
0x832895: mov     edi, [ebp+0]
0x832898: test    edi, edi
0x83289A: mov     [esp+2Ch+a3], edi
0x83289E: jz      short loc_8328A4
0x8328A0: add     dword ptr [edi+5Ch], 1
0x8328A4: mov     eax, [esp+2Ch+var_10]
0x8328A8: test    eax, eax
0x8328AA: mov     byte ptr [esp+2Ch+var_4], 1
0x8328AF: jz      short loc_8328C3
0x8328B1: add     [eax+5Ch], ebx
0x8328B4: mov     ecx, eax
0x8328B6: add     eax, 5Ch ; '\'
0x8328B9: cmp     dword ptr [eax], 0
0x8328BC: jnz     short loc_8328C3
0x8328BE: call    sub_772560
0x8328C3: push    2
0x8328C5: push    1
0x8328C7: push    2
0x8328C9: push    edi
0x8328CA: call    sub_801110
0x8328CF: add     esp, 10h
0x8328D2: push    edi; a3
0x8328D3: push    2; a2
0x8328D5: mov     ecx, esi; this
0x8328D7: call    sub_760010
0x8328DC: lea     ecx, [esp+2Ch+var_10]
0x8328E0: push    ecx
0x8328E1: call    sub_772630
0x8328E6: add     esp, 4
0x8328E9: mov     ebp, eax
0x8328EB: cmp     edi, [ebp+0]
0x8328EE: mov     byte ptr [esp+2Ch+var_4], 5
0x8328F3: jz      short loc_832914
0x8328F5: test    edi, edi
0x8328F7: jz      short loc_832905
0x8328F9: add     [edi+5Ch], ebx
0x8328FC: jnz     short loc_832905
0x8328FE: mov     ecx, edi
0x832900: call    sub_772560
0x832905: mov     edi, [ebp+0]
0x832908: test    edi, edi
0x83290A: mov     [esp+2Ch+a3], edi
0x83290E: jz      short loc_832914
0x832910: add     dword ptr [edi+5Ch], 1
0x832914: mov     eax, [esp+2Ch+var_10]
0x832918: test    eax, eax
0x83291A: mov     byte ptr [esp+2Ch+var_4], 1
0x83291F: jz      short loc_832933
0x832921: add     [eax+5Ch], ebx
0x832924: mov     ecx, eax
0x832926: add     eax, 5Ch ; '\'
0x832929: cmp     dword ptr [eax], 0
0x83292C: jnz     short loc_832933
0x83292E: call    sub_772560
0x832933: mov     edx, ds:0B43110h
0x832939: push    edx; a2
0x83293A: mov     ecx, edi; this
0x83293C: call    sub_76C910
0x832941: push    0
0x832943: push    3
0x832945: push    3
0x832947: push    edi
0x832948: call    sub_801110
0x83294D: add     esp, 10h
0x832950: push    edi; a3
0x832951: push    3; a2
0x832953: mov     ecx, esi; this
0x832955: call    sub_760010
0x83295A: lea     eax, [esp+2Ch+var_10]
0x83295E: push    eax
0x83295F: call    sub_772630
0x832964: add     esp, 4
0x832967: mov     ebp, eax
0x832969: cmp     edi, [ebp+0]
0x83296C: mov     byte ptr [esp+2Ch+var_4], 6
0x832971: jz      short loc_832992
0x832973: test    edi, edi
0x832975: jz      short loc_832983
0x832977: add     [edi+5Ch], ebx
0x83297A: jnz     short loc_832983
0x83297C: mov     ecx, edi
0x83297E: call    sub_772560
0x832983: mov     edi, [ebp+0]
0x832986: test    edi, edi
0x832988: mov     [esp+2Ch+a3], edi
0x83298C: jz      short loc_832992
0x83298E: add     dword ptr [edi+5Ch], 1
0x832992: mov     eax, [esp+2Ch+var_10]
0x832996: test    eax, eax
0x832998: mov     byte ptr [esp+2Ch+var_4], 1
0x83299D: jz      short loc_8329B1
0x83299F: add     [eax+5Ch], ebx
0x8329A2: mov     ecx, eax
0x8329A4: add     eax, 5Ch ; '\'
0x8329A7: cmp     dword ptr [eax], 0
0x8329AA: jnz     short loc_8329B1
0x8329AC: call    sub_772560
0x8329B1: push    2
0x8329B3: push    1
0x8329B5: push    4
0x8329B7: push    edi
0x8329B8: call    sub_801110
0x8329BD: add     esp, 10h
0x8329C0: push    edi; a3
0x8329C1: push    4; a2
0x8329C3: mov     ecx, esi; this
0x8329C5: call    sub_760010
0x8329CA: lea     ecx, [esp+2Ch+var_10]
0x8329CE: push    ecx
0x8329CF: call    sub_772630
0x8329D4: add     esp, 4
0x8329D7: mov     ebp, eax
0x8329D9: cmp     edi, [ebp+0]
0x8329DC: mov     byte ptr [esp+2Ch+var_4], 7
0x8329E1: jz      short loc_832A02
0x8329E3: test    edi, edi
0x8329E5: jz      short loc_8329F3
0x8329E7: add     [edi+5Ch], ebx
0x8329EA: jnz     short loc_8329F3
0x8329EC: mov     ecx, edi
0x8329EE: call    sub_772560
0x8329F3: mov     edi, [ebp+0]
0x8329F6: test    edi, edi
0x8329F8: mov     [esp+2Ch+a3], edi
0x8329FC: jz      short loc_832A02
0x8329FE: add     dword ptr [edi+5Ch], 1
0x832A02: mov     eax, [esp+2Ch+var_10]
0x832A06: test    eax, eax
0x832A08: mov     byte ptr [esp+2Ch+var_4], 1
0x832A0D: jz      short loc_832A21
0x832A0F: add     [eax+5Ch], ebx
0x832A12: mov     ecx, eax
0x832A14: add     eax, 5Ch ; '\'
0x832A17: cmp     dword ptr [eax], 0
0x832A1A: jnz     short loc_832A21
0x832A1C: call    sub_772560
0x832A21: push    0
0x832A23: push    3
0x832A25: push    5
0x832A27: push    edi
0x832A28: call    sub_801110
0x832A2D: add     esp, 10h
0x832A30: push    edi; a3
0x832A31: push    5; a2
0x832A33: mov     ecx, esi; this
0x832A35: call    sub_760010
0x832A3A: mov     eax, ds:0B453E0h
0x832A3F: mov     ebp, [esi+58h]
0x832A42: cmp     ebp, eax
0x832A44: mov     ebx, eax
0x832A46: jz      short loc_832A7A
0x832A48: test    ebp, ebp
0x832A4A: jz      short loc_832A69
0x832A4C: lea     edx, [ebp+4]
0x832A4F: push    edx; lpAddend
0x832A50: call    dword ptr ds:0A2807Ch
0x832A56: test    eax, eax
0x832A58: jnz     short loc_832A69
0x832A5A: test    ebp, ebp
0x832A5C: jz      short loc_832A69
0x832A5E: mov     eax, [ebp+0]
0x832A61: mov     edx, [eax]
0x832A63: push    1
0x832A65: mov     ecx, ebp
0x832A67: call    edx
0x832A69: test    ebx, ebx
0x832A6B: mov     [esi+58h], ebx
0x832A6E: jz      short loc_832A7A
0x832A70: add     ebx, 4
0x832A73: push    ebx; lpAddend
0x832A74: call    dword ptr ds:0A28078h
0x832A7A: mov     eax, ds:0B451D8h
0x832A7F: mov     ebp, [esi+44h]
0x832A82: cmp     ebp, eax
0x832A84: mov     ebx, eax
0x832A86: jz      short loc_832ABA
0x832A88: test    ebp, ebp
0x832A8A: jz      short loc_832AA9
0x832A8C: lea     eax, [ebp+4]
0x832A8F: push    eax; lpAddend
0x832A90: call    dword ptr ds:0A2807Ch
0x832A96: test    eax, eax
0x832A98: jnz     short loc_832AA9
0x832A9A: test    ebp, ebp
0x832A9C: jz      short loc_832AA9
0x832A9E: mov     edx, [ebp+0]
0x832AA1: mov     eax, [edx]
0x832AA3: push    1
0x832AA5: mov     ecx, ebp
0x832AA7: call    eax
0x832AA9: test    ebx, ebx
0x832AAB: mov     [esi+44h], ebx
0x832AAE: jz      short loc_832ABA
0x832AB0: add     ebx, 4
0x832AB3: push    ebx; lpAddend
0x832AB4: call    dword ptr ds:0A28078h
0x832ABA: cmp     dword ptr [esi+30h], 0
0x832ABE: jnz     short loc_832AC8
0x832AC0: call    sub_772DF0
0x832AC5: mov     [esi+30h], eax
0x832AC8: mov     ecx, [esi+30h]
0x832ACB: push    0
0x832ACD: push    1
0x832ACF: push    1Bh
0x832AD1: call    sub_772CD0
0x832AD6: cmp     dword ptr [esi+30h], 0
0x832ADA: jnz     short loc_832AE4
0x832ADC: call    sub_772DF0
0x832AE1: mov     [esi+30h], eax
0x832AE4: mov     ecx, [esi+30h]
0x832AE7: push    0
0x832AE9: push    2
0x832AEB: push    13h
0x832AED: call    sub_772CD0
0x832AF2: cmp     dword ptr [esi+30h], 0
0x832AF6: jnz     short loc_832B00
0x832AF8: call    sub_772DF0
0x832AFD: mov     [esi+30h], eax
0x832B00: mov     ecx, [esi+30h]
0x832B03: push    0
0x832B05: push    2
0x832B07: push    14h
0x832B09: call    sub_772CD0
0x832B0E: cmp     dword ptr [esi+30h], 0
0x832B12: jnz     short loc_832B1C
0x832B14: call    sub_772DF0
0x832B19: mov     [esi+30h], eax
0x832B1C: mov     ecx, [esi+30h]
0x832B1F: push    0
0x832B21: push    0
0x832B23: push    0Fh
0x832B25: call    sub_772CD0
0x832B2A: cmp     dword ptr [esi+30h], 0
0x832B2E: jnz     short loc_832B38
0x832B30: call    sub_772DF0
0x832B35: mov     [esi+30h], eax
0x832B38: mov     ecx, [esi+30h]
0x832B3B: push    0
0x832B3D: push    1
0x832B3F: push    7
0x832B41: call    sub_772CD0
0x832B46: cmp     dword ptr [esi+30h], 0
0x832B4A: jnz     short loc_832B54
0x832B4C: call    sub_772DF0
0x832B51: mov     [esi+30h], eax
0x832B54: mov     ecx, [esi+30h]
0x832B57: push    0
0x832B59: push    3
0x832B5B: push    17h
0x832B5D: call    sub_772CD0
0x832B62: cmp     dword ptr [esi+30h], 0
0x832B66: jnz     short loc_832B70
0x832B68: call    sub_772DF0
0x832B6D: mov     [esi+30h], eax
0x832B70: mov     ecx, [esi+30h]
0x832B73: push    0
0x832B75: push    0
0x832B77: push    0Eh
0x832B79: call    sub_772CD0
0x832B7E: cmp     dword ptr [esi+30h], 0
0x832B82: jnz     short loc_832B8C
0x832B84: call    sub_772DF0
0x832B89: mov     [esi+30h], eax
0x832B8C: mov     ecx, [esi+30h]
0x832B8F: push    0
0x832B91: push    0
0x832B93: push    34h ; '4'
0x832B95: call    sub_772CD0
0x832B9A: or      ebx, 0FFFFFFFFh
0x832B9D: cmp     esi, ds:0B459F8h
0x832BA3: mov     dword ptr ds:0B43F74h, 20082h
0x832BAD: mov     dword ptr ds:0B44604h, 108h
0x832BB7: jz      short loc_832BD7
0x832BB9: add     [esi+60h], ebx
0x832BBC: jnz     short loc_832BC5
0x832BBE: mov     ecx, esi
0x832BC0: call    sub_7604D0
0x832BC5: mov     esi, ds:0B459F8h
0x832BCB: test    esi, esi
0x832BCD: mov     [esp+2Ch+var_14], esi
0x832BD1: jz      short loc_832BD7
0x832BD3: add     dword ptr [esi+60h], 1
0x832BD7: cmp     dword ptr [esi+18h], 6
0x832BDB: jnb     loc_832E90
0x832BE1: lea     ecx, [esp+2Ch+var_10]
0x832BE5: push    ecx
0x832BE6: call    sub_772630
0x832BEB: add     esp, 4
0x832BEE: mov     ebp, eax
0x832BF0: cmp     edi, [ebp+0]
0x832BF3: mov     byte ptr [esp+2Ch+var_4], 8
0x832BF8: jz      short loc_832C19
0x832BFA: test    edi, edi
0x832BFC: jz      short loc_832C0A
0x832BFE: add     [edi+5Ch], ebx
0x832C01: jnz     short loc_832C0A
0x832C03: mov     ecx, edi
0x832C05: call    sub_772560
0x832C0A: mov     edi, [ebp+0]
0x832C0D: test    edi, edi
0x832C0F: mov     [esp+2Ch+a3], edi
0x832C13: jz      short loc_832C19
0x832C15: add     dword ptr [edi+5Ch], 1
0x832C19: mov     eax, [esp+2Ch+var_10]
0x832C1D: test    eax, eax
0x832C1F: mov     byte ptr [esp+2Ch+var_4], 1
0x832C24: jz      short loc_832C38
0x832C26: add     [eax+5Ch], ebx
0x832C29: mov     ecx, eax
0x832C2B: add     eax, 5Ch ; '\'
0x832C2E: cmp     dword ptr [eax], 0
0x832C31: jnz     short loc_832C38
0x832C33: call    sub_772560
0x832C38: push    2
0x832C3A: push    1
0x832C3C: push    0
0x832C3E: push    edi
0x832C3F: call    sub_801110
0x832C44: mov     edx, [esi+14h]
0x832C47: add     esp, 10h
0x832C4A: push    edi; a3
0x832C4B: push    edx; a2
0x832C4C: mov     ecx, esi; this
0x832C4E: call    sub_760010
0x832C53: lea     eax, [esp+2Ch+var_10]
0x832C57: push    eax
0x832C58: call    sub_772630
0x832C5D: add     esp, 4
0x832C60: mov     ebp, eax
0x832C62: cmp     edi, [ebp+0]
0x832C65: mov     byte ptr [esp+2Ch+var_4], 9
0x832C6A: jz      short loc_832C8B
0x832C6C: test    edi, edi
0x832C6E: jz      short loc_832C7C
0x832C70: add     [edi+5Ch], ebx
0x832C73: jnz     short loc_832C7C
0x832C75: mov     ecx, edi
0x832C77: call    sub_772560
0x832C7C: mov     edi, [ebp+0]
0x832C7F: test    edi, edi
0x832C81: mov     [esp+2Ch+a3], edi
0x832C85: jz      short loc_832C8B
0x832C87: add     dword ptr [edi+5Ch], 1
0x832C8B: mov     eax, [esp+2Ch+var_10]
0x832C8F: test    eax, eax
0x832C91: mov     byte ptr [esp+2Ch+var_4], 1
0x832C96: jz      short loc_832CAA
0x832C98: add     [eax+5Ch], ebx
0x832C9B: mov     ecx, eax
0x832C9D: add     eax, 5Ch ; '\'
0x832CA0: cmp     dword ptr [eax], 0
0x832CA3: jnz     short loc_832CAA
0x832CA5: call    sub_772560
0x832CAA: push    2
0x832CAC: push    1
0x832CAE: push    1
0x832CB0: push    edi
0x832CB1: call    sub_801110
0x832CB6: add     esp, 10h
0x832CB9: push    edi; a3
0x832CBA: push    1; a2
0x832CBC: mov     ecx, esi; this
0x832CBE: call    sub_760010
0x832CC3: lea     ecx, [esp+2Ch+var_10]
0x832CC7: push    ecx
0x832CC8: call    sub_772630
0x832CCD: add     esp, 4
0x832CD0: mov     ebp, eax
0x832CD2: cmp     edi, [ebp+0]
0x832CD5: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x832CDA: jz      short loc_832CFB
0x832CDC: test    edi, edi
0x832CDE: jz      short loc_832CEC
0x832CE0: add     [edi+5Ch], ebx
0x832CE3: jnz     short loc_832CEC
0x832CE5: mov     ecx, edi
0x832CE7: call    sub_772560
0x832CEC: mov     edi, [ebp+0]
0x832CEF: test    edi, edi
0x832CF1: mov     [esp+2Ch+a3], edi
0x832CF5: jz      short loc_832CFB
0x832CF7: add     dword ptr [edi+5Ch], 1
0x832CFB: mov     eax, [esp+2Ch+var_10]
0x832CFF: test    eax, eax
0x832D01: mov     byte ptr [esp+2Ch+var_4], 1
0x832D06: jz      short loc_832D1A
0x832D08: add     [eax+5Ch], ebx
0x832D0B: mov     ecx, eax
0x832D0D: add     eax, 5Ch ; '\'
0x832D10: cmp     dword ptr [eax], 0
0x832D13: jnz     short loc_832D1A
0x832D15: call    sub_772560
0x832D1A: push    2
0x832D1C: push    1
0x832D1E: push    2
0x832D20: push    edi
0x832D21: call    sub_801110
0x832D26: add     esp, 10h
0x832D29: push    edi; a3
0x832D2A: push    2; a2
0x832D2C: mov     ecx, esi; this
0x832D2E: call    sub_760010
0x832D33: lea     edx, [esp+2Ch+var_10]
0x832D37: push    edx
0x832D38: call    sub_772630
0x832D3D: add     esp, 4
0x832D40: mov     ebp, eax
0x832D42: cmp     edi, [ebp+0]
0x832D45: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x832D4A: jz      short loc_832D6B
0x832D4C: test    edi, edi
0x832D4E: jz      short loc_832D5C
0x832D50: add     [edi+5Ch], ebx
0x832D53: jnz     short loc_832D5C
0x832D55: mov     ecx, edi
0x832D57: call    sub_772560
0x832D5C: mov     edi, [ebp+0]
0x832D5F: test    edi, edi
0x832D61: mov     [esp+2Ch+a3], edi
0x832D65: jz      short loc_832D6B
0x832D67: add     dword ptr [edi+5Ch], 1
0x832D6B: mov     eax, [esp+2Ch+var_10]
0x832D6F: test    eax, eax
0x832D71: mov     byte ptr [esp+2Ch+var_4], 1
0x832D76: jz      short loc_832D8A
0x832D78: add     [eax+5Ch], ebx
0x832D7B: mov     ecx, eax
0x832D7D: add     eax, 5Ch ; '\'
0x832D80: cmp     dword ptr [eax], 0
0x832D83: jnz     short loc_832D8A
0x832D85: call    sub_772560
0x832D8A: mov     eax, ds:0B43110h
0x832D8F: push    eax; a2
0x832D90: mov     ecx, edi; this
0x832D92: call    sub_76C910
0x832D97: push    0
0x832D99: push    3
0x832D9B: push    3
0x832D9D: push    edi
0x832D9E: call    sub_801110
0x832DA3: add     esp, 10h
0x832DA6: push    edi; a3
0x832DA7: push    3; a2
0x832DA9: mov     ecx, esi; this
0x832DAB: call    sub_760010
0x832DB0: lea     ecx, [esp+2Ch+var_10]
0x832DB4: push    ecx
0x832DB5: call    sub_772630
0x832DBA: add     esp, 4
0x832DBD: mov     ebp, eax
0x832DBF: cmp     edi, [ebp+0]
0x832DC2: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x832DC7: jz      short loc_832DE8
0x832DC9: test    edi, edi
0x832DCB: jz      short loc_832DD9
0x832DCD: add     [edi+5Ch], ebx
0x832DD0: jnz     short loc_832DD9
0x832DD2: mov     ecx, edi
0x832DD4: call    sub_772560
0x832DD9: mov     edi, [ebp+0]
0x832DDC: test    edi, edi
0x832DDE: mov     [esp+2Ch+a3], edi
0x832DE2: jz      short loc_832DE8
0x832DE4: add     dword ptr [edi+5Ch], 1
0x832DE8: mov     eax, [esp+2Ch+var_10]
0x832DEC: test    eax, eax
0x832DEE: mov     byte ptr [esp+2Ch+var_4], 1
0x832DF3: jz      short loc_832E07
0x832DF5: add     [eax+5Ch], ebx
0x832DF8: mov     ecx, eax
0x832DFA: add     eax, 5Ch ; '\'
0x832DFD: cmp     dword ptr [eax], 0
0x832E00: jnz     short loc_832E07
0x832E02: call    sub_772560
0x832E07: push    2
0x832E09: push    1
0x832E0B: push    4
0x832E0D: push    edi
0x832E0E: call    sub_801110
0x832E13: add     esp, 10h
0x832E16: push    edi; a3
0x832E17: push    4; a2
0x832E19: mov     ecx, esi; this
0x832E1B: call    sub_760010
0x832E20: lea     edx, [esp+2Ch+var_10]
0x832E24: push    edx
0x832E25: call    sub_772630
0x832E2A: add     esp, 4
0x832E2D: mov     ebp, eax
0x832E2F: cmp     edi, [ebp+0]
0x832E32: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x832E37: jz      short loc_832E58
0x832E39: test    edi, edi
0x832E3B: jz      short loc_832E49
0x832E3D: add     [edi+5Ch], ebx
0x832E40: jnz     short loc_832E49
0x832E42: mov     ecx, edi
0x832E44: call    sub_772560
0x832E49: mov     edi, [ebp+0]
0x832E4C: test    edi, edi
0x832E4E: mov     [esp+2Ch+a3], edi
0x832E52: jz      short loc_832E58
0x832E54: add     dword ptr [edi+5Ch], 1
0x832E58: mov     eax, [esp+2Ch+var_10]
0x832E5C: test    eax, eax
0x832E5E: mov     byte ptr [esp+2Ch+var_4], 1
0x832E63: jz      short loc_832E77
0x832E65: add     [eax+5Ch], ebx
0x832E68: mov     ecx, eax
0x832E6A: add     eax, 5Ch ; '\'
0x832E6D: cmp     dword ptr [eax], 0
0x832E70: jnz     short loc_832E77
0x832E72: call    sub_772560
0x832E77: push    0
0x832E79: push    3
0x832E7B: push    5
0x832E7D: push    edi
0x832E7E: call    sub_801110
0x832E83: add     esp, 10h
0x832E86: push    edi; a3
0x832E87: push    5; a2
0x832E89: mov     ecx, esi; this
0x832E8B: call    sub_760010
0x832E90: mov     eax, ds:0B453E0h
0x832E95: mov     ebp, [esi+58h]
0x832E98: cmp     ebp, eax
0x832E9A: mov     ebx, eax
0x832E9C: jz      short loc_832ED0
0x832E9E: test    ebp, ebp
0x832EA0: jz      short loc_832EBF
0x832EA2: lea     eax, [ebp+4]
0x832EA5: push    eax; lpAddend
0x832EA6: call    dword ptr ds:0A2807Ch
0x832EAC: test    eax, eax
0x832EAE: jnz     short loc_832EBF
0x832EB0: test    ebp, ebp
0x832EB2: jz      short loc_832EBF
0x832EB4: mov     edx, [ebp+0]
0x832EB7: mov     eax, [edx]
0x832EB9: push    1
0x832EBB: mov     ecx, ebp
0x832EBD: call    eax
0x832EBF: test    ebx, ebx
0x832EC1: mov     [esi+58h], ebx
0x832EC4: jz      short loc_832ED0
0x832EC6: add     ebx, 4
0x832EC9: push    ebx; lpAddend
0x832ECA: call    dword ptr ds:0A28078h
0x832ED0: mov     eax, ds:0B451DCh
0x832ED5: mov     ebp, [esi+44h]
0x832ED8: cmp     ebp, eax
0x832EDA: mov     ebx, eax
0x832EDC: jz      short loc_832F10
0x832EDE: test    ebp, ebp
0x832EE0: jz      short loc_832EFF
0x832EE2: lea     ecx, [ebp+4]
0x832EE5: push    ecx; lpAddend
0x832EE6: call    dword ptr ds:0A2807Ch
0x832EEC: test    eax, eax
0x832EEE: jnz     short loc_832EFF
0x832EF0: test    ebp, ebp
0x832EF2: jz      short loc_832EFF
0x832EF4: mov     edx, [ebp+0]
0x832EF7: mov     eax, [edx]
0x832EF9: push    1
0x832EFB: mov     ecx, ebp
0x832EFD: call    eax
0x832EFF: test    ebx, ebx
0x832F01: mov     [esi+44h], ebx
0x832F04: jz      short loc_832F10
0x832F06: add     ebx, 4
0x832F09: push    ebx; lpAddend
0x832F0A: call    dword ptr ds:0A28078h
0x832F10: cmp     dword ptr [esi+30h], 0
0x832F14: jnz     short loc_832F1E
0x832F16: call    sub_772DF0
0x832F1B: mov     [esi+30h], eax
0x832F1E: mov     ecx, [esi+30h]
0x832F21: push    0
0x832F23: push    1
0x832F25: push    1Bh
0x832F27: call    sub_772CD0
0x832F2C: cmp     dword ptr [esi+30h], 0
0x832F30: jnz     short loc_832F3A
0x832F32: call    sub_772DF0
0x832F37: mov     [esi+30h], eax
0x832F3A: mov     ecx, [esi+30h]
0x832F3D: push    0
0x832F3F: push    2
0x832F41: push    13h
0x832F43: call    sub_772CD0
0x832F48: cmp     dword ptr [esi+30h], 0
0x832F4C: jnz     short loc_832F56
0x832F4E: call    sub_772DF0
0x832F53: mov     [esi+30h], eax
0x832F56: mov     ecx, [esi+30h]
0x832F59: push    0
0x832F5B: push    2
0x832F5D: push    14h
0x832F5F: call    sub_772CD0
0x832F64: cmp     dword ptr [esi+30h], 0
0x832F68: jnz     short loc_832F72
0x832F6A: call    sub_772DF0
0x832F6F: mov     [esi+30h], eax
0x832F72: mov     ecx, [esi+30h]
0x832F75: push    0
0x832F77: push    0
0x832F79: push    0Fh
0x832F7B: call    sub_772CD0
0x832F80: cmp     dword ptr [esi+30h], 0
0x832F84: jnz     short loc_832F8E
0x832F86: call    sub_772DF0
0x832F8B: mov     [esi+30h], eax
0x832F8E: mov     ecx, [esi+30h]
0x832F91: push    0
0x832F93: push    1
0x832F95: push    7
0x832F97: call    sub_772CD0
0x832F9C: cmp     dword ptr [esi+30h], 0
0x832FA0: jnz     short loc_832FAA
0x832FA2: call    sub_772DF0
0x832FA7: mov     [esi+30h], eax
0x832FAA: mov     ecx, [esi+30h]
0x832FAD: push    0
0x832FAF: push    3
0x832FB1: push    17h
0x832FB3: call    sub_772CD0
0x832FB8: cmp     dword ptr [esi+30h], 0
0x832FBC: jnz     short loc_832FC6
0x832FBE: call    sub_772DF0
0x832FC3: mov     [esi+30h], eax
0x832FC6: mov     ecx, [esi+30h]
0x832FC9: push    0
0x832FCB: push    0
0x832FCD: push    0Eh
0x832FCF: call    sub_772CD0
0x832FD4: cmp     dword ptr [esi+30h], 0
0x832FD8: jnz     short loc_832FE2
0x832FDA: call    sub_772DF0
0x832FDF: mov     [esi+30h], eax
0x832FE2: mov     ecx, [esi+30h]
0x832FE5: push    0
0x832FE7: push    0
0x832FE9: push    34h ; '4'
0x832FEB: call    sub_772CD0
0x832FF0: or      ebx, 0FFFFFFFFh
0x832FF3: cmp     esi, ds:0B45A00h
0x832FF9: mov     dword ptr ds:0B43F78h, 20082h
0x833003: mov     dword ptr ds:0B44608h, 108h
0x83300D: jz      short loc_83302D
0x83300F: add     [esi+60h], ebx
0x833012: jnz     short loc_83301B
0x833014: mov     ecx, esi
0x833016: call    sub_7604D0
0x83301B: mov     esi, ds:0B45A00h
0x833021: test    esi, esi
0x833023: mov     [esp+2Ch+var_14], esi
0x833027: jz      short loc_83302D
0x833029: add     dword ptr [esi+60h], 1
0x83302D: cmp     dword ptr [esi+18h], 6
0x833031: jnb     loc_8332E6
0x833037: lea     ecx, [esp+2Ch+var_10]
0x83303B: push    ecx
0x83303C: call    sub_772630
0x833041: add     esp, 4
0x833044: mov     ebp, eax
0x833046: cmp     edi, [ebp+0]
0x833049: mov     byte ptr [esp+2Ch+var_4], 0Eh
0x83304E: jz      short loc_83306F
0x833050: test    edi, edi
0x833052: jz      short loc_833060
0x833054: add     [edi+5Ch], ebx
0x833057: jnz     short loc_833060
0x833059: mov     ecx, edi
0x83305B: call    sub_772560
0x833060: mov     edi, [ebp+0]
0x833063: test    edi, edi
0x833065: mov     [esp+2Ch+a3], edi
0x833069: jz      short loc_83306F
0x83306B: add     dword ptr [edi+5Ch], 1
0x83306F: mov     eax, [esp+2Ch+var_10]
0x833073: test    eax, eax
0x833075: mov     byte ptr [esp+2Ch+var_4], 1
0x83307A: jz      short loc_83308E
0x83307C: add     [eax+5Ch], ebx
0x83307F: mov     ecx, eax
0x833081: add     eax, 5Ch ; '\'
0x833084: cmp     dword ptr [eax], 0
0x833087: jnz     short loc_83308E
0x833089: call    sub_772560
0x83308E: push    2
0x833090: push    1
0x833092: push    0
0x833094: push    edi
0x833095: call    sub_801110
0x83309A: mov     edx, [esi+14h]
0x83309D: add     esp, 10h
0x8330A0: push    edi; a3
0x8330A1: push    edx; a2
0x8330A2: mov     ecx, esi; this
0x8330A4: call    sub_760010
0x8330A9: lea     eax, [esp+2Ch+var_10]
0x8330AD: push    eax
0x8330AE: call    sub_772630
0x8330B3: add     esp, 4
0x8330B6: mov     ebp, eax
0x8330B8: cmp     edi, [ebp+0]
0x8330BB: mov     byte ptr [esp+2Ch+var_4], 0Fh
0x8330C0: jz      short loc_8330E1
0x8330C2: test    edi, edi
0x8330C4: jz      short loc_8330D2
0x8330C6: add     [edi+5Ch], ebx
0x8330C9: jnz     short loc_8330D2
0x8330CB: mov     ecx, edi
0x8330CD: call    sub_772560
0x8330D2: mov     edi, [ebp+0]
0x8330D5: test    edi, edi
0x8330D7: mov     [esp+2Ch+a3], edi
0x8330DB: jz      short loc_8330E1
0x8330DD: add     dword ptr [edi+5Ch], 1
0x8330E1: mov     eax, [esp+2Ch+var_10]
0x8330E5: test    eax, eax
0x8330E7: mov     byte ptr [esp+2Ch+var_4], 1
0x8330EC: jz      short loc_833100
0x8330EE: add     [eax+5Ch], ebx
0x8330F1: mov     ecx, eax
0x8330F3: add     eax, 5Ch ; '\'
0x8330F6: cmp     dword ptr [eax], 0
0x8330F9: jnz     short loc_833100
0x8330FB: call    sub_772560
0x833100: push    2
0x833102: push    1
0x833104: push    1
0x833106: push    edi
0x833107: call    sub_801110
0x83310C: add     esp, 10h
0x83310F: push    edi; a3
0x833110: push    1; a2
0x833112: mov     ecx, esi; this
0x833114: call    sub_760010
0x833119: lea     ecx, [esp+2Ch+var_10]
0x83311D: push    ecx
0x83311E: call    sub_772630
0x833123: add     esp, 4
0x833126: mov     ebp, eax
0x833128: cmp     edi, [ebp+0]
0x83312B: mov     byte ptr [esp+2Ch+var_4], 10h
0x833130: jz      short loc_833151
0x833132: test    edi, edi
0x833134: jz      short loc_833142
0x833136: add     [edi+5Ch], ebx
0x833139: jnz     short loc_833142
0x83313B: mov     ecx, edi
0x83313D: call    sub_772560
0x833142: mov     edi, [ebp+0]
0x833145: test    edi, edi
0x833147: mov     [esp+2Ch+a3], edi
0x83314B: jz      short loc_833151
0x83314D: add     dword ptr [edi+5Ch], 1
0x833151: mov     eax, [esp+2Ch+var_10]
0x833155: test    eax, eax
0x833157: mov     byte ptr [esp+2Ch+var_4], 1
0x83315C: jz      short loc_833170
0x83315E: add     [eax+5Ch], ebx
0x833161: mov     ecx, eax
0x833163: add     eax, 5Ch ; '\'
0x833166: cmp     dword ptr [eax], 0
0x833169: jnz     short loc_833170
0x83316B: call    sub_772560
0x833170: push    2
0x833172: push    1
0x833174: push    2
0x833176: push    edi
0x833177: call    sub_801110
0x83317C: add     esp, 10h
0x83317F: push    edi; a3
0x833180: push    2; a2
0x833182: mov     ecx, esi; this
0x833184: call    sub_760010
0x833189: lea     edx, [esp+2Ch+var_10]
0x83318D: push    edx
0x83318E: call    sub_772630
0x833193: add     esp, 4
0x833196: mov     ebp, eax
0x833198: cmp     edi, [ebp+0]
0x83319B: mov     byte ptr [esp+2Ch+var_4], 11h
0x8331A0: jz      short loc_8331C1
0x8331A2: test    edi, edi
0x8331A4: jz      short loc_8331B2
0x8331A6: add     [edi+5Ch], ebx
0x8331A9: jnz     short loc_8331B2
0x8331AB: mov     ecx, edi
0x8331AD: call    sub_772560
0x8331B2: mov     edi, [ebp+0]
0x8331B5: test    edi, edi
0x8331B7: mov     [esp+2Ch+a3], edi
0x8331BB: jz      short loc_8331C1
0x8331BD: add     dword ptr [edi+5Ch], 1
0x8331C1: mov     eax, [esp+2Ch+var_10]
0x8331C5: test    eax, eax
0x8331C7: mov     byte ptr [esp+2Ch+var_4], 1
0x8331CC: jz      short loc_8331E0
0x8331CE: add     [eax+5Ch], ebx
0x8331D1: mov     ecx, eax
0x8331D3: add     eax, 5Ch ; '\'
0x8331D6: cmp     dword ptr [eax], 0
0x8331D9: jnz     short loc_8331E0
0x8331DB: call    sub_772560
0x8331E0: mov     eax, ds:0B43110h
0x8331E5: push    eax; a2
0x8331E6: mov     ecx, edi; this
0x8331E8: call    sub_76C910
0x8331ED: push    0
0x8331EF: push    3
0x8331F1: push    3
0x8331F3: push    edi
0x8331F4: call    sub_801110
0x8331F9: add     esp, 10h
0x8331FC: push    edi; a3
0x8331FD: push    3; a2
0x8331FF: mov     ecx, esi; this
0x833201: call    sub_760010
0x833206: lea     ecx, [esp+2Ch+var_10]
0x83320A: push    ecx
0x83320B: call    sub_772630
0x833210: add     esp, 4
0x833213: mov     ebp, eax
0x833215: cmp     edi, [ebp+0]
0x833218: mov     byte ptr [esp+2Ch+var_4], 12h
0x83321D: jz      short loc_83323E
0x83321F: test    edi, edi
0x833221: jz      short loc_83322F
0x833223: add     [edi+5Ch], ebx
0x833226: jnz     short loc_83322F
0x833228: mov     ecx, edi
0x83322A: call    sub_772560
0x83322F: mov     edi, [ebp+0]
0x833232: test    edi, edi
0x833234: mov     [esp+2Ch+a3], edi
0x833238: jz      short loc_83323E
0x83323A: add     dword ptr [edi+5Ch], 1
0x83323E: mov     eax, [esp+2Ch+var_10]
0x833242: test    eax, eax
0x833244: mov     byte ptr [esp+2Ch+var_4], 1
0x833249: jz      short loc_83325D
0x83324B: add     [eax+5Ch], ebx
0x83324E: mov     ecx, eax
0x833250: add     eax, 5Ch ; '\'
0x833253: cmp     dword ptr [eax], 0
0x833256: jnz     short loc_83325D
0x833258: call    sub_772560
0x83325D: push    2
0x83325F: push    1
0x833261: push    4
0x833263: push    edi
0x833264: call    sub_801110
0x833269: add     esp, 10h
0x83326C: push    edi; a3
0x83326D: push    4; a2
0x83326F: mov     ecx, esi; this
0x833271: call    sub_760010
0x833276: lea     edx, [esp+2Ch+var_10]
0x83327A: push    edx
0x83327B: call    sub_772630
0x833280: add     esp, 4
0x833283: mov     ebp, eax
0x833285: cmp     edi, [ebp+0]
0x833288: mov     byte ptr [esp+2Ch+var_4], 13h
0x83328D: jz      short loc_8332AE
0x83328F: test    edi, edi
0x833291: jz      short loc_83329F
0x833293: add     [edi+5Ch], ebx
0x833296: jnz     short loc_83329F
0x833298: mov     ecx, edi
0x83329A: call    sub_772560
0x83329F: mov     edi, [ebp+0]
0x8332A2: test    edi, edi
0x8332A4: mov     [esp+2Ch+a3], edi
0x8332A8: jz      short loc_8332AE
0x8332AA: add     dword ptr [edi+5Ch], 1
0x8332AE: mov     eax, [esp+2Ch+var_10]
0x8332B2: test    eax, eax
0x8332B4: mov     byte ptr [esp+2Ch+var_4], 1
0x8332B9: jz      short loc_8332CD
0x8332BB: add     [eax+5Ch], ebx
0x8332BE: mov     ecx, eax
0x8332C0: add     eax, 5Ch ; '\'
0x8332C3: cmp     dword ptr [eax], 0
0x8332C6: jnz     short loc_8332CD
0x8332C8: call    sub_772560
0x8332CD: push    0
0x8332CF: push    3
0x8332D1: push    5
0x8332D3: push    edi
0x8332D4: call    sub_801110
0x8332D9: add     esp, 10h
0x8332DC: push    edi; a3
0x8332DD: push    5; a2
0x8332DF: mov     ecx, esi; this
0x8332E1: call    sub_760010
0x8332E6: mov     eax, ds:0B453E4h
0x8332EB: mov     ebp, [esi+58h]
0x8332EE: cmp     ebp, eax
0x8332F0: mov     ebx, eax
0x8332F2: jz      short loc_833326
0x8332F4: test    ebp, ebp
0x8332F6: jz      short loc_833315
0x8332F8: lea     eax, [ebp+4]
0x8332FB: push    eax; lpAddend
0x8332FC: call    dword ptr ds:0A2807Ch
0x833302: test    eax, eax
0x833304: jnz     short loc_833315
0x833306: test    ebp, ebp
0x833308: jz      short loc_833315
0x83330A: mov     edx, [ebp+0]
0x83330D: mov     eax, [edx]
0x83330F: push    1
0x833311: mov     ecx, ebp
0x833313: call    eax
0x833315: test    ebx, ebx
0x833317: mov     [esi+58h], ebx
0x83331A: jz      short loc_833326
0x83331C: add     ebx, 4
0x83331F: push    ebx; lpAddend
0x833320: call    dword ptr ds:0A28078h
0x833326: mov     eax, ds:0B451D8h
0x83332B: mov     ebp, [esi+44h]
0x83332E: cmp     ebp, eax
0x833330: mov     ebx, eax
0x833332: jz      short loc_833366
0x833334: test    ebp, ebp
0x833336: jz      short loc_833355
0x833338: lea     ecx, [ebp+4]
0x83333B: push    ecx; lpAddend
0x83333C: call    dword ptr ds:0A2807Ch
0x833342: test    eax, eax
0x833344: jnz     short loc_833355
0x833346: test    ebp, ebp
0x833348: jz      short loc_833355
0x83334A: mov     edx, [ebp+0]
0x83334D: mov     eax, [edx]
0x83334F: push    1
0x833351: mov     ecx, ebp
0x833353: call    eax
0x833355: test    ebx, ebx
0x833357: mov     [esi+44h], ebx
0x83335A: jz      short loc_833366
0x83335C: add     ebx, 4
0x83335F: push    ebx; lpAddend
0x833360: call    dword ptr ds:0A28078h
0x833366: cmp     dword ptr [esi+30h], 0
0x83336A: jnz     short loc_833374
0x83336C: call    sub_772DF0
0x833371: mov     [esi+30h], eax
0x833374: mov     ecx, [esi+30h]
0x833377: push    0
0x833379: push    1
0x83337B: push    1Bh
0x83337D: call    sub_772CD0
0x833382: cmp     dword ptr [esi+30h], 0
0x833386: jnz     short loc_833390
0x833388: call    sub_772DF0
0x83338D: mov     [esi+30h], eax
0x833390: mov     ecx, [esi+30h]
0x833393: push    0
0x833395: push    2
0x833397: push    13h
0x833399: call    sub_772CD0
0x83339E: cmp     dword ptr [esi+30h], 0
0x8333A2: jnz     short loc_8333AC
0x8333A4: call    sub_772DF0
0x8333A9: mov     [esi+30h], eax
0x8333AC: mov     ecx, [esi+30h]
0x8333AF: push    0
0x8333B1: push    2
0x8333B3: push    14h
0x8333B5: call    sub_772CD0
0x8333BA: cmp     dword ptr [esi+30h], 0
0x8333BE: jnz     short loc_8333C8
0x8333C0: call    sub_772DF0
0x8333C5: mov     [esi+30h], eax
0x8333C8: mov     ecx, [esi+30h]
0x8333CB: push    0
0x8333CD: push    0
0x8333CF: push    0Fh
0x8333D1: call    sub_772CD0
0x8333D6: cmp     dword ptr [esi+30h], 0
0x8333DA: jnz     short loc_8333E4
0x8333DC: call    sub_772DF0
0x8333E1: mov     [esi+30h], eax
0x8333E4: mov     ecx, [esi+30h]
0x8333E7: push    0
0x8333E9: push    1
0x8333EB: push    7
0x8333ED: call    sub_772CD0
0x8333F2: cmp     dword ptr [esi+30h], 0
0x8333F6: jnz     short loc_833400
0x8333F8: call    sub_772DF0
0x8333FD: mov     [esi+30h], eax
0x833400: mov     ecx, [esi+30h]
0x833403: push    0
0x833405: push    3
0x833407: push    17h
0x833409: call    sub_772CD0
0x83340E: cmp     dword ptr [esi+30h], 0
0x833412: jnz     short loc_83341C
0x833414: call    sub_772DF0
0x833419: mov     [esi+30h], eax
0x83341C: mov     ecx, [esi+30h]
0x83341F: push    0
0x833421: push    0
0x833423: push    0Eh
0x833425: call    sub_772CD0
0x83342A: cmp     dword ptr [esi+30h], 0
0x83342E: jnz     short loc_833438
0x833430: call    sub_772DF0
0x833435: mov     [esi+30h], eax
0x833438: mov     ecx, [esi+30h]
0x83343B: push    0
0x83343D: push    0
0x83343F: push    34h ; '4'
0x833441: call    sub_772CD0
0x833446: or      ebx, 0FFFFFFFFh
0x833449: cmp     esi, ds:0B45A04h
0x83344F: mov     dword ptr ds:0B43F80h, 60088h
0x833459: mov     dword ptr ds:0B44610h, 108h
0x833463: jz      short loc_833483
0x833465: add     [esi+60h], ebx
0x833468: jnz     short loc_833471
0x83346A: mov     ecx, esi
0x83346C: call    sub_7604D0
0x833471: mov     esi, ds:0B45A04h
0x833477: test    esi, esi
0x833479: mov     [esp+2Ch+var_14], esi
0x83347D: jz      short loc_833483
0x83347F: add     dword ptr [esi+60h], 1
0x833483: cmp     dword ptr [esi+18h], 6
0x833487: jnb     loc_83373C
0x83348D: lea     ecx, [esp+2Ch+var_10]
0x833491: push    ecx
0x833492: call    sub_772630
0x833497: add     esp, 4
0x83349A: mov     ebp, eax
0x83349C: cmp     edi, [ebp+0]
0x83349F: mov     byte ptr [esp+2Ch+var_4], 14h
0x8334A4: jz      short loc_8334C5
0x8334A6: test    edi, edi
0x8334A8: jz      short loc_8334B6
0x8334AA: add     [edi+5Ch], ebx
0x8334AD: jnz     short loc_8334B6
0x8334AF: mov     ecx, edi
0x8334B1: call    sub_772560
0x8334B6: mov     edi, [ebp+0]
0x8334B9: test    edi, edi
0x8334BB: mov     [esp+2Ch+a3], edi
0x8334BF: jz      short loc_8334C5
0x8334C1: add     dword ptr [edi+5Ch], 1
0x8334C5: mov     eax, [esp+2Ch+var_10]
0x8334C9: test    eax, eax
0x8334CB: mov     byte ptr [esp+2Ch+var_4], 1
0x8334D0: jz      short loc_8334E4
0x8334D2: add     [eax+5Ch], ebx
0x8334D5: mov     ecx, eax
0x8334D7: add     eax, 5Ch ; '\'
0x8334DA: cmp     dword ptr [eax], 0
0x8334DD: jnz     short loc_8334E4
0x8334DF: call    sub_772560
0x8334E4: push    2
0x8334E6: push    1
0x8334E8: push    0
0x8334EA: push    edi
0x8334EB: call    sub_801110
0x8334F0: mov     edx, [esi+14h]
0x8334F3: add     esp, 10h
0x8334F6: push    edi; a3
0x8334F7: push    edx; a2
0x8334F8: mov     ecx, esi; this
0x8334FA: call    sub_760010
0x8334FF: lea     eax, [esp+2Ch+var_10]
0x833503: push    eax
0x833504: call    sub_772630
0x833509: add     esp, 4
0x83350C: mov     ebp, eax
0x83350E: cmp     edi, [ebp+0]
0x833511: mov     byte ptr [esp+2Ch+var_4], 15h
0x833516: jz      short loc_833537
0x833518: test    edi, edi
0x83351A: jz      short loc_833528
0x83351C: add     [edi+5Ch], ebx
0x83351F: jnz     short loc_833528
0x833521: mov     ecx, edi
0x833523: call    sub_772560
0x833528: mov     edi, [ebp+0]
0x83352B: test    edi, edi
0x83352D: mov     [esp+2Ch+a3], edi
0x833531: jz      short loc_833537
0x833533: add     dword ptr [edi+5Ch], 1
0x833537: mov     eax, [esp+2Ch+var_10]
0x83353B: test    eax, eax
0x83353D: mov     byte ptr [esp+2Ch+var_4], 1
0x833542: jz      short loc_833556
0x833544: add     [eax+5Ch], ebx
0x833547: mov     ecx, eax
0x833549: add     eax, 5Ch ; '\'
0x83354C: cmp     dword ptr [eax], 0
0x83354F: jnz     short loc_833556
0x833551: call    sub_772560
0x833556: push    2
0x833558: push    1
0x83355A: push    1
0x83355C: push    edi
0x83355D: call    sub_801110
0x833562: add     esp, 10h
0x833565: push    edi; a3
0x833566: push    1; a2
0x833568: mov     ecx, esi; this
0x83356A: call    sub_760010
0x83356F: lea     ecx, [esp+2Ch+var_10]
0x833573: push    ecx
0x833574: call    sub_772630
0x833579: add     esp, 4
0x83357C: mov     ebp, eax
0x83357E: cmp     edi, [ebp+0]
0x833581: mov     byte ptr [esp+2Ch+var_4], 16h
0x833586: jz      short loc_8335A7
0x833588: test    edi, edi
0x83358A: jz      short loc_833598
0x83358C: add     [edi+5Ch], ebx
0x83358F: jnz     short loc_833598
0x833591: mov     ecx, edi
0x833593: call    sub_772560
0x833598: mov     edi, [ebp+0]
0x83359B: test    edi, edi
0x83359D: mov     [esp+2Ch+a3], edi
0x8335A1: jz      short loc_8335A7
0x8335A3: add     dword ptr [edi+5Ch], 1
0x8335A7: mov     eax, [esp+2Ch+var_10]
0x8335AB: test    eax, eax
0x8335AD: mov     byte ptr [esp+2Ch+var_4], 1
0x8335B2: jz      short loc_8335C6
0x8335B4: add     [eax+5Ch], ebx
0x8335B7: mov     ecx, eax
0x8335B9: add     eax, 5Ch ; '\'
0x8335BC: cmp     dword ptr [eax], 0
0x8335BF: jnz     short loc_8335C6
0x8335C1: call    sub_772560
0x8335C6: push    2
0x8335C8: push    1
0x8335CA: push    2
0x8335CC: push    edi
0x8335CD: call    sub_801110
0x8335D2: add     esp, 10h
0x8335D5: push    edi; a3
0x8335D6: push    2; a2
0x8335D8: mov     ecx, esi; this
0x8335DA: call    sub_760010
0x8335DF: lea     edx, [esp+2Ch+var_10]
0x8335E3: push    edx
0x8335E4: call    sub_772630
0x8335E9: add     esp, 4
0x8335EC: mov     ebp, eax
0x8335EE: cmp     edi, [ebp+0]
0x8335F1: mov     byte ptr [esp+2Ch+var_4], 17h
0x8335F6: jz      short loc_833617
0x8335F8: test    edi, edi
0x8335FA: jz      short loc_833608
0x8335FC: add     [edi+5Ch], ebx
0x8335FF: jnz     short loc_833608
0x833601: mov     ecx, edi
0x833603: call    sub_772560
0x833608: mov     edi, [ebp+0]
0x83360B: test    edi, edi
0x83360D: mov     [esp+2Ch+a3], edi
0x833611: jz      short loc_833617
0x833613: add     dword ptr [edi+5Ch], 1
0x833617: mov     eax, [esp+2Ch+var_10]
0x83361B: test    eax, eax
0x83361D: mov     byte ptr [esp+2Ch+var_4], 1
0x833622: jz      short loc_833636
0x833624: add     [eax+5Ch], ebx
0x833627: mov     ecx, eax
0x833629: add     eax, 5Ch ; '\'
0x83362C: cmp     dword ptr [eax], 0
0x83362F: jnz     short loc_833636
0x833631: call    sub_772560
0x833636: mov     eax, ds:0B43110h
0x83363B: push    eax; a2
0x83363C: mov     ecx, edi; this
0x83363E: call    sub_76C910
0x833643: push    0
0x833645: push    3
0x833647: push    3
0x833649: push    edi
0x83364A: call    sub_801110
0x83364F: add     esp, 10h
0x833652: push    edi; a3
0x833653: push    3; a2
0x833655: mov     ecx, esi; this
0x833657: call    sub_760010
0x83365C: lea     ecx, [esp+2Ch+var_10]
0x833660: push    ecx
0x833661: call    sub_772630
0x833666: add     esp, 4
0x833669: mov     ebp, eax
0x83366B: cmp     edi, [ebp+0]
0x83366E: mov     byte ptr [esp+2Ch+var_4], 18h
0x833673: jz      short loc_833694
0x833675: test    edi, edi
0x833677: jz      short loc_833685
0x833679: add     [edi+5Ch], ebx
0x83367C: jnz     short loc_833685
0x83367E: mov     ecx, edi
0x833680: call    sub_772560
0x833685: mov     edi, [ebp+0]
0x833688: test    edi, edi
0x83368A: mov     [esp+2Ch+a3], edi
0x83368E: jz      short loc_833694
0x833690: add     dword ptr [edi+5Ch], 1
0x833694: mov     eax, [esp+2Ch+var_10]
0x833698: test    eax, eax
0x83369A: mov     byte ptr [esp+2Ch+var_4], 1
0x83369F: jz      short loc_8336B3
0x8336A1: add     [eax+5Ch], ebx
0x8336A4: mov     ecx, eax
0x8336A6: add     eax, 5Ch ; '\'
0x8336A9: cmp     dword ptr [eax], 0
0x8336AC: jnz     short loc_8336B3
0x8336AE: call    sub_772560
0x8336B3: push    2
0x8336B5: push    1
0x8336B7: push    4
0x8336B9: push    edi
0x8336BA: call    sub_801110
0x8336BF: add     esp, 10h
0x8336C2: push    edi; a3
0x8336C3: push    4; a2
0x8336C5: mov     ecx, esi; this
0x8336C7: call    sub_760010
0x8336CC: lea     edx, [esp+2Ch+var_10]
0x8336D0: push    edx
0x8336D1: call    sub_772630
0x8336D6: add     esp, 4
0x8336D9: mov     ebp, eax
0x8336DB: cmp     edi, [ebp+0]
0x8336DE: mov     byte ptr [esp+2Ch+var_4], 19h
0x8336E3: jz      short loc_833704
0x8336E5: test    edi, edi
0x8336E7: jz      short loc_8336F5
0x8336E9: add     [edi+5Ch], ebx
0x8336EC: jnz     short loc_8336F5
0x8336EE: mov     ecx, edi
0x8336F0: call    sub_772560
0x8336F5: mov     edi, [ebp+0]
0x8336F8: test    edi, edi
0x8336FA: mov     [esp+2Ch+a3], edi
0x8336FE: jz      short loc_833704
0x833700: add     dword ptr [edi+5Ch], 1
0x833704: mov     eax, [esp+2Ch+var_10]
0x833708: test    eax, eax
0x83370A: mov     byte ptr [esp+2Ch+var_4], 1
0x83370F: jz      short loc_833723
0x833711: add     [eax+5Ch], ebx
0x833714: mov     ecx, eax
0x833716: add     eax, 5Ch ; '\'
0x833719: cmp     dword ptr [eax], 0
0x83371C: jnz     short loc_833723
0x83371E: call    sub_772560
0x833723: push    0
0x833725: push    3
0x833727: push    5
0x833729: push    edi
0x83372A: call    sub_801110
0x83372F: add     esp, 10h
0x833732: push    edi; a3
0x833733: push    5; a2
0x833735: mov     ecx, esi; this
0x833737: call    sub_760010
0x83373C: mov     eax, ds:0B453E4h
0x833741: mov     ebp, [esi+58h]
0x833744: cmp     ebp, eax
0x833746: mov     ebx, eax
0x833748: jz      short loc_83377C
0x83374A: test    ebp, ebp
0x83374C: jz      short loc_83376B
0x83374E: lea     eax, [ebp+4]
0x833751: push    eax; lpAddend
0x833752: call    dword ptr ds:0A2807Ch
0x833758: test    eax, eax
0x83375A: jnz     short loc_83376B
0x83375C: test    ebp, ebp
0x83375E: jz      short loc_83376B
0x833760: mov     edx, [ebp+0]
0x833763: mov     eax, [edx]
0x833765: push    1
0x833767: mov     ecx, ebp
0x833769: call    eax
0x83376B: test    ebx, ebx
0x83376D: mov     [esi+58h], ebx
0x833770: jz      short loc_83377C
0x833772: add     ebx, 4
0x833775: push    ebx; lpAddend
0x833776: call    dword ptr ds:0A28078h
0x83377C: mov     eax, ds:0B451DCh
0x833781: mov     ebp, [esi+44h]
0x833784: cmp     ebp, eax
0x833786: mov     ebx, eax
0x833788: jz      short loc_8337BC
0x83378A: test    ebp, ebp
0x83378C: jz      short loc_8337AB
0x83378E: lea     ecx, [ebp+4]
0x833791: push    ecx; lpAddend
0x833792: call    dword ptr ds:0A2807Ch
0x833798: test    eax, eax
0x83379A: jnz     short loc_8337AB
0x83379C: test    ebp, ebp
0x83379E: jz      short loc_8337AB
0x8337A0: mov     edx, [ebp+0]
0x8337A3: mov     eax, [edx]
0x8337A5: push    1
0x8337A7: mov     ecx, ebp
0x8337A9: call    eax
0x8337AB: test    ebx, ebx
0x8337AD: mov     [esi+44h], ebx
0x8337B0: jz      short loc_8337BC
0x8337B2: add     ebx, 4
0x8337B5: push    ebx; lpAddend
0x8337B6: call    dword ptr ds:0A28078h
0x8337BC: cmp     dword ptr [esi+30h], 0
0x8337C0: jnz     short loc_8337CA
0x8337C2: call    sub_772DF0
0x8337C7: mov     [esi+30h], eax
0x8337CA: mov     ecx, [esi+30h]
0x8337CD: push    0
0x8337CF: push    1
0x8337D1: push    1Bh
0x8337D3: call    sub_772CD0
0x8337D8: cmp     dword ptr [esi+30h], 0
0x8337DC: jnz     short loc_8337E6
0x8337DE: call    sub_772DF0
0x8337E3: mov     [esi+30h], eax
0x8337E6: mov     ecx, [esi+30h]
0x8337E9: push    0
0x8337EB: push    2
0x8337ED: push    13h
0x8337EF: call    sub_772CD0
0x8337F4: cmp     dword ptr [esi+30h], 0
0x8337F8: jnz     short loc_833802
0x8337FA: call    sub_772DF0
0x8337FF: mov     [esi+30h], eax
0x833802: mov     ecx, [esi+30h]
0x833805: push    0
0x833807: push    2
0x833809: push    14h
0x83380B: call    sub_772CD0
0x833810: cmp     dword ptr [esi+30h], 0
0x833814: jnz     short loc_83381E
0x833816: call    sub_772DF0
0x83381B: mov     [esi+30h], eax
0x83381E: mov     ecx, [esi+30h]
0x833821: push    0
0x833823: push    0
0x833825: push    0Fh
0x833827: call    sub_772CD0
0x83382C: cmp     dword ptr [esi+30h], 0
0x833830: jnz     short loc_83383A
0x833832: call    sub_772DF0
0x833837: mov     [esi+30h], eax
0x83383A: mov     ecx, [esi+30h]
0x83383D: push    0
0x83383F: push    1
0x833841: push    7
0x833843: call    sub_772CD0
0x833848: cmp     dword ptr [esi+30h], 0
0x83384C: jnz     short loc_833856
0x83384E: call    sub_772DF0
0x833853: mov     [esi+30h], eax
0x833856: mov     ecx, [esi+30h]
0x833859: push    0
0x83385B: push    3
0x83385D: push    17h
0x83385F: call    sub_772CD0
0x833864: cmp     dword ptr [esi+30h], 0
0x833868: jnz     short loc_833872
0x83386A: call    sub_772DF0
0x83386F: mov     [esi+30h], eax
0x833872: mov     ecx, [esi+30h]
0x833875: push    0
0x833877: push    0
0x833879: push    0Eh
0x83387B: call    sub_772CD0
0x833880: cmp     dword ptr [esi+30h], 0
0x833884: jnz     short loc_83388E
0x833886: call    sub_772DF0
0x83388B: mov     [esi+30h], eax
0x83388E: mov     ecx, [esi+30h]
0x833891: push    0
0x833893: push    0
0x833895: push    34h ; '4'
0x833897: call    sub_772CD0
0x83389C: or      ebx, 0FFFFFFFFh
0x83389F: cmp     esi, ds:0B45A10h
0x8338A5: mov     dword ptr ds:0B43F84h, 60088h
0x8338AF: mov     dword ptr ds:0B44614h, 108h
0x8338B9: jz      short loc_8338D9
0x8338BB: add     [esi+60h], ebx
0x8338BE: jnz     short loc_8338C7
0x8338C0: mov     ecx, esi
0x8338C2: call    sub_7604D0
0x8338C7: mov     esi, ds:0B45A10h
0x8338CD: test    esi, esi
0x8338CF: mov     [esp+2Ch+var_14], esi
0x8338D3: jz      short loc_8338D9
0x8338D5: add     dword ptr [esi+60h], 1
0x8338D9: cmp     dword ptr [esi+18h], 6
0x8338DD: jnb     loc_833B92
0x8338E3: lea     ecx, [esp+2Ch+var_10]
0x8338E7: push    ecx
0x8338E8: call    sub_772630
0x8338ED: add     esp, 4
0x8338F0: mov     ebp, eax
0x8338F2: cmp     edi, [ebp+0]
0x8338F5: mov     byte ptr [esp+2Ch+var_4], 1Ah
0x8338FA: jz      short loc_83391B
0x8338FC: test    edi, edi
0x8338FE: jz      short loc_83390C
0x833900: add     [edi+5Ch], ebx
0x833903: jnz     short loc_83390C
0x833905: mov     ecx, edi
0x833907: call    sub_772560
0x83390C: mov     edi, [ebp+0]
0x83390F: test    edi, edi
0x833911: mov     [esp+2Ch+a3], edi
0x833915: jz      short loc_83391B
0x833917: add     dword ptr [edi+5Ch], 1
0x83391B: mov     eax, [esp+2Ch+var_10]
0x83391F: test    eax, eax
0x833921: mov     byte ptr [esp+2Ch+var_4], 1
0x833926: jz      short loc_83393A
0x833928: add     [eax+5Ch], ebx
0x83392B: mov     ecx, eax
0x83392D: add     eax, 5Ch ; '\'
0x833930: cmp     dword ptr [eax], 0
0x833933: jnz     short loc_83393A
0x833935: call    sub_772560
0x83393A: push    2
0x83393C: push    1
0x83393E: push    0
0x833940: push    edi
0x833941: call    sub_801110
0x833946: mov     edx, [esi+14h]
0x833949: add     esp, 10h
0x83394C: push    edi; a3
0x83394D: push    edx; a2
0x83394E: mov     ecx, esi; this
0x833950: call    sub_760010
0x833955: lea     eax, [esp+2Ch+var_10]
0x833959: push    eax
0x83395A: call    sub_772630
0x83395F: add     esp, 4
0x833962: mov     ebp, eax
0x833964: cmp     edi, [ebp+0]
0x833967: mov     byte ptr [esp+2Ch+var_4], 1Bh
0x83396C: jz      short loc_83398D
0x83396E: test    edi, edi
0x833970: jz      short loc_83397E
0x833972: add     [edi+5Ch], ebx
0x833975: jnz     short loc_83397E
0x833977: mov     ecx, edi
0x833979: call    sub_772560
0x83397E: mov     edi, [ebp+0]
0x833981: test    edi, edi
0x833983: mov     [esp+2Ch+a3], edi
0x833987: jz      short loc_83398D
0x833989: add     dword ptr [edi+5Ch], 1
0x83398D: mov     eax, [esp+2Ch+var_10]
0x833991: test    eax, eax
0x833993: mov     byte ptr [esp+2Ch+var_4], 1
0x833998: jz      short loc_8339AC
0x83399A: add     [eax+5Ch], ebx
0x83399D: mov     ecx, eax
0x83399F: add     eax, 5Ch ; '\'
0x8339A2: cmp     dword ptr [eax], 0
0x8339A5: jnz     short loc_8339AC
0x8339A7: call    sub_772560
0x8339AC: push    2
0x8339AE: push    1
0x8339B0: push    1
0x8339B2: push    edi
0x8339B3: call    sub_801110
0x8339B8: add     esp, 10h
0x8339BB: push    edi; a3
0x8339BC: push    1; a2
0x8339BE: mov     ecx, esi; this
0x8339C0: call    sub_760010
0x8339C5: lea     ecx, [esp+2Ch+var_10]
0x8339C9: push    ecx
0x8339CA: call    sub_772630
0x8339CF: add     esp, 4
0x8339D2: mov     ebp, eax
0x8339D4: cmp     edi, [ebp+0]
0x8339D7: mov     byte ptr [esp+2Ch+var_4], 1Ch
0x8339DC: jz      short loc_8339FD
0x8339DE: test    edi, edi
0x8339E0: jz      short loc_8339EE
0x8339E2: add     [edi+5Ch], ebx
0x8339E5: jnz     short loc_8339EE
0x8339E7: mov     ecx, edi
0x8339E9: call    sub_772560
0x8339EE: mov     edi, [ebp+0]
0x8339F1: test    edi, edi
0x8339F3: mov     [esp+2Ch+a3], edi
0x8339F7: jz      short loc_8339FD
0x8339F9: add     dword ptr [edi+5Ch], 1
0x8339FD: mov     eax, [esp+2Ch+var_10]
0x833A01: test    eax, eax
0x833A03: mov     byte ptr [esp+2Ch+var_4], 1
0x833A08: jz      short loc_833A1C
0x833A0A: add     [eax+5Ch], ebx
0x833A0D: mov     ecx, eax
0x833A0F: add     eax, 5Ch ; '\'
0x833A12: cmp     dword ptr [eax], 0
0x833A15: jnz     short loc_833A1C
0x833A17: call    sub_772560
0x833A1C: push    2
0x833A1E: push    1
0x833A20: push    2
0x833A22: push    edi
0x833A23: call    sub_801110
0x833A28: add     esp, 10h
0x833A2B: push    edi; a3
0x833A2C: push    2; a2
0x833A2E: mov     ecx, esi; this
0x833A30: call    sub_760010
0x833A35: lea     edx, [esp+2Ch+var_10]
0x833A39: push    edx
0x833A3A: call    sub_772630
0x833A3F: add     esp, 4
0x833A42: mov     ebp, eax
0x833A44: cmp     edi, [ebp+0]
0x833A47: mov     byte ptr [esp+2Ch+var_4], 1Dh
0x833A4C: jz      short loc_833A6D
0x833A4E: test    edi, edi
0x833A50: jz      short loc_833A5E
0x833A52: add     [edi+5Ch], ebx
0x833A55: jnz     short loc_833A5E
0x833A57: mov     ecx, edi
0x833A59: call    sub_772560
0x833A5E: mov     edi, [ebp+0]
0x833A61: test    edi, edi
0x833A63: mov     [esp+2Ch+a3], edi
0x833A67: jz      short loc_833A6D
0x833A69: add     dword ptr [edi+5Ch], 1
0x833A6D: mov     eax, [esp+2Ch+var_10]
0x833A71: test    eax, eax
0x833A73: mov     byte ptr [esp+2Ch+var_4], 1
0x833A78: jz      short loc_833A8C
0x833A7A: add     [eax+5Ch], ebx
0x833A7D: mov     ecx, eax
0x833A7F: add     eax, 5Ch ; '\'
0x833A82: cmp     dword ptr [eax], 0
0x833A85: jnz     short loc_833A8C
0x833A87: call    sub_772560
0x833A8C: mov     eax, ds:0B43110h
0x833A91: push    eax; a2
0x833A92: mov     ecx, edi; this
0x833A94: call    sub_76C910
0x833A99: push    0
0x833A9B: push    3
0x833A9D: push    3
0x833A9F: push    edi
0x833AA0: call    sub_801110
0x833AA5: add     esp, 10h
0x833AA8: push    edi; a3
0x833AA9: push    3; a2
0x833AAB: mov     ecx, esi; this
0x833AAD: call    sub_760010
0x833AB2: lea     ecx, [esp+2Ch+var_10]
0x833AB6: push    ecx
0x833AB7: call    sub_772630
0x833ABC: add     esp, 4
0x833ABF: mov     ebp, eax
0x833AC1: cmp     edi, [ebp+0]
0x833AC4: mov     byte ptr [esp+2Ch+var_4], 1Eh
0x833AC9: jz      short loc_833AEA
0x833ACB: test    edi, edi
0x833ACD: jz      short loc_833ADB
0x833ACF: add     [edi+5Ch], ebx
0x833AD2: jnz     short loc_833ADB
0x833AD4: mov     ecx, edi
0x833AD6: call    sub_772560
0x833ADB: mov     edi, [ebp+0]
0x833ADE: test    edi, edi
0x833AE0: mov     [esp+2Ch+a3], edi
0x833AE4: jz      short loc_833AEA
0x833AE6: add     dword ptr [edi+5Ch], 1
0x833AEA: mov     eax, [esp+2Ch+var_10]
0x833AEE: test    eax, eax
0x833AF0: mov     byte ptr [esp+2Ch+var_4], 1
0x833AF5: jz      short loc_833B09
0x833AF7: add     [eax+5Ch], ebx
0x833AFA: mov     ecx, eax
0x833AFC: add     eax, 5Ch ; '\'
0x833AFF: cmp     dword ptr [eax], 0
0x833B02: jnz     short loc_833B09
0x833B04: call    sub_772560
0x833B09: push    2
0x833B0B: push    1
0x833B0D: push    4
0x833B0F: push    edi
0x833B10: call    sub_801110
0x833B15: add     esp, 10h
0x833B18: push    edi; a3
0x833B19: push    4; a2
0x833B1B: mov     ecx, esi; this
0x833B1D: call    sub_760010
0x833B22: lea     edx, [esp+2Ch+var_10]
0x833B26: push    edx
0x833B27: call    sub_772630
0x833B2C: add     esp, 4
0x833B2F: mov     ebp, eax
0x833B31: cmp     edi, [ebp+0]
0x833B34: mov     byte ptr [esp+2Ch+var_4], 1Fh
0x833B39: jz      short loc_833B5A
0x833B3B: test    edi, edi
0x833B3D: jz      short loc_833B4B
0x833B3F: add     [edi+5Ch], ebx
0x833B42: jnz     short loc_833B4B
0x833B44: mov     ecx, edi
0x833B46: call    sub_772560
0x833B4B: mov     edi, [ebp+0]
0x833B4E: test    edi, edi
0x833B50: mov     [esp+2Ch+a3], edi
0x833B54: jz      short loc_833B5A
0x833B56: add     dword ptr [edi+5Ch], 1
0x833B5A: mov     eax, [esp+2Ch+var_10]
0x833B5E: test    eax, eax
0x833B60: mov     byte ptr [esp+2Ch+var_4], 1
0x833B65: jz      short loc_833B79
0x833B67: add     [eax+5Ch], ebx
0x833B6A: mov     ecx, eax
0x833B6C: add     eax, 5Ch ; '\'
0x833B6F: cmp     dword ptr [eax], 0
0x833B72: jnz     short loc_833B79
0x833B74: call    sub_772560
0x833B79: push    0
0x833B7B: push    3
0x833B7D: push    5
0x833B7F: push    edi
0x833B80: call    sub_801110
0x833B85: add     esp, 10h
0x833B88: push    edi; a3
0x833B89: push    5; a2
0x833B8B: mov     ecx, esi; this
0x833B8D: call    sub_760010
0x833B92: mov     eax, ds:0B453E8h
0x833B97: mov     ebp, [esi+58h]
0x833B9A: cmp     ebp, eax
0x833B9C: mov     ebx, eax
0x833B9E: jz      short loc_833BD2
0x833BA0: test    ebp, ebp
0x833BA2: jz      short loc_833BC1
0x833BA4: lea     eax, [ebp+4]
0x833BA7: push    eax; lpAddend
0x833BA8: call    dword ptr ds:0A2807Ch
0x833BAE: test    eax, eax
0x833BB0: jnz     short loc_833BC1
0x833BB2: test    ebp, ebp
0x833BB4: jz      short loc_833BC1
0x833BB6: mov     edx, [ebp+0]
0x833BB9: mov     eax, [edx]
0x833BBB: push    1
0x833BBD: mov     ecx, ebp
0x833BBF: call    eax
0x833BC1: test    ebx, ebx
0x833BC3: mov     [esi+58h], ebx
0x833BC6: jz      short loc_833BD2
0x833BC8: add     ebx, 4
0x833BCB: push    ebx; lpAddend
0x833BCC: call    dword ptr ds:0A28078h
0x833BD2: mov     eax, ds:0B451E0h
0x833BD7: mov     ebp, [esi+44h]
0x833BDA: cmp     ebp, eax
0x833BDC: mov     ebx, eax
0x833BDE: jz      short loc_833C12
0x833BE0: test    ebp, ebp
0x833BE2: jz      short loc_833C01
0x833BE4: lea     ecx, [ebp+4]
0x833BE7: push    ecx; lpAddend
0x833BE8: call    dword ptr ds:0A2807Ch
0x833BEE: test    eax, eax
0x833BF0: jnz     short loc_833C01
0x833BF2: test    ebp, ebp
0x833BF4: jz      short loc_833C01
0x833BF6: mov     edx, [ebp+0]
0x833BF9: mov     eax, [edx]
0x833BFB: push    1
0x833BFD: mov     ecx, ebp
0x833BFF: call    eax
0x833C01: test    ebx, ebx
0x833C03: mov     [esi+44h], ebx
0x833C06: jz      short loc_833C12
0x833C08: add     ebx, 4
0x833C0B: push    ebx; lpAddend
0x833C0C: call    dword ptr ds:0A28078h
0x833C12: cmp     dword ptr [esi+30h], 0
0x833C16: jnz     short loc_833C20
0x833C18: call    sub_772DF0
0x833C1D: mov     [esi+30h], eax
0x833C20: mov     ecx, [esi+30h]
0x833C23: push    0
0x833C25: push    1
0x833C27: push    1Bh
0x833C29: call    sub_772CD0
0x833C2E: cmp     dword ptr [esi+30h], 0
0x833C32: jnz     short loc_833C3C
0x833C34: call    sub_772DF0
0x833C39: mov     [esi+30h], eax
0x833C3C: mov     ecx, [esi+30h]
0x833C3F: push    0
0x833C41: push    2
0x833C43: push    13h
0x833C45: call    sub_772CD0
0x833C4A: cmp     dword ptr [esi+30h], 0
0x833C4E: jnz     short loc_833C58
0x833C50: call    sub_772DF0
0x833C55: mov     [esi+30h], eax
0x833C58: mov     ecx, [esi+30h]
0x833C5B: push    0
0x833C5D: push    2
0x833C5F: push    14h
0x833C61: call    sub_772CD0
0x833C66: cmp     dword ptr [esi+30h], 0
0x833C6A: jnz     short loc_833C74
0x833C6C: call    sub_772DF0
0x833C71: mov     [esi+30h], eax
0x833C74: mov     ecx, [esi+30h]
0x833C77: push    0
0x833C79: push    0
0x833C7B: push    0Fh
0x833C7D: call    sub_772CD0
0x833C82: cmp     dword ptr [esi+30h], 0
0x833C86: jnz     short loc_833C90
0x833C88: call    sub_772DF0
0x833C8D: mov     [esi+30h], eax
0x833C90: mov     ecx, [esi+30h]
0x833C93: push    0
0x833C95: push    1
0x833C97: push    7
0x833C99: call    sub_772CD0
0x833C9E: cmp     dword ptr [esi+30h], 0
0x833CA2: jnz     short loc_833CAC
0x833CA4: call    sub_772DF0
0x833CA9: mov     [esi+30h], eax
0x833CAC: mov     ecx, [esi+30h]
0x833CAF: push    0
0x833CB1: push    3
0x833CB3: push    17h
0x833CB5: call    sub_772CD0
0x833CBA: cmp     dword ptr [esi+30h], 0
0x833CBE: jnz     short loc_833CC8
0x833CC0: call    sub_772DF0
0x833CC5: mov     [esi+30h], eax
0x833CC8: mov     ecx, [esi+30h]
0x833CCB: push    0
0x833CCD: push    0
0x833CCF: push    0Eh
0x833CD1: call    sub_772CD0
0x833CD6: cmp     dword ptr [esi+30h], 0
0x833CDA: jnz     short loc_833CE4
0x833CDC: call    sub_772DF0
0x833CE1: mov     [esi+30h], eax
0x833CE4: mov     ecx, [esi+30h]
0x833CE7: push    0
0x833CE9: push    0
0x833CEB: push    34h ; '4'
0x833CED: call    sub_772CD0
0x833CF2: or      ebx, 0FFFFFFFFh
0x833CF5: cmp     esi, ds:0B45A14h
0x833CFB: mov     dword ptr ds:0B43F90h, 200F2h
0x833D05: mov     dword ptr ds:0B44620h, 108h
0x833D0F: mov     dword ptr ds:0B43900h, 60h ; '`'
0x833D19: jz      short loc_833D39
0x833D1B: add     [esi+60h], ebx
0x833D1E: jnz     short loc_833D27
0x833D20: mov     ecx, esi
0x833D22: call    sub_7604D0
0x833D27: mov     esi, ds:0B45A14h
0x833D2D: test    esi, esi
0x833D2F: mov     [esp+2Ch+var_14], esi
0x833D33: jz      short loc_833D39
0x833D35: add     dword ptr [esi+60h], 1
0x833D39: cmp     dword ptr [esi+18h], 6
0x833D3D: jnb     loc_833FF2
0x833D43: lea     ecx, [esp+2Ch+var_10]
0x833D47: push    ecx
0x833D48: call    sub_772630
0x833D4D: add     esp, 4
0x833D50: mov     ebp, eax
0x833D52: cmp     edi, [ebp+0]
0x833D55: mov     byte ptr [esp+2Ch+var_4], 20h ; ' '
0x833D5A: jz      short loc_833D7B
0x833D5C: test    edi, edi
0x833D5E: jz      short loc_833D6C
0x833D60: add     [edi+5Ch], ebx
0x833D63: jnz     short loc_833D6C
0x833D65: mov     ecx, edi
0x833D67: call    sub_772560
0x833D6C: mov     edi, [ebp+0]
0x833D6F: test    edi, edi
0x833D71: mov     [esp+2Ch+a3], edi
0x833D75: jz      short loc_833D7B
0x833D77: add     dword ptr [edi+5Ch], 1
0x833D7B: mov     eax, [esp+2Ch+var_10]
0x833D7F: test    eax, eax
0x833D81: mov     byte ptr [esp+2Ch+var_4], 1
0x833D86: jz      short loc_833D9A
0x833D88: add     [eax+5Ch], ebx
0x833D8B: mov     ecx, eax
0x833D8D: add     eax, 5Ch ; '\'
0x833D90: cmp     dword ptr [eax], 0
0x833D93: jnz     short loc_833D9A
0x833D95: call    sub_772560
0x833D9A: push    2
0x833D9C: push    1
0x833D9E: push    0
0x833DA0: push    edi
0x833DA1: call    sub_801110
0x833DA6: mov     edx, [esi+14h]
0x833DA9: add     esp, 10h
0x833DAC: push    edi; a3
0x833DAD: push    edx; a2
0x833DAE: mov     ecx, esi; this
0x833DB0: call    sub_760010
0x833DB5: lea     eax, [esp+2Ch+var_10]
0x833DB9: push    eax
0x833DBA: call    sub_772630
0x833DBF: add     esp, 4
0x833DC2: mov     ebp, eax
0x833DC4: cmp     edi, [ebp+0]
0x833DC7: mov     byte ptr [esp+2Ch+var_4], 21h ; '!'
0x833DCC: jz      short loc_833DED
0x833DCE: test    edi, edi
0x833DD0: jz      short loc_833DDE
0x833DD2: add     [edi+5Ch], ebx
0x833DD5: jnz     short loc_833DDE
0x833DD7: mov     ecx, edi
0x833DD9: call    sub_772560
0x833DDE: mov     edi, [ebp+0]
0x833DE1: test    edi, edi
0x833DE3: mov     [esp+2Ch+a3], edi
0x833DE7: jz      short loc_833DED
0x833DE9: add     dword ptr [edi+5Ch], 1
0x833DED: mov     eax, [esp+2Ch+var_10]
0x833DF1: test    eax, eax
0x833DF3: mov     byte ptr [esp+2Ch+var_4], 1
0x833DF8: jz      short loc_833E0C
0x833DFA: add     [eax+5Ch], ebx
0x833DFD: mov     ecx, eax
0x833DFF: add     eax, 5Ch ; '\'
0x833E02: cmp     dword ptr [eax], 0
0x833E05: jnz     short loc_833E0C
0x833E07: call    sub_772560
0x833E0C: push    2
0x833E0E: push    1
0x833E10: push    1
0x833E12: push    edi
0x833E13: call    sub_801110
0x833E18: add     esp, 10h
0x833E1B: push    edi; a3
0x833E1C: push    1; a2
0x833E1E: mov     ecx, esi; this
0x833E20: call    sub_760010
0x833E25: lea     ecx, [esp+2Ch+var_10]
0x833E29: push    ecx
0x833E2A: call    sub_772630
0x833E2F: add     esp, 4
0x833E32: mov     ebp, eax
0x833E34: cmp     edi, [ebp+0]
0x833E37: mov     byte ptr [esp+2Ch+var_4], 22h ; '"'
0x833E3C: jz      short loc_833E5D
0x833E3E: test    edi, edi
0x833E40: jz      short loc_833E4E
0x833E42: add     [edi+5Ch], ebx
0x833E45: jnz     short loc_833E4E
0x833E47: mov     ecx, edi
0x833E49: call    sub_772560
0x833E4E: mov     edi, [ebp+0]
0x833E51: test    edi, edi
0x833E53: mov     [esp+2Ch+a3], edi
0x833E57: jz      short loc_833E5D
0x833E59: add     dword ptr [edi+5Ch], 1
0x833E5D: mov     eax, [esp+2Ch+var_10]
0x833E61: test    eax, eax
0x833E63: mov     byte ptr [esp+2Ch+var_4], 1
0x833E68: jz      short loc_833E7C
0x833E6A: add     [eax+5Ch], ebx
0x833E6D: mov     ecx, eax
0x833E6F: add     eax, 5Ch ; '\'
0x833E72: cmp     dword ptr [eax], 0
0x833E75: jnz     short loc_833E7C
0x833E77: call    sub_772560
0x833E7C: push    2
0x833E7E: push    1
0x833E80: push    2
0x833E82: push    edi
0x833E83: call    sub_801110
0x833E88: add     esp, 10h
0x833E8B: push    edi; a3
0x833E8C: push    2; a2
0x833E8E: mov     ecx, esi; this
0x833E90: call    sub_760010
0x833E95: lea     edx, [esp+2Ch+var_10]
0x833E99: push    edx
0x833E9A: call    sub_772630
0x833E9F: add     esp, 4
0x833EA2: mov     ebp, eax
0x833EA4: cmp     edi, [ebp+0]
0x833EA7: mov     byte ptr [esp+2Ch+var_4], 23h ; '#'
0x833EAC: jz      short loc_833ECD
0x833EAE: test    edi, edi
0x833EB0: jz      short loc_833EBE
0x833EB2: add     [edi+5Ch], ebx
0x833EB5: jnz     short loc_833EBE
0x833EB7: mov     ecx, edi
0x833EB9: call    sub_772560
0x833EBE: mov     edi, [ebp+0]
0x833EC1: test    edi, edi
0x833EC3: mov     [esp+2Ch+a3], edi
0x833EC7: jz      short loc_833ECD
0x833EC9: add     dword ptr [edi+5Ch], 1
0x833ECD: mov     eax, [esp+2Ch+var_10]
0x833ED1: test    eax, eax
0x833ED3: mov     byte ptr [esp+2Ch+var_4], 1
0x833ED8: jz      short loc_833EEC
0x833EDA: add     [eax+5Ch], ebx
0x833EDD: mov     ecx, eax
0x833EDF: add     eax, 5Ch ; '\'
0x833EE2: cmp     dword ptr [eax], 0
0x833EE5: jnz     short loc_833EEC
0x833EE7: call    sub_772560
0x833EEC: mov     eax, ds:0B43110h
0x833EF1: push    eax; a2
0x833EF2: mov     ecx, edi; this
0x833EF4: call    sub_76C910
0x833EF9: push    0
0x833EFB: push    3
0x833EFD: push    3
0x833EFF: push    edi
0x833F00: call    sub_801110
0x833F05: add     esp, 10h
0x833F08: push    edi; a3
0x833F09: push    3; a2
0x833F0B: mov     ecx, esi; this
0x833F0D: call    sub_760010
0x833F12: lea     ecx, [esp+2Ch+var_10]
0x833F16: push    ecx
0x833F17: call    sub_772630
0x833F1C: add     esp, 4
0x833F1F: mov     ebp, eax
0x833F21: cmp     edi, [ebp+0]
0x833F24: mov     byte ptr [esp+2Ch+var_4], 24h ; '$'
0x833F29: jz      short loc_833F4A
0x833F2B: test    edi, edi
0x833F2D: jz      short loc_833F3B
0x833F2F: add     [edi+5Ch], ebx
0x833F32: jnz     short loc_833F3B
0x833F34: mov     ecx, edi
0x833F36: call    sub_772560
0x833F3B: mov     edi, [ebp+0]
0x833F3E: test    edi, edi
0x833F40: mov     [esp+2Ch+a3], edi
0x833F44: jz      short loc_833F4A
0x833F46: add     dword ptr [edi+5Ch], 1
0x833F4A: mov     eax, [esp+2Ch+var_10]
0x833F4E: test    eax, eax
0x833F50: mov     byte ptr [esp+2Ch+var_4], 1
0x833F55: jz      short loc_833F69
0x833F57: add     [eax+5Ch], ebx
0x833F5A: mov     ecx, eax
0x833F5C: add     eax, 5Ch ; '\'
0x833F5F: cmp     dword ptr [eax], 0
0x833F62: jnz     short loc_833F69
0x833F64: call    sub_772560
0x833F69: push    2
0x833F6B: push    1
0x833F6D: push    4
0x833F6F: push    edi
0x833F70: call    sub_801110
0x833F75: add     esp, 10h
0x833F78: push    edi; a3
0x833F79: push    4; a2
0x833F7B: mov     ecx, esi; this
0x833F7D: call    sub_760010
0x833F82: lea     edx, [esp+2Ch+var_10]
0x833F86: push    edx
0x833F87: call    sub_772630
0x833F8C: add     esp, 4
0x833F8F: mov     ebp, eax
0x833F91: cmp     edi, [ebp+0]
0x833F94: mov     byte ptr [esp+2Ch+var_4], 25h ; '%'
0x833F99: jz      short loc_833FBA
0x833F9B: test    edi, edi
0x833F9D: jz      short loc_833FAB
0x833F9F: add     [edi+5Ch], ebx
0x833FA2: jnz     short loc_833FAB
0x833FA4: mov     ecx, edi
0x833FA6: call    sub_772560
0x833FAB: mov     edi, [ebp+0]
0x833FAE: test    edi, edi
0x833FB0: mov     [esp+2Ch+a3], edi
0x833FB4: jz      short loc_833FBA
0x833FB6: add     dword ptr [edi+5Ch], 1
0x833FBA: mov     eax, [esp+2Ch+var_10]
0x833FBE: test    eax, eax
0x833FC0: mov     byte ptr [esp+2Ch+var_4], 1
0x833FC5: jz      short loc_833FD9
0x833FC7: add     [eax+5Ch], ebx
0x833FCA: mov     ecx, eax
0x833FCC: add     eax, 5Ch ; '\'
0x833FCF: cmp     dword ptr [eax], 0
0x833FD2: jnz     short loc_833FD9
0x833FD4: call    sub_772560
0x833FD9: push    0
0x833FDB: push    3
0x833FDD: push    5
0x833FDF: push    edi
0x833FE0: call    sub_801110
0x833FE5: add     esp, 10h
0x833FE8: push    edi; a3
0x833FE9: push    5; a2
0x833FEB: mov     ecx, esi; this
0x833FED: call    sub_760010
0x833FF2: mov     eax, ds:0B453E8h
0x833FF7: mov     ebp, [esi+58h]
0x833FFA: cmp     ebp, eax
0x833FFC: mov     ebx, eax
0x833FFE: jz      short loc_834032
0x834000: test    ebp, ebp
0x834002: jz      short loc_834021
0x834004: lea     eax, [ebp+4]
0x834007: push    eax; lpAddend
0x834008: call    dword ptr ds:0A2807Ch
0x83400E: test    eax, eax
0x834010: jnz     short loc_834021
0x834012: test    ebp, ebp
0x834014: jz      short loc_834021
0x834016: mov     edx, [ebp+0]
0x834019: mov     eax, [edx]
0x83401B: push    1
0x83401D: mov     ecx, ebp
0x83401F: call    eax
0x834021: test    ebx, ebx
0x834023: mov     [esi+58h], ebx
0x834026: jz      short loc_834032
0x834028: add     ebx, 4
0x83402B: push    ebx; lpAddend
0x83402C: call    dword ptr ds:0A28078h
0x834032: mov     eax, ds:0B451E4h
0x834037: mov     ebp, [esi+44h]
0x83403A: cmp     ebp, eax
0x83403C: mov     ebx, eax
0x83403E: jz      short loc_834072
0x834040: test    ebp, ebp
0x834042: jz      short loc_834061
0x834044: lea     ecx, [ebp+4]
0x834047: push    ecx; lpAddend
0x834048: call    dword ptr ds:0A2807Ch
0x83404E: test    eax, eax
0x834050: jnz     short loc_834061
0x834052: test    ebp, ebp
0x834054: jz      short loc_834061
0x834056: mov     edx, [ebp+0]
0x834059: mov     eax, [edx]
0x83405B: push    1
0x83405D: mov     ecx, ebp
0x83405F: call    eax
0x834061: test    ebx, ebx
0x834063: mov     [esi+44h], ebx
0x834066: jz      short loc_834072
0x834068: add     ebx, 4
0x83406B: push    ebx; lpAddend
0x83406C: call    dword ptr ds:0A28078h
0x834072: cmp     dword ptr [esi+30h], 0
0x834076: jnz     short loc_834080
0x834078: call    sub_772DF0
0x83407D: mov     [esi+30h], eax
0x834080: mov     ecx, [esi+30h]
0x834083: push    0
0x834085: push    1
0x834087: push    1Bh
0x834089: call    sub_772CD0
0x83408E: cmp     dword ptr [esi+30h], 0
0x834092: jnz     short loc_83409C
0x834094: call    sub_772DF0
0x834099: mov     [esi+30h], eax
0x83409C: mov     ecx, [esi+30h]
0x83409F: push    0
0x8340A1: push    2
0x8340A3: push    13h
0x8340A5: call    sub_772CD0
0x8340AA: cmp     dword ptr [esi+30h], 0
0x8340AE: jnz     short loc_8340B8
0x8340B0: call    sub_772DF0
0x8340B5: mov     [esi+30h], eax
0x8340B8: mov     ecx, [esi+30h]
0x8340BB: push    0
0x8340BD: push    2
0x8340BF: push    14h
0x8340C1: call    sub_772CD0
0x8340C6: cmp     dword ptr [esi+30h], 0
0x8340CA: jnz     short loc_8340D4
0x8340CC: call    sub_772DF0
0x8340D1: mov     [esi+30h], eax
0x8340D4: mov     ecx, [esi+30h]
0x8340D7: push    0
0x8340D9: push    0
0x8340DB: push    0Fh
0x8340DD: call    sub_772CD0
0x8340E2: cmp     dword ptr [esi+30h], 0
0x8340E6: jnz     short loc_8340F0
0x8340E8: call    sub_772DF0
0x8340ED: mov     [esi+30h], eax
0x8340F0: mov     ecx, [esi+30h]
0x8340F3: push    0
0x8340F5: push    1
0x8340F7: push    7
0x8340F9: call    sub_772CD0
0x8340FE: cmp     dword ptr [esi+30h], 0
0x834102: jnz     short loc_83410C
0x834104: call    sub_772DF0
0x834109: mov     [esi+30h], eax
0x83410C: mov     ecx, [esi+30h]
0x83410F: push    0
0x834111: push    3
0x834113: push    17h
0x834115: call    sub_772CD0
0x83411A: cmp     dword ptr [esi+30h], 0
0x83411E: jnz     short loc_834128
0x834120: call    sub_772DF0
0x834125: mov     [esi+30h], eax
0x834128: mov     ecx, [esi+30h]
0x83412B: push    0
0x83412D: push    0
0x83412F: push    0Eh
0x834131: call    sub_772CD0
0x834136: cmp     dword ptr [esi+30h], 0
0x83413A: jnz     short loc_834144
0x83413C: call    sub_772DF0
0x834141: mov     [esi+30h], eax
0x834144: mov     ecx, [esi+30h]
0x834147: push    0
0x834149: push    0
0x83414B: push    34h ; '4'
0x83414D: call    sub_772CD0
0x834152: or      ebx, 0FFFFFFFFh
0x834155: cmp     esi, ds:0B45A1Ch
0x83415B: mov     dword ptr ds:0B43F94h, 200F2h
0x834165: mov     dword ptr ds:0B44624h, 108h
0x83416F: mov     dword ptr ds:0B43900h, 60h ; '`'
0x834179: jz      short loc_834199
0x83417B: add     [esi+60h], ebx
0x83417E: jnz     short loc_834187
0x834180: mov     ecx, esi
0x834182: call    sub_7604D0
0x834187: mov     esi, ds:0B45A1Ch
0x83418D: test    esi, esi
0x83418F: mov     [esp+2Ch+var_14], esi
0x834193: jz      short loc_834199
0x834195: add     dword ptr [esi+60h], 1
0x834199: cmp     dword ptr [esi+18h], 6
0x83419D: jnb     loc_834452
0x8341A3: lea     ecx, [esp+2Ch+var_10]
0x8341A7: push    ecx
0x8341A8: call    sub_772630
0x8341AD: add     esp, 4
0x8341B0: mov     ebp, eax
0x8341B2: cmp     edi, [ebp+0]
0x8341B5: mov     byte ptr [esp+2Ch+var_4], 26h ; '&'
0x8341BA: jz      short loc_8341DB
0x8341BC: test    edi, edi
0x8341BE: jz      short loc_8341CC
0x8341C0: add     [edi+5Ch], ebx
0x8341C3: jnz     short loc_8341CC
0x8341C5: mov     ecx, edi
0x8341C7: call    sub_772560
0x8341CC: mov     edi, [ebp+0]
0x8341CF: test    edi, edi
0x8341D1: mov     [esp+2Ch+a3], edi
0x8341D5: jz      short loc_8341DB
0x8341D7: add     dword ptr [edi+5Ch], 1
0x8341DB: mov     eax, [esp+2Ch+var_10]
0x8341DF: test    eax, eax
0x8341E1: mov     byte ptr [esp+2Ch+var_4], 1
0x8341E6: jz      short loc_8341FA
0x8341E8: add     [eax+5Ch], ebx
0x8341EB: mov     ecx, eax
0x8341ED: add     eax, 5Ch ; '\'
0x8341F0: cmp     dword ptr [eax], 0
0x8341F3: jnz     short loc_8341FA
0x8341F5: call    sub_772560
0x8341FA: push    2
0x8341FC: push    1
0x8341FE: push    0
0x834200: push    edi
0x834201: call    sub_801110
0x834206: mov     edx, [esi+14h]
0x834209: add     esp, 10h
0x83420C: push    edi; a3
0x83420D: push    edx; a2
0x83420E: mov     ecx, esi; this
0x834210: call    sub_760010
0x834215: lea     eax, [esp+2Ch+var_10]
0x834219: push    eax
0x83421A: call    sub_772630
0x83421F: add     esp, 4
0x834222: mov     ebp, eax
0x834224: cmp     edi, [ebp+0]
0x834227: mov     byte ptr [esp+2Ch+var_4], 27h ; '''
0x83422C: jz      short loc_83424D
0x83422E: test    edi, edi
0x834230: jz      short loc_83423E
0x834232: add     [edi+5Ch], ebx
0x834235: jnz     short loc_83423E
0x834237: mov     ecx, edi
0x834239: call    sub_772560
0x83423E: mov     edi, [ebp+0]
0x834241: test    edi, edi
0x834243: mov     [esp+2Ch+a3], edi
0x834247: jz      short loc_83424D
0x834249: add     dword ptr [edi+5Ch], 1
0x83424D: mov     eax, [esp+2Ch+var_10]
0x834251: test    eax, eax
0x834253: mov     byte ptr [esp+2Ch+var_4], 1
0x834258: jz      short loc_83426C
0x83425A: add     [eax+5Ch], ebx
0x83425D: mov     ecx, eax
0x83425F: add     eax, 5Ch ; '\'
0x834262: cmp     dword ptr [eax], 0
0x834265: jnz     short loc_83426C
0x834267: call    sub_772560
0x83426C: push    2
0x83426E: push    1
0x834270: push    1
0x834272: push    edi
0x834273: call    sub_801110
0x834278: add     esp, 10h
0x83427B: push    edi; a3
0x83427C: push    1; a2
0x83427E: mov     ecx, esi; this
0x834280: call    sub_760010
0x834285: lea     ecx, [esp+2Ch+var_10]
0x834289: push    ecx
0x83428A: call    sub_772630
0x83428F: add     esp, 4
0x834292: mov     ebp, eax
0x834294: cmp     edi, [ebp+0]
0x834297: mov     byte ptr [esp+2Ch+var_4], 28h ; '('
0x83429C: jz      short loc_8342BD
0x83429E: test    edi, edi
0x8342A0: jz      short loc_8342AE
0x8342A2: add     [edi+5Ch], ebx
0x8342A5: jnz     short loc_8342AE
0x8342A7: mov     ecx, edi
0x8342A9: call    sub_772560
0x8342AE: mov     edi, [ebp+0]
0x8342B1: test    edi, edi
0x8342B3: mov     [esp+2Ch+a3], edi
0x8342B7: jz      short loc_8342BD
0x8342B9: add     dword ptr [edi+5Ch], 1
0x8342BD: mov     eax, [esp+2Ch+var_10]
0x8342C1: test    eax, eax
0x8342C3: mov     byte ptr [esp+2Ch+var_4], 1
0x8342C8: jz      short loc_8342DC
0x8342CA: add     [eax+5Ch], ebx
0x8342CD: mov     ecx, eax
0x8342CF: add     eax, 5Ch ; '\'
0x8342D2: cmp     dword ptr [eax], 0
0x8342D5: jnz     short loc_8342DC
0x8342D7: call    sub_772560
0x8342DC: push    2
0x8342DE: push    1
0x8342E0: push    2
0x8342E2: push    edi
0x8342E3: call    sub_801110
0x8342E8: add     esp, 10h
0x8342EB: push    edi; a3
0x8342EC: push    2; a2
0x8342EE: mov     ecx, esi; this
0x8342F0: call    sub_760010
0x8342F5: lea     edx, [esp+2Ch+var_10]
0x8342F9: push    edx
0x8342FA: call    sub_772630
0x8342FF: add     esp, 4
0x834302: mov     ebp, eax
0x834304: cmp     edi, [ebp+0]
0x834307: mov     byte ptr [esp+2Ch+var_4], 29h ; ')'
0x83430C: jz      short loc_83432D
0x83430E: test    edi, edi
0x834310: jz      short loc_83431E
0x834312: add     [edi+5Ch], ebx
0x834315: jnz     short loc_83431E
0x834317: mov     ecx, edi
0x834319: call    sub_772560
0x83431E: mov     edi, [ebp+0]
0x834321: test    edi, edi
0x834323: mov     [esp+2Ch+a3], edi
0x834327: jz      short loc_83432D
0x834329: add     dword ptr [edi+5Ch], 1
0x83432D: mov     eax, [esp+2Ch+var_10]
0x834331: test    eax, eax
0x834333: mov     byte ptr [esp+2Ch+var_4], 1
0x834338: jz      short loc_83434C
0x83433A: add     [eax+5Ch], ebx
0x83433D: mov     ecx, eax
0x83433F: add     eax, 5Ch ; '\'
0x834342: cmp     dword ptr [eax], 0
0x834345: jnz     short loc_83434C
0x834347: call    sub_772560
0x83434C: mov     eax, ds:0B43110h
0x834351: push    eax; a2
0x834352: mov     ecx, edi; this
0x834354: call    sub_76C910
0x834359: push    0
0x83435B: push    3
0x83435D: push    3
0x83435F: push    edi
0x834360: call    sub_801110
0x834365: add     esp, 10h
0x834368: push    edi; a3
0x834369: push    3; a2
0x83436B: mov     ecx, esi; this
0x83436D: call    sub_760010
0x834372: lea     ecx, [esp+2Ch+var_10]
0x834376: push    ecx
0x834377: call    sub_772630
0x83437C: add     esp, 4
0x83437F: mov     ebp, eax
0x834381: cmp     edi, [ebp+0]
0x834384: mov     byte ptr [esp+2Ch+var_4], 2Ah ; '*'
0x834389: jz      short loc_8343AA
0x83438B: test    edi, edi
0x83438D: jz      short loc_83439B
0x83438F: add     [edi+5Ch], ebx
0x834392: jnz     short loc_83439B
0x834394: mov     ecx, edi
0x834396: call    sub_772560
0x83439B: mov     edi, [ebp+0]
0x83439E: test    edi, edi
0x8343A0: mov     [esp+2Ch+a3], edi
0x8343A4: jz      short loc_8343AA
0x8343A6: add     dword ptr [edi+5Ch], 1
0x8343AA: mov     eax, [esp+2Ch+var_10]
0x8343AE: test    eax, eax
0x8343B0: mov     byte ptr [esp+2Ch+var_4], 1
0x8343B5: jz      short loc_8343C9
0x8343B7: add     [eax+5Ch], ebx
0x8343BA: mov     ecx, eax
0x8343BC: add     eax, 5Ch ; '\'
0x8343BF: cmp     dword ptr [eax], 0
0x8343C2: jnz     short loc_8343C9
0x8343C4: call    sub_772560
0x8343C9: push    2
0x8343CB: push    1
0x8343CD: push    4
0x8343CF: push    edi
0x8343D0: call    sub_801110
0x8343D5: add     esp, 10h
0x8343D8: push    edi; a3
0x8343D9: push    4; a2
0x8343DB: mov     ecx, esi; this
0x8343DD: call    sub_760010
0x8343E2: lea     edx, [esp+2Ch+var_10]
0x8343E6: push    edx
0x8343E7: call    sub_772630
0x8343EC: add     esp, 4
0x8343EF: mov     ebp, eax
0x8343F1: cmp     edi, [ebp+0]
0x8343F4: mov     byte ptr [esp+2Ch+var_4], 2Bh ; '+'
0x8343F9: jz      short loc_83441A
0x8343FB: test    edi, edi
0x8343FD: jz      short loc_83440B
0x8343FF: add     [edi+5Ch], ebx
0x834402: jnz     short loc_83440B
0x834404: mov     ecx, edi
0x834406: call    sub_772560
0x83440B: mov     edi, [ebp+0]
0x83440E: test    edi, edi
0x834410: mov     [esp+2Ch+a3], edi
0x834414: jz      short loc_83441A
0x834416: add     dword ptr [edi+5Ch], 1
0x83441A: mov     eax, [esp+2Ch+var_10]
0x83441E: test    eax, eax
0x834420: mov     byte ptr [esp+2Ch+var_4], 1
0x834425: jz      short loc_834439
0x834427: add     [eax+5Ch], ebx
0x83442A: mov     ecx, eax
0x83442C: add     eax, 5Ch ; '\'
0x83442F: cmp     dword ptr [eax], 0
0x834432: jnz     short loc_834439
0x834434: call    sub_772560
0x834439: push    0
0x83443B: push    3
0x83443D: push    5
0x83443F: push    edi
0x834440: call    sub_801110
0x834445: add     esp, 10h
0x834448: push    edi; a3
0x834449: push    5; a2
0x83444B: mov     ecx, esi; this
0x83444D: call    sub_760010
0x834452: mov     eax, ds:0B453ECh
0x834457: mov     ebp, [esi+58h]
0x83445A: cmp     ebp, eax
0x83445C: mov     ebx, eax
0x83445E: jz      short loc_834492
0x834460: test    ebp, ebp
0x834462: jz      short loc_834481
0x834464: lea     eax, [ebp+4]
0x834467: push    eax; lpAddend
0x834468: call    dword ptr ds:0A2807Ch
0x83446E: test    eax, eax
0x834470: jnz     short loc_834481
0x834472: test    ebp, ebp
0x834474: jz      short loc_834481
0x834476: mov     edx, [ebp+0]
0x834479: mov     eax, [edx]
0x83447B: push    1
0x83447D: mov     ecx, ebp
0x83447F: call    eax
0x834481: test    ebx, ebx
0x834483: mov     [esi+58h], ebx
0x834486: jz      short loc_834492
0x834488: add     ebx, 4
0x83448B: push    ebx; lpAddend
0x83448C: call    dword ptr ds:0A28078h
0x834492: mov     eax, ds:0B451E0h
0x834497: mov     ebp, [esi+44h]
0x83449A: cmp     ebp, eax
0x83449C: mov     ebx, eax
0x83449E: jz      short loc_8344D2
0x8344A0: test    ebp, ebp
0x8344A2: jz      short loc_8344C1
0x8344A4: lea     ecx, [ebp+4]
0x8344A7: push    ecx; lpAddend
0x8344A8: call    dword ptr ds:0A2807Ch
0x8344AE: test    eax, eax
0x8344B0: jnz     short loc_8344C1
0x8344B2: test    ebp, ebp
0x8344B4: jz      short loc_8344C1
0x8344B6: mov     edx, [ebp+0]
0x8344B9: mov     eax, [edx]
0x8344BB: push    1
0x8344BD: mov     ecx, ebp
0x8344BF: call    eax
0x8344C1: test    ebx, ebx
0x8344C3: mov     [esi+44h], ebx
0x8344C6: jz      short loc_8344D2
0x8344C8: add     ebx, 4
0x8344CB: push    ebx; lpAddend
0x8344CC: call    dword ptr ds:0A28078h
0x8344D2: cmp     dword ptr [esi+30h], 0
0x8344D6: jnz     short loc_8344E0
0x8344D8: call    sub_772DF0
0x8344DD: mov     [esi+30h], eax
0x8344E0: mov     ecx, [esi+30h]
0x8344E3: push    0
0x8344E5: push    1
0x8344E7: push    1Bh
0x8344E9: call    sub_772CD0
0x8344EE: cmp     dword ptr [esi+30h], 0
0x8344F2: jnz     short loc_8344FC
0x8344F4: call    sub_772DF0
0x8344F9: mov     [esi+30h], eax
0x8344FC: mov     ecx, [esi+30h]
0x8344FF: push    0
0x834501: push    2
0x834503: push    13h
0x834505: call    sub_772CD0
0x83450A: cmp     dword ptr [esi+30h], 0
0x83450E: jnz     short loc_834518
0x834510: call    sub_772DF0
0x834515: mov     [esi+30h], eax
0x834518: mov     ecx, [esi+30h]
0x83451B: push    0
0x83451D: push    2
0x83451F: push    14h
0x834521: call    sub_772CD0
0x834526: cmp     dword ptr [esi+30h], 0
0x83452A: jnz     short loc_834534
0x83452C: call    sub_772DF0
0x834531: mov     [esi+30h], eax
0x834534: mov     ecx, [esi+30h]
0x834537: push    0
0x834539: push    0
0x83453B: push    0Fh
0x83453D: call    sub_772CD0
0x834542: cmp     dword ptr [esi+30h], 0
0x834546: jnz     short loc_834550
0x834548: call    sub_772DF0
0x83454D: mov     [esi+30h], eax
0x834550: mov     ecx, [esi+30h]
0x834553: push    0
0x834555: push    1
0x834557: push    7
0x834559: call    sub_772CD0
0x83455E: cmp     dword ptr [esi+30h], 0
0x834562: jnz     short loc_83456C
0x834564: call    sub_772DF0
0x834569: mov     [esi+30h], eax
0x83456C: mov     ecx, [esi+30h]
0x83456F: push    0
0x834571: push    3
0x834573: push    17h
0x834575: call    sub_772CD0
0x83457A: cmp     dword ptr [esi+30h], 0
0x83457E: jnz     short loc_834588
0x834580: call    sub_772DF0
0x834585: mov     [esi+30h], eax
0x834588: mov     ecx, [esi+30h]
0x83458B: push    0
0x83458D: push    0
0x83458F: push    0Eh
0x834591: call    sub_772CD0
0x834596: cmp     dword ptr [esi+30h], 0
0x83459A: jnz     short loc_8345A4
0x83459C: call    sub_772DF0
0x8345A1: mov     [esi+30h], eax
0x8345A4: mov     ecx, [esi+30h]
0x8345A7: push    0
0x8345A9: push    0
0x8345AB: push    34h ; '4'
0x8345AD: call    sub_772CD0
0x8345B2: cmp     esi, ds:0B45A20h
0x8345B8: mov     ebx, 60h ; '`'
0x8345BD: mov     dword ptr ds:0B43F9Ch, 600F8h
0x8345C7: mov     dword ptr ds:0B4462Ch, 108h
0x8345D1: mov     ds:0B4390Ch, ebx
0x8345D7: jz      short loc_8345F8
0x8345D9: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8345DD: jnz     short loc_8345E6
0x8345DF: mov     ecx, esi
0x8345E1: call    sub_7604D0
0x8345E6: mov     esi, ds:0B45A20h
0x8345EC: test    esi, esi
0x8345EE: mov     [esp+2Ch+var_14], esi
0x8345F2: jz      short loc_8345F8
0x8345F4: add     dword ptr [esi+60h], 1
0x8345F8: cmp     dword ptr [esi+18h], 6
0x8345FC: jnb     loc_8348BD
0x834602: lea     ecx, [esp+2Ch+var_10]
0x834606: push    ecx
0x834607: call    sub_772630
0x83460C: add     esp, 4
0x83460F: mov     ebp, eax
0x834611: cmp     edi, [ebp+0]
0x834614: mov     byte ptr [esp+2Ch+var_4], 2Ch ; ','
0x834619: jz      short loc_83463B
0x83461B: test    edi, edi
0x83461D: jz      short loc_83462C
0x83461F: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x834623: jnz     short loc_83462C
0x834625: mov     ecx, edi
0x834627: call    sub_772560
0x83462C: mov     edi, [ebp+0]
0x83462F: test    edi, edi
0x834631: mov     [esp+2Ch+a3], edi
0x834635: jz      short loc_83463B
0x834637: add     dword ptr [edi+5Ch], 1
0x83463B: mov     eax, [esp+2Ch+var_10]
0x83463F: test    eax, eax
0x834641: mov     byte ptr [esp+2Ch+var_4], 1
0x834646: jz      short loc_83465B
0x834648: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83464C: mov     ecx, eax
0x83464E: add     eax, 5Ch ; '\'
0x834651: cmp     dword ptr [eax], 0
0x834654: jnz     short loc_83465B
0x834656: call    sub_772560
0x83465B: push    2
0x83465D: push    1
0x83465F: push    0
0x834661: push    edi
0x834662: call    sub_801110
0x834667: mov     edx, [esi+14h]
0x83466A: add     esp, 10h
0x83466D: push    edi; a3
0x83466E: push    edx; a2
0x83466F: mov     ecx, esi; this
0x834671: call    sub_760010
0x834676: lea     eax, [esp+2Ch+var_10]
0x83467A: push    eax
0x83467B: call    sub_772630
0x834680: add     esp, 4
0x834683: mov     ebp, eax
0x834685: cmp     edi, [ebp+0]
0x834688: mov     byte ptr [esp+2Ch+var_4], 2Dh ; '-'
0x83468D: jz      short loc_8346AF
0x83468F: test    edi, edi
0x834691: jz      short loc_8346A0
0x834693: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x834697: jnz     short loc_8346A0
0x834699: mov     ecx, edi
0x83469B: call    sub_772560
0x8346A0: mov     edi, [ebp+0]
0x8346A3: test    edi, edi
0x8346A5: mov     [esp+2Ch+a3], edi
0x8346A9: jz      short loc_8346AF
0x8346AB: add     dword ptr [edi+5Ch], 1
0x8346AF: mov     eax, [esp+2Ch+var_10]
0x8346B3: test    eax, eax
0x8346B5: mov     byte ptr [esp+2Ch+var_4], 1
0x8346BA: jz      short loc_8346CF
0x8346BC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8346C0: mov     ecx, eax
0x8346C2: add     eax, 5Ch ; '\'
0x8346C5: cmp     dword ptr [eax], 0
0x8346C8: jnz     short loc_8346CF
0x8346CA: call    sub_772560
0x8346CF: push    2
0x8346D1: push    1
0x8346D3: push    1
0x8346D5: push    edi
0x8346D6: call    sub_801110
0x8346DB: add     esp, 10h
0x8346DE: push    edi; a3
0x8346DF: push    1; a2
0x8346E1: mov     ecx, esi; this
0x8346E3: call    sub_760010
0x8346E8: lea     ecx, [esp+2Ch+var_10]
0x8346EC: push    ecx
0x8346ED: call    sub_772630
0x8346F2: add     esp, 4
0x8346F5: mov     ebp, eax
0x8346F7: cmp     edi, [ebp+0]
0x8346FA: mov     byte ptr [esp+2Ch+var_4], 2Eh ; '.'
0x8346FF: jz      short loc_834721
0x834701: test    edi, edi
0x834703: jz      short loc_834712
0x834705: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x834709: jnz     short loc_834712
0x83470B: mov     ecx, edi
0x83470D: call    sub_772560
0x834712: mov     edi, [ebp+0]
0x834715: test    edi, edi
0x834717: mov     [esp+2Ch+a3], edi
0x83471B: jz      short loc_834721
0x83471D: add     dword ptr [edi+5Ch], 1
0x834721: mov     eax, [esp+2Ch+var_10]
0x834725: test    eax, eax
0x834727: mov     byte ptr [esp+2Ch+var_4], 1
0x83472C: jz      short loc_834741
0x83472E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834732: mov     ecx, eax
0x834734: add     eax, 5Ch ; '\'
0x834737: cmp     dword ptr [eax], 0
0x83473A: jnz     short loc_834741
0x83473C: call    sub_772560
0x834741: push    2
0x834743: push    1
0x834745: push    2
0x834747: push    edi
0x834748: call    sub_801110
0x83474D: add     esp, 10h
0x834750: push    edi; a3
0x834751: push    2; a2
0x834753: mov     ecx, esi; this
0x834755: call    sub_760010
0x83475A: lea     edx, [esp+2Ch+var_10]
0x83475E: push    edx
0x83475F: call    sub_772630
0x834764: add     esp, 4
0x834767: mov     ebp, eax
0x834769: cmp     edi, [ebp+0]
0x83476C: mov     byte ptr [esp+2Ch+var_4], 2Fh ; '/'
0x834771: jz      short loc_834793
0x834773: test    edi, edi
0x834775: jz      short loc_834784
0x834777: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x83477B: jnz     short loc_834784
0x83477D: mov     ecx, edi
0x83477F: call    sub_772560
0x834784: mov     edi, [ebp+0]
0x834787: test    edi, edi
0x834789: mov     [esp+2Ch+a3], edi
0x83478D: jz      short loc_834793
0x83478F: add     dword ptr [edi+5Ch], 1
0x834793: mov     eax, [esp+2Ch+var_10]
0x834797: test    eax, eax
0x834799: mov     byte ptr [esp+2Ch+var_4], 1
0x83479E: jz      short loc_8347B3
0x8347A0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8347A4: mov     ecx, eax
0x8347A6: add     eax, 5Ch ; '\'
0x8347A9: cmp     dword ptr [eax], 0
0x8347AC: jnz     short loc_8347B3
0x8347AE: call    sub_772560
0x8347B3: mov     eax, ds:0B43110h
0x8347B8: push    eax; a2
0x8347B9: mov     ecx, edi; this
0x8347BB: call    sub_76C910
0x8347C0: push    0
0x8347C2: push    3
0x8347C4: push    3
0x8347C6: push    edi
0x8347C7: call    sub_801110
0x8347CC: add     esp, 10h
0x8347CF: push    edi; a3
0x8347D0: push    3; a2
0x8347D2: mov     ecx, esi; this
0x8347D4: call    sub_760010
0x8347D9: lea     ecx, [esp+2Ch+var_10]
0x8347DD: push    ecx
0x8347DE: call    sub_772630
0x8347E3: add     esp, 4
0x8347E6: mov     ebp, eax
0x8347E8: cmp     edi, [ebp+0]
0x8347EB: mov     byte ptr [esp+2Ch+var_4], 30h ; '0'
0x8347F0: jz      short loc_834812
0x8347F2: test    edi, edi
0x8347F4: jz      short loc_834803
0x8347F6: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8347FA: jnz     short loc_834803
0x8347FC: mov     ecx, edi
0x8347FE: call    sub_772560
0x834803: mov     edi, [ebp+0]
0x834806: test    edi, edi
0x834808: mov     [esp+2Ch+a3], edi
0x83480C: jz      short loc_834812
0x83480E: add     dword ptr [edi+5Ch], 1
0x834812: mov     eax, [esp+2Ch+var_10]
0x834816: test    eax, eax
0x834818: mov     byte ptr [esp+2Ch+var_4], 1
0x83481D: jz      short loc_834832
0x83481F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834823: mov     ecx, eax
0x834825: add     eax, 5Ch ; '\'
0x834828: cmp     dword ptr [eax], 0
0x83482B: jnz     short loc_834832
0x83482D: call    sub_772560
0x834832: push    2
0x834834: push    1
0x834836: push    4
0x834838: push    edi
0x834839: call    sub_801110
0x83483E: add     esp, 10h
0x834841: push    edi; a3
0x834842: push    4; a2
0x834844: mov     ecx, esi; this
0x834846: call    sub_760010
0x83484B: lea     edx, [esp+2Ch+var_10]
0x83484F: push    edx
0x834850: call    sub_772630
0x834855: add     esp, 4
0x834858: mov     ebp, eax
0x83485A: cmp     edi, [ebp+0]
0x83485D: mov     byte ptr [esp+2Ch+var_4], 31h ; '1'
0x834862: jz      short loc_834884
0x834864: test    edi, edi
0x834866: jz      short loc_834875
0x834868: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x83486C: jnz     short loc_834875
0x83486E: mov     ecx, edi
0x834870: call    sub_772560
0x834875: mov     edi, [ebp+0]
0x834878: test    edi, edi
0x83487A: mov     [esp+2Ch+a3], edi
0x83487E: jz      short loc_834884
0x834880: add     dword ptr [edi+5Ch], 1
0x834884: mov     eax, [esp+2Ch+var_10]
0x834888: test    eax, eax
0x83488A: mov     byte ptr [esp+2Ch+var_4], 1
0x83488F: jz      short loc_8348A4
0x834891: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834895: mov     ecx, eax
0x834897: add     eax, 5Ch ; '\'
0x83489A: cmp     dword ptr [eax], 0
0x83489D: jnz     short loc_8348A4
0x83489F: call    sub_772560
0x8348A4: push    0
0x8348A6: push    3
0x8348A8: push    5
0x8348AA: push    edi
0x8348AB: call    sub_801110
0x8348B0: add     esp, 10h
0x8348B3: push    edi; a3
0x8348B4: push    5; a2
0x8348B6: mov     ecx, esi; this
0x8348B8: call    sub_760010
0x8348BD: mov     eax, ds:0B453ECh
0x8348C2: push    eax; a2
0x8348C3: mov     ecx, esi; this
0x8348C5: call    sub_7AECB0
0x8348CA: mov     ecx, ds:0B451E4h
0x8348D0: push    ecx; a2
0x8348D1: mov     ecx, esi; this
0x8348D3: call    sub_7AEC60
0x8348D8: cmp     dword ptr [esi+30h], 0
0x8348DC: jnz     short loc_8348E6
0x8348DE: call    sub_772DF0
0x8348E3: mov     [esi+30h], eax
0x8348E6: mov     ecx, [esi+30h]
0x8348E9: push    0
0x8348EB: push    1
0x8348ED: push    1Bh
0x8348EF: call    sub_772CD0
0x8348F4: cmp     dword ptr [esi+30h], 0
0x8348F8: jnz     short loc_834902
0x8348FA: call    sub_772DF0
0x8348FF: mov     [esi+30h], eax
0x834902: mov     ecx, [esi+30h]
0x834905: push    0
0x834907: push    2
0x834909: push    13h
0x83490B: call    sub_772CD0
0x834910: cmp     dword ptr [esi+30h], 0
0x834914: jnz     short loc_83491E
0x834916: call    sub_772DF0
0x83491B: mov     [esi+30h], eax
0x83491E: mov     ecx, [esi+30h]
0x834921: push    0
0x834923: push    2
0x834925: push    14h
0x834927: call    sub_772CD0
0x83492C: cmp     dword ptr [esi+30h], 0
0x834930: jnz     short loc_83493A
0x834932: call    sub_772DF0
0x834937: mov     [esi+30h], eax
0x83493A: mov     ecx, [esi+30h]
0x83493D: push    0
0x83493F: push    0
0x834941: push    0Fh
0x834943: call    sub_772CD0
0x834948: cmp     dword ptr [esi+30h], 0
0x83494C: jnz     short loc_834956
0x83494E: call    sub_772DF0
0x834953: mov     [esi+30h], eax
0x834956: mov     ecx, [esi+30h]
0x834959: push    0
0x83495B: push    1
0x83495D: push    7
0x83495F: call    sub_772CD0
0x834964: cmp     dword ptr [esi+30h], 0
0x834968: jnz     short loc_834972
0x83496A: call    sub_772DF0
0x83496F: mov     [esi+30h], eax
0x834972: mov     ecx, [esi+30h]
0x834975: push    0
0x834977: push    3
0x834979: push    17h
0x83497B: call    sub_772CD0
0x834980: cmp     dword ptr [esi+30h], 0
0x834984: jnz     short loc_83498E
0x834986: call    sub_772DF0
0x83498B: mov     [esi+30h], eax
0x83498E: mov     ecx, [esi+30h]
0x834991: push    0
0x834993: push    0
0x834995: push    0Eh
0x834997: call    sub_772CD0
0x83499C: cmp     dword ptr [esi+30h], 0
0x8349A0: jnz     short loc_8349AA
0x8349A2: call    sub_772DF0
0x8349A7: mov     [esi+30h], eax
0x8349AA: mov     ecx, [esi+30h]
0x8349AD: push    0
0x8349AF: push    0
0x8349B1: push    34h ; '4'
0x8349B3: call    sub_772CD0
0x8349B8: cmp     esi, ds:0B45A2Ch
0x8349BE: mov     dword ptr ds:0B43FA0h, 600F8h
0x8349C8: mov     dword ptr ds:0B44630h, 108h
0x8349D2: mov     ds:0B4390Ch, ebx
0x8349D8: jz      short loc_8349F9
0x8349DA: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8349DE: jnz     short loc_8349E7
0x8349E0: mov     ecx, esi
0x8349E2: call    sub_7604D0
0x8349E7: mov     esi, ds:0B45A2Ch
0x8349ED: test    esi, esi
0x8349EF: mov     [esp+2Ch+var_14], esi
0x8349F3: jz      short loc_8349F9
0x8349F5: add     dword ptr [esi+60h], 1
0x8349F9: cmp     dword ptr [esi+18h], 6
0x8349FD: jnb     loc_834C29
0x834A03: lea     edx, [esp+2Ch+var_10]
0x834A07: push    edx
0x834A08: call    sub_772630
0x834A0D: add     esp, 4
0x834A10: push    eax
0x834A11: lea     ecx, [esp+30h+a3]
0x834A15: mov     byte ptr [esp+30h+var_4], 32h ; '2'
0x834A1A: call    sub_75FAE0
0x834A1F: mov     eax, [esp+2Ch+var_10]
0x834A23: test    eax, eax
0x834A25: mov     byte ptr [esp+2Ch+var_4], 1
0x834A2A: jz      short loc_834A3F
0x834A2C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834A30: mov     ecx, eax
0x834A32: add     eax, 5Ch ; '\'
0x834A35: cmp     dword ptr [eax], 0
0x834A38: jnz     short loc_834A3F
0x834A3A: call    sub_772560
0x834A3F: mov     edi, [esp+2Ch+a3]
0x834A43: push    2
0x834A45: push    1
0x834A47: push    0
0x834A49: push    edi
0x834A4A: call    sub_801110
0x834A4F: mov     eax, [esi+14h]
0x834A52: add     esp, 10h
0x834A55: push    edi; a3
0x834A56: push    eax; a2
0x834A57: mov     ecx, esi; this
0x834A59: call    sub_760010
0x834A5E: lea     ecx, [esp+2Ch+var_10]
0x834A62: push    ecx
0x834A63: call    sub_772630
0x834A68: add     esp, 4
0x834A6B: push    eax
0x834A6C: lea     ecx, [esp+30h+a3]
0x834A70: mov     byte ptr [esp+30h+var_4], 33h ; '3'
0x834A75: call    sub_75FAE0
0x834A7A: mov     eax, [esp+2Ch+var_10]
0x834A7E: test    eax, eax
0x834A80: mov     byte ptr [esp+2Ch+var_4], 1
0x834A85: jz      short loc_834A9A
0x834A87: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834A8B: mov     ecx, eax
0x834A8D: add     eax, 5Ch ; '\'
0x834A90: cmp     dword ptr [eax], 0
0x834A93: jnz     short loc_834A9A
0x834A95: call    sub_772560
0x834A9A: mov     edi, [esp+2Ch+a3]
0x834A9E: push    2
0x834AA0: push    1
0x834AA2: push    1
0x834AA4: push    edi
0x834AA5: call    sub_801110
0x834AAA: add     esp, 10h
0x834AAD: push    edi; a3
0x834AAE: push    1; a2
0x834AB0: mov     ecx, esi; this
0x834AB2: call    sub_760010
0x834AB7: lea     edx, [esp+2Ch+var_10]
0x834ABB: push    edx
0x834ABC: call    sub_772630
0x834AC1: add     esp, 4
0x834AC4: push    eax
0x834AC5: lea     ecx, [esp+30h+a3]
0x834AC9: mov     byte ptr [esp+30h+var_4], 34h ; '4'
0x834ACE: call    sub_75FAE0
0x834AD3: mov     eax, [esp+2Ch+var_10]
0x834AD7: test    eax, eax
0x834AD9: mov     byte ptr [esp+2Ch+var_4], 1
0x834ADE: jz      short loc_834AF3
0x834AE0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834AE4: mov     ecx, eax
0x834AE6: add     eax, 5Ch ; '\'
0x834AE9: cmp     dword ptr [eax], 0
0x834AEC: jnz     short loc_834AF3
0x834AEE: call    sub_772560
0x834AF3: mov     edi, [esp+2Ch+a3]
0x834AF7: push    2
0x834AF9: push    1
0x834AFB: push    2
0x834AFD: push    edi
0x834AFE: call    sub_801110
0x834B03: add     esp, 10h
0x834B06: push    edi; a3
0x834B07: push    2; a2
0x834B09: mov     ecx, esi; this
0x834B0B: call    sub_760010
0x834B10: lea     eax, [esp+2Ch+var_10]
0x834B14: push    eax
0x834B15: call    sub_772630
0x834B1A: add     esp, 4
0x834B1D: push    eax
0x834B1E: lea     ecx, [esp+30h+a3]
0x834B22: mov     byte ptr [esp+30h+var_4], 35h ; '5'
0x834B27: call    sub_75FAE0
0x834B2C: mov     eax, [esp+2Ch+var_10]
0x834B30: test    eax, eax
0x834B32: mov     byte ptr [esp+2Ch+var_4], 1
0x834B37: jz      short loc_834B4C
0x834B39: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834B3D: mov     ecx, eax
0x834B3F: add     eax, 5Ch ; '\'
0x834B42: cmp     dword ptr [eax], 0
0x834B45: jnz     short loc_834B4C
0x834B47: call    sub_772560
0x834B4C: mov     ecx, ds:0B43110h
0x834B52: mov     edi, [esp+2Ch+a3]
0x834B56: push    ecx; a2
0x834B57: mov     ecx, edi; this
0x834B59: call    sub_76C910
0x834B5E: push    0
0x834B60: push    3
0x834B62: push    3
0x834B64: push    edi
0x834B65: call    sub_801110
0x834B6A: add     esp, 10h
0x834B6D: push    edi; a3
0x834B6E: push    3; a2
0x834B70: mov     ecx, esi; this
0x834B72: call    sub_760010
0x834B77: lea     edx, [esp+2Ch+var_10]
0x834B7B: push    edx
0x834B7C: call    sub_772630
0x834B81: add     esp, 4
0x834B84: push    eax
0x834B85: lea     ecx, [esp+30h+a3]
0x834B89: mov     byte ptr [esp+30h+var_4], 36h ; '6'
0x834B8E: call    sub_75FAE0
0x834B93: mov     eax, [esp+2Ch+var_10]
0x834B97: test    eax, eax
0x834B99: mov     byte ptr [esp+2Ch+var_4], 1
0x834B9E: jz      short loc_834BB3
0x834BA0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834BA4: mov     ecx, eax
0x834BA6: add     eax, 5Ch ; '\'
0x834BA9: cmp     dword ptr [eax], 0
0x834BAC: jnz     short loc_834BB3
0x834BAE: call    sub_772560
0x834BB3: mov     edi, [esp+2Ch+a3]
0x834BB7: push    2
0x834BB9: push    1
0x834BBB: push    4
0x834BBD: push    edi
0x834BBE: call    sub_801110
0x834BC3: add     esp, 10h
0x834BC6: push    edi; a3
0x834BC7: push    4; a2
0x834BC9: mov     ecx, esi; this
0x834BCB: call    sub_760010
0x834BD0: lea     eax, [esp+2Ch+var_10]
0x834BD4: push    eax
0x834BD5: call    sub_772630
0x834BDA: add     esp, 4
0x834BDD: push    eax
0x834BDE: lea     ecx, [esp+30h+a3]
0x834BE2: mov     byte ptr [esp+30h+var_4], 37h ; '7'
0x834BE7: call    sub_75FAE0
0x834BEC: mov     eax, [esp+2Ch+var_10]
0x834BF0: test    eax, eax
0x834BF2: mov     byte ptr [esp+2Ch+var_4], 1
0x834BF7: jz      short loc_834C0C
0x834BF9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834BFD: mov     ecx, eax
0x834BFF: add     eax, 5Ch ; '\'
0x834C02: cmp     dword ptr [eax], 0
0x834C05: jnz     short loc_834C0C
0x834C07: call    sub_772560
0x834C0C: mov     edi, [esp+2Ch+a3]
0x834C10: push    2
0x834C12: push    1
0x834C14: push    5
0x834C16: push    edi
0x834C17: call    sub_801110
0x834C1C: add     esp, 10h
0x834C1F: push    edi; a3
0x834C20: push    5; a2
0x834C22: mov     ecx, esi; this
0x834C24: call    sub_760010
0x834C29: mov     ecx, ds:0B453F0h
0x834C2F: push    ecx; a2
0x834C30: mov     ecx, esi; this
0x834C32: call    sub_7AECB0
0x834C37: mov     edx, ds:0B451E8h
0x834C3D: push    edx; a2
0x834C3E: mov     ecx, esi; this
0x834C40: call    sub_7AEC60
0x834C45: cmp     dword ptr [esi+30h], 0
0x834C49: jnz     short loc_834C53
0x834C4B: call    sub_772DF0
0x834C50: mov     [esi+30h], eax
0x834C53: mov     ecx, [esi+30h]
0x834C56: push    0
0x834C58: push    1
0x834C5A: push    1Bh
0x834C5C: call    sub_772CD0
0x834C61: cmp     dword ptr [esi+30h], 0
0x834C65: jnz     short loc_834C6F
0x834C67: call    sub_772DF0
0x834C6C: mov     [esi+30h], eax
0x834C6F: mov     ecx, [esi+30h]
0x834C72: push    0
0x834C74: push    2
0x834C76: push    13h
0x834C78: call    sub_772CD0
0x834C7D: cmp     dword ptr [esi+30h], 0
0x834C81: jnz     short loc_834C8B
0x834C83: call    sub_772DF0
0x834C88: mov     [esi+30h], eax
0x834C8B: mov     ecx, [esi+30h]
0x834C8E: push    0
0x834C90: push    2
0x834C92: push    14h
0x834C94: call    sub_772CD0
0x834C99: cmp     dword ptr [esi+30h], 0
0x834C9D: jnz     short loc_834CA7
0x834C9F: call    sub_772DF0
0x834CA4: mov     [esi+30h], eax
0x834CA7: mov     ecx, [esi+30h]
0x834CAA: push    0
0x834CAC: push    0
0x834CAE: push    0Fh
0x834CB0: call    sub_772CD0
0x834CB5: cmp     dword ptr [esi+30h], 0
0x834CB9: jnz     short loc_834CC3
0x834CBB: call    sub_772DF0
0x834CC0: mov     [esi+30h], eax
0x834CC3: mov     ecx, [esi+30h]
0x834CC6: push    0
0x834CC8: push    1
0x834CCA: push    7
0x834CCC: call    sub_772CD0
0x834CD1: cmp     dword ptr [esi+30h], 0
0x834CD5: jnz     short loc_834CDF
0x834CD7: call    sub_772DF0
0x834CDC: mov     [esi+30h], eax
0x834CDF: mov     ecx, [esi+30h]
0x834CE2: push    0
0x834CE4: push    3
0x834CE6: push    17h
0x834CE8: call    sub_772CD0
0x834CED: cmp     dword ptr [esi+30h], 0
0x834CF1: jnz     short loc_834CFB
0x834CF3: call    sub_772DF0
0x834CF8: mov     [esi+30h], eax
0x834CFB: mov     ecx, [esi+30h]
0x834CFE: push    0
0x834D00: push    0
0x834D02: push    0Eh
0x834D04: call    sub_772CD0
0x834D09: cmp     dword ptr [esi+30h], 0
0x834D0D: jnz     short loc_834D17
0x834D0F: call    sub_772DF0
0x834D14: mov     [esi+30h], eax
0x834D17: mov     ecx, [esi+30h]
0x834D1A: push    0
0x834D1C: push    0
0x834D1E: push    34h ; '4'
0x834D20: call    sub_772CD0
0x834D25: cmp     esi, ds:0B45A30h
0x834D2B: mov     ebp, 20802h
0x834D30: mov     ds:0B43FACh, ebp
0x834D36: mov     dword ptr ds:0B4463Ch, 108h
0x834D40: jz      short loc_834D61
0x834D42: add     dword ptr [esi+60h], 0FFFFFFFFh
0x834D46: jnz     short loc_834D4F
0x834D48: mov     ecx, esi
0x834D4A: call    sub_7604D0
0x834D4F: mov     esi, ds:0B45A30h
0x834D55: test    esi, esi
0x834D57: mov     [esp+2Ch+var_14], esi
0x834D5B: jz      short loc_834D61
0x834D5D: add     dword ptr [esi+60h], 1
0x834D61: mov     ebx, 6
0x834D66: cmp     [esi+18h], ebx
0x834D69: jnb     loc_834F95
0x834D6F: lea     eax, [esp+2Ch+var_10]
0x834D73: push    eax
0x834D74: call    sub_772630
0x834D79: add     esp, 4
0x834D7C: push    eax
0x834D7D: lea     ecx, [esp+30h+a3]
0x834D81: mov     byte ptr [esp+30h+var_4], 38h ; '8'
0x834D86: call    sub_75FAE0
0x834D8B: mov     eax, [esp+2Ch+var_10]
0x834D8F: test    eax, eax
0x834D91: mov     byte ptr [esp+2Ch+var_4], 1
0x834D96: jz      short loc_834DAB
0x834D98: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834D9C: mov     ecx, eax
0x834D9E: add     eax, 5Ch ; '\'
0x834DA1: cmp     dword ptr [eax], 0
0x834DA4: jnz     short loc_834DAB
0x834DA6: call    sub_772560
0x834DAB: mov     edi, [esp+2Ch+a3]
0x834DAF: push    2
0x834DB1: push    1
0x834DB3: push    0
0x834DB5: push    edi
0x834DB6: call    sub_801110
0x834DBB: mov     ecx, [esi+14h]
0x834DBE: add     esp, 10h
0x834DC1: push    edi; a3
0x834DC2: push    ecx; a2
0x834DC3: mov     ecx, esi; this
0x834DC5: call    sub_760010
0x834DCA: lea     edx, [esp+2Ch+var_10]
0x834DCE: push    edx
0x834DCF: call    sub_772630
0x834DD4: add     esp, 4
0x834DD7: push    eax
0x834DD8: lea     ecx, [esp+30h+a3]
0x834DDC: mov     byte ptr [esp+30h+var_4], 39h ; '9'
0x834DE1: call    sub_75FAE0
0x834DE6: mov     eax, [esp+2Ch+var_10]
0x834DEA: test    eax, eax
0x834DEC: mov     byte ptr [esp+2Ch+var_4], 1
0x834DF1: jz      short loc_834E06
0x834DF3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834DF7: mov     ecx, eax
0x834DF9: add     eax, 5Ch ; '\'
0x834DFC: cmp     dword ptr [eax], 0
0x834DFF: jnz     short loc_834E06
0x834E01: call    sub_772560
0x834E06: mov     edi, [esp+2Ch+a3]
0x834E0A: push    2
0x834E0C: push    1
0x834E0E: push    1
0x834E10: push    edi
0x834E11: call    sub_801110
0x834E16: add     esp, 10h
0x834E19: push    edi; a3
0x834E1A: push    1; a2
0x834E1C: mov     ecx, esi; this
0x834E1E: call    sub_760010
0x834E23: lea     eax, [esp+2Ch+var_10]
0x834E27: push    eax
0x834E28: call    sub_772630
0x834E2D: add     esp, 4
0x834E30: push    eax
0x834E31: lea     ecx, [esp+30h+a3]
0x834E35: mov     byte ptr [esp+30h+var_4], 3Ah ; ':'
0x834E3A: call    sub_75FAE0
0x834E3F: mov     eax, [esp+2Ch+var_10]
0x834E43: test    eax, eax
0x834E45: mov     byte ptr [esp+2Ch+var_4], 1
0x834E4A: jz      short loc_834E5F
0x834E4C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834E50: mov     ecx, eax
0x834E52: add     eax, 5Ch ; '\'
0x834E55: cmp     dword ptr [eax], 0
0x834E58: jnz     short loc_834E5F
0x834E5A: call    sub_772560
0x834E5F: mov     edi, [esp+2Ch+a3]
0x834E63: push    2
0x834E65: push    1
0x834E67: push    2
0x834E69: push    edi
0x834E6A: call    sub_801110
0x834E6F: add     esp, 10h
0x834E72: push    edi; a3
0x834E73: push    2; a2
0x834E75: mov     ecx, esi; this
0x834E77: call    sub_760010
0x834E7C: lea     ecx, [esp+2Ch+var_10]
0x834E80: push    ecx
0x834E81: call    sub_772630
0x834E86: add     esp, 4
0x834E89: push    eax
0x834E8A: lea     ecx, [esp+30h+a3]
0x834E8E: mov     byte ptr [esp+30h+var_4], 3Bh ; ';'
0x834E93: call    sub_75FAE0
0x834E98: mov     eax, [esp+2Ch+var_10]
0x834E9C: test    eax, eax
0x834E9E: mov     byte ptr [esp+2Ch+var_4], 1
0x834EA3: jz      short loc_834EB8
0x834EA5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834EA9: mov     ecx, eax
0x834EAB: add     eax, 5Ch ; '\'
0x834EAE: cmp     dword ptr [eax], 0
0x834EB1: jnz     short loc_834EB8
0x834EB3: call    sub_772560
0x834EB8: mov     edx, ds:0B43110h
0x834EBE: mov     edi, [esp+2Ch+a3]
0x834EC2: push    edx; a2
0x834EC3: mov     ecx, edi; this
0x834EC5: call    sub_76C910
0x834ECA: push    0
0x834ECC: push    3
0x834ECE: push    3
0x834ED0: push    edi
0x834ED1: call    sub_801110
0x834ED6: add     esp, 10h
0x834ED9: push    edi; a3
0x834EDA: push    3; a2
0x834EDC: mov     ecx, esi; this
0x834EDE: call    sub_760010
0x834EE3: lea     eax, [esp+2Ch+var_10]
0x834EE7: push    eax
0x834EE8: call    sub_772630
0x834EED: add     esp, 4
0x834EF0: push    eax
0x834EF1: lea     ecx, [esp+30h+a3]
0x834EF5: mov     byte ptr [esp+30h+var_4], 3Ch ; '<'
0x834EFA: call    sub_75FAE0
0x834EFF: mov     eax, [esp+2Ch+var_10]
0x834F03: test    eax, eax
0x834F05: mov     byte ptr [esp+2Ch+var_4], 1
0x834F0A: jz      short loc_834F1F
0x834F0C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834F10: mov     ecx, eax
0x834F12: add     eax, 5Ch ; '\'
0x834F15: cmp     dword ptr [eax], 0
0x834F18: jnz     short loc_834F1F
0x834F1A: call    sub_772560
0x834F1F: mov     edi, [esp+2Ch+a3]
0x834F23: push    2
0x834F25: push    1
0x834F27: push    4
0x834F29: push    edi
0x834F2A: call    sub_801110
0x834F2F: add     esp, 10h
0x834F32: push    edi; a3
0x834F33: push    4; a2
0x834F35: mov     ecx, esi; this
0x834F37: call    sub_760010
0x834F3C: lea     ecx, [esp+2Ch+var_10]
0x834F40: push    ecx
0x834F41: call    sub_772630
0x834F46: add     esp, 4
0x834F49: push    eax
0x834F4A: lea     ecx, [esp+30h+a3]
0x834F4E: mov     byte ptr [esp+30h+var_4], 3Dh ; '='
0x834F53: call    sub_75FAE0
0x834F58: mov     eax, [esp+2Ch+var_10]
0x834F5C: test    eax, eax
0x834F5E: mov     byte ptr [esp+2Ch+var_4], 1
0x834F63: jz      short loc_834F78
0x834F65: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x834F69: mov     ecx, eax
0x834F6B: add     eax, 5Ch ; '\'
0x834F6E: cmp     dword ptr [eax], 0
0x834F71: jnz     short loc_834F78
0x834F73: call    sub_772560
0x834F78: mov     edi, [esp+2Ch+a3]
0x834F7C: push    2
0x834F7E: push    1
0x834F80: push    5
0x834F82: push    edi
0x834F83: call    sub_801110
0x834F88: add     esp, 10h
0x834F8B: push    edi; a3
0x834F8C: push    5; a2
0x834F8E: mov     ecx, esi; this
0x834F90: call    sub_760010
0x834F95: mov     edx, ds:0B453F0h
0x834F9B: push    edx; a2
0x834F9C: mov     ecx, esi; this
0x834F9E: call    sub_7AECB0
0x834FA3: mov     eax, ds:0B451ECh
0x834FA8: push    eax; a2
0x834FA9: mov     ecx, esi; this
0x834FAB: call    sub_7AEC60
0x834FB0: cmp     dword ptr [esi+30h], 0
0x834FB4: jnz     short loc_834FBE
0x834FB6: call    sub_772DF0
0x834FBB: mov     [esi+30h], eax
0x834FBE: mov     ecx, [esi+30h]
0x834FC1: push    0
0x834FC3: push    1
0x834FC5: push    1Bh
0x834FC7: call    sub_772CD0
0x834FCC: cmp     dword ptr [esi+30h], 0
0x834FD0: jnz     short loc_834FDA
0x834FD2: call    sub_772DF0
0x834FD7: mov     [esi+30h], eax
0x834FDA: mov     ecx, [esi+30h]
0x834FDD: push    0
0x834FDF: push    2
0x834FE1: push    13h
0x834FE3: call    sub_772CD0
0x834FE8: cmp     dword ptr [esi+30h], 0
0x834FEC: jnz     short loc_834FF6
0x834FEE: call    sub_772DF0
0x834FF3: mov     [esi+30h], eax
0x834FF6: mov     ecx, [esi+30h]
0x834FF9: push    0
0x834FFB: push    2
0x834FFD: push    14h
0x834FFF: call    sub_772CD0
0x835004: cmp     dword ptr [esi+30h], 0
0x835008: jnz     short loc_835012
0x83500A: call    sub_772DF0
0x83500F: mov     [esi+30h], eax
0x835012: mov     ecx, [esi+30h]
0x835015: push    0
0x835017: push    0
0x835019: push    0Fh
0x83501B: call    sub_772CD0
0x835020: cmp     dword ptr [esi+30h], 0
0x835024: jnz     short loc_83502E
0x835026: call    sub_772DF0
0x83502B: mov     [esi+30h], eax
0x83502E: mov     ecx, [esi+30h]
0x835031: push    0
0x835033: push    1
0x835035: push    7
0x835037: call    sub_772CD0
0x83503C: cmp     dword ptr [esi+30h], 0
0x835040: jnz     short loc_83504A
0x835042: call    sub_772DF0
0x835047: mov     [esi+30h], eax
0x83504A: mov     ecx, [esi+30h]
0x83504D: push    0
0x83504F: push    3
0x835051: push    17h
0x835053: call    sub_772CD0
0x835058: cmp     dword ptr [esi+30h], 0
0x83505C: jnz     short loc_835066
0x83505E: call    sub_772DF0
0x835063: mov     [esi+30h], eax
0x835066: mov     ecx, [esi+30h]
0x835069: push    0
0x83506B: push    0
0x83506D: push    0Eh
0x83506F: call    sub_772CD0
0x835074: cmp     dword ptr [esi+30h], 0
0x835078: jnz     short loc_835082
0x83507A: call    sub_772DF0
0x83507F: mov     [esi+30h], eax
0x835082: mov     ecx, [esi+30h]
0x835085: push    0
0x835087: push    0
0x835089: push    34h ; '4'
0x83508B: call    sub_772CD0
0x835090: cmp     esi, ds:0B45A38h
0x835096: mov     ds:0B43FB0h, ebp
0x83509C: mov     dword ptr ds:0B44640h, 108h
0x8350A6: jz      short loc_8350C7
0x8350A8: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8350AC: jnz     short loc_8350B5
0x8350AE: mov     ecx, esi
0x8350B0: call    sub_7604D0
0x8350B5: mov     esi, ds:0B45A38h
0x8350BB: test    esi, esi
0x8350BD: mov     [esp+2Ch+var_14], esi
0x8350C1: jz      short loc_8350C7
0x8350C3: add     dword ptr [esi+60h], 1
0x8350C7: cmp     [esi+18h], ebx
0x8350CA: jnb     loc_8352F5
0x8350D0: lea     ecx, [esp+2Ch+var_10]
0x8350D4: push    ecx
0x8350D5: call    sub_772630
0x8350DA: add     esp, 4
0x8350DD: push    eax
0x8350DE: lea     ecx, [esp+30h+a3]
0x8350E2: mov     byte ptr [esp+30h+var_4], 3Eh ; '>'
0x8350E7: call    sub_75FAE0
0x8350EC: mov     eax, [esp+2Ch+var_10]
0x8350F0: test    eax, eax
0x8350F2: mov     byte ptr [esp+2Ch+var_4], 1
0x8350F7: jz      short loc_83510C
0x8350F9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8350FD: mov     ecx, eax
0x8350FF: add     eax, 5Ch ; '\'
0x835102: cmp     dword ptr [eax], 0
0x835105: jnz     short loc_83510C
0x835107: call    sub_772560
0x83510C: mov     edi, [esp+2Ch+a3]
0x835110: push    2
0x835112: push    1
0x835114: push    0
0x835116: push    edi
0x835117: call    sub_801110
0x83511C: mov     edx, [esi+14h]
0x83511F: add     esp, 10h
0x835122: push    edi; a3
0x835123: push    edx; a2
0x835124: mov     ecx, esi; this
0x835126: call    sub_760010
0x83512B: lea     eax, [esp+2Ch+var_10]
0x83512F: push    eax
0x835130: call    sub_772630
0x835135: add     esp, 4
0x835138: push    eax
0x835139: lea     ecx, [esp+30h+a3]
0x83513D: mov     byte ptr [esp+30h+var_4], 3Fh ; '?'
0x835142: call    sub_75FAE0
0x835147: mov     eax, [esp+2Ch+var_10]
0x83514B: test    eax, eax
0x83514D: mov     byte ptr [esp+2Ch+var_4], 1
0x835152: jz      short loc_835167
0x835154: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x835158: mov     ecx, eax
0x83515A: add     eax, 5Ch ; '\'
0x83515D: cmp     dword ptr [eax], 0
0x835160: jnz     short loc_835167
0x835162: call    sub_772560
0x835167: mov     edi, [esp+2Ch+a3]
0x83516B: push    2
0x83516D: push    1
0x83516F: push    1
0x835171: push    edi
0x835172: call    sub_801110
0x835177: add     esp, 10h
0x83517A: push    edi; a3
0x83517B: push    1; a2
0x83517D: mov     ecx, esi; this
0x83517F: call    sub_760010
0x835184: lea     ecx, [esp+2Ch+var_10]
0x835188: push    ecx
0x835189: call    sub_772630
0x83518E: add     esp, 4
0x835191: push    eax
0x835192: lea     ecx, [esp+30h+a3]
0x835196: mov     byte ptr [esp+30h+var_4], 40h ; '@'
0x83519B: call    sub_75FAE0
0x8351A0: mov     eax, [esp+2Ch+var_10]
0x8351A4: test    eax, eax
0x8351A6: mov     byte ptr [esp+2Ch+var_4], 1
0x8351AB: jz      short loc_8351C0
0x8351AD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8351B1: mov     ecx, eax
0x8351B3: add     eax, 5Ch ; '\'
0x8351B6: cmp     dword ptr [eax], 0
0x8351B9: jnz     short loc_8351C0
0x8351BB: call    sub_772560
0x8351C0: mov     edi, [esp+2Ch+a3]
0x8351C4: push    2
0x8351C6: push    1
0x8351C8: push    2
0x8351CA: push    edi
0x8351CB: call    sub_801110
0x8351D0: add     esp, 10h
0x8351D3: push    edi; a3
0x8351D4: push    2; a2
0x8351D6: mov     ecx, esi; this
0x8351D8: call    sub_760010
0x8351DD: lea     edx, [esp+2Ch+var_10]
0x8351E1: push    edx
0x8351E2: call    sub_772630
0x8351E7: add     esp, 4
0x8351EA: push    eax
0x8351EB: lea     ecx, [esp+30h+a3]
0x8351EF: mov     byte ptr [esp+30h+var_4], 41h ; 'A'
0x8351F4: call    sub_75FAE0
0x8351F9: mov     eax, [esp+2Ch+var_10]
0x8351FD: test    eax, eax
0x8351FF: mov     byte ptr [esp+2Ch+var_4], 1
0x835204: jz      short loc_835219
0x835206: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83520A: mov     ecx, eax
0x83520C: add     eax, 5Ch ; '\'
0x83520F: cmp     dword ptr [eax], 0
0x835212: jnz     short loc_835219
0x835214: call    sub_772560
0x835219: mov     eax, ds:0B43110h
0x83521E: mov     edi, [esp+2Ch+a3]
0x835222: push    eax; a2
0x835223: mov     ecx, edi; this
0x835225: call    sub_76C910
0x83522A: push    0
0x83522C: push    3
0x83522E: push    3
0x835230: push    edi
0x835231: call    sub_801110
0x835236: add     esp, 10h
0x835239: push    edi; a3
0x83523A: push    3; a2
0x83523C: mov     ecx, esi; this
0x83523E: call    sub_760010
0x835243: lea     ecx, [esp+2Ch+var_10]
0x835247: push    ecx
0x835248: call    sub_772630
0x83524D: add     esp, 4
0x835250: push    eax
0x835251: lea     ecx, [esp+30h+a3]
0x835255: mov     byte ptr [esp+30h+var_4], 42h ; 'B'
0x83525A: call    sub_75FAE0
0x83525F: mov     eax, [esp+2Ch+var_10]
0x835263: test    eax, eax
0x835265: mov     byte ptr [esp+2Ch+var_4], 1
0x83526A: jz      short loc_83527F
0x83526C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x835270: mov     ecx, eax
0x835272: add     eax, 5Ch ; '\'
0x835275: cmp     dword ptr [eax], 0
0x835278: jnz     short loc_83527F
0x83527A: call    sub_772560
0x83527F: mov     edi, [esp+2Ch+a3]
0x835283: push    2
0x835285: push    1
0x835287: push    4
0x835289: push    edi
0x83528A: call    sub_801110
0x83528F: add     esp, 10h
0x835292: push    edi; a3
0x835293: push    4; a2
0x835295: mov     ecx, esi; this
0x835297: call    sub_760010
0x83529C: lea     edx, [esp+2Ch+var_10]
0x8352A0: push    edx
0x8352A1: call    sub_772630
0x8352A6: add     esp, 4
0x8352A9: push    eax
0x8352AA: lea     ecx, [esp+30h+a3]
0x8352AE: mov     byte ptr [esp+30h+var_4], 43h ; 'C'
0x8352B3: call    sub_75FAE0
0x8352B8: mov     eax, [esp+2Ch+var_10]
0x8352BC: test    eax, eax
0x8352BE: mov     byte ptr [esp+2Ch+var_4], 1
0x8352C3: jz      short loc_8352D8
0x8352C5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8352C9: mov     ecx, eax
0x8352CB: add     eax, 5Ch ; '\'
0x8352CE: cmp     dword ptr [eax], 0
0x8352D1: jnz     short loc_8352D8
0x8352D3: call    sub_772560
0x8352D8: mov     edi, [esp+2Ch+a3]
0x8352DC: push    2
0x8352DE: push    1
0x8352E0: push    5
0x8352E2: push    edi
0x8352E3: call    sub_801110
0x8352E8: add     esp, 10h
0x8352EB: push    edi; a3
0x8352EC: push    5; a2
0x8352EE: mov     ecx, esi; this
0x8352F0: call    sub_760010
0x8352F5: mov     eax, ds:0B453F4h
0x8352FA: push    eax; a2
0x8352FB: mov     ecx, esi; this
0x8352FD: call    sub_7AECB0
0x835302: mov     ecx, ds:0B451E8h
0x835308: push    ecx; a2
0x835309: mov     ecx, esi; this
0x83530B: call    sub_7AEC60
0x835310: cmp     dword ptr [esi+30h], 0
0x835314: jnz     short loc_83531E
0x835316: call    sub_772DF0
0x83531B: mov     [esi+30h], eax
0x83531E: mov     ecx, [esi+30h]
0x835321: push    0
0x835323: push    1
0x835325: push    1Bh
0x835327: call    sub_772CD0
0x83532C: cmp     dword ptr [esi+30h], 0
0x835330: jnz     short loc_83533A
0x835332: call    sub_772DF0
0x835337: mov     [esi+30h], eax
0x83533A: mov     ecx, [esi+30h]
0x83533D: push    0
0x83533F: push    2
0x835341: push    13h
0x835343: call    sub_772CD0
0x835348: cmp     dword ptr [esi+30h], 0
0x83534C: jnz     short loc_835356
0x83534E: call    sub_772DF0
0x835353: mov     [esi+30h], eax
0x835356: mov     ecx, [esi+30h]
0x835359: push    0
0x83535B: push    2
0x83535D: push    14h
0x83535F: call    sub_772CD0
0x835364: cmp     dword ptr [esi+30h], 0
0x835368: jnz     short loc_835372
0x83536A: call    sub_772DF0
0x83536F: mov     [esi+30h], eax
0x835372: mov     ecx, [esi+30h]
0x835375: push    0
0x835377: push    0
0x835379: push    0Fh
0x83537B: call    sub_772CD0
0x835380: cmp     dword ptr [esi+30h], 0
0x835384: jnz     short loc_83538E
0x835386: call    sub_772DF0
0x83538B: mov     [esi+30h], eax
0x83538E: mov     ecx, [esi+30h]
0x835391: push    0
0x835393: push    1
0x835395: push    7
0x835397: call    sub_772CD0
0x83539C: cmp     dword ptr [esi+30h], 0
0x8353A0: jnz     short loc_8353AA
0x8353A2: call    sub_772DF0
0x8353A7: mov     [esi+30h], eax
0x8353AA: mov     ecx, [esi+30h]
0x8353AD: push    0
0x8353AF: push    3
0x8353B1: push    17h
0x8353B3: call    sub_772CD0
0x8353B8: cmp     dword ptr [esi+30h], 0
0x8353BC: jnz     short loc_8353C6
0x8353BE: call    sub_772DF0
0x8353C3: mov     [esi+30h], eax
0x8353C6: mov     ecx, [esi+30h]
0x8353C9: push    0
0x8353CB: push    0
0x8353CD: push    0Eh
0x8353CF: call    sub_772CD0
0x8353D4: cmp     dword ptr [esi+30h], 0
0x8353D8: jnz     short loc_8353E2
0x8353DA: call    sub_772DF0
0x8353DF: mov     [esi+30h], eax
0x8353E2: mov     ecx, [esi+30h]
0x8353E5: push    0
0x8353E7: push    0
0x8353E9: push    34h ; '4'
0x8353EB: call    sub_772CD0
0x8353F0: cmp     esi, ds:0B45A3Ch
0x8353F6: mov     ebp, 60808h
0x8353FB: mov     ds:0B43FB8h, ebp
0x835401: mov     dword ptr ds:0B44648h, 108h
0x83540B: jz      short loc_83542C
0x83540D: add     dword ptr [esi+60h], 0FFFFFFFFh
0x835411: jnz     short loc_83541A
0x835413: mov     ecx, esi
0x835415: call    sub_7604D0
0x83541A: mov     esi, ds:0B45A3Ch
0x835420: test    esi, esi
0x835422: mov     [esp+2Ch+var_14], esi
0x835426: jz      short loc_83542C
0x835428: add     dword ptr [esi+60h], 1
0x83542C: cmp     [esi+18h], ebx
0x83542F: jnb     loc_83565B
0x835435: lea     edx, [esp+2Ch+var_10]
0x835439: push    edx
0x83543A: call    sub_772630
0x83543F: add     esp, 4
0x835442: push    eax
0x835443: lea     ecx, [esp+30h+a3]
0x835447: mov     byte ptr [esp+30h+var_4], 44h ; 'D'
0x83544C: call    sub_75FAE0
0x835451: mov     eax, [esp+2Ch+var_10]
0x835455: test    eax, eax
0x835457: mov     byte ptr [esp+2Ch+var_4], 1
0x83545C: jz      short loc_835471
0x83545E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x835462: mov     ecx, eax
0x835464: add     eax, 5Ch ; '\'
0x835467: cmp     dword ptr [eax], 0
0x83546A: jnz     short loc_835471
0x83546C: call    sub_772560
0x835471: mov     edi, [esp+2Ch+a3]
0x835475: push    2
0x835477: push    1
0x835479: push    0
0x83547B: push    edi
0x83547C: call    sub_801110
0x835481: mov     eax, [esi+14h]
0x835484: add     esp, 10h
0x835487: push    edi; a3
0x835488: push    eax; a2
0x835489: mov     ecx, esi; this
0x83548B: call    sub_760010
0x835490: lea     ecx, [esp+2Ch+var_10]
0x835494: push    ecx
0x835495: call    sub_772630
0x83549A: add     esp, 4
0x83549D: push    eax
0x83549E: lea     ecx, [esp+30h+a3]
0x8354A2: mov     byte ptr [esp+30h+var_4], 45h ; 'E'
0x8354A7: call    sub_75FAE0
0x8354AC: mov     eax, [esp+2Ch+var_10]
0x8354B0: test    eax, eax
0x8354B2: mov     byte ptr [esp+2Ch+var_4], 1
0x8354B7: jz      short loc_8354CC
0x8354B9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8354BD: mov     ecx, eax
0x8354BF: add     eax, 5Ch ; '\'
0x8354C2: cmp     dword ptr [eax], 0
0x8354C5: jnz     short loc_8354CC
0x8354C7: call    sub_772560
0x8354CC: mov     edi, [esp+2Ch+a3]
0x8354D0: push    2
0x8354D2: push    1
0x8354D4: push    1
0x8354D6: push    edi
0x8354D7: call    sub_801110
0x8354DC: add     esp, 10h
0x8354DF: push    edi; a3
0x8354E0: push    1; a2
0x8354E2: mov     ecx, esi; this
0x8354E4: call    sub_760010
0x8354E9: lea     edx, [esp+2Ch+var_10]
0x8354ED: push    edx
0x8354EE: call    sub_772630
0x8354F3: add     esp, 4
0x8354F6: push    eax
0x8354F7: lea     ecx, [esp+30h+a3]
0x8354FB: mov     byte ptr [esp+30h+var_4], 46h ; 'F'
0x835500: call    sub_75FAE0
0x835505: mov     eax, [esp+2Ch+var_10]
0x835509: test    eax, eax
0x83550B: mov     byte ptr [esp+2Ch+var_4], 1
0x835510: jz      short loc_835525
0x835512: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x835516: mov     ecx, eax
0x835518: add     eax, 5Ch ; '\'
0x83551B: cmp     dword ptr [eax], 0
0x83551E: jnz     short loc_835525
0x835520: call    sub_772560
0x835525: mov     edi, [esp+2Ch+a3]
0x835529: push    2
0x83552B: push    1
0x83552D: push    2
0x83552F: push    edi
0x835530: call    sub_801110
0x835535: add     esp, 10h
0x835538: push    edi; a3
0x835539: push    2; a2
0x83553B: mov     ecx, esi; this
0x83553D: call    sub_760010
0x835542: lea     eax, [esp+2Ch+var_10]
0x835546: push    eax
0x835547: call    sub_772630
0x83554C: add     esp, 4
0x83554F: push    eax
0x835550: lea     ecx, [esp+30h+a3]
0x835554: mov     byte ptr [esp+30h+var_4], 47h ; 'G'
0x835559: call    sub_75FAE0
0x83555E: mov     eax, [esp+2Ch+var_10]
0x835562: test    eax, eax
0x835564: mov     byte ptr [esp+2Ch+var_4], 1
0x835569: jz      short loc_83557E
0x83556B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83556F: mov     ecx, eax
0x835571: add     eax, 5Ch ; '\'
0x835574: cmp     dword ptr [eax], 0
0x835577: jnz     short loc_83557E
0x835579: call    sub_772560
0x83557E: mov     ecx, ds:0B43110h
0x835584: mov     edi, [esp+2Ch+a3]
0x835588: push    ecx; a2
0x835589: mov     ecx, edi; this
0x83558B: call    sub_76C910
0x835590: push    0
0x835592: push    3
0x835594: push    3
0x835596: push    edi
0x835597: call    sub_801110
0x83559C: add     esp, 10h
0x83559F: push    edi; a3
0x8355A0: push    3; a2
0x8355A2: mov     ecx, esi; this
0x8355A4: call    sub_760010
0x8355A9: lea     edx, [esp+2Ch+var_10]
0x8355AD: push    edx
0x8355AE: call    sub_772630
0x8355B3: add     esp, 4
0x8355B6: push    eax
0x8355B7: lea     ecx, [esp+30h+a3]
0x8355BB: mov     byte ptr [esp+30h+var_4], 48h ; 'H'
0x8355C0: call    sub_75FAE0
0x8355C5: mov     eax, [esp+2Ch+var_10]
0x8355C9: test    eax, eax
0x8355CB: mov     byte ptr [esp+2Ch+var_4], 1
0x8355D0: jz      short loc_8355E5
0x8355D2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8355D6: mov     ecx, eax
0x8355D8: add     eax, 5Ch ; '\'
0x8355DB: cmp     dword ptr [eax], 0
0x8355DE: jnz     short loc_8355E5
0x8355E0: call    sub_772560
0x8355E5: mov     edi, [esp+2Ch+a3]
0x8355E9: push    2
0x8355EB: push    1
0x8355ED: push    4
0x8355EF: push    edi
0x8355F0: call    sub_801110
0x8355F5: add     esp, 10h
0x8355F8: push    edi; a3
0x8355F9: push    4; a2
0x8355FB: mov     ecx, esi; this
0x8355FD: call    sub_760010
0x835602: lea     eax, [esp+2Ch+var_10]
0x835606: push    eax
0x835607: call    sub_772630
0x83560C: add     esp, 4
0x83560F: push    eax
0x835610: lea     ecx, [esp+30h+a3]
0x835614: mov     byte ptr [esp+30h+var_4], 49h ; 'I'
0x835619: call    sub_75FAE0
0x83561E: mov     eax, [esp+2Ch+var_10]
0x835622: test    eax, eax
0x835624: mov     byte ptr [esp+2Ch+var_4], 1
0x835629: jz      short loc_83563E
0x83562B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83562F: mov     ecx, eax
0x835631: add     eax, 5Ch ; '\'
0x835634: cmp     dword ptr [eax], 0
0x835637: jnz     short loc_83563E
0x835639: call    sub_772560
0x83563E: mov     edi, [esp+2Ch+a3]
0x835642: push    2
0x835644: push    1
0x835646: push    5
0x835648: push    edi
0x835649: call    sub_801110
0x83564E: add     esp, 10h
0x835651: push    edi; a3
0x835652: push    5; a2
0x835654: mov     ecx, esi; this
0x835656: call    sub_760010
0x83565B: mov     ecx, ds:0B453F4h
0x835661: push    ecx; a2
0x835662: mov     ecx, esi; this
0x835664: call    sub_7AECB0
0x835669: mov     edx, ds:0B451ECh
0x83566F: push    edx; a2
0x835670: mov     ecx, esi; this
0x835672: call    sub_7AEC60
0x835677: cmp     dword ptr [esi+30h], 0
0x83567B: jnz     short loc_835685
0x83567D: call    sub_772DF0
0x835682: mov     [esi+30h], eax
0x835685: mov     ecx, [esi+30h]
0x835688: push    0
0x83568A: push    1
0x83568C: push    1Bh
0x83568E: call    sub_772CD0
0x835693: cmp     dword ptr [esi+30h], 0
0x835697: jnz     short loc_8356A1
0x835699: call    sub_772DF0
0x83569E: mov     [esi+30h], eax
0x8356A1: mov     ecx, [esi+30h]
0x8356A4: push    0
0x8356A6: push    2
0x8356A8: push    13h
0x8356AA: call    sub_772CD0
0x8356AF: cmp     dword ptr [esi+30h], 0
0x8356B3: jnz     short loc_8356BD
0x8356B5: call    sub_772DF0
0x8356BA: mov     [esi+30h], eax
0x8356BD: mov     ecx, [esi+30h]
0x8356C0: push    0
0x8356C2: push    2
0x8356C4: push    14h
0x8356C6: call    sub_772CD0
0x8356CB: cmp     dword ptr [esi+30h], 0
0x8356CF: jnz     short loc_8356D9
0x8356D1: call    sub_772DF0
0x8356D6: mov     [esi+30h], eax
0x8356D9: mov     ecx, [esi+30h]
0x8356DC: push    0
0x8356DE: push    0
0x8356E0: push    0Fh
0x8356E2: call    sub_772CD0
0x8356E7: cmp     dword ptr [esi+30h], 0
0x8356EB: jnz     short loc_8356F5
0x8356ED: call    sub_772DF0
0x8356F2: mov     [esi+30h], eax
0x8356F5: mov     ecx, [esi+30h]
0x8356F8: push    0
0x8356FA: push    1
0x8356FC: push    7
0x8356FE: call    sub_772CD0
0x835703: cmp     dword ptr [esi+30h], 0
0x835707: jnz     short loc_835711
0x835709: call    sub_772DF0
0x83570E: mov     [esi+30h], eax
0x835711: mov     ecx, [esi+30h]
0x835714: push    0
0x835716: push    3
0x835718: push    17h
0x83571A: call    sub_772CD0
0x83571F: cmp     dword ptr [esi+30h], 0
0x835723: jnz     short loc_83572D
0x835725: call    sub_772DF0
0x83572A: mov     [esi+30h], eax
0x83572D: mov     ecx, [esi+30h]
0x835730: push    0
0x835732: push    0
0x835734: push    0Eh
0x835736: call    sub_772CD0
0x83573B: cmp     dword ptr [esi+30h], 0
0x83573F: jnz     short loc_835749
0x835741: call    sub_772DF0
0x835746: mov     [esi+30h], eax
0x835749: mov     ecx, [esi+30h]
0x83574C: push    0
0x83574E: push    0
0x835750: push    34h ; '4'
0x835752: call    sub_772CD0
0x835757: or      ebx, 0FFFFFFFFh
0x83575A: test    edi, edi
0x83575C: mov     ds:0B43FBCh, ebp
0x835762: mov     dword ptr ds:0B4464Ch, 108h
0x83576C: mov     byte ptr [esp+2Ch+var_4], 0
0x835771: jz      short loc_83577F
0x835773: add     [edi+5Ch], ebx
0x835776: jnz     short loc_83577F
0x835778: mov     ecx, edi
0x83577A: call    sub_772560
0x83577F: add     [esi+60h], ebx
0x835782: mov     [esp+2Ch+var_4], ebx
0x835786: jnz     short loc_83578F
0x835788: mov     ecx, esi
0x83578A: call    sub_7604D0
0x83578F: mov     ecx, dword ptr [esp+2Ch+var_C]
0x835793: mov     large fs:0, ecx
0x83579A: pop     ecx
0x83579B: pop     edi
0x83579C: pop     esi
0x83579D: pop     ebp
0x83579E: pop     ebx
0x83579F: add     esp, 18h
0x8357A2: retn
