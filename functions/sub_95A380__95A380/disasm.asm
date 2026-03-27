0x95A380: sub     esp, 2D8h
0x95A386: mov     eax, [esp+2D8h+arg_0]
0x95A38D: fld     dword ptr [eax]
0x95A38F: push    ebx
0x95A390: push    ebp
0x95A391: push    esi
0x95A392: mov     esi, [esp+2E4h+arg_C]
0x95A399: fsub    dword ptr [esi+88h]
0x95A39F: push    edi
0x95A3A0: lea     edi, [esi+64h]
0x95A3A3: push    edi
0x95A3A4: fstp    [esp+2ECh+var_E8]
0x95A3AB: lea     ecx, [esp+2ECh+var_20C]
0x95A3B2: fld     dword ptr [eax+4]
0x95A3B5: fsub    dword ptr [edi+28h]
0x95A3B8: fstp    [esp+2ECh+var_E4]
0x95A3BF: fld     dword ptr [eax+8]
0x95A3C2: lea     eax, [esp+2ECh+var_E8]
0x95A3C9: fsub    dword ptr [edi+2Ch]
0x95A3CC: push    eax
0x95A3CD: push    ecx
0x95A3CE: fstp    [esp+2F4h+var_E0]
0x95A3D5: fld     dword ptr [edi+30h]
0x95A3D8: fld1
0x95A3DA: fdivrp  st(1), st
0x95A3DC: fstp    [esp+2F4h+var_2D0]
0x95A3E0: call    sub_710250
0x95A3E5: fld     dword ptr [eax+4]
0x95A3E8: fld     [esp+2F4h+var_2D0]
0x95A3EC: mov     edx, [esp+2F4h+arg_4]
0x95A3F3: fld     st
0x95A3F5: push    edi
0x95A3F6: fmulp   st(2), st
0x95A3F8: push    edx
0x95A3F9: fxch    st(1)
0x95A3FB: fstp    [esp+2FCh+var_2BC]
0x95A3FF: fld     dword ptr [eax+8]
0x95A402: fmul    st, st(1)
0x95A404: fstp    [esp+2FCh+var_2C0]
0x95A408: fmul    dword ptr [eax]
0x95A40A: lea     eax, [esp+2FCh+var_20C]
0x95A411: push    eax
0x95A412: fstp    [esp+300h+var_F4]
0x95A419: fld     [esp+300h+var_2BC]
0x95A41D: fstp    [esp+300h+var_F0]
0x95A424: fld     [esp+300h+var_2C0]
0x95A428: fstp    [esp+300h+var_EC]
0x95A42F: call    sub_710250
0x95A434: fld     dword ptr [eax+4]
0x95A437: mov     ecx, [esi+0B4h]
0x95A43D: fld     [esp+300h+var_2D0]
0x95A441: add     esp, 18h
0x95A444: fld     st
0x95A446: mov     [esp+2E8h+var_2D5], 0
0x95A44B: fmulp   st(2), st
0x95A44D: fxch    st(1)
0x95A44F: fstp    [esp+2E8h+var_2BC]
0x95A453: fld     dword ptr [eax+8]
0x95A456: fmul    st, st(1)
0x95A458: fstp    [esp+2E8h+var_2C0]
0x95A45C: fmul    dword ptr [eax]
0x95A45E: fstp    [esp+2E8h+var_100]
0x95A465: fld     [esp+2E8h+var_2BC]
0x95A469: fstp    [esp+2E8h+var_FC]
0x95A470: fld     [esp+2E8h+var_2C0]
0x95A474: fstp    [esp+2E8h+var_F8]
0x95A47B: mov     edx, [ecx]
0x95A47D: mov     eax, [edx+5Ch]
0x95A480: call    eax
0x95A482: mov     ebx, [esi+0B4h]
0x95A488: xor     esi, esi
0x95A48A: movzx   ecx, ax
0x95A48D: mov     [esp+2E8h+var_230], esi
0x95A494: mov     [esp+2E8h+var_22C], esi
0x95A49B: mov     [esp+2E8h+var_228], 0
0x95A4A3: mov     ebp, [ebx+1Ch]
0x95A4A6: cmp     ebp, esi
0x95A4A8: mov     [esp+2E8h+var_2BC], ecx
0x95A4AC: mov     [esp+2E8h+var_2D6], 0
0x95A4B1: mov     [esp+2E8h+var_2B8], ebx
0x95A4B5: mov     [esp+2E8h+var_2C0], ebp
0x95A4B9: jnz     short loc_95A4F0
0x95A4BB: mov     ecx, [ebx+34h]
0x95A4BE: cmp     ecx, esi
0x95A4C0: jz      short loc_95A4F0
0x95A4C2: mov     edx, [ecx]
0x95A4C4: mov     eax, [edx+4Ch]
0x95A4C7: call    eax
0x95A4C9: test    al, al
0x95A4CB: jz      short loc_95A4E9
0x95A4CD: push    1
0x95A4CF: mov     ecx, ebx
0x95A4D1: call    sub_728AB0
0x95A4D6: lea     ecx, [esp+2E8h+var_230]
0x95A4DD: push    ecx
0x95A4DE: mov     ecx, ebx
0x95A4E0: mov     [esp+2ECh+var_2D6], al
0x95A4E4: call    sub_728B60
0x95A4E9: mov     esi, [esp+2E8h+var_22C]
0x95A4F0: mov     edi, [ebx+4Ch]
0x95A4F3: xor     eax, eax
0x95A4F5: cmp     word ptr [esp+2E8h+var_2BC], ax
0x95A4FA: mov     [esp+2E8h+var_15C], edi
0x95A501: mov     [esp+2E8h+var_2A8], eax
0x95A505: ja      short loc_95A528
0x95A507: cmp     [esp+2E8h+var_2D6], 0
0x95A50C: jz      short loc_95A515
0x95A50E: mov     ecx, ebx
0x95A510: call    sub_728B20
0x95A515: mov     al, [esp+2E8h+var_2D5]
0x95A519: pop     edi
0x95A51A: pop     esi
0x95A51B: pop     ebp
0x95A51C: pop     ebx
0x95A51D: add     esp, 2D8h
0x95A523: retn
0x95A524: mov     eax, [esp+2E8h+var_2A8]
0x95A528: test    al, 1
0x95A52A: movzx   eax, ax
0x95A52D: jz      short loc_95A542
0x95A52F: movzx   edx, word ptr [edi+eax*2+2]
0x95A534: movzx   ecx, word ptr [edi+eax*2]
0x95A538: mov     [esp+2E8h+var_2D4], edx
0x95A53C: mov     [esp+2E8h+var_2D0], ecx
0x95A540: jmp     short loc_95A553
0x95A542: movzx   edx, word ptr [edi+eax*2]
0x95A546: movzx   ecx, word ptr [edi+eax*2+2]
0x95A54B: mov     [esp+2E8h+var_2D4], edx
0x95A54F: mov     [esp+2E8h+var_2D0], ecx
0x95A553: cmp     dx, cx
0x95A556: movzx   ebx, word ptr [edi+eax*2+4]
0x95A55B: mov     [esp+2E8h+var_2CC], ebx
0x95A55F: jz      loc_95B1FB
0x95A565: cmp     cx, bx
0x95A568: jz      loc_95B1FB
0x95A56E: test    ebp, ebp
0x95A570: movzx   edi, dx
0x95A573: movzx   ebx, bx
0x95A576: jnz     short loc_95A5D9
0x95A578: mov     eax, esi
0x95A57A: imul    eax, edi
0x95A57D: add     eax, [esp+2E8h+var_230]
0x95A584: movzx   ebp, cx
0x95A587: mov     edx, [eax]
0x95A589: mov     ecx, [esp+2E8h+var_230]
0x95A590: mov     [esp+2E8h+var_23C], edx
0x95A597: mov     edx, [eax+4]
0x95A59A: mov     [esp+2E8h+var_238], edx
0x95A5A1: mov     eax, [eax+8]
0x95A5A4: mov     [esp+2E8h+var_234], eax
0x95A5AB: mov     eax, esi
0x95A5AD: imul    eax, ebp
0x95A5B0: mov     edx, [eax+ecx]
0x95A5B3: add     eax, ecx
0x95A5B5: mov     [esp+2E8h+var_254], edx
0x95A5BC: mov     edx, [eax+4]
0x95A5BF: mov     [esp+2E8h+var_250], edx
0x95A5C6: mov     eax, [eax+8]
0x95A5C9: mov     [esp+2E8h+var_24C], eax
0x95A5D0: mov     eax, ebx
0x95A5D2: imul    eax, esi
0x95A5D5: add     eax, ecx
0x95A5D7: jmp     short loc_95A62E
0x95A5D9: lea     edx, [edi+edi*2]
0x95A5DC: lea     eax, [ebp+edx*4+0]
0x95A5E0: mov     edx, [eax]
0x95A5E2: mov     [esp+2E8h+var_23C], edx
0x95A5E9: mov     edx, [eax+4]
0x95A5EC: mov     [esp+2E8h+var_238], edx
0x95A5F3: mov     eax, [eax+8]
0x95A5F6: movzx   ebp, cx
0x95A5F9: mov     ecx, [esp+2E8h+var_2C0]
0x95A5FD: mov     [esp+2E8h+var_234], eax
0x95A604: lea     edx, [ebp+ebp*2+0]
0x95A608: lea     eax, [ecx+edx*4]
0x95A60B: mov     edx, [eax]
0x95A60D: mov     [esp+2E8h+var_254], edx
0x95A614: mov     edx, [eax+4]
0x95A617: mov     [esp+2E8h+var_250], edx
0x95A61E: mov     eax, [eax+8]
0x95A621: lea     edx, [ebx+ebx*2]
0x95A624: mov     [esp+2E8h+var_24C], eax
0x95A62B: lea     eax, [ecx+edx*4]
0x95A62E: mov     ecx, [eax]
0x95A630: mov     [esp+2E8h+var_248], ecx
0x95A637: mov     edx, [eax+4]
0x95A63A: mov     ecx, [esp+2E8h+arg_8]
0x95A641: mov     [esp+2E8h+var_244], edx
0x95A648: mov     eax, [eax+8]
0x95A64B: mov     dl, [ecx+10h]
0x95A64E: mov     [esp+2E8h+var_240], eax
0x95A655: mov     byte ptr [esp+2E8h+var_1C4], dl
0x95A65C: lea     eax, [esp+2E8h+var_2C8]
0x95A660: push    eax
0x95A661: lea     ecx, [esp+2ECh+var_2C4]
0x95A665: push    ecx
0x95A666: mov     ecx, [esp+2F0h+var_1C4]
0x95A66D: lea     edx, [esp+2F0h+var_160]
0x95A674: push    edx
0x95A675: lea     eax, [esp+2F4h+var_224]
0x95A67C: push    eax
0x95A67D: push    ecx
0x95A67E: lea     edx, [esp+2FCh+var_248]
0x95A685: push    edx
0x95A686: lea     eax, [esp+300h+var_254]
0x95A68D: push    eax
0x95A68E: lea     ecx, [esp+304h+var_23C]
0x95A695: push    ecx
0x95A696: lea     edx, [esp+308h+var_100]
0x95A69D: push    edx
0x95A69E: lea     eax, [esp+30Ch+var_F4]
0x95A6A5: push    eax
0x95A6A6: call    sub_96E5E0
0x95A6AB: add     esp, 28h
0x95A6AE: test    al, al
0x95A6B0: jz      loc_95B1E9
0x95A6B6: push    44h ; 'D'; Size
0x95A6B8: mov     [esp+2ECh+var_2D5], 1
0x95A6BD: call    FormHeapAlloc
0x95A6C2: add     esp, 4
0x95A6C5: test    eax, eax
0x95A6C7: jz      short loc_95A6DC
0x95A6C9: mov     ecx, [esp+2E8h+arg_C]
0x95A6D0: push    ecx
0x95A6D1: mov     ecx, eax
0x95A6D3: call    sub_95A2D0
0x95A6D8: mov     esi, eax
0x95A6DA: jmp     short loc_95A6DE
0x95A6DC: xor     esi, esi
0x95A6DE: mov     edx, [esp+2E8h+arg_8]
0x95A6E5: cmp     dword ptr [edx+0Ch], 1
0x95A6E9: jnz     loc_95A7AA
0x95A6EF: lea     eax, [esp+2E8h+var_224]
0x95A6F6: push    eax
0x95A6F7: lea     ecx, [esp+2ECh+var_B0]
0x95A6FE: push    ecx
0x95A6FF: mov     ecx, [esp+2F0h+arg_C]
0x95A706: add     ecx, 64h ; 'd'
0x95A709: call    sub_7101F0
0x95A70E: mov     ecx, [esp+2E8h+arg_C]
0x95A715: fld     dword ptr [ecx+94h]
0x95A71B: add     ecx, 64h ; 'd'
0x95A71E: fstp    [esp+2E8h+var_134]
0x95A725: fld     [esp+2E8h+var_134]
0x95A72C: fld     st
0x95A72E: fmul    dword ptr [eax]
0x95A730: fstp    [esp+2E8h+var_1E8]
0x95A737: fld     dword ptr [eax+4]
0x95A73A: fmul    st, st(1)
0x95A73C: fstp    [esp+2E8h+var_1E4]
0x95A743: fmul    dword ptr [eax+8]
0x95A746: fstp    [esp+2E8h+var_1E0]
0x95A74D: fld     [esp+2E8h+var_1E8]
0x95A754: fadd    dword ptr [ecx+24h]
0x95A757: fstp    [esp+2E8h+var_1B4]
0x95A75E: mov     edx, [esp+2E8h+var_1B4]
0x95A765: fld     dword ptr [ecx+28h]
0x95A768: mov     [esp+2E8h+var_224], edx
0x95A76F: fadd    [esp+2E8h+var_1E4]
0x95A776: fstp    [esp+2E8h+var_1B0]
0x95A77D: mov     eax, [esp+2E8h+var_1B0]
0x95A784: fld     dword ptr [ecx+2Ch]
0x95A787: mov     [esp+2E8h+var_220], eax
0x95A78E: fadd    [esp+2E8h+var_1E0]
0x95A795: fstp    [esp+2E8h+var_1AC]
0x95A79C: mov     ecx, [esp+2E8h+var_1AC]
0x95A7A3: mov     [esp+2E8h+var_21C], ecx
0x95A7AA: mov     edx, [esp+2E8h+var_224]
0x95A7B1: mov     [esi+8], edx
0x95A7B4: mov     eax, [esp+2E8h+var_220]
0x95A7BB: movzx   edx, word ptr [esp+2E8h+var_2A8]
0x95A7C0: mov     [esi+0Ch], eax
0x95A7C3: mov     ecx, [esp+2E8h+var_21C]
0x95A7CA: mov     ax, word ptr [esp+2E8h+var_2D4]
0x95A7CF: mov     [esi+10h], ecx
0x95A7D2: mov     cx, word ptr [esp+2E8h+var_2D0]
0x95A7D7: fld     [esp+2E8h+var_160]
0x95A7DE: mov     [esi+18h], dx
0x95A7E2: movzx   edx, word ptr [esp+2E8h+var_2CC]
0x95A7E7: fstp    dword ptr [esi+14h]
0x95A7EA: mov     [esi+1Ah], ax
0x95A7EE: mov     eax, [esp+2E8h+arg_8]
0x95A7F5: mov     [esi+1Ch], cx
0x95A7F9: mov     [esi+1Eh], dx
0x95A7FD: cmp     byte ptr [eax+2Ch], 0
0x95A801: fld     [esp+2E8h+var_2C4]
0x95A805: fadd    [esp+2E8h+var_2C8]
0x95A809: fld1
0x95A80B: fsubrp  st(1), st
0x95A80D: fstp    [esp+2E8h+var_2D4]
0x95A811: jz      loc_95AA87
0x95A817: xor     eax, eax
0x95A819: lea     ecx, [esp+2E8h+var_1F4]
0x95A820: push    ecx
0x95A821: mov     ecx, [esp+2ECh+var_2B8]
0x95A825: push    eax
0x95A826: mov     [esp+2F0h+var_1F4], eax
0x95A82D: mov     [esp+2F0h+var_1F0], eax
0x95A834: mov     [esp+2F0h+var_1EC], al
0x95A83B: call    sub_728E70
0x95A840: mov     edx, [esp+2E8h+var_1F4]
0x95A847: test    edx, edx
0x95A849: jz      loc_95A960
0x95A84F: mov     ecx, [esp+2E8h+var_1F0]
0x95A856: mov     eax, ecx
0x95A858: imul    ecx, ebp
0x95A85B: add     ecx, edx
0x95A85D: imul    eax, edi
0x95A860: mov     [esp+2E8h+var_2CC], ecx
0x95A864: mov     ecx, [esp+2E8h+var_1F0]
0x95A86B: imul    ecx, ebx
0x95A86E: add     eax, edx
0x95A870: add     ecx, edx
0x95A872: mov     edx, [ecx]
0x95A874: mov     ecx, [ecx+4]
0x95A877: mov     [esp+2E8h+var_294], edx
0x95A87B: mov     [esp+2E8h+var_290], ecx
0x95A87F: fld     [esp+2E8h+var_294]
0x95A883: mov     ecx, [esp+2E8h+var_2CC]
0x95A887: fld     [esp+2E8h+var_2C8]
0x95A88B: mov     edx, [ecx]
0x95A88D: fld     st
0x95A88F: mov     ecx, [ecx+4]
0x95A892: fmulp   st(2), st
0x95A894: mov     [esp+2E8h+var_274], edx
0x95A898: mov     edx, [eax]
0x95A89A: fxch    st(1)
0x95A89C: mov     eax, [eax+4]
0x95A89F: fstp    [esp+2E8h+var_294]
0x95A8A3: mov     [esp+2E8h+var_270], ecx
0x95A8A7: mov     [esp+2E8h+var_29C], edx
0x95A8AB: fmul    [esp+2E8h+var_290]
0x95A8AF: mov     [esp+2E8h+var_298], eax
0x95A8B3: fstp    [esp+2E8h+var_290]
0x95A8B7: fld     [esp+2E8h+var_274]
0x95A8BB: fld     [esp+2E8h+var_2C4]
0x95A8BF: fld     st
0x95A8C1: fmulp   st(2), st
0x95A8C3: fxch    st(1)
0x95A8C5: fstp    [esp+2E8h+var_274]
0x95A8C9: fmul    [esp+2E8h+var_270]
0x95A8CD: fstp    [esp+2E8h+var_270]
0x95A8D1: fld     [esp+2E8h+var_29C]
0x95A8D5: fld     [esp+2E8h+var_2D4]
0x95A8D9: fld     st
0x95A8DB: fmulp   st(2), st
0x95A8DD: fxch    st(1)
0x95A8DF: fstp    [esp+2E8h+var_29C]
0x95A8E3: mov     ecx, [esp+2E8h+var_29C]
0x95A8E7: mov     [esp+2E8h+var_284], ecx
0x95A8EB: fmul    [esp+2E8h+var_298]
0x95A8EF: fstp    [esp+2E8h+var_298]
0x95A8F3: mov     edx, [esp+2E8h+var_298]
0x95A8F7: fld     [esp+2E8h+var_29C]
0x95A8FB: mov     [esp+2E8h+var_280], edx
0x95A8FF: fadd    [esp+2E8h+var_274]
0x95A903: fstp    [esp+2E8h+var_284]
0x95A907: mov     eax, [esp+2E8h+var_284]
0x95A90B: fld     [esp+2E8h+var_280]
0x95A90F: mov     [esp+2E8h+var_264], eax
0x95A916: fadd    [esp+2E8h+var_270]
0x95A91A: fstp    [esp+2E8h+var_280]
0x95A91E: mov     ecx, [esp+2E8h+var_280]
0x95A922: fld     [esp+2E8h+var_284]
0x95A926: mov     [esp+2E8h+var_260], ecx
0x95A92D: fadd    [esp+2E8h+var_294]
0x95A931: fstp    [esp+2E8h+var_264]
0x95A938: mov     edx, [esp+2E8h+var_264]
0x95A93F: fld     [esp+2E8h+var_260]
0x95A946: mov     [esi+20h], edx
0x95A949: fadd    [esp+2E8h+var_290]
0x95A94D: fstp    [esp+2E8h+var_260]
0x95A954: mov     eax, [esp+2E8h+var_260]
0x95A95B: jmp     loc_95AA95
0x95A960: mov     ecx, [esp+2E8h+arg_C]
0x95A967: mov     edx, [ecx+0B4h]
0x95A96D: mov     eax, [edx+28h]
0x95A970: test    eax, eax
0x95A972: jz      loc_95AA74
0x95A978: mov     ecx, [eax+ebx*8]
0x95A97B: mov     edx, [eax+ebx*8+4]
0x95A97F: mov     [esp+2E8h+var_28C], ecx
0x95A983: fld     [esp+2E8h+var_28C]
0x95A987: fld     [esp+2E8h+var_2C8]
0x95A98B: mov     ecx, [eax+ebp*8]
0x95A98E: fld     st
0x95A990: mov     [esp+2E8h+var_288], edx
0x95A994: fmulp   st(2), st
0x95A996: mov     edx, [eax+ebp*8+4]
0x95A99A: fxch    st(1)
0x95A99C: mov     [esp+2E8h+var_27C], ecx
0x95A9A0: mov     ecx, [eax+edi*8]
0x95A9A3: fstp    [esp+2E8h+var_28C]
0x95A9A7: mov     [esp+2E8h+var_278], edx
0x95A9AB: mov     edx, [eax+edi*8+4]
0x95A9AF: fmul    [esp+2E8h+var_288]
0x95A9B3: mov     [esp+2E8h+var_2A4], ecx
0x95A9B7: mov     [esp+2E8h+var_2A0], edx
0x95A9BB: fstp    [esp+2E8h+var_288]
0x95A9BF: fld     [esp+2E8h+var_27C]
0x95A9C3: fld     [esp+2E8h+var_2C4]
0x95A9C7: fld     st
0x95A9C9: fmulp   st(2), st
0x95A9CB: fxch    st(1)
0x95A9CD: fstp    [esp+2E8h+var_27C]
0x95A9D1: fmul    [esp+2E8h+var_278]
0x95A9D5: fstp    [esp+2E8h+var_278]
0x95A9D9: fld     [esp+2E8h+var_2A4]
0x95A9DD: fld     [esp+2E8h+var_2D4]
0x95A9E1: fld     st
0x95A9E3: fmulp   st(2), st
0x95A9E5: fxch    st(1)
0x95A9E7: fstp    [esp+2E8h+var_2A4]
0x95A9EB: mov     eax, [esp+2E8h+var_2A4]
0x95A9EF: mov     [esp+2E8h+var_26C], eax
0x95A9F3: fmul    [esp+2E8h+var_2A0]
0x95A9F7: fstp    [esp+2E8h+var_2A0]
0x95A9FB: mov     ecx, [esp+2E8h+var_2A0]
0x95A9FF: fld     [esp+2E8h+var_2A4]
0x95AA03: mov     [esp+2E8h+var_268], ecx
0x95AA0A: fadd    [esp+2E8h+var_27C]
0x95AA0E: fstp    [esp+2E8h+var_26C]
0x95AA12: mov     edx, [esp+2E8h+var_26C]
0x95AA16: fld     [esp+2E8h+var_268]
0x95AA1D: mov     [esp+2E8h+var_25C], edx
0x95AA24: fadd    [esp+2E8h+var_278]
0x95AA28: fstp    [esp+2E8h+var_268]
0x95AA2F: mov     eax, [esp+2E8h+var_268]
0x95AA36: fld     [esp+2E8h+var_26C]
0x95AA3A: mov     [esp+2E8h+var_258], eax
0x95AA41: fadd    [esp+2E8h+var_28C]
0x95AA45: fstp    [esp+2E8h+var_25C]
0x95AA4C: mov     ecx, [esp+2E8h+var_25C]
0x95AA53: fld     [esp+2E8h+var_258]
0x95AA5A: mov     [esi+20h], ecx
0x95AA5D: fadd    [esp+2E8h+var_288]
0x95AA61: fstp    [esp+2E8h+var_258]
0x95AA68: mov     edx, [esp+2E8h+var_258]
0x95AA6F: mov     [esi+24h], edx
0x95AA72: jmp     short loc_95AA98
0x95AA74: mov     eax, ds:0B3FC80h
0x95AA79: mov     [esi+20h], eax
0x95AA7C: mov     ecx, ds:0B3FC84h
0x95AA82: mov     [esi+24h], ecx
0x95AA85: jmp     short loc_95AA98
0x95AA87: mov     edx, ds:0B3FC80h
0x95AA8D: mov     [esi+20h], edx
0x95AA90: mov     eax, ds:0B3FC84h
0x95AA95: mov     [esi+24h], eax
0x95AA98: mov     ecx, [esp+2E8h+arg_8]
0x95AA9F: cmp     byte ptr [ecx+2Dh], 0
0x95AAA3: jz      loc_95AF0C
0x95AAA9: mov     ecx, [esp+2E8h+var_2B8]
0x95AAAD: xor     eax, eax
0x95AAAF: lea     edx, [esp+2E8h+var_200]
0x95AAB6: push    edx
0x95AAB7: mov     [esp+2ECh+var_200], eax
0x95AABE: mov     [esp+2ECh+var_1FC], eax
0x95AAC5: mov     [esp+2ECh+var_1F8], al
0x95AACC: call    sub_728D00
0x95AAD1: mov     edx, [esp+2E8h+var_200]
0x95AAD8: test    edx, edx
0x95AADA: jz      loc_95ACA1
0x95AAE0: mov     ecx, [esp+2E8h+var_1FC]
0x95AAE7: mov     eax, ecx
0x95AAE9: imul    eax, edi
0x95AAEC: add     eax, edx
0x95AAEE: mov     edx, [eax]
0x95AAF0: mov     [esp+2E8h+var_158], edx
0x95AAF7: mov     edx, [eax+4]
0x95AAFA: mov     eax, [eax+8]
0x95AAFD: mov     [esp+2E8h+var_150], eax
0x95AB04: mov     eax, ecx
0x95AB06: imul    ecx, ebx
0x95AB09: imul    eax, ebp
0x95AB0C: add     eax, [esp+2E8h+var_200]
0x95AB13: add     ecx, [esp+2E8h+var_200]
0x95AB1A: mov     [esp+2E8h+var_154], edx
0x95AB21: mov     edx, [eax]
0x95AB23: mov     [esp+2E8h+var_19C], edx
0x95AB2A: mov     edx, [eax+4]
0x95AB2D: mov     eax, [eax+8]
0x95AB30: mov     [esp+2E8h+var_198], edx
0x95AB37: mov     edx, [ecx]
0x95AB39: mov     [esp+2E8h+var_140], edx
0x95AB40: mov     [esp+2E8h+var_194], eax
0x95AB47: fld     [esp+2E8h+var_140]
0x95AB4E: mov     eax, [ecx+4]
0x95AB51: fld     [esp+2E8h+var_2C8]
0x95AB55: mov     ecx, [ecx+8]
0x95AB58: fld     st
0x95AB5A: mov     [esp+2E8h+var_13C], eax
0x95AB61: fmulp   st(2), st
0x95AB63: mov     [esp+2E8h+var_138], ecx
0x95AB6A: fxch    st(1)
0x95AB6C: fstp    [esp+2E8h+var_1D0]
0x95AB73: fld     [esp+2E8h+var_13C]
0x95AB7A: fmul    st, st(1)
0x95AB7C: fstp    [esp+2E8h+var_1CC]
0x95AB83: fmul    [esp+2E8h+var_138]
0x95AB8A: fstp    [esp+2E8h+var_1C8]
0x95AB91: fld     [esp+2E8h+var_19C]
0x95AB98: fld     [esp+2E8h+var_2C4]
0x95AB9C: fld     st
0x95AB9E: fmulp   st(2), st
0x95ABA0: fxch    st(1)
0x95ABA2: fstp    [esp+2E8h+var_16C]
0x95ABA9: fld     [esp+2E8h+var_198]
0x95ABB0: fmul    st, st(1)
0x95ABB2: fstp    [esp+2E8h+var_168]
0x95ABB9: fmul    [esp+2E8h+var_194]
0x95ABC0: fstp    [esp+2E8h+var_164]
0x95ABC7: fld     [esp+2E8h+var_158]
0x95ABCE: fld     [esp+2E8h+var_2D4]
0x95ABD2: fld     st
0x95ABD4: fmulp   st(2), st
0x95ABD6: fxch    st(1)
0x95ABD8: fstp    [esp+2E8h+var_184]
0x95ABDF: fld     [esp+2E8h+var_154]
0x95ABE6: fmul    st, st(1)
0x95ABE8: fstp    [esp+2E8h+var_180]
0x95ABEF: fmul    [esp+2E8h+var_150]
0x95ABF6: fstp    [esp+2E8h+var_17C]
0x95ABFD: fld     [esp+2E8h+var_184]
0x95AC04: fadd    [esp+2E8h+var_16C]
0x95AC0B: fstp    [esp+2E8h+var_1DC]
0x95AC12: fld     [esp+2E8h+var_180]
0x95AC19: fadd    [esp+2E8h+var_168]
0x95AC20: fstp    [esp+2E8h+var_1D8]
0x95AC27: fld     [esp+2E8h+var_17C]
0x95AC2E: fadd    [esp+2E8h+var_164]
0x95AC35: fstp    [esp+2E8h+var_1D4]
0x95AC3C: fld     [esp+2E8h+var_1DC]
0x95AC43: fadd    [esp+2E8h+var_1D0]
0x95AC4A: fstp    [esp+2E8h+var_1C0]
0x95AC51: mov     edx, [esp+2E8h+var_1C0]
0x95AC58: fld     [esp+2E8h+var_1D8]
0x95AC5F: mov     [esp+2E8h+var_2B4], edx
0x95AC63: fadd    [esp+2E8h+var_1CC]
0x95AC6A: fstp    [esp+2E8h+var_1BC]
0x95AC71: mov     eax, [esp+2E8h+var_1BC]
0x95AC78: fld     [esp+2E8h+var_1D4]
0x95AC7F: fadd    [esp+2E8h+var_1C8]
0x95AC86: fstp    [esp+2E8h+var_1B8]
0x95AC8D: mov     ecx, [esp+2E8h+var_1B8]
0x95AC94: mov     [esp+2E8h+var_2B0], eax
0x95AC98: mov     [esp+2E8h+var_2AC], ecx
0x95AC9C: jmp     loc_95AEB0
0x95ACA1: mov     edx, [esp+2E8h+arg_8]
0x95ACA8: cmp     byte ptr [edx+2Eh], 0
0x95ACAC: jz      loc_95ADAD
0x95ACB2: mov     eax, [esp+2E8h+arg_C]
0x95ACB9: mov     ecx, [eax+0B4h]
0x95ACBF: mov     eax, [ecx+20h]
0x95ACC2: test    eax, eax
0x95ACC4: mov     [esp+2E8h+var_2D0], eax
0x95ACC8: jz      loc_95ADAD
0x95ACCE: fld     [esp+2E8h+var_2C4]
0x95ACD2: lea     edx, [ebp+ebp*2+0]
0x95ACD6: lea     eax, [eax+edx*4]
0x95ACD9: push    eax; int
0x95ACDA: push    ecx
0x95ACDB: lea     ecx, [esp+2F0h+var_8C]
0x95ACE2: fstp    [esp+2F0h+var_2F0]; float
0x95ACE5: push    ecx; int
0x95ACE6: call    sub_47DA10
0x95ACEB: fld     [esp+2F4h+var_2D4]
0x95ACEF: mov     [esp+2F4h+var_2CC], eax
0x95ACF3: mov     eax, [esp+2F4h+var_2D0]
0x95ACF7: lea     edx, [edi+edi*2]
0x95ACFA: lea     ecx, [eax+edx*4]
0x95ACFD: add     esp, 0Ch
0x95AD00: push    ecx; int
0x95AD01: push    ecx
0x95AD02: lea     edx, [esp+2F0h+var_A4]
0x95AD09: fstp    [esp+2F0h+var_2F0]; float
0x95AD0C: push    edx; int
0x95AD0D: call    sub_47DA10
0x95AD12: fld     dword ptr [eax]
0x95AD14: mov     ecx, [esp+2F4h+var_2CC]
0x95AD18: fadd    dword ptr [ecx]
0x95AD1A: add     esp, 0Ch
0x95AD1D: fstp    [esp+2E8h+var_1A8]
0x95AD24: fld     dword ptr [ecx+4]
0x95AD27: fadd    dword ptr [eax+4]
0x95AD2A: fstp    [esp+2E8h+var_1A4]
0x95AD31: fld     dword ptr [ecx+8]
0x95AD34: mov     ecx, [esp+2E8h+var_2D0]
0x95AD38: fadd    dword ptr [eax+8]
0x95AD3B: lea     eax, [ebx+ebx*2]
0x95AD3E: lea     edx, [ecx+eax*4]
0x95AD41: push    edx; int
0x95AD42: fstp    [esp+2ECh+var_1A0]
0x95AD49: push    ecx
0x95AD4A: fld     [esp+2F0h+var_2C8]
0x95AD4E: lea     eax, [esp+2F0h+var_BC]
0x95AD55: fstp    [esp+2F0h+var_2F0]; float
0x95AD58: push    eax; int
0x95AD59: call    sub_47DA10
0x95AD5E: fld     [esp+2F4h+var_1A8]
0x95AD65: fadd    dword ptr [eax]
0x95AD67: add     esp, 0Ch
0x95AD6A: fstp    [esp+2E8h+var_190]
0x95AD71: mov     ecx, [esp+2E8h+var_190]
0x95AD78: fld     dword ptr [eax+4]
0x95AD7B: fadd    [esp+2E8h+var_1A4]
0x95AD82: fstp    [esp+2E8h+var_18C]
0x95AD89: mov     edx, [esp+2E8h+var_18C]
0x95AD90: fld     dword ptr [eax+8]
0x95AD93: fadd    [esp+2E8h+var_1A0]
0x95AD9A: fstp    [esp+2E8h+var_188]
0x95ADA1: mov     eax, [esp+2E8h+var_188]
0x95ADA8: jmp     loc_95AEA4
0x95ADAD: fld     [esp+2E8h+var_254]
0x95ADB4: fld     [esp+2E8h+var_23C]
0x95ADBB: fld     st
0x95ADBD: fsubp   st(2), st
0x95ADBF: fxch    st(1)
0x95ADC1: fstp    [esp+2E8h+var_14C]
0x95ADC8: fld     [esp+2E8h+var_250]
0x95ADCF: fld     [esp+2E8h+var_238]
0x95ADD6: fld     st
0x95ADD8: fsubp   st(2), st
0x95ADDA: fxch    st(1)
0x95ADDC: fstp    [esp+2E8h+var_148]
0x95ADE3: fld     [esp+2E8h+var_24C]
0x95ADEA: fld     [esp+2E8h+var_234]
0x95ADF1: fld     st
0x95ADF3: fsubp   st(2), st
0x95ADF5: fxch    st(1)
0x95ADF7: fstp    [esp+2E8h+var_144]
0x95ADFE: fld     [esp+2E8h+var_248]
0x95AE05: fsubrp  st(3), st
0x95AE07: fxch    st(2)
0x95AE09: fstp    [esp+2E8h+var_178]
0x95AE10: fsubr   [esp+2E8h+var_244]
0x95AE17: fstp    [esp+2E8h+var_174]
0x95AE1E: fsubr   [esp+2E8h+var_240]
0x95AE25: fstp    [esp+2E8h+var_170]
0x95AE2C: fld     [esp+2E8h+var_170]
0x95AE33: fld     st
0x95AE35: fld     [esp+2E8h+var_148]
0x95AE3C: fld     st
0x95AE3E: fmulp   st(2), st
0x95AE40: fld     [esp+2E8h+var_174]
0x95AE47: fld     st
0x95AE49: fld     [esp+2E8h+var_144]
0x95AE50: fld     st
0x95AE52: fmulp   st(2), st
0x95AE54: fxch    st(4)
0x95AE56: fsubrp  st(1), st
0x95AE58: fstp    [esp+2E8h+var_20C]
0x95AE5F: mov     ecx, [esp+2E8h+var_20C]
0x95AE66: fld     [esp+2E8h+var_178]
0x95AE6D: fld     st
0x95AE6F: fmulp   st(4), st
0x95AE71: fld     [esp+2E8h+var_14C]
0x95AE78: fld     st
0x95AE7A: fmulp   st(6), st
0x95AE7C: fxch    st(4)
0x95AE7E: fsubrp  st(5), st
0x95AE80: fxch    st(4)
0x95AE82: fstp    [esp+2E8h+var_208]
0x95AE89: mov     edx, [esp+2E8h+var_208]
0x95AE90: fmulp   st(2), st
0x95AE92: fmulp   st(2), st
0x95AE94: fsubrp  st(1), st
0x95AE96: fstp    [esp+2E8h+var_204]
0x95AE9D: mov     eax, [esp+2E8h+var_204]
0x95AEA4: mov     [esp+2E8h+var_2AC], eax
0x95AEA8: mov     [esp+2E8h+var_2B0], edx
0x95AEAC: mov     [esp+2E8h+var_2B4], ecx
0x95AEB0: lea     ecx, [esp+2E8h+var_2B4]
0x95AEB4: call    sub_43F350
0x95AEB9: fstp    st
0x95AEBB: mov     ecx, [esp+2E8h+arg_8]
0x95AEC2: cmp     dword ptr [ecx+0Ch], 1
0x95AEC6: jnz     short loc_95AEF8
0x95AEC8: mov     ecx, [esp+2E8h+arg_C]
0x95AECF: lea     edx, [esp+2E8h+var_2B4]
0x95AED3: push    edx
0x95AED4: lea     eax, [esp+2ECh+var_98]
0x95AEDB: push    eax
0x95AEDC: add     ecx, 64h ; 'd'
0x95AEDF: call    sub_7101F0
0x95AEE4: mov     ecx, [eax]
0x95AEE6: mov     [esp+2E8h+var_2B4], ecx
0x95AEEA: mov     edx, [eax+4]
0x95AEED: mov     [esp+2E8h+var_2B0], edx
0x95AEF1: mov     eax, [eax+8]
0x95AEF4: mov     [esp+2E8h+var_2AC], eax
0x95AEF8: mov     ecx, [esp+2E8h+var_2B4]
0x95AEFC: mov     edx, [esp+2E8h+var_2B0]
0x95AF00: mov     eax, [esp+2E8h+var_2AC]
0x95AF04: mov     [esi+28h], ecx
0x95AF07: mov     [esi+2Ch], edx
0x95AF0A: jmp     short loc_95AF23
0x95AF0C: mov     ecx, ds:0B3F9A8h
0x95AF12: mov     [esi+28h], ecx
0x95AF15: mov     edx, ds:0B3F9ACh
0x95AF1B: mov     [esi+2Ch], edx
0x95AF1E: mov     eax, ds:0B3F9B0h
0x95AF23: mov     ecx, [esp+2E8h+arg_8]
0x95AF2A: mov     [esi+30h], eax
0x95AF2D: cmp     byte ptr [ecx+2Fh], 0
0x95AF31: jz      loc_95B198
0x95AF37: mov     ecx, [esp+2E8h+var_2B8]
0x95AF3B: xor     eax, eax
0x95AF3D: lea     edx, [esp+2E8h+var_218]
0x95AF44: push    edx
0x95AF45: mov     [esp+2ECh+var_218], eax
0x95AF4C: mov     [esp+2ECh+var_214], eax
0x95AF53: mov     [esp+2ECh+var_210], al
0x95AF5A: call    sub_728DB0
0x95AF5F: cmp     [esp+2E8h+var_218], 0
0x95AF67: jz      loc_95B0AF
0x95AF6D: fldz
0x95AF6F: lea     eax, [esp+2E8h+var_130]
0x95AF76: fst     [esp+2E8h+var_130]
0x95AF7D: push    eax
0x95AF7E: fst     [esp+2ECh+var_12C]
0x95AF85: push    edi
0x95AF86: fst     [esp+2F0h+var_128]
0x95AF8D: lea     ecx, [esp+2F0h+var_218]
0x95AF94: fst     [esp+2F0h+var_124]
0x95AF9B: fst     [esp+2F0h+var_110]
0x95AFA2: fst     [esp+2F0h+var_10C]
0x95AFA9: fst     [esp+2F0h+var_108]
0x95AFB0: fst     [esp+2F0h+var_104]
0x95AFB7: fst     [esp+2F0h+var_120]
0x95AFBE: fst     [esp+2F0h+var_11C]
0x95AFC5: fst     [esp+2F0h+var_118]
0x95AFCC: fstp    [esp+2F0h+var_114]
0x95AFD3: call    sub_4C1440
0x95AFD8: lea     ecx, [esp+2E8h+var_110]
0x95AFDF: push    ecx
0x95AFE0: push    ebp
0x95AFE1: lea     ecx, [esp+2F0h+var_218]
0x95AFE8: call    sub_4C1440
0x95AFED: lea     edx, [esp+2E8h+var_120]
0x95AFF4: push    edx
0x95AFF5: push    ebx
0x95AFF6: lea     ecx, [esp+2F0h+var_218]
0x95AFFD: call    sub_4C1440
0x95B002: fld     [esp+2E8h+var_2C8]
0x95B006: lea     eax, [esp+2E8h+var_120]
0x95B00D: push    eax; int
0x95B00E: push    ecx
0x95B00F: lea     ecx, [esp+2F0h+var_80]
0x95B016: fstp    [esp+2F0h+var_2F0]; float
0x95B019: push    ecx; int
0x95B01A: call    sub_4BFBD0
0x95B01F: fld     [esp+2F4h+var_2C4]
0x95B023: add     esp, 0Ch
0x95B026: push    eax
0x95B027: lea     edx, [esp+2ECh+var_CC]
0x95B02E: push    edx
0x95B02F: lea     eax, [esp+2F0h+var_110]
0x95B036: push    eax; int
0x95B037: push    ecx
0x95B038: lea     ecx, [esp+2F8h+var_60]
0x95B03F: fstp    [esp+2F8h+var_2F8]; float
0x95B042: push    ecx; int
0x95B043: call    sub_4BFBD0
0x95B048: fld     [esp+2FCh+var_2D4]
0x95B04C: add     esp, 0Ch
0x95B04F: push    eax
0x95B050: lea     edx, [esp+2F4h+var_20]
0x95B057: push    edx
0x95B058: lea     eax, [esp+2F8h+var_130]
0x95B05F: push    eax; int
0x95B060: push    ecx
0x95B061: lea     ecx, [esp+300h+var_40]
0x95B068: fstp    [esp+300h+var_300]; float
0x95B06B: push    ecx; int
0x95B06C: call    sub_4BFBD0
0x95B071: add     esp, 0Ch
0x95B074: mov     ecx, eax
0x95B076: call    sub_4BFB30
0x95B07B: mov     ecx, eax
0x95B07D: call    sub_4BFB30
0x95B082: mov     edx, [esp+2E8h+var_CC]
0x95B089: mov     eax, [esp+2E8h+var_C8]
0x95B090: mov     ecx, [esp+2E8h+var_C4]
0x95B097: mov     [esi+34h], edx
0x95B09A: mov     edx, [esp+2E8h+var_C0]
0x95B0A1: mov     [esi+38h], eax
0x95B0A4: mov     [esi+3Ch], ecx
0x95B0A7: mov     [esi+40h], edx
0x95B0AA: jmp     loc_95B1BA
0x95B0AF: mov     eax, [esp+2E8h+arg_C]
0x95B0B6: mov     ecx, [eax+0B4h]
0x95B0BC: mov     eax, [ecx+24h]
0x95B0BF: test    eax, eax
0x95B0C1: mov     [esp+2E8h+var_2CC], eax
0x95B0C5: jz      loc_95B173
0x95B0CB: fld     [esp+2E8h+var_2C8]
0x95B0CF: shl     ebx, 4
0x95B0D2: add     ebx, eax
0x95B0D4: push    ebx; int
0x95B0D5: push    ecx
0x95B0D6: lea     edx, [esp+2F0h+var_70]
0x95B0DD: fstp    [esp+2F0h+var_2F0]; float
0x95B0E0: push    edx; int
0x95B0E1: call    sub_4BFBD0
0x95B0E6: fld     [esp+2F4h+var_2C4]
0x95B0EA: mov     ebx, [esp+2F4h+var_2CC]
0x95B0EE: add     esp, 0Ch
0x95B0F1: push    eax
0x95B0F2: lea     eax, [esp+2ECh+var_DC]
0x95B0F9: push    eax
0x95B0FA: shl     ebp, 4
0x95B0FD: add     ebp, ebx
0x95B0FF: push    ebp; int
0x95B100: push    ecx
0x95B101: lea     ecx, [esp+2F8h+var_50]
0x95B108: fstp    [esp+2F8h+var_2F8]; float
0x95B10B: push    ecx; int
0x95B10C: call    sub_4BFBD0
0x95B111: fld     [esp+2FCh+var_2D4]
0x95B115: add     esp, 0Ch
0x95B118: push    eax
0x95B119: lea     edx, [esp+2F4h+var_30]
0x95B120: push    edx
0x95B121: shl     edi, 4
0x95B124: add     edi, ebx
0x95B126: push    edi; int
0x95B127: push    ecx
0x95B128: lea     eax, [esp+300h+var_10]
0x95B12F: fstp    [esp+300h+var_300]; float
0x95B132: push    eax; int
0x95B133: call    sub_4BFBD0
0x95B138: add     esp, 0Ch
0x95B13B: mov     ecx, eax
0x95B13D: call    sub_4BFB30
0x95B142: mov     ecx, eax
0x95B144: call    sub_4BFB30
0x95B149: mov     ecx, [esp+2E8h+var_DC]
0x95B150: mov     edx, [esp+2E8h+var_D8]
0x95B157: mov     eax, [esp+2E8h+var_D4]
0x95B15E: mov     [esi+34h], ecx
0x95B161: mov     ecx, [esp+2E8h+var_D0]
0x95B168: mov     [esi+38h], edx
0x95B16B: mov     [esi+3Ch], eax
0x95B16E: mov     [esi+40h], ecx
0x95B171: jmp     short loc_95B1BA
0x95B173: mov     edx, ds:0B25AE0h
0x95B179: mov     [esi+34h], edx
0x95B17C: mov     eax, ds:0B25AE4h
0x95B181: mov     [esi+38h], eax
0x95B184: mov     ecx, ds:0B25AE8h
0x95B18A: mov     [esi+3Ch], ecx
0x95B18D: mov     edx, ds:0B25AECh
0x95B193: mov     [esi+40h], edx
0x95B196: jmp     short loc_95B1BA
0x95B198: mov     eax, ds:0B25AE0h
0x95B19D: mov     [esi+34h], eax
0x95B1A0: mov     ecx, ds:0B25AE4h
0x95B1A6: mov     [esi+38h], ecx
0x95B1A9: mov     edx, ds:0B25AE8h
0x95B1AF: mov     [esi+3Ch], edx
0x95B1B2: mov     eax, ds:0B25AECh
0x95B1B7: mov     [esi+40h], eax
0x95B1BA: mov     eax, [esp+2E8h+arg_8]
0x95B1C1: lea     ecx, [esp+2E8h+var_2CC]
0x95B1C5: push    ecx
0x95B1C6: lea     ecx, [eax+18h]
0x95B1C9: mov     [esp+2ECh+var_2CC], esi
0x95B1CD: mov     [eax+28h], esi
0x95B1D0: call    sub_4BACA0
0x95B1D5: mov     edx, [esp+2E8h+arg_8]
0x95B1DC: cmp     dword ptr [edx], 1
0x95B1DF: jnz     short loc_95B1E9
0x95B1E1: mov     eax, edx
0x95B1E3: cmp     dword ptr [eax+4], 1
0x95B1E7: jz      short loc_95B21A
0x95B1E9: mov     esi, [esp+2E8h+var_22C]
0x95B1F0: mov     ebp, [esp+2E8h+var_2C0]
0x95B1F4: mov     edi, [esp+2E8h+var_15C]
0x95B1FB: mov     eax, [esp+2E8h+var_2A8]
0x95B1FF: add     eax, 1
0x95B202: cmp     ax, word ptr [esp+2E8h+var_2BC]
0x95B207: mov     [esp+2E8h+var_2A8], eax
0x95B20B: jb      loc_95A524
0x95B211: mov     ebx, [esp+2E8h+var_2B8]
0x95B215: jmp     loc_95A507
0x95B21A: cmp     [esp+2E8h+var_2D6], 0
0x95B21F: jz      short loc_95B22A
0x95B221: mov     ecx, [esp+2E8h+var_2B8]
0x95B225: call    sub_728B20
0x95B22A: pop     edi
0x95B22B: pop     esi
0x95B22C: pop     ebp
0x95B22D: mov     al, 1
0x95B22F: pop     ebx
0x95B230: add     esp, 2D8h
0x95B236: retn
