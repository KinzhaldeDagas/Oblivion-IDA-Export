0x8C6680: push    0FFFFFFFFh
0x8C6682: push    offset SummonCreatureEffect_Apply_SEH
0x8C6687: mov     eax, large fs:0
0x8C668D: push    eax
0x8C668E: sub     esp, 18h
0x8C6691: push    ebx
0x8C6692: push    ebp
0x8C6693: push    esi
0x8C6694: push    edi
0x8C6695: mov     eax, ds:0B30AACh
0x8C669A: xor     eax, esp
0x8C669C: push    eax
0x8C669D: lea     eax, [esp+38h+var_C]
0x8C66A1: mov     large fs:0, eax
0x8C66A7: mov     ebp, ecx
0x8C66A9: xor     edi, edi
0x8C66AB: cmp     ebp, edi
0x8C66AD: jz      short loc_8C66BF
0x8C66AF: mov     eax, [ebp+8]
0x8C66B2: cmp     eax, edi
0x8C66B4: jz      short loc_8C66BF
0x8C66B6: mov     eax, [eax+30h]
0x8C66B9: mov     [esp+38h+var_24], eax
0x8C66BD: jmp     short loc_8C66C3
0x8C66BF: mov     [esp+38h+var_24], edi
0x8C66C3: cmp     [esp+38h+var_24], edi
0x8C66C7: mov     [esp+38h+var_20], edi
0x8C66CB: jle     loc_8C6801
0x8C66D1: test    ebp, ebp
0x8C66D3: jz      short loc_8C66E4
0x8C66D5: mov     eax, [ebp+8]
0x8C66D8: test    eax, eax
0x8C66DA: jz      short loc_8C66E4
0x8C66DC: mov     ecx, [eax+28h]
0x8C66DF: lea     ebx, [ecx+edi*8]
0x8C66E2: jmp     short loc_8C66E9
0x8C66E4: mov     ebx, offset dword_BA8138
0x8C66E9: mov     esi, [ebx]
0x8C66EB: test    esi, esi
0x8C66ED: jz      loc_8C67F0
0x8C66F3: mov     edx, [esi]
0x8C66F5: mov     eax, [edx+4]
0x8C66F8: mov     ecx, esi
0x8C66FA: call    eax
0x8C66FC: test    eax, eax
0x8C66FE: jz      short loc_8C670E
0x8C6700: cmp     eax, offset dword_B3FD0C
0x8C6705: jz      short loc_8C6747
0x8C6707: mov     eax, [eax+4]
0x8C670A: test    eax, eax
0x8C670C: jnz     short loc_8C6700
0x8C670E: xor     al, al
0x8C6710: neg     al
0x8C6712: sbb     eax, eax
0x8C6714: and     eax, esi
0x8C6716: mov     esi, eax
0x8C6718: jz      loc_8C67F0
0x8C671E: push    0C0h ; 'À'; Size
0x8C6723: call    FormHeapAlloc
0x8C6728: add     esp, 4
0x8C672B: mov     [esp+38h+var_1C], eax
0x8C672F: test    eax, eax
0x8C6731: mov     [esp+38h+var_4], 0
0x8C6739: jz      short loc_8C674B
0x8C673B: push    esi
0x8C673C: mov     ecx, eax
0x8C673E: call    sub_719A20
0x8C6743: mov     esi, eax
0x8C6745: jmp     short loc_8C674D
0x8C6747: mov     al, 1
0x8C6749: jmp     short loc_8C6710
0x8C674B: xor     esi, esi
0x8C674D: push    offset aBhknitristrips; "bhkNiTriStripsShape"
0x8C6752: mov     ecx, esi
0x8C6754: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x8C675C: call    NiObjectNET_SetName
0x8C6761: mov     ecx, ebp
0x8C6763: call    sub_8C6210
0x8C6768: fabs
0x8C676A: fstp    [esp+38h+var_1C]
0x8C676E: push    esi
0x8C676F: fld     [esp+3Ch+var_1C]
0x8C6773: mov     ecx, ebp
0x8C6775: fstp    dword ptr [esi+60h]
0x8C6778: mov     edx, [ebp+0]
0x8C677B: mov     eax, [edx+98h]
0x8C6781: call    eax
0x8C6783: push    2
0x8C6785: mov     ecx, esi
0x8C6787: call    NiNode_GetNiPropertyByID
0x8C678C: mov     edi, eax
0x8C678E: test    edi, edi
0x8C6790: jz      short loc_8C67DB
0x8C6792: mov     eax, [ebx]
0x8C6794: test    eax, eax
0x8C6796: jz      short loc_8C67A4
0x8C6798: movzx   eax, word ptr [eax+2Ch]
0x8C679C: shr     eax, 6
0x8C679F: and     eax, 3Fh
0x8C67A2: jmp     short loc_8C67A6
0x8C67A4: xor     eax, eax
0x8C67A6: fldz
0x8C67A8: lea     ecx, [esp+38h+var_18]
0x8C67AC: fst     [esp+38h+var_18]
0x8C67B0: push    ecx
0x8C67B1: fst     [esp+3Ch+var_14]
0x8C67B5: push    eax
0x8C67B6: fstp    [esp+40h+var_10]
0x8C67BA: call    sub_8A2730
0x8C67BF: mov     edx, [esp+40h+var_18]
0x8C67C3: mov     eax, [esp+40h+var_14]
0x8C67C7: mov     ecx, [esp+40h+var_10]
0x8C67CB: mov     [edi+40h], edx
0x8C67CE: add     esp, 8
0x8C67D1: add     dword ptr [edi+54h], 1
0x8C67D5: mov     [edi+44h], eax
0x8C67D8: mov     [edi+48h], ecx
0x8C67DB: mov     ecx, [esp+38h+arg_0]
0x8C67DF: mov     edx, [ecx]
0x8C67E1: mov     eax, [edx+84h]
0x8C67E7: push    0
0x8C67E9: push    esi
0x8C67EA: call    eax
0x8C67EC: mov     edi, [esp+38h+var_20]
0x8C67F0: add     edi, 1
0x8C67F3: cmp     edi, [esp+38h+var_24]
0x8C67F7: mov     [esp+38h+var_20], edi
0x8C67FB: jl      loc_8C66D1
0x8C6801: mov     ecx, dword ptr [esp+38h+var_C]
0x8C6805: mov     large fs:0, ecx
0x8C680C: pop     ecx
0x8C680D: pop     edi
0x8C680E: pop     esi
0x8C680F: pop     ebp
0x8C6810: pop     ebx
0x8C6811: add     esp, 24h
0x8C6814: retn    4
