0x7D7F80: push    0FFFFFFFFh
0x7D7F82: push    offset SEH_798CC0
0x7D7F87: mov     eax, large fs:0
0x7D7F8D: push    eax
0x7D7F8E: sub     esp, 0Ch
0x7D7F91: push    ebx
0x7D7F92: push    ebp
0x7D7F93: push    esi
0x7D7F94: push    edi
0x7D7F95: mov     eax, ds:0B30AACh
0x7D7F9A: xor     eax, esp
0x7D7F9C: push    eax
0x7D7F9D: lea     eax, [esp+2Ch+var_C]
0x7D7FA1: mov     large fs:0, eax
0x7D7FA7: mov     ebx, ecx
0x7D7FA9: mov     [esp+2Ch+var_14], ebx
0x7D7FAD: mov     ebp, [esp+2Ch+arg_0]
0x7D7FB1: mov     eax, [ebp+0B4h]
0x7D7FB7: movzx   eax, word ptr [eax+8]
0x7D7FBB: xor     esi, esi
0x7D7FBD: push    2Ch ; ','; Size
0x7D7FBF: mov     [esp+30h+var_18], esi
0x7D7FC3: movzx   edi, ax
0x7D7FC6: call    FormHeapAlloc
0x7D7FCB: add     esp, 4
0x7D7FCE: mov     [esp+2Ch+var_10], eax
0x7D7FD2: cmp     eax, esi
0x7D7FD4: mov     [esp+2Ch+var_4], esi
0x7D7FD8: jz      short loc_7D7FE4
0x7D7FDA: push    edi
0x7D7FDB: mov     ecx, eax
0x7D7FDD: call    sub_4C14D0
0x7D7FE2: mov     esi, eax
0x7D7FE4: mov     ecx, [ebp+1Ch]
0x7D7FE7: test    ecx, ecx
0x7D7FE9: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7D7FF1: jz      short loc_7D8001
0x7D7FF3: push    offset aTex; "tex %"
0x7D7FF8: call    NiObjectNET_GetExtraData
0x7D7FFD: mov     [esp+2Ch+var_18], eax
0x7D8001: mov     eax, [ebx+0D4h]
0x7D8007: xor     ebp, ebp
0x7D8009: test    eax, eax
0x7D800B: jz      short loc_7D801C
0x7D800D: cmp     [eax+0Ch], ebp
0x7D8010: jz      short loc_7D801C
0x7D8012: cmp     [eax+10h], ebp
0x7D8015: jz      short loc_7D801C
0x7D8017: mov     ebp, 2
0x7D801C: mov     ecx, [esp+2Ch+var_18]
0x7D8020: test    ecx, ecx
0x7D8022: jz      short loc_7D8027
0x7D8024: add     ebp, 2
0x7D8027: test    eax, eax
0x7D8029: jz      loc_7D80C8
0x7D802F: cmp     dword ptr [eax+0Ch], 0
0x7D8033: jz      loc_7D80C8
0x7D8039: cmp     dword ptr [eax+10h], 0
0x7D803D: jz      loc_7D80C8
0x7D8043: cmp     ebp, 2
0x7D8046: lea     eax, [ebp-1]
0x7D8049: jg      short loc_7D804D
0x7D804B: mov     eax, ebp
0x7D804D: push    eax
0x7D804E: mov     ecx, esi
0x7D8050: call    sub_7263B0
0x7D8055: push    ebp
0x7D8056: mov     ecx, esi
0x7D8058: call    sub_726B80
0x7D805D: mov     eax, [esp+2Ch+var_14]
0x7D8061: mov     ecx, [eax+0D4h]
0x7D8067: mov     edx, [ecx+0Ch]
0x7D806A: lea     ebx, [edi+edi*2]
0x7D806D: push    0; char
0x7D806F: add     ebx, ebx
0x7D8071: add     ebx, ebx
0x7D8073: push    ebx; Src
0x7D8074: push    edx; char
0x7D8075: push    0; int
0x7D8077: mov     ecx, esi
0x7D8079: call    sub_7260B0
0x7D807E: push    0Ch
0x7D8080: push    0Ch
0x7D8082: push    edi
0x7D8083: push    3
0x7D8085: push    0
0x7D8087: push    0
0x7D8089: push    0
0x7D808B: mov     ecx, esi
0x7D808D: call    sub_7262A0
0x7D8092: mov     eax, [esp+2Ch+var_14]
0x7D8096: mov     ecx, [eax+0D4h]
0x7D809C: mov     edx, [ecx+10h]
0x7D809F: push    0; char
0x7D80A1: push    ebx; Src
0x7D80A2: push    edx; char
0x7D80A3: push    1; int
0x7D80A5: mov     ecx, esi
0x7D80A7: call    sub_7260B0
0x7D80AC: push    0Ch
0x7D80AE: push    0Ch
0x7D80B0: push    edi
0x7D80B1: push    3
0x7D80B3: push    0
0x7D80B5: push    1
0x7D80B7: push    1
0x7D80B9: mov     ecx, esi
0x7D80BB: call    sub_7262A0
0x7D80C0: mov     ebx, [esp+2Ch+var_14]
0x7D80C4: mov     ecx, [esp+2Ch+var_18]
0x7D80C8: test    ecx, ecx
0x7D80CA: jz      short loc_7D8145
0x7D80CC: mov     eax, [ecx+0Ch]
0x7D80CF: test    eax, eax
0x7D80D1: mov     [ebx+0D8h], eax
0x7D80D7: jz      short loc_7D80E2
0x7D80D9: or      dword ptr [ebx+1Ch], 4000h
0x7D80E0: jmp     short loc_7D80E9
0x7D80E2: and     dword ptr [ebx+1Ch], 0FFFFBFFFh
0x7D80E9: push    0; char
0x7D80EB: mov     ecx, edi
0x7D80ED: shl     ecx, 5
0x7D80F0: push    ecx; Src
0x7D80F1: mov     dword ptr [ebx+24h], 0
0x7D80F8: push    eax; char
0x7D80F9: lea     ebx, [ebp-1]
0x7D80FC: push    ebx; int
0x7D80FD: mov     ecx, esi
0x7D80FF: call    sub_7260B0
0x7D8104: push    20h ; ' '
0x7D8106: push    10h
0x7D8108: push    edi
0x7D8109: push    4
0x7D810B: push    0
0x7D810D: push    ebx
0x7D810E: add     ebp, 0FFFFFFFEh
0x7D8111: push    ebp
0x7D8112: mov     ecx, esi
0x7D8114: call    sub_7262A0
0x7D8119: push    20h ; ' '
0x7D811B: push    10h
0x7D811D: push    edi
0x7D811E: push    4
0x7D8120: push    10h
0x7D8122: push    ebx
0x7D8123: push    ebx
0x7D8124: mov     ecx, esi
0x7D8126: call    sub_7262A0
0x7D812B: mov     eax, [esp+2Ch+var_18]
0x7D812F: xor     ecx, ecx
0x7D8131: mov     [eax+10h], ecx
0x7D8134: mov     [eax+0Ch], ecx
0x7D8137: mov     ecx, [esp+2Ch+arg_0]
0x7D813B: push    offset aTex; "tex %"
0x7D8140: call    sub_6FFAC0
0x7D8145: mov     eax, esi
0x7D8147: mov     ecx, [esp+2Ch+var_C]
0x7D814B: mov     large fs:0, ecx
0x7D8152: pop     ecx
0x7D8153: pop     edi
0x7D8154: pop     esi
0x7D8155: pop     ebp
0x7D8156: pop     ebx
0x7D8157: add     esp, 18h
0x7D815A: retn    4
