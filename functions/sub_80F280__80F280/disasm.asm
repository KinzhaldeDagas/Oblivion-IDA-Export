0x80F280: push    0FFFFFFFFh
0x80F282: push    offset SEH_80F280
0x80F287: mov     eax, large fs:0
0x80F28D: push    eax
0x80F28E: sub     esp, 34h
0x80F291: push    ebx
0x80F292: push    ebp
0x80F293: push    esi
0x80F294: push    edi
0x80F295: mov     eax, ds:0B30AACh
0x80F29A: xor     eax, esp
0x80F29C: push    eax
0x80F29D: lea     eax, [esp+54h+var_C]
0x80F2A1: mov     large fs:0, eax
0x80F2A7: mov     esi, ecx
0x80F2A9: mov     eax, [esi]
0x80F2AB: mov     edx, [eax+80h]
0x80F2B1: call    edx
0x80F2B3: mov     eax, ds:0B42E90h
0x80F2B8: xor     ebp, ebp
0x80F2BA: mov     [esp+54h+var_38], eax
0x80F2BE: mov     [esp+54h+var_30], ebp
0x80F2C2: mov     ebx, [esp+54h+arg_C]
0x80F2C6: mov     edi, [ebx+18h]
0x80F2C9: cmp     edi, ebp
0x80F2CB: mov     [esp+54h+var_4], ebp
0x80F2CF: mov     [esp+54h+var_3D], 0
0x80F2D4: jz      short loc_80F2F9
0x80F2D6: mov     edx, [edi]
0x80F2D8: mov     eax, [edx+54h]
0x80F2DB: mov     ecx, edi
0x80F2DD: call    eax
0x80F2DF: cmp     eax, 1
0x80F2E2: jl      short loc_80F2F9
0x80F2E4: mov     edx, [edi]
0x80F2E6: mov     eax, [edx+54h]
0x80F2E9: mov     ecx, edi
0x80F2EB: call    eax
0x80F2ED: cmp     eax, 0Ah
0x80F2F0: jg      short loc_80F2F9
0x80F2F2: mov     eax, 1
0x80F2F7: jmp     short loc_80F2FB
0x80F2F9: xor     eax, eax
0x80F2FB: neg     eax
0x80F2FD: sbb     eax, eax
0x80F2FF: and     eax, edi
0x80F301: mov     [esp+54h+var_3C], eax
0x80F305: mov     ebp, 0
0x80F30A: jz      short loc_80F33B
0x80F30C: test    edi, edi
0x80F30E: jz      short loc_80F333
0x80F310: mov     edx, [edi]
0x80F312: mov     eax, [edx+54h]
0x80F315: mov     ecx, edi
0x80F317: call    eax
0x80F319: cmp     eax, 5
0x80F31C: jl      short loc_80F333
0x80F31E: mov     edx, [edi]
0x80F320: mov     eax, [edx+54h]
0x80F323: mov     ecx, edi
0x80F325: call    eax
0x80F327: cmp     eax, 0Ah
0x80F32A: jg      short loc_80F333
0x80F32C: mov     ebp, 1
0x80F331: jmp     short loc_80F335
0x80F333: xor     ebp, ebp
0x80F335: neg     ebp
0x80F337: sbb     ebp, ebp
0x80F339: and     ebp, edi
0x80F33B: test    edi, edi
0x80F33D: jnz     short loc_80F35A
0x80F33F: mov     eax, ds:0B42E8Ch
0x80F344: test    eax, eax
0x80F346: jz      short loc_80F353
0x80F348: push    edi
0x80F349: push    offset aAttemptingTo_2; "Attempting to render geometry with a sh"...
0x80F34E: call    eax ; dword_B42E8C
0x80F350: add     esp, 8
0x80F353: xor     eax, eax
0x80F355: jmp     loc_80FA21
0x80F35A: test    byte ptr [edi+1Ch], 2
0x80F35E: mov     eax, [ebx+8]
0x80F361: setnbe  byte ptr [esp+54h+arg_C]
0x80F366: test    eax, eax
0x80F368: jz      loc_80F3F0
0x80F36E: test    byte ptr [eax+18h], 1
0x80F372: jz      short loc_80F3F0
0x80F374: fld     dword ptr [edi+20h]
0x80F377: mov     ecx, ds:0B46498h
0x80F37D: mov     edx, ds:0B4649Ch
0x80F383: fstp    [esp+54h+var_34]
0x80F387: mov     eax, ds:0B464A0h
0x80F38C: mov     [esp+54h+var_1C], ecx
0x80F390: fld     [esp+54h+var_1C]
0x80F394: mov     ecx, ds:0B464A4h
0x80F39A: fstp    [esp+54h+var_2C]
0x80F39E: mov     [esp+54h+var_18], edx
0x80F3A2: fld     [esp+54h+var_18]
0x80F3A6: mov     edx, [esp+54h+var_2C]
0x80F3AA: fstp    [esp+54h+var_28]
0x80F3AE: mov     [esp+54h+var_14], eax
0x80F3B2: fld     [esp+54h+var_14]
0x80F3B6: mov     eax, [esp+54h+var_28]
0x80F3BA: fstp    [esp+54h+var_24]
0x80F3BE: fld     [esp+54h+var_34]
0x80F3C2: mov     [esp+54h+var_10], ecx
0x80F3C6: mov     ecx, [esp+54h+var_24]
0x80F3CA: fstp    [esp+54h+var_20]
0x80F3CE: mov     ds:0B46498h, edx
0x80F3D4: mov     edx, [esp+54h+var_20]
0x80F3D8: mov     ds:0B4649Ch, eax
0x80F3DD: mov     ds:0B464A0h, ecx
0x80F3E3: mov     ds:0B464A4h, edx
0x80F3E9: mov     [esp+54h+var_3D], 1
0x80F3EE: jmp     short loc_80F3FD
0x80F3F0: fld1
0x80F3F2: push    ecx
0x80F3F3: mov     ecx, edi
0x80F3F5: fstp    [esp+58h+var_58]; float
0x80F3F8: call    sub_7E2430
0x80F3FD: cmp     [esp+54h+var_3C], 0
0x80F402: mov     edi, [esp+54h+arg_0]
0x80F406: jz      loc_80F4BE
0x80F40C: movzx   eax, word ptr ds:0B42EACh
0x80F413: sub     eax, 1
0x80F416: jz      short loc_80F448
0x80F418: sub     eax, 1
0x80F41B: jnz     loc_80F4BE
0x80F421: mov     ecx, [esp+54h+var_3C]
0x80F425: mov     eax, [ecx]
0x80F427: mov     edx, [eax+60h]
0x80F42A: push    edi
0x80F42B: call    edx
0x80F42D: movzx   eax, ax
0x80F430: cmp     ax, 10h
0x80F434: jbe     short loc_80F43B
0x80F436: mov     eax, 10h
0x80F43B: movzx   eax, ax
0x80F43E: shl     eax, 4
0x80F441: add     eax, offset unk_B2DE00
0x80F446: jmp     short loc_80F46A
0x80F448: mov     ecx, [esp+54h+var_3C]
0x80F44C: call    sub_7ED5D0
0x80F451: movzx   eax, ax
0x80F454: cmp     ax, 0Ah
0x80F458: jbe     short loc_80F45F
0x80F45A: mov     eax, 0Ah
0x80F45F: movzx   eax, ax
0x80F462: shl     eax, 4
0x80F465: add     eax, offset unk_B2DD50
0x80F46A: mov     edx, [eax]
0x80F46C: sub     esp, 10h
0x80F46F: mov     ecx, esp
0x80F471: mov     [ecx], edx
0x80F473: mov     edx, [eax+4]
0x80F476: mov     [ecx+4], edx
0x80F479: mov     edx, [eax+8]
0x80F47C: mov     eax, [eax+0Ch]
0x80F47F: mov     [ecx+8], edx
0x80F482: push    0
0x80F484: mov     [ecx+0Ch], eax
0x80F487: call    sub_7ECAE0
0x80F48C: mov     ecx, ds:0B25AD0h
0x80F492: mov     edx, ds:0B25AD4h
0x80F498: add     esp, 4
0x80F49B: mov     eax, esp
0x80F49D: mov     [eax], ecx
0x80F49F: mov     ecx, ds:0B25AD8h
0x80F4A5: mov     [eax+4], edx
0x80F4A8: mov     edx, ds:0B25ADCh
0x80F4AE: mov     [eax+8], ecx
0x80F4B1: push    19h
0x80F4B3: mov     [eax+0Ch], edx
0x80F4B6: call    sub_7ECAE0
0x80F4BB: add     esp, 14h
0x80F4BE: cmp     byte ptr [esp+54h+arg_C], 0
0x80F4C3: lea     ecx, [esi+24h]; this
0x80F4C6: jz      short loc_80F4D0
0x80F4C8: mov     eax, [esi+80h]
0x80F4CE: jmp     short loc_80F4D3
0x80F4D0: mov     eax, [esi+7Ch]
0x80F4D3: push    eax; a2
0x80F4D4: call    NiSmartPointer_Set??
0x80F4D9: mov     eax, [esp+54h+var_38]
0x80F4DD: cmp     eax, 11Bh
0x80F4E2: jg      loc_80F793
0x80F4E8: jz      loc_80F774
0x80F4EE: add     eax, 0FFFFFFE8h; switch 253 cases
0x80F4F1: cmp     eax, 0FCh
0x80F4F6: ja      def_80F503; jumptable 0080F503 default case, cases 25-46,49,50,52-83,85-94,96-105,107-116,118-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
0x80F4FC: movzx   eax, ds:byte_80FA98[eax]
0x80F503: jmp     ds:jpt_80F503[eax*4]; switch jump
0x80F50A: mov     ecx, [esp+54h+arg_4]; jumptable 0080F503 case 24
0x80F50E: push    0
0x80F510: push    ebp
0x80F511: push    ebx
0x80F512: push    ecx
0x80F513: push    edi
0x80F514: mov     ecx, esi
0x80F516: call    sub_85BF40
0x80F51B: xor     esi, esi
0x80F51D: jmp     loc_80F808
0x80F522: mov     edx, [esp+54h+arg_4]; jumptable 0080F503 case 47
0x80F526: push    0
0x80F528: push    ebp
0x80F529: push    ebx
0x80F52A: push    edx
0x80F52B: push    edi
0x80F52C: mov     ecx, esi
0x80F52E: call    sub_85BFD0
0x80F533: mov     esi, 1
0x80F538: jmp     loc_80F808
0x80F53D: mov     eax, [esp+54h+arg_4]; jumptable 0080F503 case 48
0x80F541: push    0
0x80F543: push    ebp
0x80F544: push    ebx
0x80F545: push    eax
0x80F546: push    edi
0x80F547: mov     ecx, esi
0x80F549: call    sub_85C110
0x80F54E: mov     esi, 2
0x80F553: jmp     loc_80F808
0x80F558: mov     ecx, [esp+54h+arg_4]; jumptable 0080F503 case 51
0x80F55C: push    0
0x80F55E: push    ebp
0x80F55F: push    ebx
0x80F560: push    ecx
0x80F561: push    edi
0x80F562: mov     ecx, esi
0x80F564: call    sub_85C250
0x80F569: mov     esi, 3
0x80F56E: jmp     loc_80F808
0x80F573: mov     edx, [esp+54h+arg_4]; jumptable 0080F503 case 230
0x80F577: push    0
0x80F579: push    ebp
0x80F57A: push    ebx
0x80F57B: push    edx
0x80F57C: push    edi
0x80F57D: mov     ecx, esi
0x80F57F: call    sub_85C370
0x80F584: mov     esi, 4
0x80F589: jmp     loc_80F808
0x80F58E: mov     eax, [esp+54h+arg_4]; jumptable 0080F503 case 231
0x80F592: push    0
0x80F594: push    ebp
0x80F595: push    ebx
0x80F596: push    eax
0x80F597: push    edi
0x80F598: mov     ecx, esi
0x80F59A: call    sub_85C450
0x80F59F: mov     esi, 5
0x80F5A4: jmp     loc_80F808
0x80F5A9: mov     ecx, [esp+54h+arg_4]; jumptable 0080F503 case 267
0x80F5AD: push    0
0x80F5AF: push    ebp
0x80F5B0: push    ebx
0x80F5B1: push    ecx
0x80F5B2: push    edi
0x80F5B3: mov     ecx, esi
0x80F5B5: call    sub_85C530
0x80F5BA: mov     esi, 6
0x80F5BF: jmp     loc_80F808
0x80F5C4: mov     edx, [esp+54h+arg_4]; jumptable 0080F503 case 275
0x80F5C8: push    0
0x80F5CA: push    ebp
0x80F5CB: push    ebx
0x80F5CC: push    edx
0x80F5CD: push    edi
0x80F5CE: mov     ecx, esi
0x80F5D0: call    sub_85C610
0x80F5D5: mov     esi, 7
0x80F5DA: jmp     loc_80F808
0x80F5DF: mov     eax, [esp+54h+arg_4]; jumptable 0080F503 case 276
0x80F5E3: push    0
0x80F5E5: push    ebp
0x80F5E6: push    ebx
0x80F5E7: push    eax
0x80F5E8: push    edi
0x80F5E9: mov     ecx, esi
0x80F5EB: call    sub_85C6F0
0x80F5F0: mov     esi, 8
0x80F5F5: jmp     loc_80F808
0x80F5FA: mov     ecx, [esp+54h+arg_4]; jumptable 0080F503 case 84
0x80F5FE: push    0
0x80F600: push    ebp
0x80F601: push    ebx
0x80F602: push    ecx
0x80F603: push    edi
0x80F604: mov     ecx, esi
0x80F606: call    sub_85D380
0x80F60B: mov     esi, 0Ah
0x80F610: jmp     loc_80F808
0x80F615: mov     edx, [esp+54h+arg_4]; jumptable 0080F503 case 95
0x80F619: push    0
0x80F61B: push    ebp
0x80F61C: push    ebx
0x80F61D: push    edx
0x80F61E: push    edi
0x80F61F: mov     ecx, esi
0x80F621: call    sub_85D500
0x80F626: mov     esi, 0Bh
0x80F62B: jmp     loc_80F808
0x80F630: mov     eax, [esp+54h+arg_4]; jumptable 0080F503 case 106
0x80F634: push    0
0x80F636: push    ebp
0x80F637: push    ebx
0x80F638: push    eax
0x80F639: push    edi
0x80F63A: mov     ecx, esi
0x80F63C: call    sub_85D720
0x80F641: mov     esi, 0Ch
0x80F646: jmp     loc_80F808
0x80F64B: mov     ecx, [esp+54h+arg_4]; jumptable 0080F503 case 117
0x80F64F: push    0
0x80F651: push    ebp
0x80F652: push    ebx
0x80F653: push    ecx
0x80F654: push    edi
0x80F655: mov     ecx, esi
0x80F657: call    sub_85D8A0
0x80F65C: mov     esi, 0Dh
0x80F661: jmp     loc_80F808
0x80F666: mov     edx, [esp+54h+arg_4]; jumptable 0080F503 case 130
0x80F66A: push    0
0x80F66C: push    ebp
0x80F66D: push    ebx
0x80F66E: push    edx
0x80F66F: push    edi
0x80F670: mov     ecx, esi
0x80F672: call    sub_85C870
0x80F677: mov     esi, 0Eh
0x80F67C: jmp     loc_80F808
0x80F681: mov     eax, [esp+54h+arg_4]; jumptable 0080F503 case 144
0x80F685: push    0
0x80F687: push    ebp
0x80F688: push    ebx
0x80F689: push    eax
0x80F68A: push    edi
0x80F68B: mov     ecx, esi
0x80F68D: call    sub_85CA00
0x80F692: mov     esi, 0Fh
0x80F697: jmp     loc_80F808
0x80F69C: mov     ecx, [esp+54h+arg_4]; jumptable 0080F503 case 157
0x80F6A0: push    0
0x80F6A2: push    ebp
0x80F6A3: push    ebx
0x80F6A4: push    ecx
0x80F6A5: push    edi
0x80F6A6: mov     ecx, esi
0x80F6A8: call    sub_85CC20
0x80F6AD: mov     esi, 10h
0x80F6B2: jmp     loc_80F808
0x80F6B7: mov     edx, [esp+54h+arg_4]; jumptable 0080F503 case 170
0x80F6BB: push    0
0x80F6BD: push    ebp
0x80F6BE: push    ebx
0x80F6BF: push    edx
0x80F6C0: push    edi
0x80F6C1: mov     ecx, esi
0x80F6C3: call    sub_85CDB0
0x80F6C8: mov     esi, 11h
0x80F6CD: jmp     loc_80F808
0x80F6D2: mov     eax, [esp+54h+arg_4]; jumptable 0080F503 case 184
0x80F6D6: push    0
0x80F6D8: push    ebp
0x80F6D9: push    ebx
0x80F6DA: push    eax
0x80F6DB: push    edi
0x80F6DC: mov     ecx, esi
0x80F6DE: call    sub_85CFD0
0x80F6E3: mov     esi, 12h
0x80F6E8: jmp     loc_80F808
0x80F6ED: mov     ecx, [esp+54h+arg_4]; jumptable 0080F503 case 197
0x80F6F1: push    0
0x80F6F3: push    ebp
0x80F6F4: push    ebx
0x80F6F5: push    ecx
0x80F6F6: push    edi
0x80F6F7: mov     ecx, esi
0x80F6F9: call    sub_85D160
0x80F6FE: mov     esi, 13h
0x80F703: jmp     loc_80F808
0x80F708: mov     edx, [esp+54h+arg_4]; jumptable 0080F503 case 210
0x80F70C: push    0
0x80F70E: push    ebp
0x80F70F: push    ebx
0x80F710: push    edx
0x80F711: push    edi
0x80F712: mov     ecx, esi
0x80F714: call    sub_85DAC0
0x80F719: mov     esi, 14h
0x80F71E: jmp     loc_80F808
0x80F723: mov     eax, [esp+54h+arg_4]; jumptable 0080F503 case 223
0x80F727: push    0
0x80F729: push    ebp
0x80F72A: push    ebx
0x80F72B: push    eax
0x80F72C: push    edi
0x80F72D: mov     ecx, esi
0x80F72F: call    sub_85DC50
0x80F734: mov     esi, 15h
0x80F739: jmp     loc_80F808
0x80F73E: mov     ecx, [esp+54h+arg_4]; jumptable 0080F503 case 238
0x80F742: push    0
0x80F744: push    ebp
0x80F745: push    ebx
0x80F746: push    ecx
0x80F747: push    edi
0x80F748: mov     ecx, esi
0x80F74A: call    sub_85DE70
0x80F74F: mov     esi, 16h
0x80F754: jmp     loc_80F808
0x80F759: mov     edx, [esp+54h+arg_4]; jumptable 0080F503 case 252
0x80F75D: push    0
0x80F75F: push    ebp
0x80F760: push    ebx
0x80F761: push    edx
0x80F762: push    edi
0x80F763: mov     ecx, esi
0x80F765: call    sub_85DF60
0x80F76A: mov     esi, 17h
0x80F76F: jmp     loc_80F808
0x80F774: mov     eax, [esp+54h+arg_4]
0x80F778: push    0
0x80F77A: push    ebp
0x80F77B: push    ebx
0x80F77C: push    eax
0x80F77D: push    edi
0x80F77E: mov     ecx, esi
0x80F780: call    sub_85E050
0x80F785: mov     ebx, [esp+54h+var_38]
0x80F789: mov     esi, 18h
0x80F78E: jmp     loc_80F818
0x80F793: add     eax, 0FFFFFEDEh; switch 115 cases
0x80F798: cmp     eax, 72h
0x80F79B: ja      def_80F503; jumptable 0080F503 default case, cases 25-46,49,50,52-83,85-94,96-105,107-116,118-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
0x80F7A1: movzx   ecx, ds:byte_80FBAC[eax]
0x80F7A8: jmp     ds:jpt_80F7A8[ecx*4]; switch jump
0x80F7AF: mov     edx, [esp+54h+arg_4]; jumptable 0080F7A8 case 404
0x80F7B3: push    0
0x80F7B5: push    ebp
0x80F7B6: push    ebx
0x80F7B7: push    edx
0x80F7B8: push    edi
0x80F7B9: mov     ecx, esi
0x80F7BB: call    sub_85C7D0
0x80F7C0: mov     esi, 9
0x80F7C5: jmp     short loc_80F808
0x80F7C7: mov     eax, [esp+54h+arg_4]; jumptable 0080F7A8 case 290
0x80F7CB: push    0
0x80F7CD: push    ebp
0x80F7CE: push    ebx
0x80F7CF: push    eax
0x80F7D0: push    edi
0x80F7D1: mov     ecx, esi
0x80F7D3: call    sub_85E160
0x80F7D8: mov     esi, 19h
0x80F7DD: jmp     short loc_80F808
0x80F7DF: mov     ecx, [esp+54h+arg_4]; jumptable 0080F7A8 case 297
0x80F7E3: push    0
0x80F7E5: push    ebp
0x80F7E6: push    ebx
0x80F7E7: push    ecx
0x80F7E8: push    edi
0x80F7E9: mov     ecx, esi
0x80F7EB: call    sub_85E300
0x80F7F0: jmp     short loc_80F803
0x80F7F2: mov     edx, [esp+54h+arg_4]; jumptable 0080F7A8 case 378
0x80F7F6: push    0
0x80F7F8: push    ebp
0x80F7F9: push    ebx
0x80F7FA: push    edx
0x80F7FB: push    edi
0x80F7FC: mov     ecx, esi
0x80F7FE: call    sub_85E410
0x80F803: mov     esi, 1Ah
0x80F808: mov     ebx, [esp+54h+var_38]
0x80F80C: test    ebx, ebx
0x80F80E: jl      short loc_80F88F
0x80F810: cmp     ebx, 1A3h
0x80F816: jge     short loc_80F88F
0x80F818: push    0
0x80F81A: movzx   edi, si
0x80F81D: mov     ecx, ds:0B47790h[edi*4]
0x80F824: push    0
0x80F826: push    1Ch
0x80F828: call    sub_76C730
0x80F82D: lea     eax, [ebx-10Fh]
0x80F833: cmp     eax, 1Ah
0x80F836: ja      short loc_80F83E
0x80F838: push    0
0x80F83A: push    0Fh
0x80F83C: jmp     short loc_80F87E
0x80F83E: cmp     ebx, 19Eh
0x80F844: jz      short loc_80F87A
0x80F846: cmp     ebx, 19Fh
0x80F84C: jz      short loc_80F87A
0x80F84E: cmp     ebx, 0Ah
0x80F851: jz      short loc_80F87A
0x80F853: cmp     ebx, 0Bh
0x80F856: jz      short loc_80F87A
0x80F858: test    ebx, ebx
0x80F85A: push    0
0x80F85C: jnz     short loc_80F867
0x80F85E: mov     ecx, ds:0B477D0h
0x80F864: push    ebx
0x80F865: jmp     short loc_80F885
0x80F867: cmp     ebx, 1
0x80F86A: jnz     short loc_80F876
0x80F86C: mov     ecx, ds:0B477D8h
0x80F872: push    0
0x80F874: jmp     short loc_80F885
0x80F876: push    7
0x80F878: jmp     short loc_80F87E
0x80F87A: push    0
0x80F87C: push    8
0x80F87E: mov     ecx, ds:0B47790h[edi*4]
0x80F885: push    0A8h ; '¨'
0x80F88A: call    sub_76C730
0x80F88F: cmp     word ptr ds:0B42EACh, 4
0x80F897: movzx   eax, si
0x80F89A: mov     edi, ds:0B47790h[eax*4]
0x80F8A1: lea     esi, ds:0B47790h[eax*4]
0x80F8A8: jnz     loc_80F93C
0x80F8AE: cmp     dword ptr [edi+30h], 0
0x80F8B2: jnz     short loc_80F8BC
0x80F8B4: call    sub_772DF0
0x80F8B9: mov     [edi+30h], eax
0x80F8BC: mov     ecx, [edi+30h]
0x80F8BF: push    0
0x80F8C1: push    1
0x80F8C3: push    34h ; '4'
0x80F8C5: call    sub_772CD0
0x80F8CA: mov     edi, [esi]
0x80F8CC: cmp     dword ptr [edi+30h], 0
0x80F8D0: jnz     short loc_80F8DA
0x80F8D2: call    sub_772DF0
0x80F8D7: mov     [edi+30h], eax
0x80F8DA: mov     ecx, [edi+30h]
0x80F8DD: push    0
0x80F8DF: push    8
0x80F8E1: push    38h ; '8'
0x80F8E3: call    sub_772CD0
0x80F8E8: mov     edi, [esi]
0x80F8EA: cmp     dword ptr [edi+30h], 0
0x80F8EE: jnz     short loc_80F8F8
0x80F8F0: call    sub_772DF0
0x80F8F5: mov     [edi+30h], eax
0x80F8F8: mov     ecx, [edi+30h]
0x80F8FB: push    0
0x80F8FD: push    7
0x80F8FF: push    37h ; '7'
0x80F901: call    sub_772CD0
0x80F906: mov     edi, [esi]
0x80F908: cmp     dword ptr [edi+30h], 0
0x80F90C: jnz     short loc_80F916
0x80F90E: call    sub_772DF0
0x80F913: mov     [edi+30h], eax
0x80F916: mov     ecx, [edi+30h]
0x80F919: push    0
0x80F91B: push    1
0x80F91D: push    35h ; '5'
0x80F91F: call    sub_772CD0
0x80F924: mov     edi, [esi]
0x80F926: cmp     dword ptr [edi+30h], 0
0x80F92A: jnz     short loc_80F934
0x80F92C: call    sub_772DF0
0x80F931: mov     [edi+30h], eax
0x80F934: push    0
0x80F936: push    1
0x80F938: push    36h ; '6'
0x80F93A: jmp     short loc_80F950
0x80F93C: cmp     dword ptr [edi+30h], 0
0x80F940: jnz     short loc_80F94A
0x80F942: call    sub_772DF0
0x80F947: mov     [edi+30h], eax
0x80F94A: push    0
0x80F94C: push    0
0x80F94E: push    34h ; '4'
0x80F950: mov     ecx, [edi+30h]
0x80F953: call    sub_772CD0
0x80F958: lea     ecx, [ebx-33h]
0x80F95B: cmp     ecx, 161h
0x80F961: ja      short loc_80F9C1
0x80F963: mov     eax, ds:0B42EB8h
0x80F968: test    eax, eax
0x80F96A: jz      short loc_80F99F
0x80F96C: cmp     byte ptr [eax+6], 0
0x80F970: jz      short loc_80F99F
0x80F972: cmp     [esp+54h+var_3D], 0
0x80F977: mov     ecx, [esi]
0x80F979: push    0
0x80F97B: jnz     short loc_80F981
0x80F97D: push    0
0x80F97F: jmp     short loc_80F983
0x80F981: push    1
0x80F983: push    1Bh
0x80F985: call    sub_76C730
0x80F98A: mov     ecx, [esi]
0x80F98C: push    0
0x80F98E: push    4
0x80F990: push    17h
0x80F992: call    sub_76C730
0x80F997: push    0
0x80F999: push    1
0x80F99B: push    0Eh
0x80F99D: jmp     short loc_80F9DD
0x80F99F: mov     ecx, [esi]
0x80F9A1: push    0
0x80F9A3: push    1
0x80F9A5: push    1Bh
0x80F9A7: call    sub_76C730
0x80F9AC: mov     ecx, [esi]
0x80F9AE: push    0
0x80F9B0: push    3
0x80F9B2: push    17h
0x80F9B4: call    sub_76C730
0x80F9B9: push    0
0x80F9BB: push    0
0x80F9BD: push    0Eh
0x80F9BF: jmp     short loc_80F9DD
0x80F9C1: add     ebx, 0FFFFFFFEh
0x80F9C4: cmp     ebx, 0DCh ; 'Ü'
0x80F9CA: ja      short loc_80F9E4
0x80F9CC: cmp     [esp+54h+var_3D], 0
0x80F9D1: push    0
0x80F9D3: jz      short loc_80F9D9
0x80F9D5: push    1
0x80F9D7: jmp     short loc_80F9DB
0x80F9D9: push    0
0x80F9DB: push    1Bh
0x80F9DD: mov     ecx, [esi]
0x80F9DF: call    sub_76C730
0x80F9E4: mov     eax, ds:0B42EB8h
0x80F9E9: test    eax, eax
0x80F9EB: jz      short loc_80F9FB
0x80F9ED: cmp     byte ptr [eax+7], 0
0x80F9F1: jnz     short loc_80F9FB
0x80F9F3: fldz
0x80F9F5: fstp    dword ptr ds:0B4668Ch
0x80F9FB: xor     eax, eax
0x80F9FD: jmp     short loc_80FA21
0x80F9FF: mov     edx, [esp+54h+arg_18]; jumptable 0080F503 default case, cases 25-46,49,50,52-83,85-94,96-105,107-116,118-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
0x80FA03: mov     eax, [esp+54h+arg_14]
0x80FA07: mov     ecx, [esp+54h+arg_10]
0x80FA0B: push    edx
0x80FA0C: mov     edx, [esp+58h+arg_8]
0x80FA10: push    eax
0x80FA11: mov     eax, [esp+5Ch+arg_4]
0x80FA15: push    ecx
0x80FA16: push    ebx
0x80FA17: push    edx
0x80FA18: push    eax
0x80FA19: push    edi
0x80FA1A: mov     ecx, esi
0x80FA1C: call    sub_7C9F30
0x80FA21: mov     ecx, [esp+54h+var_C]
0x80FA25: mov     large fs:0, ecx
0x80FA2C: pop     ecx
0x80FA2D: pop     edi
0x80FA2E: pop     esi
0x80FA2F: pop     ebp
0x80FA30: pop     ebx
0x80FA31: add     esp, 40h
0x80FA34: retn    1Ch
