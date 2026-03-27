0x8FF2C0: push    ebp
0x8FF2C1: mov     ebp, esp
0x8FF2C3: and     esp, 0FFFFFFF0h
0x8FF2C6: sub     esp, 164h
0x8FF2CC: mov     ecx, ds:0BA9DE4h
0x8FF2D2: push    ebx
0x8FF2D3: mov     ebx, large fs:2Ch
0x8FF2DA: mov     eax, [ebx+ecx*4]
0x8FF2DD: mov     edx, [eax+1A4h]
0x8FF2E3: push    esi
0x8FF2E4: cmp     edx, [eax+1A8h]
0x8FF2EA: push    edi
0x8FF2EB: jnb     short loc_8FF311
0x8FF2ED: mov     edi, eax
0x8FF2EF: mov     esi, [edi+1A4h]
0x8FF2F5: mov     dword ptr [esi], offset aTtpredgskf3; "TtPredGskf3"
0x8FF2FB: rdtsc
0x8FF2FD: mov     [esp+170h+var_15C], eax
0x8FF301: mov     eax, [esp+170h+var_15C]
0x8FF305: mov     [esi+4], eax
0x8FF308: add     esi, 0Ch
0x8FF30B: mov     [edi+1A4h], esi
0x8FF311: mov     eax, [ebx+ecx*4]
0x8FF314: mov     edx, [eax+1A4h]
0x8FF31A: cmp     edx, [eax+1A8h]
0x8FF320: jnb     short loc_8FF34D
0x8FF322: mov     edi, eax
0x8FF324: mov     esi, [edi+1A4h]
0x8FF32A: mov     dword ptr [esi], offset aLtintern; "Ltintern"
0x8FF330: mov     dword ptr [esi+0Ch], offset aInit; "init"
0x8FF337: rdtsc
0x8FF339: mov     [esp+170h+var_15C], eax
0x8FF33D: mov     eax, [esp+170h+var_15C]
0x8FF341: mov     [esi+4], eax
0x8FF344: add     esi, 10h
0x8FF347: mov     [edi+1A4h], esi
0x8FF34D: mov     esi, [ebp+arg_0]
0x8FF350: mov     edx, [esi+50h]
0x8FF353: mov     eax, [esi+8]
0x8FF356: mov     eax, [eax+28h]
0x8FF359: mov     edi, [ebp+arg_8]
0x8FF35C: mov     [esp+170h+var_158], edx
0x8FF360: mov     dl, [eax+10h]
0x8FF363: add     edi, 0Ch
0x8FF366: test    dl, dl
0x8FF368: mov     [esp+170h+var_15C], eax
0x8FF36C: jz      loc_8FF553
0x8FF372: mov     edx, [esi]
0x8FF374: mov     eax, [edx+0Ch]
0x8FF377: test    eax, eax
0x8FF379: jz      short loc_8FF389
0x8FF37B: jmp     short loc_8FF380
0x8FF37D: align 10h
0x8FF380: mov     edx, eax
0x8FF382: mov     eax, [edx+0Ch]
0x8FF385: test    eax, eax
0x8FF387: jnz     short loc_8FF380
0x8FF389: mov     edx, [edx+20h]
0x8FF38C: mov     [esp+170h+var_154], edx
0x8FF390: mov     edx, [esi+4]
0x8FF393: mov     eax, [edx+0Ch]
0x8FF396: test    eax, eax
0x8FF398: jz      short loc_8FF3A9
0x8FF39A: lea     ebx, [ebx+0]
0x8FF3A0: mov     edx, eax
0x8FF3A2: mov     eax, [edx+0Ch]
0x8FF3A5: test    eax, eax
0x8FF3A7: jnz     short loc_8FF3A0
0x8FF3A9: fld     dword ptr [edx+20h]
0x8FF3AC: fld     [esp+170h+var_154]
0x8FF3B0: fcomp   st(1)
0x8FF3B2: fnstsw  ax
0x8FF3B4: test    ah, 5
0x8FF3B7: jp      short loc_8FF3C5
0x8FF3B9: mov     eax, [esp+170h+var_154]
0x8FF3BD: fstp    st
0x8FF3BF: mov     [esp+170h+var_150], eax
0x8FF3C3: jmp     short loc_8FF3C9
0x8FF3C5: fstp    [esp+170h+var_150]
0x8FF3C9: mov     edx, [ebp+arg_C]
0x8FF3CC: fld     dword ptr [edx+0Ch]
0x8FF3CF: mov     edx, [esp+170h+var_15C]
0x8FF3D3: fld     [esp+170h+var_150]
0x8FF3D7: fmul    dword ptr [edx+18h]
0x8FF3DA: fadd    st, st(1)
0x8FF3DC: fld     [esp+170h+var_150]
0x8FF3E0: fmul    dword ptr [edx+14h]
0x8FF3E3: fst     [esp+170h+var_154]
0x8FF3E7: fcomp   st(1)
0x8FF3E9: fnstsw  ax
0x8FF3EB: test    ah, 5
0x8FF3EE: jp      short loc_8FF3FC
0x8FF3F0: mov     eax, [esp+170h+var_154]
0x8FF3F4: fstp    st
0x8FF3F6: mov     [esp+170h+var_154], eax
0x8FF3FA: jmp     short loc_8FF400
0x8FF3FC: fstp    [esp+170h+var_154]
0x8FF400: fld     [esp+170h+var_158]
0x8FF404: fcomp   [esp+170h+var_154]
0x8FF408: fnstsw  ax
0x8FF40A: test    ah, 1
0x8FF40D: jz      loc_8FF54D
0x8FF413: fld     [esp+170h+var_150]
0x8FF417: fmul    dword ptr [edx+28h]
0x8FF41A: faddp   st(1), st
0x8FF41C: fld     [esp+170h+var_150]
0x8FF420: fmul    dword ptr [edx+24h]
0x8FF423: fst     [esp+170h+var_15C]
0x8FF427: fcomp   st(1)
0x8FF429: fnstsw  ax
0x8FF42B: test    ah, 5
0x8FF42E: jp      short loc_8FF43C
0x8FF430: mov     edx, [esp+170h+var_15C]
0x8FF434: fstp    st
0x8FF436: mov     [esp+170h+var_158], edx
0x8FF43A: jmp     short loc_8FF440
0x8FF43C: fstp    [esp+170h+var_158]
0x8FF440: mov     eax, [ebx+ecx*4]
0x8FF443: mov     edx, [eax+1A4h]
0x8FF449: cmp     edx, [eax+1A8h]
0x8FF44F: jnb     short loc_8FF47D
0x8FF451: mov     ecx, eax
0x8FF453: mov     [esp+170h+var_14C], ecx
0x8FF457: mov     ecx, [ecx+1A4h]
0x8FF45D: mov     dword ptr [ecx], offset aSttoi; "Sttoi"
0x8FF463: rdtsc
0x8FF465: mov     [esp+170h+var_15C], eax
0x8FF469: mov     eax, [esp+170h+var_15C]
0x8FF46D: mov     edx, [esp+170h+var_14C]
0x8FF471: mov     [ecx+4], eax
0x8FF474: add     ecx, 0Ch
0x8FF477: mov     [edx+1A4h], ecx
0x8FF47D: mov     eax, [ebp+arg_10]
0x8FF480: mov     ecx, [ebp+arg_C]
0x8FF483: mov     edx, [ebp+arg_8]
0x8FF486: push    eax; int
0x8FF487: mov     eax, [esp+174h+var_158]
0x8FF48B: push    ecx; int
0x8FF48C: mov     ecx, [esp+178h+var_154]
0x8FF490: push    edx; int
0x8FF491: mov     edx, [esp+17Ch+var_150]
0x8FF495: push    eax; int
0x8FF496: push    ecx; int
0x8FF497: push    edx; float
0x8FF498: push    esi; int
0x8FF499: call    sub_93DE40
0x8FF49E: mov     ecx, ds:0BA9DE4h
0x8FF4A4: add     esp, 1Ch
0x8FF4A7: mov     eax, [ebx+ecx*4]
0x8FF4AA: mov     edx, [eax+1A4h]
0x8FF4B0: cmp     edx, [eax+1A8h]
0x8FF4B6: jnb     short loc_8FF4E4
0x8FF4B8: mov     ecx, eax
0x8FF4BA: mov     [esp+170h+var_15C], ecx
0x8FF4BE: mov     ecx, [ecx+1A4h]
0x8FF4C4: mov     dword ptr [ecx], offset aStprocess; "Stprocess"
0x8FF4CA: rdtsc
0x8FF4CC: mov     [esp+170h+var_14C], eax
0x8FF4D0: mov     eax, [esp+170h+var_14C]
0x8FF4D4: mov     edx, [esp+170h+var_15C]
0x8FF4D8: mov     [ecx+4], eax
0x8FF4DB: add     ecx, 0Ch
0x8FF4DE: mov     [edx+1A4h], ecx
0x8FF4E4: mov     eax, [esi]
0x8FF4E6: mov     ecx, [eax]
0x8FF4E8: mov     edx, [esi+4]
0x8FF4EB: mov     dword ptr [esp+170h+var_148+0Ch], ecx
0x8FF4EF: mov     ecx, [edx]
0x8FF4F1: mov     [esp+170h+var_138], ecx
0x8FF4F5: mov     ecx, [esi+8]
0x8FF4F8: lea     edx, [esi+10h]
0x8FF4FB: mov     dword ptr [esp+170h+var_148+4], edx
0x8FF4FF: mov     eax, [eax+8]
0x8FF502: mov     dword ptr [esp+170h+var_148+8], eax
0x8FF506: mov     edx, [ecx+8]
0x8FF509: mov     ecx, [ebp+arg_C]
0x8FF50C: lea     eax, [esp+170h+var_130]
0x8FF510: push    eax
0x8FF511: mov     [esp+174h+var_134], edx
0x8FF515: mov     edx, [ebp+arg_8]
0x8FF518: push    ecx
0x8FF519: push    edx
0x8FF51A: lea     eax, [esp+17Ch+var_148+4]
0x8FF51E: push    eax
0x8FF51F: call    sub_93D4A0
0x8FF524: add     esp, 10h
0x8FF527: cmp     eax, 1
0x8FF52A: jnz     loc_8FF763
0x8FF530: mov     al, [edi+2]
0x8FF533: test    al, al
0x8FF535: jz      loc_8FFA88
0x8FF53B: mov     ecx, [esi+0Ch]
0x8FF53E: push    ecx
0x8FF53F: push    edi
0x8FF540: call    sub_939B60
0x8FF545: add     esp, 8
0x8FF548: jmp     loc_8FFA88
0x8FF54D: mov     eax, [esp+170h+var_15C]
0x8FF551: fstp    st
0x8FF553: fld     [esp+170h+var_158]
0x8FF557: fcomp   dword ptr [eax+0Ch]
0x8FF55A: fnstsw  ax
0x8FF55C: test    ah, 41h
0x8FF55F: jnz     loc_8FF4A7
0x8FF565: mov     eax, [esp+170h+var_158]
0x8FF569: mov     edx, [ebp+arg_C]
0x8FF56C: mov     [edx+0Ch], eax
0x8FF56F: mov     al, [edi+2]
0x8FF572: test    al, al
0x8FF574: jz      loc_8FFA8E
0x8FF57A: mov     eax, [ebx+ecx*4]
0x8FF57D: mov     edx, [eax+1A4h]
0x8FF583: cmp     edx, [eax+1A8h]
0x8FF589: jnb     short loc_8FF5AF
0x8FF58B: mov     ebx, eax
0x8FF58D: mov     ecx, [ebx+1A4h]
0x8FF593: mov     dword ptr [ecx], offset aStgetpoints; "StgetPoints"
0x8FF599: rdtsc
0x8FF59B: mov     [esp+170h+var_14C], eax
0x8FF59F: mov     eax, [esp+170h+var_14C]
0x8FF5A3: mov     [ecx+4], eax
0x8FF5A6: add     ecx, 0Ch
0x8FF5A9: mov     [ebx+1A4h], ecx
0x8FF5AF: mov     ecx, [esi+8]
0x8FF5B2: mov     edx, [ecx+8]
0x8FF5B5: mov     eax, [esi+4]
0x8FF5B8: mov     ebx, [esi]
0x8FF5BA: mov     [esp+170h+var_8], edx
0x8FF5C1: mov     ecx, [ebx]
0x8FF5C3: mov     edx, [ecx+0Ch]
0x8FF5C6: mov     [esp+170h+var_14C], eax
0x8FF5CA: mov     eax, [eax]
0x8FF5CC: mov     [esp+170h+var_10], edx
0x8FF5D3: fld     [esp+170h+var_10]
0x8FF5DA: mov     edx, [ebp+arg_C]
0x8FF5DD: movaps  xmm0, xmmword ptr [edx]
0x8FF5E0: mov     [esp+170h+var_158], eax
0x8FF5E4: mov     eax, [eax+0Ch]
0x8FF5E7: mov     [esp+170h+var_C], eax
0x8FF5EE: fadd    [esp+170h+var_C]
0x8FF5F5: mov     al, [edi+2]
0x8FF5F8: test    al, al
0x8FF5FA: fadd    [esp+170h+var_8]
0x8FF601: movaps  [esp+170h+var_20], xmm0
0x8FF609: fld     st
0x8FF60B: fmul    st, st(1)
0x8FF60D: fstp    [esp+170h+var_4]
0x8FF614: fstp    st
0x8FF616: jz      loc_8FF711
0x8FF61C: movzx   eax, al
0x8FF61F: lea     edx, [edi+eax*8+4]
0x8FF623: mov     eax, [ecx]
0x8FF625: mov     [esp+170h+var_15C], edx
0x8FF629: lea     edx, [esp+170h+var_120]
0x8FF62D: push    edx
0x8FF62E: movzx   edx, byte ptr [edi]
0x8FF631: push    edx
0x8FF632: mov     edx, [esp+178h+var_15C]
0x8FF636: push    edx
0x8FF637: call    dword ptr [eax+28h]
0x8FF63A: mov     eax, [ebx+8]
0x8FF63D: movzx   edx, byte ptr [edi]
0x8FF640: movaps  xmm1, xmmword ptr [eax]
0x8FF643: movaps  xmm2, xmmword ptr [eax+10h]
0x8FF647: movaps  xmm3, xmmword ptr [eax+20h]
0x8FF64B: movaps  xmm4, xmmword ptr [eax+30h]
0x8FF64F: mov     ebx, edx
0x8FF651: lea     ecx, [esp+170h+var_120]
0x8FF655: movaps  xmm0, xmmword ptr [ecx]
0x8FF658: movaps  xmm5, xmm0
0x8FF65B: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FF65F: movaps  xmm6, xmm3
0x8FF662: mulps   xmm6, xmm5
0x8FF665: movaps  xmm5, xmm0
0x8FF668: shufps  xmm5, xmm0, 55h ; 'U'
0x8FF66C: movaps  xmm7, xmm2
0x8FF66F: mulps   xmm7, xmm5
0x8FF672: movaps  xmm5, xmm0
0x8FF675: shufps  xmm5, xmm0, 0
0x8FF679: movaps  xmm0, xmm1
0x8FF67C: mulps   xmm0, xmm5
0x8FF67F: addps   xmm6, xmm4
0x8FF682: addps   xmm0, xmm7
0x8FF685: addps   xmm0, xmm6
0x8FF688: movaps  xmmword ptr [ecx], xmm0
0x8FF68B: add     ecx, 10h
0x8FF68E: dec     ebx
0x8FF68F: test    ebx, ebx
0x8FF691: jg      short loc_8FF655
0x8FF693: mov     ecx, [esp+170h+var_158]
0x8FF697: mov     eax, edx
0x8FF699: shl     eax, 4
0x8FF69C: lea     ebx, [esp+eax+170h+var_120]
0x8FF6A0: mov     eax, [ecx]
0x8FF6A2: movzx   ecx, byte ptr [edi+1]
0x8FF6A6: push    ebx
0x8FF6A7: push    ecx
0x8FF6A8: mov     ecx, [esp+178h+var_15C]
0x8FF6AC: lea     edx, [ecx+edx*2]
0x8FF6AF: mov     ecx, [esp+178h+var_158]
0x8FF6B3: push    edx
0x8FF6B4: call    dword ptr [eax+28h]
0x8FF6B7: mov     eax, [esp+170h+var_14C]
0x8FF6BB: mov     eax, [eax+8]
0x8FF6BE: movzx   edx, byte ptr [edi+1]
0x8FF6C2: movaps  xmm1, xmmword ptr [eax]
0x8FF6C5: movaps  xmm2, xmmword ptr [eax+10h]
0x8FF6C9: movaps  xmm3, xmmword ptr [eax+20h]
0x8FF6CD: movaps  xmm4, xmmword ptr [eax+30h]
0x8FF6D1: mov     ecx, ebx
0x8FF6D3: movaps  xmm0, xmmword ptr [ecx]
0x8FF6D6: movaps  xmm5, xmm0
0x8FF6D9: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FF6DD: movaps  xmm6, xmm3
0x8FF6E0: mulps   xmm6, xmm5
0x8FF6E3: movaps  xmm5, xmm0
0x8FF6E6: shufps  xmm5, xmm0, 55h ; 'U'
0x8FF6EA: movaps  xmm7, xmm2
0x8FF6ED: mulps   xmm7, xmm5
0x8FF6F0: movaps  xmm5, xmm0
0x8FF6F3: shufps  xmm5, xmm0, 0
0x8FF6F7: movaps  xmm0, xmm1
0x8FF6FA: mulps   xmm0, xmm5
0x8FF6FD: addps   xmm6, xmm4
0x8FF700: addps   xmm0, xmm7
0x8FF703: addps   xmm0, xmm6
0x8FF706: movaps  xmmword ptr [ecx], xmm0
0x8FF709: add     ecx, 10h
0x8FF70C: dec     edx
0x8FF70D: test    edx, edx
0x8FF70F: jg      short loc_8FF6D3
0x8FF711: mov     ecx, [esi+0Ch]
0x8FF714: mov     esi, [ebp+arg_10]
0x8FF717: push    ecx
0x8FF718: push    esi
0x8FF719: push    0
0x8FF71B: lea     edx, [esp+17Ch+var_120]
0x8FF71F: push    edx
0x8FF720: push    edi
0x8FF721: call    sub_939BB0
0x8FF726: mov     al, [edi+2]
0x8FF729: add     esp, 14h
0x8FF72C: test    al, al
0x8FF72E: jz      loc_8FFA81
0x8FF734: mov     ecx, [esi+3040h]
0x8FF73A: test    ecx, ecx
0x8FF73C: jz      loc_8FFA81
0x8FF742: mov     edx, [esi]
0x8FF744: movzx   eax, al
0x8FF747: lea     eax, [eax+eax*2]
0x8FF74A: shl     eax, 4
0x8FF74D: sub     edx, eax
0x8FF74F: mov     eax, [ecx+4]
0x8FF752: mov     [eax], edx
0x8FF754: mov     esi, [esi+3040h]
0x8FF75A: add     dword ptr [esi+4], 4
0x8FF75E: jmp     loc_8FFA81
0x8FF763: mov     edx, [ebp+arg_8]
0x8FF766: push    edx
0x8FF767: push    edi
0x8FF768: call    sub_93A620
0x8FF76D: movzx   ecx, al
0x8FF770: mov     eax, [ebp+arg_10]
0x8FF773: mov     edx, [eax]
0x8FF775: mov     al, [edi+2]
0x8FF778: mov     [esp+178h+var_150], edx
0x8FF77C: movzx   edx, al
0x8FF77F: add     esp, 8
0x8FF782: cmp     edx, ecx
0x8FF784: mov     [esp+170h+var_154], ecx
0x8FF788: mov     [esp+170h+var_14C], edx
0x8FF78C: jle     loc_8FF91D
0x8FF792: test    al, al
0x8FF794: mov     ecx, [esi+8]
0x8FF797: mov     ecx, [ecx+8]
0x8FF79A: mov     edx, [esi+4]
0x8FF79D: mov     ebx, [esi]
0x8FF79F: mov     dword ptr [esp+170h+var_148], edx
0x8FF7A3: mov     [esp+170h+var_8], ecx
0x8FF7AA: mov     edx, [edx]
0x8FF7AC: mov     ecx, [ebx]
0x8FF7AE: mov     [esp+170h+var_158], edx
0x8FF7B2: mov     edx, [ecx+0Ch]
0x8FF7B5: mov     [esp+170h+var_10], edx
0x8FF7BC: mov     edx, [esp+170h+var_158]
0x8FF7C0: mov     edx, [edx+0Ch]
0x8FF7C3: mov     [esp+170h+var_C], edx
0x8FF7CA: fld     [esp+170h+var_C]
0x8FF7D1: fadd    [esp+170h+var_10]
0x8FF7D8: mov     edx, [ebp+arg_C]
0x8FF7DB: movaps  xmm0, xmmword ptr [edx]
0x8FF7DE: movaps  [esp+170h+var_20], xmm0
0x8FF7E6: fadd    [esp+170h+var_8]
0x8FF7ED: fld     st
0x8FF7EF: fmul    st, st(1)
0x8FF7F1: fstp    [esp+170h+var_4]
0x8FF7F8: fstp    st
0x8FF7FA: jz      loc_8FF8FE
0x8FF800: mov     eax, [esp+170h+var_14C]
0x8FF804: lea     edx, [edi+eax*8+4]
0x8FF808: mov     eax, [ecx]
0x8FF80A: mov     [esp+170h+var_15C], edx
0x8FF80E: lea     edx, [esp+170h+var_120]
0x8FF812: push    edx
0x8FF813: movzx   edx, byte ptr [edi]
0x8FF816: push    edx
0x8FF817: mov     edx, [esp+178h+var_15C]
0x8FF81B: push    edx
0x8FF81C: call    dword ptr [eax+28h]
0x8FF81F: mov     eax, [ebx+8]
0x8FF822: movzx   edx, byte ptr [edi]
0x8FF825: movaps  xmm1, xmmword ptr [eax]
0x8FF828: movaps  xmm2, xmmword ptr [eax+10h]
0x8FF82C: movaps  xmm3, xmmword ptr [eax+20h]
0x8FF830: movaps  xmm4, xmmword ptr [eax+30h]
0x8FF834: mov     ebx, edx
0x8FF836: lea     ecx, [esp+170h+var_120]
0x8FF83A: lea     ebx, [ebx+0]
0x8FF840: movaps  xmm0, xmmword ptr [ecx]
0x8FF843: movaps  xmm5, xmm0
0x8FF846: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FF84A: movaps  xmm6, xmm3
0x8FF84D: mulps   xmm6, xmm5
0x8FF850: movaps  xmm5, xmm0
0x8FF853: shufps  xmm5, xmm0, 55h ; 'U'
0x8FF857: movaps  xmm7, xmm2
0x8FF85A: mulps   xmm7, xmm5
0x8FF85D: movaps  xmm5, xmm0
0x8FF860: shufps  xmm5, xmm0, 0
0x8FF864: movaps  xmm0, xmm1
0x8FF867: mulps   xmm0, xmm5
0x8FF86A: addps   xmm6, xmm4
0x8FF86D: addps   xmm0, xmm7
0x8FF870: addps   xmm0, xmm6
0x8FF873: movaps  xmmword ptr [ecx], xmm0
0x8FF876: add     ecx, 10h
0x8FF879: dec     ebx
0x8FF87A: test    ebx, ebx
0x8FF87C: jg      short loc_8FF840
0x8FF87E: mov     ecx, [esp+170h+var_158]
0x8FF882: mov     eax, edx
0x8FF884: shl     eax, 4
0x8FF887: lea     ebx, [esp+eax+170h+var_120]
0x8FF88B: mov     eax, [ecx]
0x8FF88D: movzx   ecx, byte ptr [edi+1]
0x8FF891: push    ebx
0x8FF892: push    ecx
0x8FF893: mov     ecx, [esp+178h+var_15C]
0x8FF897: lea     edx, [ecx+edx*2]
0x8FF89A: mov     ecx, [esp+178h+var_158]
0x8FF89E: push    edx
0x8FF89F: call    dword ptr [eax+28h]
0x8FF8A2: mov     eax, dword ptr [esp+170h+var_148]
0x8FF8A6: mov     eax, [eax+8]
0x8FF8A9: movzx   edx, byte ptr [edi+1]
0x8FF8AD: movaps  xmm1, xmmword ptr [eax]
0x8FF8B0: movaps  xmm2, xmmword ptr [eax+10h]
0x8FF8B4: movaps  xmm3, xmmword ptr [eax+20h]
0x8FF8B8: movaps  xmm4, xmmword ptr [eax+30h]
0x8FF8BC: mov     ecx, ebx
0x8FF8BE: mov     edi, edi
0x8FF8C0: movaps  xmm0, xmmword ptr [ecx]
0x8FF8C3: movaps  xmm5, xmm0
0x8FF8C6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FF8CA: movaps  xmm6, xmm3
0x8FF8CD: mulps   xmm6, xmm5
0x8FF8D0: movaps  xmm5, xmm0
0x8FF8D3: shufps  xmm5, xmm0, 55h ; 'U'
0x8FF8D7: movaps  xmm7, xmm2
0x8FF8DA: mulps   xmm7, xmm5
0x8FF8DD: movaps  xmm5, xmm0
0x8FF8E0: shufps  xmm5, xmm0, 0
0x8FF8E4: movaps  xmm0, xmm1
0x8FF8E7: mulps   xmm0, xmm5
0x8FF8EA: addps   xmm6, xmm4
0x8FF8ED: addps   xmm0, xmm7
0x8FF8F0: addps   xmm0, xmm6
0x8FF8F3: movaps  xmmword ptr [ecx], xmm0
0x8FF8F6: add     ecx, 10h
0x8FF8F9: dec     edx
0x8FF8FA: test    edx, edx
0x8FF8FC: jg      short loc_8FF8C0
0x8FF8FE: mov     ecx, [esi+0Ch]
0x8FF901: mov     edx, [ebp+arg_10]
0x8FF904: mov     eax, [esp+170h+var_154]
0x8FF908: push    ecx
0x8FF909: push    edx
0x8FF90A: push    eax
0x8FF90B: lea     ecx, [esp+17Ch+var_120]
0x8FF90F: push    ecx
0x8FF910: push    edi
0x8FF911: call    sub_939BB0
0x8FF916: mov     ecx, [esp+184h+var_154]
0x8FF91A: add     esp, 14h
0x8FF91D: test    ecx, ecx
0x8FF91F: mov     edx, [ebp+arg_10]
0x8FF922: mov     ebx, [edx]
0x8FF924: movaps  xmm0, xmmword ptr [esp+170h+var_130]
0x8FF929: mov     eax, [ebp+arg_C]
0x8FF92C: movaps  xmmword ptr [ebx], xmm0
0x8FF92F: movaps  xmm0, xmmword ptr [eax]
0x8FF932: movaps  xmmword ptr [ebx+10h], xmm0
0x8FF936: jz      short loc_8FF94A
0x8FF938: mov     cx, [edi+6]
0x8FF93C: mov     [ebx+20h], cx
0x8FF940: mov     eax, edx
0x8FF942: add     dword ptr [eax], 30h ; '0'
0x8FF945: jmp     loc_8FFA61
0x8FF94A: mov     eax, [ebp+arg_8]
0x8FF94D: movsx   edx, byte ptr [eax+9]
0x8FF951: movsx   eax, byte ptr [eax+8]
0x8FF955: mov     ecx, [esi+8]
0x8FF958: add     edx, eax
0x8FF95A: cmp     edx, 4
0x8FF95D: mov     eax, [ecx+28h]
0x8FF960: jnz     short loc_8FF967
0x8FF962: fld     dword ptr [eax+4]
0x8FF965: jmp     short loc_8FF96A
0x8FF967: fld     dword ptr [eax+8]
0x8FF96A: mov     edx, [ebp+arg_C]
0x8FF96D: fcomp   dword ptr [edx+0Ch]
0x8FF970: fnstsw  ax
0x8FF972: test    ah, 41h
0x8FF975: jnz     loc_8FFA61
0x8FF97B: mov     eax, [esi+0Ch]
0x8FF97E: mov     edx, [esp+170h+var_150]
0x8FF982: push    1
0x8FF984: push    eax
0x8FF985: mov     eax, [ebp+arg_8]
0x8FF988: push    edx
0x8FF989: mov     edx, [esi]
0x8FF98B: push    ebx
0x8FF98C: push    eax
0x8FF98D: push    ecx
0x8FF98E: mov     ecx, [esi+4]
0x8FF991: push    ecx
0x8FF992: push    edx
0x8FF993: push    edi
0x8FF994: call    sub_93AB40
0x8FF999: add     esp, 24h
0x8FF99C: cmp     eax, 4
0x8FF99F: jnz     loc_8FFA35
0x8FF9A5: cmp     word ptr [ebx+20h], 0FFFFh
0x8FF9AB: mov     eax, [ebp+arg_10]
0x8FF9AE: jz      short loc_8FF9B8
0x8FF9B0: add     dword ptr [eax], 30h ; '0'
0x8FF9B3: jmp     loc_8FFA61
0x8FF9B8: mov     ecx, [eax+3040h]
0x8FF9BE: test    ecx, ecx
0x8FF9C0: jz      short loc_8FF9FA
0x8FF9C2: mov     eax, [ebp+arg_4]
0x8FF9C5: test    eax, eax
0x8FF9C7: jz      short loc_8FF9FA
0x8FF9C9: mov     ecx, [esi+0Ch]
0x8FF9CC: mov     edx, [ecx]
0x8FF9CE: push    1
0x8FF9D0: call    dword ptr [edx+0Ch]
0x8FF9D3: test    eax, eax
0x8FF9D5: jnz     short loc_8FFA18
0x8FF9D7: mov     edx, [ebp+arg_10]
0x8FF9DA: mov     ecx, [edx+3040h]
0x8FF9E0: mov     eax, [ecx]
0x8FF9E2: lea     esi, [eax+0Ch]
0x8FF9E5: mov     [ecx], esi
0x8FF9E7: mov     ecx, [ebp+arg_4]
0x8FF9EA: mov     [eax+4], ecx
0x8FF9ED: mov     ecx, [ebp+arg_8]
0x8FF9F0: mov     [eax], ebx
0x8FF9F2: mov     [eax+8], ecx
0x8FF9F5: add     dword ptr [edx], 30h ; '0'
0x8FF9F8: jmp     short loc_8FFA61
0x8FF9FA: mov     eax, [esi+8]
0x8FF9FD: mov     ecx, [esi+0Ch]
0x8FFA00: mov     edx, [ecx]
0x8FFA02: push    ebx
0x8FFA03: push    eax
0x8FFA04: mov     eax, [esi+4]
0x8FFA07: push    eax
0x8FFA08: mov     eax, [esi]
0x8FFA0A: push    eax
0x8FFA0B: call    dword ptr [edx+8]
0x8FFA0E: cmp     ax, 0FFFFh
0x8FFA12: mov     [ebx+20h], ax
0x8FFA16: jnz     short loc_8FFA29
0x8FFA18: push    0
0x8FFA1A: push    edi
0x8FFA1B: call    sub_939B00
0x8FFA20: mov     ebx, [esp+178h+var_150]
0x8FFA24: add     esp, 8
0x8FFA27: jmp     short loc_8FFA61
0x8FFA29: mov     edx, [ebp+arg_10]
0x8FFA2C: mov     [edi+6], ax
0x8FFA30: add     dword ptr [edx], 30h ; '0'
0x8FFA33: jmp     short loc_8FFA61
0x8FFA35: cmp     eax, 5
0x8FFA38: jnz     short loc_8FFA40
0x8FFA3A: mov     ebx, [esp+170h+var_150]
0x8FFA3E: jmp     short loc_8FFA61
0x8FFA40: cmp     eax, 6
0x8FFA43: jnz     short loc_8FFA55
0x8FFA45: mov     eax, [ebp+arg_10]
0x8FFA48: mov     ecx, [eax]
0x8FFA4A: mov     ebx, [esp+170h+var_150]
0x8FFA4E: add     ecx, 0FFFFFFD0h
0x8FFA51: mov     [eax], ecx
0x8FFA53: jmp     short loc_8FFA61
0x8FFA55: lea     ebx, [eax+eax*2]
0x8FFA58: mov     eax, [esp+170h+var_150]
0x8FFA5C: shl     ebx, 4
0x8FFA5F: add     ebx, eax
0x8FFA61: mov     ecx, [ebp+arg_10]
0x8FFA64: mov     eax, [ecx+3040h]
0x8FFA6A: test    eax, eax
0x8FFA6C: jz      short loc_8FFA81
0x8FFA6E: cmp     ebx, [ecx]
0x8FFA70: jnb     short loc_8FFA81
0x8FFA72: mov     edx, [eax+4]
0x8FFA75: mov     [edx], ebx
0x8FFA77: mov     eax, [ecx+3040h]
0x8FFA7D: add     dword ptr [eax+4], 4
0x8FFA81: mov     ebx, large fs:2Ch
0x8FFA88: mov     ecx, ds:0BA9DE4h
0x8FFA8E: mov     al, [edi+2]
0x8FFA91: mov     edx, [ebp+arg_4]
0x8FFA94: mov     [edx+2], al
0x8FFA97: mov     eax, [ebx+ecx*4]
0x8FFA9A: mov     edx, [eax+1A4h]
0x8FFAA0: cmp     edx, [eax+1A8h]
0x8FFAA6: jnb     short loc_8FFACD
0x8FFAA8: mov     esi, [eax+1A4h]
0x8FFAAE: mov     dword ptr [esi], offset aLt_0; "lt"
0x8FFAB4: rdtsc
0x8FFAB6: mov     dword ptr [esp+170h+var_148], eax
0x8FFABA: mov     eax, dword ptr [esp+170h+var_148]
0x8FFABE: mov     [esi+4], eax
0x8FFAC1: mov     eax, [ebx+ecx*4]
0x8FFAC4: add     esi, 0Ch
0x8FFAC7: mov     [eax+1A4h], esi
0x8FFACD: mov     eax, [ebx+ecx*4]
0x8FFAD0: mov     edx, [eax+1A4h]
0x8FFAD6: cmp     edx, [eax+1A8h]
0x8FFADC: jnb     short loc_8FFB02
0x8FFADE: mov     ebx, eax
0x8FFAE0: mov     esi, [ebx+1A4h]
0x8FFAE6: mov     dword ptr [esi], offset aEt; "Et"
0x8FFAEC: rdtsc
0x8FFAEE: mov     dword ptr [esp+170h+var_148], eax
0x8FFAF2: mov     eax, dword ptr [esp+170h+var_148]
0x8FFAF6: mov     [esi+4], eax
0x8FFAF9: add     esi, 0Ch
0x8FFAFC: mov     [ebx+1A4h], esi
0x8FFB02: movzx   ecx, byte ptr [edi+1]
0x8FFB06: movzx   edx, byte ptr [edi+2]
0x8FFB0A: lea     eax, [ecx+edx*4]
0x8FFB0D: movzx   ecx, byte ptr [edi]
0x8FFB10: add     eax, ecx
0x8FFB12: mov     ecx, [ebp+arg_8]
0x8FFB15: lea     eax, [eax+eax+1Fh]
0x8FFB19: pop     edi
0x8FFB1A: and     eax, 0FFFFFFF0h
0x8FFB1D: pop     esi
0x8FFB1E: add     eax, ecx
0x8FFB20: pop     ebx
0x8FFB21: mov     esp, ebp
0x8FFB23: pop     ebp
0x8FFB24: retn
