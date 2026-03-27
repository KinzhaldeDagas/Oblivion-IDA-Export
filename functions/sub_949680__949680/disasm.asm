0x949680: push    ebx
0x949681: push    esi
0x949682: push    edi
0x949683: mov     esi, ecx
0x949685: mov     ecx, ds:0BA7D98h
0x94968B: mov     eax, [ecx]
0x94968D: push    24h ; '$'
0x94968F: push    18h
0x949691: call    dword ptr [eax+10h]
0x949694: xor     ebx, ebx
0x949696: cmp     eax, ebx
0x949698: jz      short loc_9496B2
0x94969A: mov     [eax], ebx
0x94969C: mov     [eax+4], ebx
0x94969F: mov     ecx, 80000000h
0x9496A4: mov     [eax+8], ecx
0x9496A7: mov     [eax+0Ch], ebx
0x9496AA: mov     [eax+10h], ebx
0x9496AD: mov     [eax+14h], ecx
0x9496B0: mov     ebx, eax
0x9496B2: mov     [esi+50h], ebx
0x9496B5: mov     edi, [ebx+4]
0x9496B8: mov     eax, [ebx+8]
0x9496BB: push    ebp
0x9496BC: lea     ebp, [edi+1]
0x9496BF: and     eax, 3FFFFFFFh
0x9496C4: cmp     eax, ebp
0x9496C6: jge     short loc_9496DC
0x9496C8: add     eax, eax
0x9496CA: cmp     ebp, eax
0x9496CC: jl      short loc_9496D0
0x9496CE: mov     eax, ebp
0x9496D0: push    10h
0x9496D2: push    eax
0x9496D3: push    ebx
0x9496D4: call    sub_8A6E40
0x9496D9: add     esp, 0Ch
0x9496DC: mov     [ebx+4], ebp
0x9496DF: fld     dword ptr [esi+68h]
0x9496E2: mov     ebp, [ebx]
0x9496E4: fld     dword ptr [esi+64h]
0x9496E7: mov     ecx, [esi+60h]
0x9496EA: shl     edi, 4
0x9496ED: add     edi, ebp
0x9496EF: mov     [edi], ecx
0x9496F1: fstp    dword ptr [edi+4]
0x9496F4: fstp    dword ptr [edi+8]
0x9496F7: mov     dword ptr [edi+0Ch], 0
0x9496FE: mov     ebx, [esi+50h]
0x949701: mov     edi, [ebx+4]
0x949704: mov     eax, [ebx+8]
0x949707: lea     ebp, [edi+1]
0x94970A: and     eax, 3FFFFFFFh
0x94970F: cmp     eax, ebp
0x949711: jge     short loc_949727
0x949713: add     eax, eax
0x949715: cmp     ebp, eax
0x949717: jl      short loc_94971B
0x949719: mov     eax, ebp
0x94971B: push    10h
0x94971D: push    eax
0x94971E: push    ebx
0x94971F: call    sub_8A6E40
0x949724: add     esp, 0Ch
0x949727: mov     [ebx+4], ebp
0x94972A: fld     dword ptr [esi+78h]
0x94972D: mov     ebp, [ebx]
0x94972F: fld     dword ptr [esi+64h]
0x949732: mov     edx, [esi+60h]
0x949735: shl     edi, 4
0x949738: add     edi, ebp
0x94973A: mov     [edi], edx
0x94973C: fstp    dword ptr [edi+4]
0x94973F: fstp    dword ptr [edi+8]
0x949742: mov     dword ptr [edi+0Ch], 0
0x949749: mov     ebx, [esi+50h]
0x94974C: mov     edi, [ebx+4]
0x94974F: mov     eax, [ebx+8]
0x949752: lea     ebp, [edi+1]
0x949755: and     eax, 3FFFFFFFh
0x94975A: cmp     eax, ebp
0x94975C: jge     short loc_949772
0x94975E: add     eax, eax
0x949760: cmp     ebp, eax
0x949762: jl      short loc_949766
0x949764: mov     eax, ebp
0x949766: push    10h
0x949768: push    eax
0x949769: push    ebx
0x94976A: call    sub_8A6E40
0x94976F: add     esp, 0Ch
0x949772: mov     [ebx+4], ebp
0x949775: fld     dword ptr [esi+78h]
0x949778: mov     ebp, [ebx]
0x94977A: fld     dword ptr [esi+64h]
0x94977D: mov     eax, [esi+70h]
0x949780: shl     edi, 4
0x949783: add     edi, ebp
0x949785: mov     [edi], eax
0x949787: fstp    dword ptr [edi+4]
0x94978A: fstp    dword ptr [edi+8]
0x94978D: mov     dword ptr [edi+0Ch], 0
0x949794: mov     ebx, [esi+50h]
0x949797: mov     edi, [ebx+4]
0x94979A: mov     eax, [ebx+8]
0x94979D: lea     ebp, [edi+1]
0x9497A0: and     eax, 3FFFFFFFh
0x9497A5: cmp     eax, ebp
0x9497A7: jge     short loc_9497BD
0x9497A9: add     eax, eax
0x9497AB: cmp     ebp, eax
0x9497AD: jl      short loc_9497B1
0x9497AF: mov     eax, ebp
0x9497B1: push    10h
0x9497B3: push    eax
0x9497B4: push    ebx
0x9497B5: call    sub_8A6E40
0x9497BA: add     esp, 0Ch
0x9497BD: mov     [ebx+4], ebp
0x9497C0: fld     dword ptr [esi+68h]
0x9497C3: mov     ebp, [ebx]
0x9497C5: fld     dword ptr [esi+64h]
0x9497C8: mov     ecx, [esi+70h]
0x9497CB: shl     edi, 4
0x9497CE: add     edi, ebp
0x9497D0: mov     [edi], ecx
0x9497D2: fstp    dword ptr [edi+4]
0x9497D5: fstp    dword ptr [edi+8]
0x9497D8: mov     dword ptr [edi+0Ch], 0
0x9497DF: mov     ebx, [esi+50h]
0x9497E2: mov     edi, [ebx+4]
0x9497E5: mov     eax, [ebx+8]
0x9497E8: lea     ebp, [edi+1]
0x9497EB: and     eax, 3FFFFFFFh
0x9497F0: cmp     eax, ebp
0x9497F2: jge     short loc_949808
0x9497F4: add     eax, eax
0x9497F6: cmp     ebp, eax
0x9497F8: jl      short loc_9497FC
0x9497FA: mov     eax, ebp
0x9497FC: push    10h
0x9497FE: push    eax
0x9497FF: push    ebx
0x949800: call    sub_8A6E40
0x949805: add     esp, 0Ch
0x949808: mov     [ebx+4], ebp
0x94980B: fld     dword ptr [esi+68h]
0x94980E: mov     ebp, [ebx]
0x949810: fld     dword ptr [esi+74h]
0x949813: mov     edx, [esi+60h]
0x949816: shl     edi, 4
0x949819: add     edi, ebp
0x94981B: mov     [edi], edx
0x94981D: fstp    dword ptr [edi+4]
0x949820: fstp    dword ptr [edi+8]
0x949823: mov     dword ptr [edi+0Ch], 0
0x94982A: mov     ebx, [esi+50h]
0x94982D: mov     edi, [ebx+4]
0x949830: mov     eax, [ebx+8]
0x949833: lea     ebp, [edi+1]
0x949836: and     eax, 3FFFFFFFh
0x94983B: cmp     eax, ebp
0x94983D: jge     short loc_949853
0x94983F: add     eax, eax
0x949841: cmp     ebp, eax
0x949843: jl      short loc_949847
0x949845: mov     eax, ebp
0x949847: push    10h
0x949849: push    eax
0x94984A: push    ebx
0x94984B: call    sub_8A6E40
0x949850: add     esp, 0Ch
0x949853: mov     [ebx+4], ebp
0x949856: fld     dword ptr [esi+78h]
0x949859: mov     ebp, [ebx]
0x94985B: fld     dword ptr [esi+74h]
0x94985E: mov     eax, [esi+60h]
0x949861: shl     edi, 4
0x949864: add     edi, ebp
0x949866: mov     [edi], eax
0x949868: fstp    dword ptr [edi+4]
0x94986B: fstp    dword ptr [edi+8]
0x94986E: mov     dword ptr [edi+0Ch], 0
0x949875: mov     ebx, [esi+50h]
0x949878: mov     edi, [ebx+4]
0x94987B: mov     eax, [ebx+8]
0x94987E: lea     ebp, [edi+1]
0x949881: and     eax, 3FFFFFFFh
0x949886: cmp     eax, ebp
0x949888: jge     short loc_94989E
0x94988A: add     eax, eax
0x94988C: cmp     ebp, eax
0x94988E: jl      short loc_949892
0x949890: mov     eax, ebp
0x949892: push    10h
0x949894: push    eax
0x949895: push    ebx
0x949896: call    sub_8A6E40
0x94989B: add     esp, 0Ch
0x94989E: mov     [ebx+4], ebp
0x9498A1: fld     dword ptr [esi+78h]
0x9498A4: mov     ebp, [ebx]
0x9498A6: fld     dword ptr [esi+74h]
0x9498A9: mov     ecx, [esi+70h]
0x9498AC: shl     edi, 4
0x9498AF: add     edi, ebp
0x9498B1: mov     [edi], ecx
0x9498B3: fstp    dword ptr [edi+4]
0x9498B6: fstp    dword ptr [edi+8]
0x9498B9: mov     dword ptr [edi+0Ch], 0
0x9498C0: mov     ebx, [esi+50h]
0x9498C3: mov     edi, [ebx+4]
0x9498C6: mov     eax, [ebx+8]
0x9498C9: lea     ebp, [edi+1]
0x9498CC: and     eax, 3FFFFFFFh
0x9498D1: cmp     eax, ebp
0x9498D3: jge     short loc_9498E9
0x9498D5: add     eax, eax
0x9498D7: cmp     ebp, eax
0x9498D9: jl      short loc_9498DD
0x9498DB: mov     eax, ebp
0x9498DD: push    10h
0x9498DF: push    eax
0x9498E0: push    ebx
0x9498E1: call    sub_8A6E40
0x9498E6: add     esp, 0Ch
0x9498E9: mov     [ebx+4], ebp
0x9498EC: fld     dword ptr [esi+68h]
0x9498EF: mov     ebp, [ebx]
0x9498F1: fld     dword ptr [esi+74h]
0x9498F4: mov     edx, [esi+70h]
0x9498F7: shl     edi, 4
0x9498FA: add     edi, ebp
0x9498FC: mov     [edi], edx
0x9498FE: fstp    dword ptr [edi+4]
0x949901: fstp    dword ptr [edi+8]
0x949904: mov     dword ptr [edi+0Ch], 0
0x94990B: mov     edi, [esi+50h]
0x94990E: mov     ebx, [edi+10h]
0x949911: mov     eax, [edi+14h]
0x949914: add     edi, 0Ch
0x949917: lea     ebp, [ebx+1]
0x94991A: and     eax, 3FFFFFFFh
0x94991F: cmp     eax, ebp
0x949921: jge     short loc_949937
0x949923: add     eax, eax
0x949925: cmp     ebp, eax
0x949927: jl      short loc_94992B
0x949929: mov     eax, ebp
0x94992B: push    0Ch
0x94992D: push    eax
0x94992E: push    edi
0x94992F: call    sub_8A6E40
0x949934: add     esp, 0Ch
0x949937: mov     ecx, [edi]
0x949939: mov     [edi+4], ebp
0x94993C: lea     eax, [ebx+ebx*2]
0x94993F: lea     eax, [ecx+eax*4]
0x949942: mov     dword ptr [eax], 0
0x949948: mov     dword ptr [eax+4], 3
0x94994F: mov     dword ptr [eax+8], 1
0x949956: mov     edi, [esi+50h]
0x949959: mov     ebx, [edi+10h]
0x94995C: mov     eax, [edi+14h]
0x94995F: add     edi, 0Ch
0x949962: lea     ebp, [ebx+1]
0x949965: and     eax, 3FFFFFFFh
0x94996A: cmp     eax, ebp
0x94996C: jge     short loc_949982
0x94996E: add     eax, eax
0x949970: cmp     ebp, eax
0x949972: jl      short loc_949976
0x949974: mov     eax, ebp
0x949976: push    0Ch
0x949978: push    eax
0x949979: push    edi
0x94997A: call    sub_8A6E40
0x94997F: add     esp, 0Ch
0x949982: mov     eax, [edi]
0x949984: mov     [edi+4], ebp
0x949987: lea     edx, [ebx+ebx*2]
0x94998A: lea     eax, [eax+edx*4]
0x94998D: mov     dword ptr [eax], 1
0x949993: mov     dword ptr [eax+4], 3
0x94999A: mov     dword ptr [eax+8], 2
0x9499A1: mov     edi, [esi+50h]
0x9499A4: mov     ebx, [edi+10h]
0x9499A7: mov     eax, [edi+14h]
0x9499AA: add     edi, 0Ch
0x9499AD: lea     ebp, [ebx+1]
0x9499B0: and     eax, 3FFFFFFFh
0x9499B5: cmp     eax, ebp
0x9499B7: jge     short loc_9499CD
0x9499B9: add     eax, eax
0x9499BB: cmp     ebp, eax
0x9499BD: jl      short loc_9499C1
0x9499BF: mov     eax, ebp
0x9499C1: push    0Ch
0x9499C3: push    eax
0x9499C4: push    edi
0x9499C5: call    sub_8A6E40
0x9499CA: add     esp, 0Ch
0x9499CD: mov     edx, [edi]
0x9499CF: mov     [edi+4], ebp
0x9499D2: lea     ecx, [ebx+ebx*2]
0x9499D5: lea     eax, [edx+ecx*4]
0x9499D8: mov     dword ptr [eax], 2
0x9499DE: mov     dword ptr [eax+4], 6
0x9499E5: mov     dword ptr [eax+8], 5
0x9499EC: mov     edi, [esi+50h]
0x9499EF: mov     ebx, [edi+10h]
0x9499F2: mov     eax, [edi+14h]
0x9499F5: add     edi, 0Ch
0x9499F8: lea     ebp, [ebx+1]
0x9499FB: and     eax, 3FFFFFFFh
0x949A00: cmp     eax, ebp
0x949A02: jge     short loc_949A18
0x949A04: add     eax, eax
0x949A06: cmp     ebp, eax
0x949A08: jl      short loc_949A0C
0x949A0A: mov     eax, ebp
0x949A0C: push    0Ch
0x949A0E: push    eax
0x949A0F: push    edi
0x949A10: call    sub_8A6E40
0x949A15: add     esp, 0Ch
0x949A18: mov     ecx, [edi]
0x949A1A: mov     [edi+4], ebp
0x949A1D: lea     eax, [ebx+ebx*2]
0x949A20: lea     eax, [ecx+eax*4]
0x949A23: mov     dword ptr [eax], 5
0x949A29: mov     dword ptr [eax+4], 1
0x949A30: mov     dword ptr [eax+8], 2
0x949A37: mov     edi, [esi+50h]
0x949A3A: mov     ebx, [edi+10h]
0x949A3D: mov     eax, [edi+14h]
0x949A40: add     edi, 0Ch
0x949A43: lea     ebp, [ebx+1]
0x949A46: and     eax, 3FFFFFFFh
0x949A4B: cmp     eax, ebp
0x949A4D: jge     short loc_949A63
0x949A4F: add     eax, eax
0x949A51: cmp     ebp, eax
0x949A53: jl      short loc_949A57
0x949A55: mov     eax, ebp
0x949A57: push    0Ch
0x949A59: push    eax
0x949A5A: push    edi
0x949A5B: call    sub_8A6E40
0x949A60: add     esp, 0Ch
0x949A63: mov     eax, [edi]
0x949A65: mov     [edi+4], ebp
0x949A68: lea     edx, [ebx+ebx*2]
0x949A6B: lea     eax, [eax+edx*4]
0x949A6E: mov     dword ptr [eax], 5
0x949A74: mov     dword ptr [eax+4], 6
0x949A7B: mov     dword ptr [eax+8], 4
0x949A82: mov     edi, [esi+50h]
0x949A85: mov     ebx, [edi+10h]
0x949A88: mov     eax, [edi+14h]
0x949A8B: add     edi, 0Ch
0x949A8E: lea     ebp, [ebx+1]
0x949A91: and     eax, 3FFFFFFFh
0x949A96: cmp     eax, ebp
0x949A98: jge     short loc_949AAE
0x949A9A: add     eax, eax
0x949A9C: cmp     ebp, eax
0x949A9E: jl      short loc_949AA2
0x949AA0: mov     eax, ebp
0x949AA2: push    0Ch
0x949AA4: push    eax
0x949AA5: push    edi
0x949AA6: call    sub_8A6E40
0x949AAB: add     esp, 0Ch
0x949AAE: mov     edx, [edi]
0x949AB0: mov     [edi+4], ebp
0x949AB3: lea     ecx, [ebx+ebx*2]
0x949AB6: lea     eax, [edx+ecx*4]
0x949AB9: mov     dword ptr [eax], 4
0x949ABF: mov     dword ptr [eax+4], 6
0x949AC6: mov     dword ptr [eax+8], 7
0x949ACD: mov     edi, [esi+50h]
0x949AD0: mov     ebx, [edi+10h]
0x949AD3: mov     eax, [edi+14h]
0x949AD6: add     edi, 0Ch
0x949AD9: lea     ebp, [ebx+1]
0x949ADC: and     eax, 3FFFFFFFh
0x949AE1: cmp     eax, ebp
0x949AE3: jge     short loc_949AF9
0x949AE5: add     eax, eax
0x949AE7: cmp     ebp, eax
0x949AE9: jl      short loc_949AED
0x949AEB: mov     eax, ebp
0x949AED: push    0Ch
0x949AEF: push    eax
0x949AF0: push    edi
0x949AF1: call    sub_8A6E40
0x949AF6: add     esp, 0Ch
0x949AF9: mov     ecx, [edi]
0x949AFB: mov     [edi+4], ebp
0x949AFE: lea     eax, [ebx+ebx*2]
0x949B01: lea     eax, [ecx+eax*4]
0x949B04: mov     dword ptr [eax], 7
0x949B0A: mov     dword ptr [eax+4], 3
0x949B11: mov     dword ptr [eax+8], 0
0x949B18: mov     edi, [esi+50h]
0x949B1B: mov     ebx, [edi+10h]
0x949B1E: mov     eax, [edi+14h]
0x949B21: add     edi, 0Ch
0x949B24: lea     ebp, [ebx+1]
0x949B27: and     eax, 3FFFFFFFh
0x949B2C: cmp     eax, ebp
0x949B2E: jge     short loc_949B44
0x949B30: add     eax, eax
0x949B32: cmp     ebp, eax
0x949B34: jl      short loc_949B38
0x949B36: mov     eax, ebp
0x949B38: push    0Ch
0x949B3A: push    eax
0x949B3B: push    edi
0x949B3C: call    sub_8A6E40
0x949B41: add     esp, 0Ch
0x949B44: mov     eax, [edi]
0x949B46: mov     [edi+4], ebp
0x949B49: lea     edx, [ebx+ebx*2]
0x949B4C: lea     eax, [eax+edx*4]
0x949B4F: mov     dword ptr [eax], 0
0x949B55: mov     dword ptr [eax+4], 4
0x949B5C: mov     dword ptr [eax+8], 7
0x949B63: mov     edi, [esi+50h]
0x949B66: mov     ebx, [edi+10h]
0x949B69: mov     eax, [edi+14h]
0x949B6C: add     edi, 0Ch
0x949B6F: lea     ebp, [ebx+1]
0x949B72: and     eax, 3FFFFFFFh
0x949B77: cmp     eax, ebp
0x949B79: jge     short loc_949B8F
0x949B7B: add     eax, eax
0x949B7D: cmp     ebp, eax
0x949B7F: jl      short loc_949B83
0x949B81: mov     eax, ebp
0x949B83: push    0Ch
0x949B85: push    eax
0x949B86: push    edi
0x949B87: call    sub_8A6E40
0x949B8C: add     esp, 0Ch
0x949B8F: mov     edx, [edi]
0x949B91: mov     [edi+4], ebp
0x949B94: lea     ecx, [ebx+ebx*2]
0x949B97: lea     eax, [edx+ecx*4]
0x949B9A: mov     dword ptr [eax], 0
0x949BA0: mov     dword ptr [eax+4], 1
0x949BA7: mov     dword ptr [eax+8], 4
0x949BAE: mov     edi, [esi+50h]
0x949BB1: mov     ebx, [edi+10h]
0x949BB4: mov     eax, [edi+14h]
0x949BB7: add     edi, 0Ch
0x949BBA: lea     ebp, [ebx+1]
0x949BBD: and     eax, 3FFFFFFFh
0x949BC2: cmp     eax, ebp
0x949BC4: jge     short loc_949BDA
0x949BC6: add     eax, eax
0x949BC8: cmp     ebp, eax
0x949BCA: jl      short loc_949BCE
0x949BCC: mov     eax, ebp
0x949BCE: push    0Ch
0x949BD0: push    eax
0x949BD1: push    edi
0x949BD2: call    sub_8A6E40
0x949BD7: add     esp, 0Ch
0x949BDA: mov     ecx, [edi]
0x949BDC: mov     [edi+4], ebp
0x949BDF: lea     eax, [ebx+ebx*2]
0x949BE2: lea     eax, [ecx+eax*4]
0x949BE5: mov     dword ptr [eax], 4
0x949BEB: mov     dword ptr [eax+4], 1
0x949BF2: mov     dword ptr [eax+8], 5
0x949BF9: mov     edi, [esi+50h]
0x949BFC: mov     ebx, [edi+10h]
0x949BFF: mov     eax, [edi+14h]
0x949C02: add     edi, 0Ch
0x949C05: lea     ebp, [ebx+1]
0x949C08: and     eax, 3FFFFFFFh
0x949C0D: cmp     eax, ebp
0x949C0F: jge     short loc_949C25
0x949C11: add     eax, eax
0x949C13: cmp     ebp, eax
0x949C15: jl      short loc_949C19
0x949C17: mov     eax, ebp
0x949C19: push    0Ch
0x949C1B: push    eax
0x949C1C: push    edi
0x949C1D: call    sub_8A6E40
0x949C22: add     esp, 0Ch
0x949C25: mov     eax, [edi]
0x949C27: mov     [edi+4], ebp
0x949C2A: lea     edx, [ebx+ebx*2]
0x949C2D: lea     eax, [eax+edx*4]
0x949C30: mov     dword ptr [eax], 2
0x949C36: mov     dword ptr [eax+4], 3
0x949C3D: mov     dword ptr [eax+8], 6
0x949C44: mov     esi, [esi+50h]
0x949C47: mov     ebx, [esi+10h]
0x949C4A: mov     eax, [esi+14h]
0x949C4D: add     esi, 0Ch
0x949C50: lea     edi, [ebx+1]
0x949C53: and     eax, 3FFFFFFFh
0x949C58: cmp     eax, edi
0x949C5A: pop     ebp
0x949C5B: jge     short loc_949C71
0x949C5D: add     eax, eax
0x949C5F: cmp     edi, eax
0x949C61: jl      short loc_949C65
0x949C63: mov     eax, edi
0x949C65: push    0Ch
0x949C67: push    eax
0x949C68: push    esi
0x949C69: call    sub_8A6E40
0x949C6E: add     esp, 0Ch
0x949C71: mov     edx, [esi]
0x949C73: mov     [esi+4], edi
0x949C76: lea     ecx, [ebx+ebx*2]
0x949C79: pop     edi
0x949C7A: lea     eax, [edx+ecx*4]
0x949C7D: pop     esi
0x949C7E: mov     dword ptr [eax], 6
0x949C84: mov     dword ptr [eax+4], 3
0x949C8B: mov     dword ptr [eax+8], 7
0x949C92: pop     ebx
0x949C93: retn
