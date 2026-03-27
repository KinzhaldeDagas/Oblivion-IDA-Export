0x957040: sub     esp, 44h
0x957043: mov     eax, [esp+44h+arg_10]
0x957047: push    ebx
0x957048: mov     ebx, ecx
0x95704A: mov     ecx, [ebx+38h]
0x95704D: mov     [esp+48h+var_3C], eax
0x957051: mov     eax, [esp+48h+arg_C]
0x957055: mov     [esp+48h+var_38], ecx
0x957059: mov     ecx, [eax+4]
0x95705C: push    ebp
0x95705D: push    esi
0x95705E: mov     esi, [esp+50h+arg_8]
0x957062: mov     [esp+50h+var_30], ecx
0x957066: mov     ecx, [esi+4]
0x957069: mov     [esp+50h+arg_8], ecx
0x95706D: fild    [esp+50h+arg_8]
0x957071: mov     edx, [eax]
0x957073: mov     ebp, [esi+8]
0x957076: mov     [esp+50h+var_34], edx
0x95707A: fdivr   dword ptr ds:0A2F948h
0x957080: mov     edx, [esp+50h+arg_4]
0x957084: mov     [esp+50h+var_24], ecx
0x957088: mov     ecx, [esi]
0x95708A: mov     [esp+50h+var_18], edx
0x95708E: push    edi
0x95708F: xor     edi, edi
0x957091: mov     [esp+54h+var_40], edi
0x957095: mov     [esp+54h+var_44], ebp
0x957099: fstp    [esp+54h+var_20]
0x95709D: fld     dword ptr [eax+4]
0x9570A0: fsub    dword ptr [eax]
0x9570A2: mov     edx, [ecx]
0x9570A4: mov     [esp+54h+var_14], edx
0x9570A8: mov     ecx, [ecx]
0x9570AA: mov     [esp+54h+var_10], ecx
0x9570AE: fcom    dword ptr ds:0A37080h
0x9570B4: fnstsw  ax
0x9570B6: test    ah, 5
0x9570B9: jp      short loc_9570C5
0x9570BB: mov     [esp+54h+var_2C], 3F800000h
0x9570C3: jmp     short loc_9570D1
0x9570C5: fld     dword ptr ds:0A2F948h
0x9570CB: fdiv    st, st(1)
0x9570CD: fstp    [esp+54h+var_2C]
0x9570D1: mov     edx, [ebx+8]
0x9570D4: fstp    st
0x9570D6: mov     eax, [edx+8]
0x9570D9: cmp     ebp, eax
0x9570DB: jle     short loc_9570E3
0x9570DD: mov     ebp, eax
0x9570DF: mov     [esp+54h+var_44], ebp
0x9570E3: cmp     [esi+4], edi
0x9570E6: jle     loc_957185
0x9570EC: mov     [esp+54h+arg_8], edi
0x9570F0: mov     ecx, [esp+54h+arg_8]
0x9570F4: mov     eax, [esi]
0x9570F6: mov     edx, [esp+54h+var_14]
0x9570FA: add     eax, ecx
0x9570FC: mov     [esp+54h+var_28], edi
0x957100: mov     ecx, [eax+8]
0x957103: mov     [esp+54h+var_1C], ecx
0x957107: mov     ecx, [eax]
0x957109: cmp     edx, ecx
0x95710B: jb      short loc_957111
0x95710D: mov     [esp+54h+var_14], ecx
0x957111: mov     eax, [eax]
0x957113: cmp     [esp+54h+var_10], eax
0x957117: ja      short loc_95711D
0x957119: mov     [esp+54h+var_10], eax
0x95711D: mov     edx, [esp+54h+var_1C]
0x957121: mov     ecx, [ebx+0Ch]
0x957124: push    edx; float
0x957125: call    sub_956B20
0x95712A: mov     eax, [ebx+0Ch]
0x95712D: mov     ecx, [eax]
0x95712F: dec     ecx
0x957130: cmp     ecx, ebp
0x957132: jle     short loc_957154
0x957134: mov     edx, [eax+8]
0x957137: mov     ebp, [edx+ecx*4]
0x95713A: lea     edx, [edx+ecx*4]
0x95713D: mov     [eax+0Ch], ebp
0x957140: mov     ebp, [esp+54h+var_44]
0x957144: mov     dword ptr [edx], 0
0x95714A: mov     edx, [eax]
0x95714C: dec     edx
0x95714D: dec     ecx
0x95714E: cmp     ecx, ebp
0x957150: mov     [eax], edx
0x957152: jg      short loc_957134
0x957154: mov     edx, [esp+54h+arg_0]
0x957158: push    esi
0x957159: lea     eax, [esp+58h+var_3C]
0x95715D: push    eax
0x95715E: lea     ecx, [esp+5Ch+var_40]
0x957162: push    ecx
0x957163: push    edx
0x957164: push    edi
0x957165: mov     ecx, ebx
0x957167: call    sub_956C30
0x95716C: mov     ecx, [esp+54h+arg_8]
0x957170: mov     eax, [esi+4]
0x957173: inc     edi
0x957174: add     ecx, 10h
0x957177: cmp     edi, eax
0x957179: mov     [esp+54h+arg_8], ecx
0x95717D: jl      loc_9570F0
0x957183: xor     edi, edi
0x957185: mov     ebx, [ebx+0Ch]
0x957188: mov     eax, [ebx]
0x95718A: dec     eax
0x95718B: cmp     eax, edi
0x95718D: jle     short loc_95719B
0x95718F: nop
0x957190: mov     ecx, [ebx+8]
0x957193: mov     [ecx+eax*4], edi
0x957196: dec     eax
0x957197: cmp     eax, edi
0x957199: jg      short loc_957190
0x95719B: mov     [ebx+0Ch], edi
0x95719E: mov     [ebx], edi
0x9571A0: pop     edi
0x9571A1: pop     esi
0x9571A2: pop     ebp
0x9571A3: pop     ebx
0x9571A4: add     esp, 44h
0x9571A7: retn    14h
