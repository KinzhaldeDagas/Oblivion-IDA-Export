0x84CFF0: push    0FFFFFFFFh
0x84CFF2: push    offset SEH_84D2B0
0x84CFF7: mov     eax, large fs:0
0x84CFFD: push    eax
0x84CFFE: sub     esp, 8
0x84D001: push    ebx
0x84D002: push    ebp
0x84D003: push    esi
0x84D004: push    edi
0x84D005: mov     eax, ds:0B30AACh
0x84D00A: xor     eax, esp
0x84D00C: push    eax
0x84D00D: lea     eax, [esp+28h+var_C]
0x84D011: mov     large fs:0, eax
0x84D017: mov     [esp+28h+var_10], ecx
0x84D01B: mov     eax, [esp+28h+arg_8]
0x84D01F: mov     eax, [eax+10h]
0x84D022: mov     esi, ds:0B45640h
0x84D028: push    eax
0x84D029: mov     [esp+2Ch+var_14], esi
0x84D02D: call    sub_848C40
0x84D032: mov     ecx, [esi+24h]
0x84D035: mov     esi, [esp+28h+arg_C]
0x84D039: mov     edx, [esi]
0x84D03B: mov     ebp, [ecx]
0x84D03D: mov     eax, [edx+88h]
0x84D043: push    0
0x84D045: mov     ecx, esi
0x84D047: call    eax
0x84D049: mov     edi, [ebp+4]
0x84D04C: mov     ebx, eax
0x84D04E: cmp     edi, ebx
0x84D050: jz      short loc_84D083
0x84D052: test    edi, edi
0x84D054: jz      short loc_84D072
0x84D056: lea     ecx, [edi+4]
0x84D059: push    ecx; lpAddend
0x84D05A: call    dword ptr ds:0A2807Ch
0x84D060: test    eax, eax
0x84D062: jnz     short loc_84D072
0x84D064: test    edi, edi
0x84D066: jz      short loc_84D072
0x84D068: mov     edx, [edi]
0x84D06A: mov     eax, [edx]
0x84D06C: push    1
0x84D06E: mov     ecx, edi
0x84D070: call    eax
0x84D072: test    ebx, ebx
0x84D074: mov     [ebp+4], ebx
0x84D077: jz      short loc_84D083
0x84D079: add     ebx, 4
0x84D07C: push    ebx; lpAddend
0x84D07D: call    dword ptr ds:0A28078h
0x84D083: test    ebp, ebp
0x84D085: jz      short loc_84D0A1
0x84D087: cmp     byte ptr ds:0B42CDDh, 0
0x84D08E: jz      short loc_84D0A1
0x84D090: mov     edx, [esi]
0x84D092: mov     eax, [edx+78h]
0x84D095: mov     ecx, esi
0x84D097: call    eax
0x84D099: push    eax
0x84D09A: mov     ecx, ebp
0x84D09C: call    sub_7715E0
0x84D0A1: mov     ecx, [esp+28h+var_14]
0x84D0A5: mov     edx, [ecx+24h]
0x84D0A8: mov     eax, [esi]
0x84D0AA: mov     ebp, [edx+4]
0x84D0AD: mov     edx, [eax+8Ch]
0x84D0B3: push    0
0x84D0B5: mov     ecx, esi
0x84D0B7: call    edx
0x84D0B9: test    eax, eax
0x84D0BB: jz      short loc_84D0CF
0x84D0BD: mov     eax, [esi]
0x84D0BF: mov     edx, [eax+8Ch]
0x84D0C5: push    0
0x84D0C7: mov     ecx, esi
0x84D0C9: call    edx
0x84D0CB: mov     ebx, eax
0x84D0CD: jmp     short loc_84D0E4
0x84D0CF: test    dword ptr [esi+1Ch], 80h
0x84D0D6: mov     ebx, ds:0B430F0h
0x84D0DC: ja      short loc_84D0E4
0x84D0DE: mov     ebx, ds:0B430DCh
0x84D0E4: mov     edi, [ebp+4]
0x84D0E7: cmp     edi, ebx
0x84D0E9: jz      short loc_84D11C
0x84D0EB: test    edi, edi
0x84D0ED: jz      short loc_84D10B
0x84D0EF: lea     eax, [edi+4]
0x84D0F2: push    eax; lpAddend
0x84D0F3: call    dword ptr ds:0A2807Ch
0x84D0F9: test    eax, eax
0x84D0FB: jnz     short loc_84D10B
0x84D0FD: test    edi, edi
0x84D0FF: jz      short loc_84D10B
0x84D101: mov     edx, [edi]
0x84D103: mov     eax, [edx]
0x84D105: push    1
0x84D107: mov     ecx, edi
0x84D109: call    eax
0x84D10B: test    ebx, ebx
0x84D10D: mov     [ebp+4], ebx
0x84D110: jz      short loc_84D11C
0x84D112: add     ebx, 4
0x84D115: push    ebx; lpAddend
0x84D116: call    dword ptr ds:0A28078h
0x84D11C: test    ebp, ebp
0x84D11E: jz      short loc_84D13A
0x84D120: cmp     byte ptr ds:0B42CDDh, 0
0x84D127: jz      short loc_84D13A
0x84D129: mov     edx, [esi]
0x84D12B: mov     eax, [edx+78h]
0x84D12E: mov     ecx, esi
0x84D130: call    eax
0x84D132: push    eax
0x84D133: mov     ecx, ebp
0x84D135: call    sub_7715E0
0x84D13A: mov     ecx, [esp+28h+var_14]
0x84D13E: mov     edx, [ecx+24h]
0x84D141: mov     eax, [esi]
0x84D143: mov     ebx, [edx+8]
0x84D146: mov     edx, [eax+88h]
0x84D14C: push    1
0x84D14E: mov     ecx, esi
0x84D150: call    edx
0x84D152: mov     edi, [ebx+4]
0x84D155: mov     ebp, eax
0x84D157: cmp     edi, ebp
0x84D159: jz      short loc_84D18C
0x84D15B: test    edi, edi
0x84D15D: jz      short loc_84D17B
0x84D15F: lea     eax, [edi+4]
0x84D162: push    eax; lpAddend
0x84D163: call    dword ptr ds:0A2807Ch
0x84D169: test    eax, eax
0x84D16B: jnz     short loc_84D17B
0x84D16D: test    edi, edi
0x84D16F: jz      short loc_84D17B
0x84D171: mov     edx, [edi]
0x84D173: mov     eax, [edx]
0x84D175: push    1
0x84D177: mov     ecx, edi
0x84D179: call    eax
0x84D17B: test    ebp, ebp
0x84D17D: mov     [ebx+4], ebp
0x84D180: jz      short loc_84D18C
0x84D182: add     ebp, 4
0x84D185: push    ebp; lpAddend
0x84D186: call    dword ptr ds:0A28078h
0x84D18C: test    ebx, ebx
0x84D18E: jz      short loc_84D1AA
0x84D190: cmp     byte ptr ds:0B42CDDh, 0
0x84D197: jz      short loc_84D1AA
0x84D199: mov     edx, [esi]
0x84D19B: mov     eax, [edx+78h]
0x84D19E: mov     ecx, esi
0x84D1A0: call    eax
0x84D1A2: push    eax
0x84D1A3: mov     ecx, ebx
0x84D1A5: call    sub_7715E0
0x84D1AA: mov     ebx, [esp+28h+var_14]
0x84D1AE: mov     ecx, [ebx+24h]
0x84D1B1: mov     edi, [ecx+0Ch]
0x84D1B4: mov     edx, [esi]
0x84D1B6: mov     eax, [edx+8Ch]
0x84D1BC: push    1
0x84D1BE: mov     ecx, esi
0x84D1C0: mov     [esp+2Ch+arg_8], edi
0x84D1C4: call    eax
0x84D1C6: test    eax, eax
0x84D1C8: jz      short loc_84D1DC
0x84D1CA: mov     edx, [esi]
0x84D1CC: mov     eax, [edx+8Ch]
0x84D1D2: push    1
0x84D1D4: mov     ecx, esi
0x84D1D6: call    eax
0x84D1D8: mov     ebp, eax
0x84D1DA: jmp     short loc_84D1F1
0x84D1DC: test    dword ptr [esi+1Ch], 80h
0x84D1E3: mov     ebp, ds:0B430F0h
0x84D1E9: ja      short loc_84D1F1
0x84D1EB: mov     ebp, ds:0B430DCh
0x84D1F1: mov     edi, [edi+4]
0x84D1F4: cmp     edi, ebp
0x84D1F6: jz      short loc_84D22F
0x84D1F8: test    edi, edi
0x84D1FA: jz      short loc_84D218
0x84D1FC: lea     ecx, [edi+4]
0x84D1FF: push    ecx; lpAddend
0x84D200: call    dword ptr ds:0A2807Ch
0x84D206: test    eax, eax
0x84D208: jnz     short loc_84D218
0x84D20A: test    edi, edi
0x84D20C: jz      short loc_84D218
0x84D20E: mov     edx, [edi]
0x84D210: mov     eax, [edx]
0x84D212: push    1
0x84D214: mov     ecx, edi
0x84D216: call    eax
0x84D218: test    ebp, ebp
0x84D21A: mov     edi, [esp+28h+arg_8]
0x84D21E: mov     [edi+4], ebp
0x84D221: jz      short loc_84D233
0x84D223: add     ebp, 4
0x84D226: push    ebp; lpAddend
0x84D227: call    dword ptr ds:0A28078h
0x84D22D: jmp     short loc_84D233
0x84D22F: mov     edi, [esp+28h+arg_8]
0x84D233: test    edi, edi
0x84D235: jz      short loc_84D251
0x84D237: cmp     byte ptr ds:0B42CDDh, 0
0x84D23E: jz      short loc_84D251
0x84D240: mov     edx, [esi]
0x84D242: mov     eax, [edx+78h]
0x84D245: mov     ecx, esi
0x84D247: call    eax
0x84D249: push    eax
0x84D24A: mov     ecx, edi
0x84D24C: call    sub_7715E0
0x84D251: mov     edi, 1
0x84D256: add     [ebx+60h], edi
0x84D259: mov     [esp+28h+arg_8], ebx
0x84D25D: mov     esi, [esp+28h+var_10]
0x84D261: mov     edx, [esi+38h]
0x84D264: lea     ecx, [esp+28h+arg_8]
0x84D268: push    ecx
0x84D269: push    edx
0x84D26A: lea     ecx, [esi+40h]
0x84D26D: mov     [esp+30h+var_4], 0
0x84D275: call    sub_76CE40
0x84D27A: or      eax, 0FFFFFFFFh
0x84D27D: add     [ebx+60h], eax
0x84D280: mov     [esp+28h+var_4], eax
0x84D284: jnz     short loc_84D28D
0x84D286: mov     ecx, ebx
0x84D288: call    sub_7604D0
0x84D28D: add     [esi+38h], edi
0x84D290: mov     ecx, [esp+28h+var_C]
0x84D294: mov     large fs:0, ecx
0x84D29B: pop     ecx
0x84D29C: pop     edi
0x84D29D: pop     esi
0x84D29E: pop     ebp
0x84D29F: pop     ebx
0x84D2A0: add     esp, 14h
0x84D2A3: retn    10h
