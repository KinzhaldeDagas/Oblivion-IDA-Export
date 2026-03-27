0x8A53E0: push    0FFFFFFFFh
0x8A53E2: push    offset SEH_8A53E0
0x8A53E7: mov     eax, large fs:0
0x8A53ED: push    eax
0x8A53EE: sub     esp, 14h
0x8A53F1: push    ebx
0x8A53F2: push    ebp
0x8A53F3: push    esi
0x8A53F4: push    edi
0x8A53F5: mov     eax, ds:0B30AACh
0x8A53FA: xor     eax, esp
0x8A53FC: push    eax
0x8A53FD: lea     eax, [esp+34h+var_C]
0x8A5401: mov     large fs:0, eax
0x8A5407: mov     ebp, ecx
0x8A5409: mov     [esp+34h+var_18], ebp
0x8A540D: mov     eax, [ebp+18h]
0x8A5410: xor     esi, esi
0x8A5412: shr     eax, 2
0x8A5415: test    al, 1
0x8A5417: mov     [esp+34h+var_20], esi
0x8A541B: jz      loc_8A5561
0x8A5421: mov     edx, [ebp+0]
0x8A5424: mov     eax, [edx+58h]
0x8A5427: call    eax
0x8A5429: cmp     eax, esi
0x8A542B: jz      short loc_8A5439
0x8A542D: mov     ecx, [eax+2B0h]
0x8A5433: mov     [esp+34h+var_1C], ecx
0x8A5437: jmp     short loc_8A543D
0x8A5439: mov     [esp+34h+var_1C], esi
0x8A543D: cmp     [esp+34h+var_1C], esi
0x8A5441: jz      loc_8A5561
0x8A5447: add     ebp, 10h
0x8A544A: test    ebp, ebp
0x8A544C: jz      short loc_8A5468
0x8A544E: lea     edx, [esp+34h+var_14]
0x8A5452: push    edx
0x8A5453: mov     ecx, ebp
0x8A5455: call    sub_677C70
0x8A545A: or      [esp+34h+var_20], 1
0x8A545F: cmp     dword ptr [eax], 0
0x8A5462: jz      short loc_8A5468
0x8A5464: mov     bl, 1
0x8A5466: jmp     short loc_8A546A
0x8A5468: xor     bl, bl
0x8A546A: test    byte ptr [esp+34h+var_20], 1
0x8A546F: jz      short loc_8A549A
0x8A5471: mov     esi, [esp+34h+var_14]
0x8A5475: and     [esp+34h+var_20], 0FFFFFFFEh
0x8A547A: test    esi, esi
0x8A547C: jz      short loc_8A549A
0x8A547E: lea     eax, [esi+4]
0x8A5481: push    eax; lpAddend
0x8A5482: call    dword ptr ds:0A2807Ch
0x8A5488: test    eax, eax
0x8A548A: jnz     short loc_8A549A
0x8A548C: test    esi, esi
0x8A548E: jz      short loc_8A549A
0x8A5490: mov     edx, [esi]
0x8A5492: mov     eax, [edx]
0x8A5494: push    1
0x8A5496: mov     ecx, esi
0x8A5498: call    eax
0x8A549A: test    bl, bl
0x8A549C: jz      loc_8A5559
0x8A54A2: lea     ecx, [esp+34h+var_10]
0x8A54A6: push    ecx
0x8A54A7: mov     ecx, ebp
0x8A54A9: call    sub_677C70
0x8A54AE: mov     esi, [eax]
0x8A54B0: test    esi, esi
0x8A54B2: mov     [esp+34h+var_4], 0
0x8A54BA: jz      short loc_8A54E8
0x8A54BC: mov     edx, [esi]
0x8A54BE: mov     eax, [edx+4]
0x8A54C1: mov     ecx, esi
0x8A54C3: call    eax
0x8A54C5: test    eax, eax
0x8A54C7: jz      short loc_8A54DE
0x8A54C9: lea     esp, [esp+0]
0x8A54D0: cmp     eax, offset stru_BA7D50
0x8A54D5: jz      short loc_8A5543
0x8A54D7: mov     eax, [eax+4]
0x8A54DA: test    eax, eax
0x8A54DC: jnz     short loc_8A54D0
0x8A54DE: xor     al, al
0x8A54E0: neg     al
0x8A54E2: sbb     eax, eax
0x8A54E4: and     eax, esi
0x8A54E6: mov     esi, eax
0x8A54E8: mov     edi, [esp+34h+var_10]
0x8A54EC: test    edi, edi
0x8A54EE: mov     [esp+34h+var_4], 0FFFFFFFFh
0x8A54F6: jz      short loc_8A5514
0x8A54F8: lea     ecx, [edi+4]
0x8A54FB: push    ecx; lpAddend
0x8A54FC: call    dword ptr ds:0A2807Ch
0x8A5502: test    eax, eax
0x8A5504: jnz     short loc_8A5514
0x8A5506: test    edi, edi
0x8A5508: jz      short loc_8A5514
0x8A550A: mov     edx, [edi]
0x8A550C: mov     eax, [edx]
0x8A550E: push    1
0x8A5510: mov     ecx, edi
0x8A5512: call    eax
0x8A5514: test    esi, esi
0x8A5516: jz      loc_8A544A
0x8A551C: mov     edx, [esi]
0x8A551E: mov     eax, [edx+58h]
0x8A5521: mov     ecx, esi
0x8A5523: call    eax
0x8A5525: test    eax, eax
0x8A5527: mov     edx, [esi]
0x8A5529: mov     ecx, esi
0x8A552B: jz      short loc_8A5547
0x8A552D: mov     eax, [edx+60h]
0x8A5530: call    eax
0x8A5532: mov     ecx, [esp+34h+var_18]
0x8A5536: add     ecx, 10h
0x8A5539: call    sub_67A850
0x8A553E: jmp     loc_8A544A
0x8A5543: mov     al, 1
0x8A5545: jmp     short loc_8A54E0
0x8A5547: mov     eax, [esp+34h+var_1C]
0x8A554B: mov     edx, [edx+5Ch]
0x8A554E: mov     ebp, [ebp+4]
0x8A5551: push    eax
0x8A5552: call    edx
0x8A5554: jmp     loc_8A544A
0x8A5559: mov     eax, [esp+34h+var_18]
0x8A555D: and     dword ptr [eax+18h], 0FFFFFFFBh
0x8A5561: mov     ecx, dword ptr [esp+34h+var_C]
0x8A5565: mov     large fs:0, ecx
0x8A556C: pop     ecx
0x8A556D: pop     edi
0x8A556E: pop     esi
0x8A556F: pop     ebp
0x8A5570: pop     ebx
0x8A5571: add     esp, 20h
0x8A5574: retn
