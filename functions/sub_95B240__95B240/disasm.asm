0x95B240: sub     esp, 2D8h
0x95B246: mov     eax, [esp+2D8h+arg_0]
0x95B24D: fld     dword ptr [eax]
0x95B24F: push    ebx
0x95B250: push    ebp
0x95B251: push    esi
0x95B252: mov     esi, [esp+2E4h+arg_C]
0x95B259: fsub    dword ptr [esi+88h]
0x95B25F: push    edi
0x95B260: lea     edi, [esi+64h]
0x95B263: push    edi
0x95B264: fstp    [esp+2ECh+var_24]
0x95B26B: lea     ecx, [esp+2ECh+var_168]
0x95B272: fld     dword ptr [eax+4]
0x95B275: fsub    dword ptr [edi+28h]
0x95B278: fstp    [esp+2ECh+var_20]
0x95B27F: fld     dword ptr [eax+8]
0x95B282: lea     eax, [esp+2ECh+var_24]
0x95B289: fsub    dword ptr [edi+2Ch]
0x95B28C: push    eax
0x95B28D: push    ecx
0x95B28E: fstp    [esp+2F4h+var_1C]
0x95B295: fld     dword ptr [edi+30h]
0x95B298: fld1
0x95B29A: fdivrp  st(1), st
0x95B29C: fstp    [esp+2F4h+var_2D4]
0x95B2A0: call    sub_710250
0x95B2A5: fld     dword ptr [eax+4]
0x95B2A8: fld     [esp+2F4h+var_2D4]
0x95B2AC: mov     edx, [esp+2F4h+arg_4]
0x95B2B3: fld     st
0x95B2B5: push    edi
0x95B2B6: fmulp   st(2), st
0x95B2B8: push    edx
0x95B2B9: fxch    st(1)
0x95B2BB: fstp    [esp+2FCh+var_2C0]
0x95B2BF: fld     dword ptr [eax+8]
0x95B2C2: fmul    st, st(1)
0x95B2C4: fstp    [esp+2FCh+var_2CC]
0x95B2C8: fmul    dword ptr [eax]
0x95B2CA: lea     eax, [esp+2FCh+var_168]
0x95B2D1: push    eax
0x95B2D2: fstp    [esp+300h+var_30]
0x95B2D9: fld     [esp+300h+var_2C0]
0x95B2DD: fstp    [esp+300h+var_2C]
0x95B2E4: fld     [esp+300h+var_2CC]
0x95B2E8: fstp    [esp+300h+var_28]
0x95B2EF: call    sub_710250
0x95B2F4: fld     dword ptr [eax+4]
0x95B2F7: mov     ecx, [esi+0B4h]
0x95B2FD: fld     [esp+300h+var_2D4]
0x95B301: add     esp, 18h
0x95B304: fld     st
0x95B306: mov     [esp+2E8h+var_2D5], 0
0x95B30B: fmulp   st(2), st
0x95B30D: fxch    st(1)
0x95B30F: fstp    [esp+2E8h+var_2C0]
0x95B313: fld     dword ptr [eax+8]
0x95B316: fmul    st, st(1)
0x95B318: fstp    [esp+2E8h+var_2D4]
0x95B31C: fmul    dword ptr [eax]
0x95B31E: fstp    [esp+2E8h+var_3C]
0x95B325: fld     [esp+2E8h+var_2C0]
0x95B329: fstp    [esp+2E8h+var_38]
0x95B330: fld     [esp+2E8h+var_2D4]
0x95B334: fstp    [esp+2E8h+var_34]
0x95B33B: mov     edx, [ecx]
0x95B33D: mov     eax, [edx+5Ch]
0x95B340: call    eax
0x95B342: mov     edi, [esi+0B4h]
0x95B348: xor     ecx, ecx
0x95B34A: xor     edx, edx
0x95B34C: movzx   ebp, ax
0x95B34F: mov     [esp+2E8h+var_1BC], ecx
0x95B356: mov     [esp+2E8h+var_1B8], edx
0x95B35D: mov     [esp+2E8h+var_1B4], cl
0x95B364: mov     ebx, [edi+1Ch]
0x95B367: mov     [esp+2E8h+var_DC], ebp
0x95B36E: mov     [esp+2E8h+var_2D6], 0
0x95B373: mov     [esp+2E8h+var_2CC], edi
0x95B377: mov     [esp+2E8h+var_2C0], ebx
0x95B37B: test    ebx, ebx
0x95B37D: jnz     short loc_95B3BD
0x95B37F: mov     eax, [edi+34h]
0x95B382: test    eax, eax
0x95B384: jz      short loc_95B3BD
0x95B386: mov     edx, [eax]
0x95B388: mov     ecx, eax
0x95B38A: mov     eax, [edx+4Ch]
0x95B38D: call    eax
0x95B38F: test    al, al
0x95B391: jz      short loc_95B3AF
0x95B393: push    1
0x95B395: mov     ecx, edi
0x95B397: call    sub_728AB0
0x95B39C: lea     ecx, [esp+2E8h+var_1BC]
0x95B3A3: push    ecx
0x95B3A4: mov     ecx, edi
0x95B3A6: mov     [esp+2ECh+var_2D6], al
0x95B3AA: call    sub_728B60
0x95B3AF: mov     ecx, [esp+2E8h+var_1BC]
0x95B3B6: mov     edx, [esp+2E8h+var_1B8]
0x95B3BD: test    bp, bp
0x95B3C0: mov     esi, [edi+48h]
0x95B3C3: mov     [esp+2E8h+var_EC], esi
0x95B3CA: mov     [esp+2E8h+var_2D4], 0
0x95B3D2: ja      short loc_95B40A
0x95B3D4: cmp     [esp+2E8h+var_2D6], 0
0x95B3D9: jz      short loc_95B3E2
0x95B3DB: mov     ecx, edi
0x95B3DD: call    sub_728B20
0x95B3E2: mov     al, [esp+2E8h+var_2D5]
0x95B3E6: pop     edi
0x95B3E7: pop     esi
0x95B3E8: pop     ebp
0x95B3E9: pop     ebx
0x95B3EA: add     esp, 2D8h
0x95B3F0: retn
0x95B3F1: mov     edx, [esp+2E8h+var_1B8]
0x95B3F8: mov     ecx, [esp+2E8h+var_1BC]
0x95B3FF: mov     esi, [esp+2E8h+var_EC]
0x95B406: mov     ebx, [esp+2E8h+var_2C0]
0x95B40A: cmp     [esp+2E8h+var_2D6], 0
0x95B40F: movzx   eax, word ptr [esp+2E8h+var_2D4]
0x95B414: lea     eax, [eax+eax*2]
0x95B417: movzx   edi, word ptr [esi+eax*2]
0x95B41B: movzx   ebp, word ptr [esi+eax*2+2]
0x95B420: movzx   esi, word ptr [esi+eax*2+4]
0x95B425: mov     [esp+2E8h+var_C8], edi
0x95B42C: mov     [esp+2E8h+var_FC], ebp
0x95B433: mov     [esp+2E8h+var_2BC], esi
0x95B437: movzx   edi, di
0x95B43A: movzx   ebp, bp
0x95B43D: jz      short loc_95B4B0
0x95B43F: mov     eax, edx
0x95B441: imul    eax, edi
0x95B444: mov     ebx, [eax+ecx]
0x95B447: add     eax, ecx
0x95B449: mov     [esp+2E8h+var_198], ebx
0x95B450: mov     ebx, [eax+4]
0x95B453: mov     [esp+2E8h+var_194], ebx
0x95B45A: mov     eax, [eax+8]
0x95B45D: mov     [esp+2E8h+var_190], eax
0x95B464: mov     eax, edx
0x95B466: imul    eax, ebp
0x95B469: mov     ebx, [eax+ecx]
0x95B46C: add     eax, ecx
0x95B46E: mov     [esp+2E8h+var_1A4], ebx
0x95B475: mov     ebx, [eax+4]
0x95B478: mov     [esp+2E8h+var_1A0], ebx
0x95B47F: mov     eax, [eax+8]
0x95B482: movzx   ebx, si
0x95B485: imul    edx, ebx
0x95B488: add     edx, ecx
0x95B48A: mov     [esp+2E8h+var_19C], eax
0x95B491: mov     ecx, [edx]
0x95B493: mov     [esp+2E8h+var_1B0], ecx
0x95B49A: mov     eax, [edx+4]
0x95B49D: mov     [esp+2E8h+var_1AC], eax
0x95B4A4: mov     ecx, [edx+8]
0x95B4A7: mov     [esp+2E8h+var_1A8], ecx
0x95B4AE: jmp     short loc_95B523
0x95B4B0: lea     edx, [edi+edi*2]
0x95B4B3: mov     ecx, [ebx+edx*4]
0x95B4B6: lea     eax, [ebx+edx*4]
0x95B4B9: mov     [esp+2E8h+var_198], ecx
0x95B4C0: mov     edx, [eax+4]
0x95B4C3: mov     [esp+2E8h+var_194], edx
0x95B4CA: mov     eax, [eax+8]
0x95B4CD: mov     [esp+2E8h+var_190], eax
0x95B4D4: lea     ecx, [ebp+ebp*2+0]
0x95B4D8: mov     edx, [ebx+ecx*4]
0x95B4DB: lea     eax, [ebx+ecx*4]
0x95B4DE: mov     [esp+2E8h+var_1A4], edx
0x95B4E5: mov     ecx, [eax+4]
0x95B4E8: mov     [esp+2E8h+var_1A0], ecx
0x95B4EF: mov     edx, [eax+8]
0x95B4F2: mov     ecx, [esp+2E8h+var_2C0]
0x95B4F6: movzx   ebx, si
0x95B4F9: lea     eax, [ebx+ebx*2]
0x95B4FC: lea     eax, [ecx+eax*4]
0x95B4FF: mov     [esp+2E8h+var_19C], edx
0x95B506: mov     edx, [eax]
0x95B508: mov     [esp+2E8h+var_1B0], edx
0x95B50F: mov     ecx, [eax+4]
0x95B512: mov     [esp+2E8h+var_1AC], ecx
0x95B519: mov     edx, [eax+8]
0x95B51C: mov     [esp+2E8h+var_1A8], edx
0x95B523: mov     eax, [esp+2E8h+arg_8]
0x95B52A: mov     cl, [eax+10h]
0x95B52D: mov     byte ptr [esp+2E8h+var_CC], cl
0x95B534: lea     edx, [esp+2E8h+var_2C8]
0x95B538: push    edx
0x95B539: lea     eax, [esp+2ECh+var_2C4]
0x95B53D: push    eax
0x95B53E: mov     eax, [esp+2F0h+var_CC]
0x95B545: lea     ecx, [esp+2F0h+var_C4]
0x95B54C: push    ecx
0x95B54D: lea     edx, [esp+2F4h+var_180]
0x95B554: push    edx
0x95B555: push    eax
0x95B556: lea     ecx, [esp+2FCh+var_1B0]
0x95B55D: push    ecx
0x95B55E: lea     edx, [esp+300h+var_1A4]
0x95B565: push    edx
0x95B566: lea     eax, [esp+304h+var_198]
0x95B56D: push    eax
0x95B56E: lea     ecx, [esp+308h+var_3C]
0x95B575: push    ecx
0x95B576: lea     edx, [esp+30Ch+var_30]
0x95B57D: push    edx
0x95B57E: call    sub_96E5E0
0x95B583: add     esp, 28h
0x95B586: test    al, al
0x95B588: jz      loc_95C4EB
0x95B58E: push    44h ; 'D'; Size
0x95B590: mov     [esp+2ECh+var_2D5], 1
0x95B595: call    FormHeapAlloc
0x95B59A: add     esp, 4
0x95B59D: test    eax, eax
0x95B59F: jz      short loc_95B5B4
0x95B5A1: mov     ecx, [esp+2E8h+arg_C]
0x95B5A8: push    ecx
0x95B5A9: mov     ecx, eax
0x95B5AB: call    sub_95A2D0
0x95B5B0: mov     esi, eax
0x95B5B2: jmp     short loc_95B5B6
0x95B5B4: xor     esi, esi
0x95B5B6: mov     edx, [esp+2E8h+arg_8]
0x95B5BD: cmp     dword ptr [edx+0Ch], 1
0x95B5C1: jnz     loc_95B67C
0x95B5C7: lea     eax, [esp+2E8h+var_180]
0x95B5CE: push    eax
0x95B5CF: lea     ecx, [esp+2ECh+var_C]
0x95B5D6: push    ecx
0x95B5D7: mov     ecx, [esp+2F0h+arg_C]
0x95B5DE: add     ecx, 64h ; 'd'
0x95B5E1: call    sub_7101F0
0x95B5E6: mov     ecx, [esp+2E8h+arg_C]
0x95B5ED: fld     dword ptr [ecx+94h]
0x95B5F3: add     ecx, 64h ; 'd'
0x95B5F6: fstp    [esp+2E8h+var_2D0]
0x95B5FA: fld     [esp+2E8h+var_2D0]
0x95B5FE: fld     st
0x95B600: fmul    dword ptr [eax]
0x95B602: fstp    [esp+2E8h+var_120]
0x95B609: fld     dword ptr [eax+4]
0x95B60C: fmul    st, st(1)
0x95B60E: fstp    [esp+2E8h+var_11C]
0x95B615: fmul    dword ptr [eax+8]
0x95B618: fstp    [esp+2E8h+var_118]
0x95B61F: fld     dword ptr [ecx+24h]
0x95B622: fadd    [esp+2E8h+var_120]
0x95B629: fstp    [esp+2E8h+var_C0]
0x95B630: mov     edx, [esp+2E8h+var_C0]
0x95B637: fld     dword ptr [ecx+28h]
0x95B63A: mov     [esp+2E8h+var_180], edx
0x95B641: fadd    [esp+2E8h+var_11C]
0x95B648: fstp    [esp+2E8h+var_BC]
0x95B64F: mov     eax, [esp+2E8h+var_BC]
0x95B656: fld     dword ptr [ecx+2Ch]
0x95B659: mov     [esp+2E8h+var_17C], eax
0x95B660: fadd    [esp+2E8h+var_118]
0x95B667: fstp    [esp+2E8h+var_B8]
0x95B66E: mov     ecx, [esp+2E8h+var_B8]
0x95B675: mov     [esp+2E8h+var_178], ecx
0x95B67C: mov     edx, [esp+2E8h+var_180]
0x95B683: mov     [esi+8], edx
0x95B686: mov     eax, [esp+2E8h+var_17C]
0x95B68D: movzx   edx, word ptr [esp+2E8h+var_2D4]
0x95B692: mov     [esi+0Ch], eax
0x95B695: mov     ecx, [esp+2E8h+var_178]
0x95B69C: mov     ax, word ptr [esp+2E8h+var_C8]
0x95B6A4: mov     [esi+10h], ecx
0x95B6A7: mov     cx, word ptr [esp+2E8h+var_FC]
0x95B6AF: fld     [esp+2E8h+var_C4]
0x95B6B6: mov     [esi+18h], dx
0x95B6BA: movzx   edx, word ptr [esp+2E8h+var_2BC]
0x95B6BF: fstp    dword ptr [esi+14h]
0x95B6C2: mov     [esi+1Ah], ax
0x95B6C6: mov     eax, [esp+2E8h+arg_8]
0x95B6CD: mov     [esi+1Ch], cx
0x95B6D1: mov     [esi+1Eh], dx
0x95B6D5: cmp     byte ptr [eax+2Ch], 0
0x95B6D9: fld     [esp+2E8h+var_2C4]
0x95B6DD: fadd    [esp+2E8h+var_2C8]
0x95B6E1: fld1
0x95B6E3: fsubrp  st(1), st
0x95B6E5: fstp    [esp+2E8h+var_2D0]
0x95B6E9: jz      loc_95B9A7
0x95B6EF: xor     eax, eax
0x95B6F1: lea     ecx, [esp+2E8h+var_12C]
0x95B6F8: push    ecx
0x95B6F9: mov     ecx, [esp+2ECh+var_2CC]
0x95B6FD: push    eax
0x95B6FE: mov     [esp+2F0h+var_12C], eax
0x95B705: mov     [esp+2F0h+var_128], eax
0x95B70C: mov     [esp+2F0h+var_124], al
0x95B713: call    sub_728E70
0x95B718: mov     edx, [esp+2E8h+var_12C]
0x95B71F: test    edx, edx
0x95B721: jz      loc_95B868
0x95B727: mov     ecx, [esp+2E8h+var_128]
0x95B72E: mov     eax, ecx
0x95B730: imul    ecx, ebp
0x95B733: add     ecx, edx
0x95B735: imul    eax, edi
0x95B738: mov     [esp+2E8h+var_2BC], ecx
0x95B73C: mov     ecx, [esp+2E8h+var_128]
0x95B743: imul    ecx, ebx
0x95B746: add     eax, edx
0x95B748: add     ecx, edx
0x95B74A: mov     edx, [ecx]
0x95B74C: mov     ecx, [ecx+4]
0x95B74F: mov     [esp+2E8h+var_284], edx
0x95B753: mov     [esp+2E8h+var_280], ecx
0x95B757: fld     [esp+2E8h+var_284]
0x95B75B: mov     ecx, [esp+2E8h+var_2BC]
0x95B75F: fld     [esp+2E8h+var_2C8]
0x95B763: mov     edx, [ecx]
0x95B765: fld     st
0x95B767: mov     ecx, [ecx+4]
0x95B76A: fmulp   st(2), st
0x95B76C: mov     [esp+2E8h+var_23C], edx
0x95B773: mov     edx, [eax]
0x95B775: fxch    st(1)
0x95B777: mov     eax, [eax+4]
0x95B77A: fstp    [esp+2E8h+var_284]
0x95B77E: mov     [esp+2E8h+var_238], ecx
0x95B785: mov     [esp+2E8h+var_2A4], edx
0x95B789: fmul    [esp+2E8h+var_280]
0x95B78D: mov     [esp+2E8h+var_2A0], eax
0x95B791: fstp    [esp+2E8h+var_280]
0x95B795: fld     [esp+2E8h+var_23C]
0x95B79C: fld     [esp+2E8h+var_2C4]
0x95B7A0: fld     st
0x95B7A2: fmulp   st(2), st
0x95B7A4: fxch    st(1)
0x95B7A6: fstp    [esp+2E8h+var_23C]
0x95B7AD: fmul    [esp+2E8h+var_238]
0x95B7B4: fstp    [esp+2E8h+var_238]
0x95B7BB: fld     [esp+2E8h+var_2A4]
0x95B7BF: fld     [esp+2E8h+var_2D0]
0x95B7C3: fld     st
0x95B7C5: fmulp   st(2), st
0x95B7C7: fxch    st(1)
0x95B7C9: fstp    [esp+2E8h+var_2A4]
0x95B7CD: mov     ecx, [esp+2E8h+var_2A4]
0x95B7D1: mov     [esp+2E8h+var_214], ecx
0x95B7D8: fmul    [esp+2E8h+var_2A0]
0x95B7DC: fstp    [esp+2E8h+var_2A0]
0x95B7E0: mov     edx, [esp+2E8h+var_2A0]
0x95B7E4: fld     [esp+2E8h+var_2A4]
0x95B7E8: mov     [esp+2E8h+var_210], edx
0x95B7EF: fadd    [esp+2E8h+var_23C]
0x95B7F6: fstp    [esp+2E8h+var_214]
0x95B7FD: mov     eax, [esp+2E8h+var_214]
0x95B804: fld     [esp+2E8h+var_210]
0x95B80B: mov     [esp+2E8h+var_1CC], eax
0x95B812: fadd    [esp+2E8h+var_238]
0x95B819: fstp    [esp+2E8h+var_210]
0x95B820: mov     ecx, [esp+2E8h+var_210]
0x95B827: fld     [esp+2E8h+var_214]
0x95B82E: mov     [esp+2E8h+var_1C8], ecx
0x95B835: fadd    [esp+2E8h+var_284]
0x95B839: fstp    [esp+2E8h+var_1CC]
0x95B840: mov     edx, [esp+2E8h+var_1CC]
0x95B847: fld     [esp+2E8h+var_1C8]
0x95B84E: mov     [esi+20h], edx
0x95B851: fadd    [esp+2E8h+var_280]
0x95B855: fstp    [esp+2E8h+var_1C8]
0x95B85C: mov     eax, [esp+2E8h+var_1C8]
0x95B863: jmp     loc_95B9B5
0x95B868: mov     ecx, [esp+2E8h+arg_C]
0x95B86F: mov     edx, [ecx+0B4h]
0x95B875: mov     eax, [edx+28h]
0x95B878: test    eax, eax
0x95B87A: jz      loc_95B994
0x95B880: mov     ecx, [eax+ebx*8]
0x95B883: mov     edx, [eax+ebx*8+4]
0x95B887: mov     [esp+2E8h+var_254], ecx
0x95B88E: fld     [esp+2E8h+var_254]
0x95B895: fld     [esp+2E8h+var_2C8]
0x95B899: mov     ecx, [eax+ebp*8]
0x95B89C: fld     st
0x95B89E: mov     [esp+2E8h+var_250], edx
0x95B8A5: fmulp   st(2), st
0x95B8A7: mov     edx, [eax+ebp*8+4]
0x95B8AB: fxch    st(1)
0x95B8AD: mov     [esp+2E8h+var_28C], ecx
0x95B8B1: mov     ecx, [eax+edi*8]
0x95B8B4: fstp    [esp+2E8h+var_254]
0x95B8BB: mov     [esp+2E8h+var_288], edx
0x95B8BF: mov     edx, [eax+edi*8+4]
0x95B8C3: fmul    [esp+2E8h+var_250]
0x95B8CA: mov     [esp+2E8h+var_2AC], ecx
0x95B8CE: mov     [esp+2E8h+var_2A8], edx
0x95B8D2: fstp    [esp+2E8h+var_250]
0x95B8D9: fld     [esp+2E8h+var_28C]
0x95B8DD: fld     [esp+2E8h+var_2C4]
0x95B8E1: fld     st
0x95B8E3: fmulp   st(2), st
0x95B8E5: fxch    st(1)
0x95B8E7: fstp    [esp+2E8h+var_28C]
0x95B8EB: fmul    [esp+2E8h+var_288]
0x95B8EF: fstp    [esp+2E8h+var_288]
0x95B8F3: fld     [esp+2E8h+var_2AC]
0x95B8F7: fld     [esp+2E8h+var_2D0]
0x95B8FB: fld     st
0x95B8FD: fmulp   st(2), st
0x95B8FF: fxch    st(1)
0x95B901: fstp    [esp+2E8h+var_2AC]
0x95B905: mov     eax, [esp+2E8h+var_2AC]
0x95B909: mov     [esp+2E8h+var_26C], eax
0x95B90D: fmul    [esp+2E8h+var_2A8]
0x95B911: fstp    [esp+2E8h+var_2A8]
0x95B915: mov     ecx, [esp+2E8h+var_2A8]
0x95B919: fld     [esp+2E8h+var_2AC]
0x95B91D: mov     [esp+2E8h+var_268], ecx
0x95B924: fadd    [esp+2E8h+var_28C]
0x95B928: fstp    [esp+2E8h+var_26C]
0x95B92C: mov     edx, [esp+2E8h+var_26C]
0x95B930: fld     [esp+2E8h+var_268]
0x95B937: mov     [esp+2E8h+var_1C4], edx
0x95B93E: fadd    [esp+2E8h+var_288]
0x95B942: fstp    [esp+2E8h+var_268]
0x95B949: mov     eax, [esp+2E8h+var_268]
0x95B950: fld     [esp+2E8h+var_26C]
0x95B954: mov     [esp+2E8h+var_1C0], eax
0x95B95B: fadd    [esp+2E8h+var_254]
0x95B962: fstp    [esp+2E8h+var_1C4]
0x95B969: mov     ecx, [esp+2E8h+var_1C4]
0x95B970: fld     [esp+2E8h+var_1C0]
0x95B977: mov     [esi+20h], ecx
0x95B97A: fadd    [esp+2E8h+var_250]
0x95B981: fstp    [esp+2E8h+var_1C0]
0x95B988: mov     edx, [esp+2E8h+var_1C0]
0x95B98F: mov     [esi+24h], edx
0x95B992: jmp     short loc_95B9B8
0x95B994: mov     eax, ds:0B3FC80h
0x95B999: mov     [esi+20h], eax
0x95B99C: mov     ecx, ds:0B3FC84h
0x95B9A2: mov     [esi+24h], ecx
0x95B9A5: jmp     short loc_95B9B8
0x95B9A7: mov     edx, ds:0B3FC80h
0x95B9AD: mov     [esi+20h], edx
0x95B9B0: mov     eax, ds:0B3FC84h
0x95B9B5: mov     [esi+24h], eax
0x95B9B8: mov     ecx, [esp+2E8h+arg_8]
0x95B9BF: cmp     byte ptr [ecx+2Dh], 0
0x95B9C3: jz      loc_95BE6C
0x95B9C9: mov     ecx, [esp+2E8h+var_2CC]
0x95B9CD: xor     eax, eax
0x95B9CF: lea     edx, [esp+2E8h+var_174]
0x95B9D6: push    edx
0x95B9D7: mov     [esp+2ECh+var_174], eax
0x95B9DE: mov     [esp+2ECh+var_170], eax
0x95B9E5: mov     [esp+2ECh+var_16C], al
0x95B9EC: call    sub_728D00
0x95B9F1: mov     edx, [esp+2E8h+var_174]
0x95B9F8: test    edx, edx
0x95B9FA: jz      loc_95BBC1
0x95BA00: mov     ecx, [esp+2E8h+var_170]
0x95BA07: mov     eax, ecx
0x95BA09: imul    eax, edi
0x95BA0C: add     eax, edx
0x95BA0E: mov     edx, [eax]
0x95BA10: mov     [esp+2E8h+var_78], edx
0x95BA17: mov     edx, [eax+4]
0x95BA1A: mov     eax, [eax+8]
0x95BA1D: mov     [esp+2E8h+var_70], eax
0x95BA24: mov     eax, ecx
0x95BA26: imul    ecx, ebx
0x95BA29: imul    eax, ebp
0x95BA2C: add     eax, [esp+2E8h+var_174]
0x95BA33: add     ecx, [esp+2E8h+var_174]
0x95BA3A: mov     [esp+2E8h+var_74], edx
0x95BA41: mov     edx, [eax]
0x95BA43: mov     [esp+2E8h+var_90], edx
0x95BA4A: mov     edx, [eax+4]
0x95BA4D: mov     eax, [eax+8]
0x95BA50: mov     [esp+2E8h+var_8C], edx
0x95BA57: mov     edx, [ecx]
0x95BA59: mov     [esp+2E8h+var_A8], edx
0x95BA60: mov     [esp+2E8h+var_88], eax
0x95BA67: fld     [esp+2E8h+var_A8]
0x95BA6E: mov     eax, [ecx+4]
0x95BA71: fld     [esp+2E8h+var_2C8]
0x95BA75: mov     ecx, [ecx+8]
0x95BA78: fld     st
0x95BA7A: mov     [esp+2E8h+var_A4], eax
0x95BA81: fmulp   st(2), st
0x95BA83: mov     [esp+2E8h+var_A0], ecx
0x95BA8A: fxch    st(1)
0x95BA8C: fstp    [esp+2E8h+var_108]
0x95BA93: fld     [esp+2E8h+var_A4]
0x95BA9A: fmul    st, st(1)
0x95BA9C: fstp    [esp+2E8h+var_104]
0x95BAA3: fmul    [esp+2E8h+var_A0]
0x95BAAA: fstp    [esp+2E8h+var_100]
0x95BAB1: fld     [esp+2E8h+var_90]
0x95BAB8: fld     [esp+2E8h+var_2C4]
0x95BABC: fld     st
0x95BABE: fmulp   st(2), st
0x95BAC0: fxch    st(1)
0x95BAC2: fstp    [esp+2E8h+var_48]
0x95BAC9: fld     [esp+2E8h+var_8C]
0x95BAD0: fmul    st, st(1)
0x95BAD2: fstp    [esp+2E8h+var_44]
0x95BAD9: fmul    [esp+2E8h+var_88]
0x95BAE0: fstp    [esp+2E8h+var_40]
0x95BAE7: fld     [esp+2E8h+var_78]
0x95BAEE: fld     [esp+2E8h+var_2D0]
0x95BAF2: fld     st
0x95BAF4: fmulp   st(2), st
0x95BAF6: fxch    st(1)
0x95BAF8: fstp    [esp+2E8h+var_60]
0x95BAFF: fld     [esp+2E8h+var_74]
0x95BB06: fmul    st, st(1)
0x95BB08: fstp    [esp+2E8h+var_5C]
0x95BB0F: fmul    [esp+2E8h+var_70]
0x95BB16: fstp    [esp+2E8h+var_58]
0x95BB1D: fld     [esp+2E8h+var_60]
0x95BB24: fadd    [esp+2E8h+var_48]
0x95BB2B: fstp    [esp+2E8h+var_B4]
0x95BB32: fld     [esp+2E8h+var_5C]
0x95BB39: fadd    [esp+2E8h+var_44]
0x95BB40: fstp    [esp+2E8h+var_B0]
0x95BB47: fld     [esp+2E8h+var_58]
0x95BB4E: fadd    [esp+2E8h+var_40]
0x95BB55: fstp    [esp+2E8h+var_AC]
0x95BB5C: fld     [esp+2E8h+var_B4]
0x95BB63: fadd    [esp+2E8h+var_108]
0x95BB6A: fstp    [esp+2E8h+var_114]
0x95BB71: mov     edx, [esp+2E8h+var_114]
0x95BB78: fld     [esp+2E8h+var_B0]
0x95BB7F: mov     [esp+2E8h+var_2B8], edx
0x95BB83: fadd    [esp+2E8h+var_104]
0x95BB8A: fstp    [esp+2E8h+var_110]
0x95BB91: mov     eax, [esp+2E8h+var_110]
0x95BB98: fld     [esp+2E8h+var_AC]
0x95BB9F: fadd    [esp+2E8h+var_100]
0x95BBA6: fstp    [esp+2E8h+var_10C]
0x95BBAD: mov     ecx, [esp+2E8h+var_10C]
0x95BBB4: mov     [esp+2E8h+var_2B4], eax
0x95BBB8: mov     [esp+2E8h+var_2B0], ecx
0x95BBBC: jmp     loc_95BE10
0x95BBC1: mov     edx, [esp+2E8h+arg_8]
0x95BBC8: cmp     byte ptr [edx+2Eh], 0
0x95BBCC: jz      loc_95BD0D
0x95BBD2: mov     eax, [esp+2E8h+arg_C]
0x95BBD9: mov     ecx, [eax+0B4h]
0x95BBDF: mov     ecx, [ecx+20h]
0x95BBE2: test    ecx, ecx
0x95BBE4: jz      loc_95BD0D
0x95BBEA: lea     edx, [ebx+ebx*2]
0x95BBED: fld     dword ptr [ecx+edx*4]
0x95BBF0: lea     eax, [ecx+edx*4]
0x95BBF3: fld     [esp+2E8h+var_2C8]
0x95BBF7: lea     edx, [edi+edi*2]
0x95BBFA: fld     st
0x95BBFC: fmulp   st(2), st
0x95BBFE: fxch    st(1)
0x95BC00: fstp    [esp+2E8h+var_E8]
0x95BC07: fld     dword ptr [eax+4]
0x95BC0A: fmul    st, st(1)
0x95BC0C: fstp    [esp+2E8h+var_E4]
0x95BC13: fmul    dword ptr [eax+8]
0x95BC16: lea     eax, [ebp+ebp*2+0]
0x95BC1A: lea     eax, [ecx+eax*4]
0x95BC1D: fstp    [esp+2E8h+var_E0]
0x95BC24: fld     dword ptr [eax]
0x95BC26: fld     [esp+2E8h+var_2C4]
0x95BC2A: fld     st
0x95BC2C: fmulp   st(2), st
0x95BC2E: fxch    st(1)
0x95BC30: fstp    [esp+2E8h+var_F8]
0x95BC37: fld     dword ptr [eax+4]
0x95BC3A: fmul    st, st(1)
0x95BC3C: fstp    [esp+2E8h+var_F4]
0x95BC43: fmul    dword ptr [eax+8]
0x95BC46: lea     eax, [ecx+edx*4]
0x95BC49: fstp    [esp+2E8h+var_F0]
0x95BC50: fld     [esp+2E8h+var_2D0]
0x95BC54: fld     st
0x95BC56: fmul    dword ptr [eax]
0x95BC58: fstp    [esp+2E8h+var_54]
0x95BC5F: fld     dword ptr [eax+4]
0x95BC62: fmul    st, st(1)
0x95BC64: fstp    [esp+2E8h+var_50]
0x95BC6B: fmul    dword ptr [eax+8]
0x95BC6E: fstp    [esp+2E8h+var_4C]
0x95BC75: fld     [esp+2E8h+var_54]
0x95BC7C: fadd    [esp+2E8h+var_F8]
0x95BC83: fstp    [esp+2E8h+var_9C]
0x95BC8A: fld     [esp+2E8h+var_50]
0x95BC91: fadd    [esp+2E8h+var_F4]
0x95BC98: fstp    [esp+2E8h+var_98]
0x95BC9F: fld     [esp+2E8h+var_4C]
0x95BCA6: fadd    [esp+2E8h+var_F0]
0x95BCAD: fstp    [esp+2E8h+var_94]
0x95BCB4: fld     [esp+2E8h+var_9C]
0x95BCBB: fadd    [esp+2E8h+var_E8]
0x95BCC2: fstp    [esp+2E8h+var_6C]
0x95BCC9: mov     eax, [esp+2E8h+var_6C]
0x95BCD0: fld     [esp+2E8h+var_98]
0x95BCD7: fadd    [esp+2E8h+var_E4]
0x95BCDE: fstp    [esp+2E8h+var_68]
0x95BCE5: mov     ecx, [esp+2E8h+var_68]
0x95BCEC: fld     [esp+2E8h+var_94]
0x95BCF3: fadd    [esp+2E8h+var_E0]
0x95BCFA: fstp    [esp+2E8h+var_64]
0x95BD01: mov     edx, [esp+2E8h+var_64]
0x95BD08: jmp     loc_95BE04
0x95BD0D: fld     [esp+2E8h+var_1A4]
0x95BD14: fld     [esp+2E8h+var_198]
0x95BD1B: fld     st
0x95BD1D: fsubp   st(2), st
0x95BD1F: fxch    st(1)
0x95BD21: fstp    [esp+2E8h+var_84]
0x95BD28: fld     [esp+2E8h+var_1A0]
0x95BD2F: fld     [esp+2E8h+var_194]
0x95BD36: fld     st
0x95BD38: fsubp   st(2), st
0x95BD3A: fxch    st(1)
0x95BD3C: fstp    [esp+2E8h+var_80]
0x95BD43: fld     [esp+2E8h+var_19C]
0x95BD4A: fld     [esp+2E8h+var_190]
0x95BD51: fld     st
0x95BD53: fsubp   st(2), st
0x95BD55: fxch    st(1)
0x95BD57: fstp    [esp+2E8h+var_7C]
0x95BD5E: fld     [esp+2E8h+var_1B0]
0x95BD65: fsubrp  st(3), st
0x95BD67: fxch    st(2)
0x95BD69: fstp    [esp+2E8h+var_D8]
0x95BD70: fsubr   [esp+2E8h+var_1AC]
0x95BD77: fstp    [esp+2E8h+var_D4]
0x95BD7E: fsubr   [esp+2E8h+var_1A8]
0x95BD85: fstp    [esp+2E8h+var_D0]
0x95BD8C: fld     [esp+2E8h+var_D0]
0x95BD93: fld     st
0x95BD95: fld     [esp+2E8h+var_80]
0x95BD9C: fld     st
0x95BD9E: fmulp   st(2), st
0x95BDA0: fld     [esp+2E8h+var_D4]
0x95BDA7: fld     st
0x95BDA9: fld     [esp+2E8h+var_7C]
0x95BDB0: fld     st
0x95BDB2: fmulp   st(2), st
0x95BDB4: fxch    st(4)
0x95BDB6: fsubrp  st(1), st
0x95BDB8: fstp    [esp+2E8h+var_168]
0x95BDBF: mov     eax, [esp+2E8h+var_168]
0x95BDC6: fld     [esp+2E8h+var_D8]
0x95BDCD: fld     st
0x95BDCF: fmulp   st(4), st
0x95BDD1: fld     [esp+2E8h+var_84]
0x95BDD8: fld     st
0x95BDDA: fmulp   st(6), st
0x95BDDC: fxch    st(4)
0x95BDDE: fsubrp  st(5), st
0x95BDE0: fxch    st(4)
0x95BDE2: fstp    [esp+2E8h+var_164]
0x95BDE9: mov     ecx, [esp+2E8h+var_164]
0x95BDF0: fmulp   st(2), st
0x95BDF2: fmulp   st(2), st
0x95BDF4: fsubrp  st(1), st
0x95BDF6: fstp    [esp+2E8h+var_160]
0x95BDFD: mov     edx, [esp+2E8h+var_160]
0x95BE04: mov     [esp+2E8h+var_2B0], edx
0x95BE08: mov     [esp+2E8h+var_2B4], ecx
0x95BE0C: mov     [esp+2E8h+var_2B8], eax
0x95BE10: lea     ecx, [esp+2E8h+var_2B8]
0x95BE14: call    sub_43F350
0x95BE19: fstp    st
0x95BE1B: mov     eax, [esp+2E8h+arg_8]
0x95BE22: cmp     dword ptr [eax+0Ch], 1
0x95BE26: jnz     short loc_95BE58
0x95BE28: lea     ecx, [esp+2E8h+var_2B8]
0x95BE2C: push    ecx
0x95BE2D: mov     ecx, [esp+2ECh+arg_C]
0x95BE34: lea     edx, [esp+2ECh+var_18]
0x95BE3B: push    edx
0x95BE3C: add     ecx, 64h ; 'd'
0x95BE3F: call    sub_7101F0
0x95BE44: mov     ecx, [eax]
0x95BE46: mov     [esp+2E8h+var_2B8], ecx
0x95BE4A: mov     edx, [eax+4]
0x95BE4D: mov     [esp+2E8h+var_2B4], edx
0x95BE51: mov     eax, [eax+8]
0x95BE54: mov     [esp+2E8h+var_2B0], eax
0x95BE58: mov     ecx, [esp+2E8h+var_2B8]
0x95BE5C: mov     edx, [esp+2E8h+var_2B4]
0x95BE60: mov     eax, [esp+2E8h+var_2B0]
0x95BE64: mov     [esi+28h], ecx
0x95BE67: mov     [esi+2Ch], edx
0x95BE6A: jmp     short loc_95BE83
0x95BE6C: mov     ecx, ds:0B3F9A8h
0x95BE72: mov     [esi+28h], ecx
0x95BE75: mov     edx, ds:0B3F9ACh
0x95BE7B: mov     [esi+2Ch], edx
0x95BE7E: mov     eax, ds:0B3F9B0h
0x95BE83: mov     ecx, [esp+2E8h+arg_8]
0x95BE8A: mov     [esi+30h], eax
0x95BE8D: cmp     byte ptr [ecx+2Fh], 0
0x95BE91: jz      loc_95C499
0x95BE97: mov     ecx, [esp+2E8h+var_2CC]
0x95BE9B: xor     eax, eax
0x95BE9D: lea     edx, [esp+2E8h+var_18C]
0x95BEA4: push    edx
0x95BEA5: mov     [esp+2ECh+var_18C], eax
0x95BEAC: mov     [esp+2ECh+var_188], eax
0x95BEB3: mov     [esp+2ECh+var_184], al
0x95BEBA: call    sub_728DB0
0x95BEBF: cmp     [esp+2E8h+var_18C], 0
0x95BEC7: jz      loc_95C1F1
0x95BECD: fldz
0x95BECF: lea     eax, [esp+2E8h+var_15C]
0x95BED6: fst     [esp+2E8h+var_15C]
0x95BEDD: push    eax
0x95BEDE: fst     [esp+2ECh+var_158]
0x95BEE5: push    edi
0x95BEE6: fst     [esp+2F0h+var_154]
0x95BEED: lea     ecx, [esp+2F0h+var_18C]
0x95BEF4: fst     [esp+2F0h+var_150]
0x95BEFB: fst     [esp+2F0h+var_14C]
0x95BF02: fst     [esp+2F0h+var_148]
0x95BF09: fst     [esp+2F0h+var_144]
0x95BF10: fst     [esp+2F0h+var_140]
0x95BF17: fst     [esp+2F0h+var_13C]
0x95BF1E: fst     [esp+2F0h+var_138]
0x95BF25: fst     [esp+2F0h+var_134]
0x95BF2C: fstp    [esp+2F0h+var_130]
0x95BF33: call    sub_4C1440
0x95BF38: lea     ecx, [esp+2E8h+var_14C]
0x95BF3F: push    ecx
0x95BF40: push    ebp
0x95BF41: lea     ecx, [esp+2F0h+var_18C]
0x95BF48: call    sub_4C1440
0x95BF4D: lea     edx, [esp+2E8h+var_13C]
0x95BF54: push    edx
0x95BF55: push    ebx
0x95BF56: lea     ecx, [esp+2F0h+var_18C]
0x95BF5D: call    sub_4C1440
0x95BF62: fld     [esp+2E8h+var_13C]
0x95BF69: fld     [esp+2E8h+var_2C8]
0x95BF6D: mov     eax, [esp+2E8h+var_13C]
0x95BF74: mov     ecx, [esp+2E8h+var_138]
0x95BF7B: fld     st
0x95BF7D: mov     edx, [esp+2E8h+var_134]
0x95BF84: fmulp   st(2), st
0x95BF86: mov     [esp+2E8h+var_1DC], eax
0x95BF8D: fxch    st(1)
0x95BF8F: mov     eax, [esp+2E8h+var_130]
0x95BF96: fstp    [esp+2E8h+var_1DC]
0x95BF9D: mov     [esp+2E8h+var_1D8], ecx
0x95BFA4: fld     [esp+2E8h+var_1D8]
0x95BFAB: mov     ecx, [esp+2E8h+var_14C]
0x95BFB2: fmul    st, st(1)
0x95BFB4: mov     [esp+2E8h+var_1D4], edx
0x95BFBB: mov     edx, [esp+2E8h+var_148]
0x95BFC2: mov     [esp+2E8h+var_1D0], eax
0x95BFC9: fstp    [esp+2E8h+var_1D8]
0x95BFD0: mov     eax, [esp+2E8h+var_144]
0x95BFD7: fld     [esp+2E8h+var_1D4]
0x95BFDE: mov     [esp+2E8h+var_1FC], ecx
0x95BFE5: fmul    st, st(1)
0x95BFE7: mov     ecx, [esp+2E8h+var_140]
0x95BFEE: mov     [esp+2E8h+var_1F8], edx
0x95BFF5: mov     edx, [esp+2E8h+var_15C]
0x95BFFC: fstp    [esp+2E8h+var_1D4]
0x95C003: mov     [esp+2E8h+var_1F4], eax
0x95C00A: mov     eax, [esp+2E8h+var_158]
0x95C011: fmul    [esp+2E8h+var_1D0]
0x95C018: mov     [esp+2E8h+var_1F0], ecx
0x95C01F: mov     ecx, [esp+2E8h+var_154]
0x95C026: mov     [esp+2E8h+var_27C], edx
0x95C02A: fstp    [esp+2E8h+var_1D0]
0x95C031: mov     edx, [esp+2E8h+var_150]
0x95C038: fld     [esp+2E8h+var_14C]
0x95C03F: mov     [esp+2E8h+var_278], eax
0x95C043: fld     [esp+2E8h+var_2C4]
0x95C047: mov     [esp+2E8h+var_274], ecx
0x95C04B: fld     st
0x95C04D: mov     [esp+2E8h+var_270], edx
0x95C051: fmulp   st(2), st
0x95C053: fxch    st(1)
0x95C055: fstp    [esp+2E8h+var_1FC]
0x95C05C: fld     [esp+2E8h+var_1F8]
0x95C063: fmul    st, st(1)
0x95C065: fstp    [esp+2E8h+var_1F8]
0x95C06C: fld     [esp+2E8h+var_1F4]
0x95C073: fmul    st, st(1)
0x95C075: fstp    [esp+2E8h+var_1F4]
0x95C07C: fmul    [esp+2E8h+var_1F0]
0x95C083: fstp    [esp+2E8h+var_1F0]
0x95C08A: fld     [esp+2E8h+var_15C]
0x95C091: fld     [esp+2E8h+var_2D0]
0x95C095: fld     st
0x95C097: fmulp   st(2), st
0x95C099: fxch    st(1)
0x95C09B: fstp    [esp+2E8h+var_27C]
0x95C09F: mov     eax, [esp+2E8h+var_27C]
0x95C0A3: fld     [esp+2E8h+var_278]
0x95C0A7: mov     [esp+2E8h+var_264], eax
0x95C0AE: fmul    st, st(1)
0x95C0B0: fstp    [esp+2E8h+var_278]
0x95C0B4: mov     ecx, [esp+2E8h+var_278]
0x95C0B8: fld     [esp+2E8h+var_274]
0x95C0BC: mov     [esp+2E8h+var_260], ecx
0x95C0C3: fmul    st, st(1)
0x95C0C5: fstp    [esp+2E8h+var_274]
0x95C0C9: mov     edx, [esp+2E8h+var_274]
0x95C0CD: mov     [esp+2E8h+var_25C], edx
0x95C0D4: fmul    [esp+2E8h+var_270]
0x95C0D8: fstp    [esp+2E8h+var_270]
0x95C0DC: mov     eax, [esp+2E8h+var_270]
0x95C0E0: fld     [esp+2E8h+var_27C]
0x95C0E4: mov     [esp+2E8h+var_258], eax
0x95C0EB: fadd    [esp+2E8h+var_1FC]
0x95C0F2: fstp    [esp+2E8h+var_264]
0x95C0F9: mov     ecx, [esp+2E8h+var_264]
0x95C100: fld     [esp+2E8h+var_260]
0x95C107: mov     [esp+2E8h+var_1EC], ecx
0x95C10E: fadd    [esp+2E8h+var_1F8]
0x95C115: fstp    [esp+2E8h+var_260]
0x95C11C: mov     edx, [esp+2E8h+var_260]
0x95C123: fld     [esp+2E8h+var_25C]
0x95C12A: mov     [esp+2E8h+var_1E8], edx
0x95C131: fadd    [esp+2E8h+var_1F4]
0x95C138: fstp    [esp+2E8h+var_25C]
0x95C13F: mov     eax, [esp+2E8h+var_25C]
0x95C146: fld     [esp+2E8h+var_258]
0x95C14D: mov     [esp+2E8h+var_1E4], eax
0x95C154: fadd    [esp+2E8h+var_1F0]
0x95C15B: fstp    [esp+2E8h+var_258]
0x95C162: mov     ecx, [esp+2E8h+var_258]
0x95C169: fld     [esp+2E8h+var_264]
0x95C170: mov     [esp+2E8h+var_1E0], ecx
0x95C177: fadd    [esp+2E8h+var_1DC]
0x95C17E: fstp    [esp+2E8h+var_1EC]
0x95C185: mov     edx, [esp+2E8h+var_1EC]
0x95C18C: fld     [esp+2E8h+var_1E8]
0x95C193: mov     [esi+34h], edx
0x95C196: fadd    [esp+2E8h+var_1D8]
0x95C19D: fstp    [esp+2E8h+var_1E8]
0x95C1A4: mov     eax, [esp+2E8h+var_1E8]
0x95C1AB: fld     [esp+2E8h+var_1E4]
0x95C1B2: mov     [esi+38h], eax
0x95C1B5: fadd    [esp+2E8h+var_1D4]
0x95C1BC: fstp    [esp+2E8h+var_1E4]
0x95C1C3: mov     ecx, [esp+2E8h+var_1E4]
0x95C1CA: fld     [esp+2E8h+var_1E0]
0x95C1D1: mov     [esi+3Ch], ecx
0x95C1D4: fadd    [esp+2E8h+var_1D0]
0x95C1DB: fstp    [esp+2E8h+var_1E0]
0x95C1E2: mov     edx, [esp+2E8h+var_1E0]
0x95C1E9: mov     [esi+40h], edx
0x95C1EC: jmp     loc_95C4BC
0x95C1F1: mov     eax, [esp+2E8h+arg_C]
0x95C1F8: mov     ecx, [eax+0B4h]
0x95C1FE: mov     eax, [ecx+24h]
0x95C201: test    eax, eax
0x95C203: jz      loc_95C475
0x95C209: shl     ebx, 4
0x95C20C: mov     edx, [ebx+eax]
0x95C20F: mov     ecx, [ebx+eax+4]
0x95C213: add     ebx, eax
0x95C215: mov     [esp+2E8h+var_224], edx
0x95C21C: fld     [esp+2E8h+var_224]
0x95C223: fld     [esp+2E8h+var_2C8]
0x95C227: mov     edx, [ebx+8]
0x95C22A: fld     st
0x95C22C: mov     [esp+2E8h+var_220], ecx
0x95C233: fmulp   st(2), st
0x95C235: mov     ecx, [ebx+0Ch]
0x95C238: fxch    st(1)
0x95C23A: mov     [esp+2E8h+var_21C], edx
0x95C241: mov     [esp+2E8h+var_218], ecx
0x95C248: fstp    [esp+2E8h+var_224]
0x95C24F: shl     ebp, 4
0x95C252: fld     [esp+2E8h+var_220]
0x95C259: mov     edx, [ebp+eax+0]
0x95C25D: fmul    st, st(1)
0x95C25F: mov     ecx, [ebp+eax+4]
0x95C263: add     ebp, eax
0x95C265: mov     [esp+2E8h+var_24C], edx
0x95C26C: fstp    [esp+2E8h+var_220]
0x95C273: mov     edx, [ebp+8]
0x95C276: fld     [esp+2E8h+var_21C]
0x95C27D: mov     [esp+2E8h+var_248], ecx
0x95C284: fmul    st, st(1)
0x95C286: mov     ecx, [ebp+0Ch]
0x95C289: mov     [esp+2E8h+var_244], edx
0x95C290: mov     [esp+2E8h+var_240], ecx
0x95C297: fstp    [esp+2E8h+var_21C]
0x95C29E: shl     edi, 4
0x95C2A1: mov     edx, [edi+eax]
0x95C2A4: fmul    [esp+2E8h+var_218]
0x95C2AB: mov     ecx, [edi+eax+8]
0x95C2AF: add     edi, eax
0x95C2B1: mov     eax, [edi+4]
0x95C2B4: fstp    [esp+2E8h+var_218]
0x95C2BB: mov     [esp+2E8h+var_29C], edx
0x95C2BF: fld     [esp+2E8h+var_24C]
0x95C2C6: mov     edx, [edi+0Ch]
0x95C2C9: fld     [esp+2E8h+var_2C4]
0x95C2CD: mov     [esp+2E8h+var_298], eax
0x95C2D1: fld     st
0x95C2D3: mov     [esp+2E8h+var_294], ecx
0x95C2D7: fmulp   st(2), st
0x95C2D9: mov     [esp+2E8h+var_290], edx
0x95C2DD: fxch    st(1)
0x95C2DF: fstp    [esp+2E8h+var_24C]
0x95C2E6: fld     [esp+2E8h+var_248]
0x95C2ED: fmul    st, st(1)
0x95C2EF: fstp    [esp+2E8h+var_248]
0x95C2F6: fld     [esp+2E8h+var_244]
0x95C2FD: fmul    st, st(1)
0x95C2FF: fstp    [esp+2E8h+var_244]
0x95C306: fmul    [esp+2E8h+var_240]
0x95C30D: fstp    [esp+2E8h+var_240]
0x95C314: fld     [esp+2E8h+var_29C]
0x95C318: fld     [esp+2E8h+var_2D0]
0x95C31C: fld     st
0x95C31E: fmulp   st(2), st
0x95C320: fxch    st(1)
0x95C322: fstp    [esp+2E8h+var_29C]
0x95C326: mov     eax, [esp+2E8h+var_29C]
0x95C32A: fld     [esp+2E8h+var_298]
0x95C32E: mov     [esp+2E8h+var_234], eax
0x95C335: fmul    st, st(1)
0x95C337: fstp    [esp+2E8h+var_298]
0x95C33B: mov     ecx, [esp+2E8h+var_298]
0x95C33F: fld     [esp+2E8h+var_294]
0x95C343: mov     [esp+2E8h+var_230], ecx
0x95C34A: fmul    st, st(1)
0x95C34C: fstp    [esp+2E8h+var_294]
0x95C350: mov     edx, [esp+2E8h+var_294]
0x95C354: mov     [esp+2E8h+var_22C], edx
0x95C35B: fmul    [esp+2E8h+var_290]
0x95C35F: fstp    [esp+2E8h+var_290]
0x95C363: mov     eax, [esp+2E8h+var_290]
0x95C367: fld     [esp+2E8h+var_29C]
0x95C36B: mov     [esp+2E8h+var_228], eax
0x95C372: fadd    [esp+2E8h+var_24C]
0x95C379: fstp    [esp+2E8h+var_234]
0x95C380: mov     ecx, [esp+2E8h+var_234]
0x95C387: fld     [esp+2E8h+var_230]
0x95C38E: mov     [esp+2E8h+var_20C], ecx
0x95C395: fadd    [esp+2E8h+var_248]
0x95C39C: fstp    [esp+2E8h+var_230]
0x95C3A3: mov     edx, [esp+2E8h+var_230]
0x95C3AA: fld     [esp+2E8h+var_22C]
0x95C3B1: mov     [esp+2E8h+var_208], edx
0x95C3B8: fadd    [esp+2E8h+var_244]
0x95C3BF: fstp    [esp+2E8h+var_22C]
0x95C3C6: mov     eax, [esp+2E8h+var_22C]
0x95C3CD: fld     [esp+2E8h+var_228]
0x95C3D4: mov     [esp+2E8h+var_204], eax
0x95C3DB: fadd    [esp+2E8h+var_240]
0x95C3E2: fstp    [esp+2E8h+var_228]
0x95C3E9: mov     ecx, [esp+2E8h+var_228]
0x95C3F0: fld     [esp+2E8h+var_234]
0x95C3F7: mov     [esp+2E8h+var_200], ecx
0x95C3FE: fadd    [esp+2E8h+var_224]
0x95C405: fstp    [esp+2E8h+var_20C]
0x95C40C: mov     edx, [esp+2E8h+var_20C]
0x95C413: fld     [esp+2E8h+var_208]
0x95C41A: mov     [esi+34h], edx
0x95C41D: fadd    [esp+2E8h+var_220]
0x95C424: fstp    [esp+2E8h+var_208]
0x95C42B: mov     eax, [esp+2E8h+var_208]
0x95C432: fld     [esp+2E8h+var_204]
0x95C439: mov     [esi+38h], eax
0x95C43C: fadd    [esp+2E8h+var_21C]
0x95C443: fstp    [esp+2E8h+var_204]
0x95C44A: mov     ecx, [esp+2E8h+var_204]
0x95C451: fld     [esp+2E8h+var_200]
0x95C458: mov     [esi+3Ch], ecx
0x95C45B: fadd    [esp+2E8h+var_218]
0x95C462: fstp    [esp+2E8h+var_200]
0x95C469: mov     edx, [esp+2E8h+var_200]
0x95C470: mov     [esi+40h], edx
0x95C473: jmp     short loc_95C4BC
0x95C475: mov     eax, ds:0B25AE0h
0x95C47A: mov     [esi+34h], eax
0x95C47D: mov     ecx, ds:0B25AE4h
0x95C483: mov     [esi+38h], ecx
0x95C486: mov     edx, ds:0B25AE8h
0x95C48C: mov     [esi+3Ch], edx
0x95C48F: mov     eax, ds:0B25AECh
0x95C494: mov     [esi+40h], eax
0x95C497: jmp     short loc_95C4BC
0x95C499: mov     ecx, ds:0B25AE0h
0x95C49F: mov     [esi+34h], ecx
0x95C4A2: mov     edx, ds:0B25AE4h
0x95C4A8: mov     [esi+38h], edx
0x95C4AB: mov     eax, ds:0B25AE8h
0x95C4B0: mov     [esi+3Ch], eax
0x95C4B3: mov     ecx, ds:0B25AECh
0x95C4B9: mov     [esi+40h], ecx
0x95C4BC: mov     eax, [esp+2E8h+arg_8]
0x95C4C3: lea     edx, [esp+2E8h+var_2BC]
0x95C4C7: push    edx
0x95C4C8: lea     ecx, [eax+18h]
0x95C4CB: mov     [esp+2ECh+var_2BC], esi
0x95C4CF: mov     [eax+28h], esi
0x95C4D2: call    sub_4BACA0
0x95C4D7: mov     eax, [esp+2E8h+arg_8]
0x95C4DE: cmp     dword ptr [eax], 1
0x95C4E1: jnz     short loc_95C4EB
0x95C4E3: mov     ecx, eax
0x95C4E5: cmp     dword ptr [ecx+4], 1
0x95C4E9: jz      short loc_95C50D
0x95C4EB: mov     eax, [esp+2E8h+var_2D4]
0x95C4EF: add     eax, 1
0x95C4F2: cmp     ax, word ptr [esp+2E8h+var_DC]
0x95C4FA: mov     [esp+2E8h+var_2D4], eax
0x95C4FE: jb      loc_95B3F1
0x95C504: mov     edi, [esp+2E8h+var_2CC]
0x95C508: jmp     loc_95B3D4
0x95C50D: cmp     [esp+2E8h+var_2D6], 0
0x95C512: jz      short loc_95C51D
0x95C514: mov     ecx, [esp+2E8h+var_2CC]
0x95C518: call    sub_728B20
0x95C51D: pop     edi
0x95C51E: pop     esi
0x95C51F: pop     ebp
0x95C520: mov     al, 1
0x95C522: pop     ebx
0x95C523: add     esp, 2D8h
0x95C529: retn
