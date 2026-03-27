0x83CFF0: push    0FFFFFFFFh
0x83CFF2: push    offset SEH_882120
0x83CFF7: mov     eax, large fs:0
0x83CFFD: push    eax
0x83CFFE: push    ebx
0x83CFFF: push    ebp
0x83D000: push    esi
0x83D001: push    edi
0x83D002: mov     eax, ds:0B30AACh
0x83D007: xor     eax, esp
0x83D009: push    eax
0x83D00A: lea     eax, [esp+20h+var_C]
0x83D00E: mov     large fs:0, eax
0x83D014: mov     edi, ecx
0x83D016: mov     eax, [esp+20h+arg_8]
0x83D01A: mov     esi, [eax+0Ch]
0x83D01D: mov     ebx, ds:0B457FCh
0x83D023: push    esi
0x83D024: call    sub_848E50
0x83D029: mov     edx, [edi]
0x83D02B: mov     eax, [esp+20h+arg_0]
0x83D02F: mov     edx, [edx+0BCh]
0x83D035: push    0
0x83D037: push    esi
0x83D038: push    eax
0x83D039: mov     ecx, edi
0x83D03B: call    edx
0x83D03D: mov     esi, [esp+20h+arg_C]
0x83D041: mov     eax, [esi+0A8h]
0x83D047: mov     ds:0B46628h, eax
0x83D04C: mov     ecx, [esi+0ACh]
0x83D052: mov     ds:0B4662Ch, ecx
0x83D058: mov     edx, [esi+0B0h]
0x83D05E: mov     ds:0B46630h, edx
0x83D064: mov     eax, [esi+0B4h]
0x83D06A: mov     ds:0B46634h, eax
0x83D06F: mov     ecx, [ebx+24h]
0x83D072: mov     ebp, [ecx]
0x83D074: mov     edx, [esi]
0x83D076: mov     eax, [edx+88h]
0x83D07C: push    0
0x83D07E: mov     ecx, esi
0x83D080: mov     [esp+24h+arg_8], ebp
0x83D084: call    eax
0x83D086: mov     ebp, [ebp+4]
0x83D089: cmp     ebp, eax
0x83D08B: mov     [esp+20h+arg_0], eax
0x83D08F: jz      short loc_83D0CB
0x83D091: test    ebp, ebp
0x83D093: jz      short loc_83D0B6
0x83D095: lea     ecx, [ebp+4]
0x83D098: push    ecx; lpAddend
0x83D099: call    dword ptr ds:0A2807Ch
0x83D09F: test    eax, eax
0x83D0A1: jnz     short loc_83D0B2
0x83D0A3: test    ebp, ebp
0x83D0A5: jz      short loc_83D0B2
0x83D0A7: mov     edx, [ebp+0]
0x83D0AA: mov     eax, [edx]
0x83D0AC: push    1
0x83D0AE: mov     ecx, ebp
0x83D0B0: call    eax
0x83D0B2: mov     eax, [esp+20h+arg_0]
0x83D0B6: test    eax, eax
0x83D0B8: mov     ecx, [esp+20h+arg_8]
0x83D0BC: mov     [ecx+4], eax
0x83D0BF: jz      short loc_83D0CB
0x83D0C1: add     eax, 4
0x83D0C4: push    eax; lpAddend
0x83D0C5: call    dword ptr ds:0A28078h
0x83D0CB: mov     edx, [esp+20h+arg_8]
0x83D0CF: push    esi
0x83D0D0: push    edx
0x83D0D1: mov     ecx, edi
0x83D0D3: call    sub_848FA0
0x83D0D8: mov     eax, [ebx+24h]
0x83D0DB: mov     ebp, [eax+4]
0x83D0DE: push    0
0x83D0E0: push    esi
0x83D0E1: mov     ecx, edi
0x83D0E3: mov     [esp+28h+arg_8], ebp
0x83D0E7: call    sub_848FD0
0x83D0EC: mov     ebp, [ebp+4]
0x83D0EF: cmp     ebp, eax
0x83D0F1: mov     [esp+20h+arg_0], eax
0x83D0F5: jz      short loc_83D131
0x83D0F7: test    ebp, ebp
0x83D0F9: jz      short loc_83D11C
0x83D0FB: lea     ecx, [ebp+4]
0x83D0FE: push    ecx; lpAddend
0x83D0FF: call    dword ptr ds:0A2807Ch
0x83D105: test    eax, eax
0x83D107: jnz     short loc_83D118
0x83D109: test    ebp, ebp
0x83D10B: jz      short loc_83D118
0x83D10D: mov     edx, [ebp+0]
0x83D110: mov     eax, [edx]
0x83D112: push    1
0x83D114: mov     ecx, ebp
0x83D116: call    eax
0x83D118: mov     eax, [esp+20h+arg_0]
0x83D11C: test    eax, eax
0x83D11E: mov     ecx, [esp+20h+arg_8]
0x83D122: mov     [ecx+4], eax
0x83D125: jz      short loc_83D131
0x83D127: add     eax, 4
0x83D12A: push    eax; lpAddend
0x83D12B: call    dword ptr ds:0A28078h
0x83D131: mov     edx, [esp+20h+arg_8]
0x83D135: push    esi
0x83D136: push    edx
0x83D137: mov     ecx, edi
0x83D139: call    sub_848FA0
0x83D13E: mov     eax, [ebx+24h]
0x83D141: mov     ebp, [eax+10h]
0x83D144: mov     edx, [esi]
0x83D146: mov     eax, [edx+88h]
0x83D14C: push    1
0x83D14E: mov     ecx, esi
0x83D150: mov     [esp+24h+arg_8], ebp
0x83D154: call    eax
0x83D156: mov     ebp, [ebp+4]
0x83D159: cmp     ebp, eax
0x83D15B: mov     [esp+20h+arg_0], eax
0x83D15F: jz      short loc_83D19B
0x83D161: test    ebp, ebp
0x83D163: jz      short loc_83D186
0x83D165: lea     ecx, [ebp+4]
0x83D168: push    ecx; lpAddend
0x83D169: call    dword ptr ds:0A2807Ch
0x83D16F: test    eax, eax
0x83D171: jnz     short loc_83D182
0x83D173: test    ebp, ebp
0x83D175: jz      short loc_83D182
0x83D177: mov     edx, [ebp+0]
0x83D17A: mov     eax, [edx]
0x83D17C: push    1
0x83D17E: mov     ecx, ebp
0x83D180: call    eax
0x83D182: mov     eax, [esp+20h+arg_0]
0x83D186: test    eax, eax
0x83D188: mov     ecx, [esp+20h+arg_8]
0x83D18C: mov     [ecx+4], eax
0x83D18F: jz      short loc_83D19B
0x83D191: add     eax, 4
0x83D194: push    eax; lpAddend
0x83D195: call    dword ptr ds:0A28078h
0x83D19B: mov     edx, [esp+20h+arg_8]
0x83D19F: push    esi
0x83D1A0: push    edx
0x83D1A1: mov     ecx, edi
0x83D1A3: call    sub_848FA0
0x83D1A8: mov     esi, 1
0x83D1AD: add     [ebx+60h], esi
0x83D1B0: mov     [esp+20h+arg_8], ebx
0x83D1B4: mov     ecx, [edi+38h]
0x83D1B7: lea     eax, [esp+20h+arg_8]
0x83D1BB: push    eax
0x83D1BC: push    ecx
0x83D1BD: lea     ecx, [edi+40h]
0x83D1C0: mov     [esp+28h+var_4], 0
0x83D1C8: call    sub_76CE40
0x83D1CD: or      eax, 0FFFFFFFFh
0x83D1D0: add     [ebx+60h], eax
0x83D1D3: mov     [esp+20h+var_4], eax
0x83D1D7: jnz     short loc_83D1E0
0x83D1D9: mov     ecx, ebx
0x83D1DB: call    sub_7604D0
0x83D1E0: add     [edi+38h], esi
0x83D1E3: mov     ecx, [esp+20h+var_C]
0x83D1E7: mov     large fs:0, ecx
0x83D1EE: pop     ecx
0x83D1EF: pop     edi
0x83D1F0: pop     esi
0x83D1F1: pop     ebp
0x83D1F2: pop     ebx
0x83D1F3: add     esp, 0Ch
0x83D1F6: retn    10h
