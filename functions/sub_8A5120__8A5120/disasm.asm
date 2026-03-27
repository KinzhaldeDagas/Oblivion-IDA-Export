0x8A5120: push    0FFFFFFFFh
0x8A5122: push    offset SEH_8A5120
0x8A5127: mov     eax, large fs:0
0x8A512D: push    eax
0x8A512E: sub     esp, 14h
0x8A5131: push    ebx
0x8A5132: push    ebp
0x8A5133: push    esi
0x8A5134: push    edi
0x8A5135: mov     eax, ds:0B30AACh
0x8A513A: xor     eax, esp
0x8A513C: push    eax
0x8A513D: lea     eax, [esp+34h+var_C]
0x8A5141: mov     large fs:0, eax
0x8A5147: mov     edi, ecx
0x8A5149: mov     [esp+34h+var_10], edi
0x8A514D: mov     ebp, [esp+34h+arg_0]
0x8A5151: push    ebp
0x8A5152: mov     [esp+38h+var_20], 0
0x8A515A: call    sub_89F9A0
0x8A515F: mov     ecx, edi
0x8A5161: call    sub_8A4740
0x8A5166: push    1
0x8A5168: lea     ecx, [esp+38h+arg_0]
0x8A516C: push    ecx
0x8A516D: mov     [esp+3Ch+var_1C], eax
0x8A5171: mov     eax, [ebp+220h]
0x8A5177: push    4
0x8A5179: lea     edx, [esp+40h+var_1C]
0x8A517D: push    edx
0x8A517E: push    eax
0x8A517F: mov     eax, [eax+8]
0x8A5182: mov     [esp+48h+arg_0], 4
0x8A518A: call    eax
0x8A518C: add     esp, 14h
0x8A518F: add     edi, 10h
0x8A5192: test    edi, edi
0x8A5194: jz      short loc_8A51B0
0x8A5196: lea     ecx, [esp+34h+arg_0]
0x8A519A: push    ecx
0x8A519B: mov     ecx, edi
0x8A519D: call    sub_677C70
0x8A51A2: or      [esp+34h+var_20], 1
0x8A51A7: cmp     dword ptr [eax], 0
0x8A51AA: jz      short loc_8A51B0
0x8A51AC: mov     bl, 1
0x8A51AE: jmp     short loc_8A51B2
0x8A51B0: xor     bl, bl
0x8A51B2: test    byte ptr [esp+34h+var_20], 1
0x8A51B7: jz      short loc_8A51E2
0x8A51B9: mov     esi, [esp+34h+arg_0]
0x8A51BD: and     [esp+34h+var_20], 0FFFFFFFEh
0x8A51C2: test    esi, esi
0x8A51C4: jz      short loc_8A51E2
0x8A51C6: lea     edx, [esi+4]
0x8A51C9: push    edx; lpAddend
0x8A51CA: call    dword ptr ds:0A2807Ch
0x8A51D0: test    eax, eax
0x8A51D2: jnz     short loc_8A51E2
0x8A51D4: test    esi, esi
0x8A51D6: jz      short loc_8A51E2
0x8A51D8: mov     eax, [esi]
0x8A51DA: mov     edx, [eax]
0x8A51DC: push    1
0x8A51DE: mov     ecx, esi
0x8A51E0: call    edx
0x8A51E2: test    bl, bl
0x8A51E4: jz      short loc_8A523D
0x8A51E6: lea     eax, [esp+34h+var_18]
0x8A51EA: push    eax
0x8A51EB: mov     ecx, edi
0x8A51ED: call    sub_677C70
0x8A51F2: mov     eax, [eax]
0x8A51F4: mov     edx, [ebp+0]
0x8A51F7: push    eax
0x8A51F8: mov     eax, [edx+2Ch]
0x8A51FB: mov     ecx, ebp
0x8A51FD: mov     [esp+38h+var_4], 0
0x8A5205: call    eax
0x8A5207: mov     eax, [esp+34h+var_18]
0x8A520B: test    eax, eax
0x8A520D: mov     [esp+34h+var_4], 0FFFFFFFFh
0x8A5215: jz      short loc_8A5235
0x8A5217: mov     esi, eax
0x8A5219: add     eax, 4
0x8A521C: push    eax; lpAddend
0x8A521D: call    dword ptr ds:0A2807Ch
0x8A5223: test    eax, eax
0x8A5225: jnz     short loc_8A5235
0x8A5227: test    esi, esi
0x8A5229: jz      short loc_8A5235
0x8A522B: mov     edx, [esi]
0x8A522D: mov     eax, [edx]
0x8A522F: push    1
0x8A5231: mov     ecx, esi
0x8A5233: call    eax
0x8A5235: mov     edi, [edi+4]
0x8A5238: jmp     loc_8A5192
0x8A523D: mov     edx, [esp+34h+var_10]
0x8A5241: mov     eax, [ebp+220h]
0x8A5247: push    1
0x8A5249: lea     ecx, [esp+38h+var_14]
0x8A524D: push    ecx
0x8A524E: push    4
0x8A5250: add     edx, 18h
0x8A5253: push    edx
0x8A5254: push    eax
0x8A5255: mov     eax, [eax+8]
0x8A5258: mov     [esp+48h+var_14], 4
0x8A5260: call    eax
0x8A5262: add     esp, 14h
0x8A5265: mov     ecx, [esp+34h+var_C]
0x8A5269: mov     large fs:0, ecx
0x8A5270: pop     ecx
0x8A5271: pop     edi
0x8A5272: pop     esi
0x8A5273: pop     ebp
0x8A5274: pop     ebx
0x8A5275: add     esp, 20h
0x8A5278: retn    4
