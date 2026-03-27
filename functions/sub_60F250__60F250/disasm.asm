0x60F250: push    0FFFFFFFFh
0x60F252: push    offset SEH_60F250
0x60F257: mov     eax, large fs:0
0x60F25D: push    eax
0x60F25E: push    ebx
0x60F25F: push    ebp
0x60F260: push    esi
0x60F261: push    edi
0x60F262: mov     eax, ds:0B30AACh
0x60F267: xor     eax, esp
0x60F269: push    eax
0x60F26A: lea     eax, [esp+20h+var_C]
0x60F26E: mov     large fs:0, eax
0x60F274: mov     edi, ecx
0x60F276: mov     eax, [edi+58h]
0x60F279: test    eax, eax
0x60F27B: jz      short loc_60F28E
0x60F27D: mov     eax, [eax+8]
0x60F280: test    eax, eax
0x60F282: jz      short loc_60F28E
0x60F284: cmp     byte ptr [eax+20h], 0Fh
0x60F288: jz      loc_60FB86
0x60F28E: mov     esi, [esp+20h+arg_0]
0x60F292: test    esi, esi
0x60F294: jz      def_60F2A6
0x60F29A: mov     eax, [esi+4]
0x60F29D: cmp     eax, 5; switch 6 cases
0x60F2A0: ja      def_60F2A6
0x60F2A6: jmp     ds:jpt_60F2A6[eax*4]; switch jump
0x60F2AD: mov     eax, [esi+0Ch]; jumptable 0060F2A6 case 3
0x60F2B0: push    80000h
0x60F2B5: lea     ebp, [edi+44h]
0x60F2B8: push    ebp
0x60F2B9: push    eax
0x60F2BA: call    Script_AddEventToExtraScript
0x60F2BF: push    2000000h
0x60F2C4: jmp     short loc_60F341
0x60F2C6: mov     eax, [esi+0Ch]; jumptable 0060F2A6 case 4
0x60F2C9: push    100000h
0x60F2CE: lea     ebp, [edi+44h]
0x60F2D1: push    ebp
0x60F2D2: push    eax
0x60F2D3: call    Script_AddEventToExtraScript
0x60F2D8: push    4000000h
0x60F2DD: jmp     short loc_60F341
0x60F2DF: mov     eax, [esi+0Ch]; jumptable 0060F2A6 case 0
0x60F2E2: push    10000h
0x60F2E7: lea     ebp, [edi+44h]
0x60F2EA: push    ebp
0x60F2EB: push    eax
0x60F2EC: call    Script_AddEventToExtraScript
0x60F2F1: push    400000h
0x60F2F6: jmp     short loc_60F341
0x60F2F8: mov     eax, [esi+0Ch]; jumptable 0060F2A6 case 2
0x60F2FB: push    40000h
0x60F300: lea     ebp, [edi+44h]
0x60F303: push    ebp
0x60F304: push    eax
0x60F305: call    Script_AddEventToExtraScript
0x60F30A: push    1000000h
0x60F30F: jmp     short loc_60F341
0x60F311: mov     eax, [esi+0Ch]; jumptable 0060F2A6 case 5
0x60F314: push    200000h
0x60F319: lea     ebp, [edi+44h]
0x60F31C: push    ebp
0x60F31D: push    eax
0x60F31E: call    Script_AddEventToExtraScript
0x60F323: push    8000000h
0x60F328: jmp     short loc_60F341
0x60F32A: mov     eax, [esi+0Ch]; jumptable 0060F2A6 case 1
0x60F32D: push    20000h
0x60F332: lea     ebp, [edi+44h]
0x60F335: push    ebp
0x60F336: push    eax
0x60F337: call    Script_AddEventToExtraScript
0x60F33C: push    offset loc_800000
0x60F341: mov     eax, [esi+8]
0x60F344: push    ebp
0x60F345: push    eax
0x60F346: call    Script_AddEventToExtraScript
0x60F34B: add     esp, 18h
