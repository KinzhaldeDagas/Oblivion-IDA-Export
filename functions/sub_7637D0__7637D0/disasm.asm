0x7637D0: sub     esp, 8
0x7637D3: push    ebx
0x7637D4: push    ebp
0x7637D5: mov     [esp+10h+var_8], ecx
0x7637D9: mov     ecx, [ecx+878h]
0x7637DF: mov     eax, [ecx]
0x7637E1: mov     edx, [eax+5Ch]
0x7637E4: push    esi
0x7637E5: push    0
0x7637E7: call    edx
0x7637E9: mov     eax, [eax+0Ch]
0x7637EC: mov     ebp, [esp+18h]
0x7637F0: mov     esi, [esp+18h]
0x7637F4: xor     ebx, ebx
0x7637F6: cmp     ebx, 16h; switch 23 cases
0x7637F9: mov     [esp+18h+var_8], eax
0x7637FD: ja      def_763803
0x763803: jmp     ds:jpt_763803[ebx*4]; switch jump
0x76380A: push    44h ; 'D'; jumptable 00763803 case 0
0x76380C: call    FormHeapAlloc
0x763811: add     esp, 4
0x763814: test    eax, eax
0x763816: jz      short loc_763838
0x763818: push    offset unk_B263A0
0x76381D: mov     ecx, eax
0x76381F: call    sub_70F010
0x763824: mov     esi, eax
0x763826: push    esi
0x763827: call    sub_76BEF0
0x76382C: mov     dword ptr [esi+10h], 0
0x763833: jmp     loc_763D0C
0x763838: xor     esi, esi
0x76383A: push    esi
0x76383B: call    sub_76BEF0
0x763840: mov     [esi+10h], esi
0x763843: jmp     loc_763D0C
0x763848: push    44h ; 'D'; jumptable 00763803 case 1
0x76384A: call    FormHeapAlloc
0x76384F: add     esp, 4
0x763852: test    eax, eax
0x763854: jz      short loc_763876
0x763856: push    offset unk_B263E8
0x76385B: mov     ecx, eax
0x76385D: call    sub_70F010
0x763862: mov     esi, eax
0x763864: push    esi
0x763865: call    sub_76BEF0
0x76386A: mov     dword ptr [esi+10h], 1
0x763871: jmp     loc_763D0C
0x763876: xor     esi, esi
0x763878: push    esi
0x763879: call    sub_76BEF0
0x76387E: mov     dword ptr [esi+10h], 1
0x763885: jmp     loc_763D0C
0x76388A: push    44h ; 'D'; jumptable 00763803 case 3
0x76388C: call    FormHeapAlloc
0x763891: add     esp, 4
0x763894: test    eax, eax
0x763896: jz      short loc_7638B8
0x763898: push    offset unk_B26478
0x76389D: mov     ecx, eax
0x76389F: call    sub_70F010
0x7638A4: mov     esi, eax
0x7638A6: push    esi
0x7638A7: call    sub_76BEF0
0x7638AC: mov     dword ptr [esi+10h], 3
0x7638B3: jmp     loc_763D0C
0x7638B8: xor     esi, esi
0x7638BA: push    esi
0x7638BB: call    sub_76BEF0
0x7638C0: mov     dword ptr [esi+10h], 3
0x7638C7: jmp     loc_763D0C
0x7638CC: push    44h ; 'D'; jumptable 00763803 case 4
0x7638CE: call    FormHeapAlloc
0x7638D3: add     esp, 4
0x7638D6: test    eax, eax
0x7638D8: jz      short loc_7638FA
0x7638DA: push    offset unk_B26508
0x7638DF: mov     ecx, eax
0x7638E1: call    sub_70F010
0x7638E6: mov     esi, eax
0x7638E8: push    esi
0x7638E9: call    sub_76BEF0
0x7638EE: mov     dword ptr [esi+10h], 4
0x7638F5: jmp     loc_763D0C
0x7638FA: xor     esi, esi
0x7638FC: push    esi
0x7638FD: call    sub_76BEF0
0x763902: mov     dword ptr [esi+10h], 4
0x763909: jmp     loc_763D0C
0x76390E: push    44h ; 'D'; jumptable 00763803 case 5
0x763910: call    FormHeapAlloc
0x763915: add     esp, 4
0x763918: test    eax, eax
0x76391A: jz      short loc_76393C
0x76391C: push    offset unk_B265E0
0x763921: mov     ecx, eax
0x763923: call    sub_70F010
0x763928: mov     esi, eax
0x76392A: push    esi
0x76392B: call    sub_76BEF0
0x763930: mov     dword ptr [esi+10h], 5
0x763937: jmp     loc_763D0C
0x76393C: xor     esi, esi
0x76393E: push    esi
0x76393F: call    sub_76BEF0
0x763944: mov     dword ptr [esi+10h], 5
0x76394B: jmp     loc_763D0C
0x763950: xor     esi, esi; jumptable 00763803 cases 6,7
0x763952: jmp     loc_763D6A
0x763957: push    44h ; 'D'; jumptable 00763803 case 8
0x763959: call    FormHeapAlloc
0x76395E: add     esp, 4
0x763961: test    eax, eax
0x763963: jz      short loc_763985
0x763965: push    offset unk_B25FB0
0x76396A: mov     ecx, eax
0x76396C: call    sub_70F010
0x763971: mov     esi, eax
0x763973: push    esi
0x763974: call    sub_76BEF0
0x763979: mov     dword ptr [esi+10h], 8
0x763980: jmp     loc_763D0C
0x763985: xor     esi, esi
0x763987: push    esi
0x763988: call    sub_76BEF0
0x76398D: mov     dword ptr [esi+10h], 8
0x763994: jmp     loc_763D0C
0x763999: push    44h ; 'D'; jumptable 00763803 case 9
0x76399B: call    FormHeapAlloc
0x7639A0: add     esp, 4
0x7639A3: test    eax, eax
0x7639A5: jz      short loc_7639C7
0x7639A7: push    offset unk_B25FF8
0x7639AC: mov     ecx, eax
0x7639AE: call    sub_70F010
0x7639B3: mov     esi, eax
0x7639B5: push    esi
0x7639B6: call    sub_76BEF0
0x7639BB: mov     dword ptr [esi+10h], 9
0x7639C2: jmp     loc_763D0C
0x7639C7: xor     esi, esi
0x7639C9: push    esi
0x7639CA: call    sub_76BEF0
0x7639CF: mov     dword ptr [esi+10h], 9
0x7639D6: jmp     loc_763D0C
0x7639DB: push    44h ; 'D'; jumptable 00763803 case 10
0x7639DD: call    FormHeapAlloc
0x7639E2: add     esp, 4
0x7639E5: test    eax, eax
0x7639E7: jz      short loc_763A09
0x7639E9: push    offset unk_B26040
0x7639EE: mov     ecx, eax
0x7639F0: call    sub_70F010
0x7639F5: mov     esi, eax
0x7639F7: push    esi
0x7639F8: call    sub_76BEF0
0x7639FD: mov     dword ptr [esi+10h], 0Ah
0x763A04: jmp     loc_763D0C
0x763A09: xor     esi, esi
0x763A0B: push    esi
0x763A0C: call    sub_76BEF0
0x763A11: mov     dword ptr [esi+10h], 0Ah
0x763A18: jmp     loc_763D0C
0x763A1D: push    44h ; 'D'; jumptable 00763803 case 11
0x763A1F: call    FormHeapAlloc
0x763A24: add     esp, 4
0x763A27: test    eax, eax
0x763A29: jz      short loc_763A4B
0x763A2B: push    offset unk_B25F20
0x763A30: mov     ecx, eax
0x763A32: call    sub_70F010
0x763A37: mov     esi, eax
0x763A39: push    esi
0x763A3A: call    sub_76BEF0
0x763A3F: mov     dword ptr [esi+10h], 0Bh
0x763A46: jmp     loc_763D0C
0x763A4B: xor     esi, esi
0x763A4D: push    esi
0x763A4E: call    sub_76BEF0
0x763A53: mov     dword ptr [esi+10h], 0Bh
0x763A5A: jmp     loc_763D0C
0x763A5F: push    44h ; 'D'; jumptable 00763803 case 12
0x763A61: call    FormHeapAlloc
0x763A66: add     esp, 4
0x763A69: test    eax, eax
0x763A6B: jz      short loc_763A8D
0x763A6D: push    offset unk_B26790
0x763A72: mov     ecx, eax
0x763A74: call    sub_70F010
0x763A79: mov     esi, eax
0x763A7B: push    esi
0x763A7C: call    sub_76BEF0
0x763A81: mov     dword ptr [esi+10h], 0Ch
0x763A88: jmp     loc_763D0C
0x763A8D: xor     esi, esi
0x763A8F: push    esi
0x763A90: call    sub_76BEF0
0x763A95: mov     dword ptr [esi+10h], 0Ch
0x763A9C: jmp     loc_763D0C
0x763AA1: push    44h ; 'D'; jumptable 00763803 case 13
0x763AA3: call    FormHeapAlloc
0x763AA8: add     esp, 4
0x763AAB: test    eax, eax
0x763AAD: jz      short loc_763ACF
0x763AAF: push    offset unk_B25F68
0x763AB4: mov     ecx, eax
0x763AB6: call    sub_70F010
0x763ABB: mov     esi, eax
0x763ABD: push    esi
0x763ABE: call    sub_76BEF0
0x763AC3: mov     dword ptr [esi+10h], 0Dh
0x763ACA: jmp     loc_763D0C
0x763ACF: xor     esi, esi
0x763AD1: push    esi
0x763AD2: call    sub_76BEF0
0x763AD7: mov     dword ptr [esi+10h], 0Dh
0x763ADE: jmp     loc_763D0C
0x763AE3: push    44h ; 'D'; jumptable 00763803 cases 2,22
0x763AE5: call    FormHeapAlloc
0x763AEA: add     esp, 4
0x763AED: test    eax, eax
0x763AEF: jz      short loc_763B0D
0x763AF1: push    offset unk_B26628
0x763AF6: mov     ecx, eax
0x763AF8: call    sub_70F010
0x763AFD: mov     esi, eax
0x763AFF: push    esi
0x763B00: call    sub_76BEF0
0x763B05: mov     [esi+10h], ebx
0x763B08: jmp     loc_763D0C
0x763B0D: xor     esi, esi
0x763B0F: push    esi
0x763B10: call    sub_76BEF0
0x763B15: mov     [esi+10h], ebx
0x763B18: jmp     loc_763D0C
0x763B1D: push    44h ; 'D'; jumptable 00763803 case 14
0x763B1F: call    FormHeapAlloc
0x763B24: add     esp, 4
0x763B27: test    eax, eax
0x763B29: jz      short loc_763B4B
0x763B2B: push    offset unk_B26238
0x763B30: mov     ecx, eax
0x763B32: call    sub_70F010
0x763B37: mov     esi, eax
0x763B39: push    esi
0x763B3A: call    sub_76BEF0
0x763B3F: mov     dword ptr [esi+10h], 0Eh
0x763B46: jmp     loc_763D0C
0x763B4B: xor     esi, esi
0x763B4D: push    esi
0x763B4E: call    sub_76BEF0
0x763B53: mov     dword ptr [esi+10h], 0Eh
0x763B5A: jmp     loc_763D0C
0x763B5F: push    44h ; 'D'; jumptable 00763803 case 15
0x763B61: call    FormHeapAlloc
0x763B66: add     esp, 4
0x763B69: test    eax, eax
0x763B6B: jz      short loc_763B8D
0x763B6D: push    offset unk_B26280
0x763B72: mov     ecx, eax
0x763B74: call    sub_70F010
0x763B79: mov     esi, eax
0x763B7B: push    esi
0x763B7C: call    sub_76BEF0
0x763B81: mov     dword ptr [esi+10h], 0Fh
0x763B88: jmp     loc_763D0C
0x763B8D: xor     esi, esi
0x763B8F: push    esi
0x763B90: call    sub_76BEF0
0x763B95: mov     dword ptr [esi+10h], 0Fh
0x763B9C: jmp     loc_763D0C
0x763BA1: push    44h ; 'D'; jumptable 00763803 case 16
0x763BA3: call    FormHeapAlloc
0x763BA8: add     esp, 4
0x763BAB: test    eax, eax
0x763BAD: jz      short loc_763BCF
0x763BAF: push    offset unk_B261F0
0x763BB4: mov     ecx, eax
0x763BB6: call    sub_70F010
0x763BBB: mov     esi, eax
0x763BBD: push    esi
0x763BBE: call    sub_76BEF0
0x763BC3: mov     dword ptr [esi+10h], 10h
0x763BCA: jmp     loc_763D0C
0x763BCF: xor     esi, esi
0x763BD1: push    esi
0x763BD2: call    sub_76BEF0
0x763BD7: mov     dword ptr [esi+10h], 10h
0x763BDE: jmp     loc_763D0C
0x763BE3: push    44h ; 'D'; jumptable 00763803 case 17
0x763BE5: call    FormHeapAlloc
0x763BEA: add     esp, 4
0x763BED: test    eax, eax
0x763BEF: jz      short loc_763C11
0x763BF1: push    offset unk_B26160
0x763BF6: mov     ecx, eax
0x763BF8: call    sub_70F010
0x763BFD: mov     esi, eax
0x763BFF: push    esi
0x763C00: call    sub_76BEF0
0x763C05: mov     dword ptr [esi+10h], 11h
0x763C0C: jmp     loc_763D0C
0x763C11: xor     esi, esi
0x763C13: push    esi
0x763C14: call    sub_76BEF0
0x763C19: mov     dword ptr [esi+10h], 11h
0x763C20: jmp     loc_763D0C
0x763C25: push    44h ; 'D'; jumptable 00763803 case 18
0x763C27: call    FormHeapAlloc
0x763C2C: add     esp, 4
0x763C2F: test    eax, eax
0x763C31: jz      short loc_763C53
0x763C33: push    offset unk_B260D0
0x763C38: mov     ecx, eax
0x763C3A: call    sub_70F010
0x763C3F: mov     esi, eax
0x763C41: push    esi
0x763C42: call    sub_76BEF0
0x763C47: mov     dword ptr [esi+10h], 12h
0x763C4E: jmp     loc_763D0C
0x763C53: xor     esi, esi
0x763C55: push    esi
0x763C56: call    sub_76BEF0
0x763C5B: mov     dword ptr [esi+10h], 12h
0x763C62: jmp     loc_763D0C
0x763C67: push    44h ; 'D'; jumptable 00763803 case 19
0x763C69: call    FormHeapAlloc
0x763C6E: add     esp, 4
0x763C71: test    eax, eax
0x763C73: jz      short loc_763C92
0x763C75: push    offset unk_B26118
0x763C7A: mov     ecx, eax
0x763C7C: call    sub_70F010
0x763C81: mov     esi, eax
0x763C83: push    esi
0x763C84: call    sub_76BEF0
0x763C89: mov     dword ptr [esi+10h], 13h
0x763C90: jmp     short loc_763D0C
0x763C92: xor     esi, esi
0x763C94: push    esi
0x763C95: call    sub_76BEF0
0x763C9A: mov     dword ptr [esi+10h], 13h
0x763CA1: jmp     short loc_763D0C
0x763CA3: push    44h ; 'D'; jumptable 00763803 case 20
0x763CA5: call    FormHeapAlloc
0x763CAA: add     esp, 4
0x763CAD: test    eax, eax
0x763CAF: jz      short loc_763CCE
0x763CB1: push    offset unk_B261A8
0x763CB6: mov     ecx, eax
0x763CB8: call    sub_70F010
0x763CBD: mov     esi, eax
0x763CBF: push    esi
0x763CC0: call    sub_76BEF0
0x763CC5: mov     dword ptr [esi+10h], 14h
0x763CCC: jmp     short loc_763D0C
0x763CCE: xor     esi, esi
0x763CD0: push    esi
0x763CD1: call    sub_76BEF0
0x763CD6: mov     dword ptr [esi+10h], 14h
0x763CDD: jmp     short loc_763D0C
0x763CDF: push    44h ; 'D'; jumptable 00763803 case 21
0x763CE1: call    FormHeapAlloc
0x763CE6: add     esp, 4
0x763CE9: test    eax, eax
0x763CEB: jz      short loc_763CFD
0x763CED: push    offset unk_B26088
0x763CF2: mov     ecx, eax
0x763CF4: call    sub_70F010
0x763CF9: mov     esi, eax
0x763CFB: jmp     short loc_763CFF
0x763CFD: xor     esi, esi
0x763CFF: push    esi
0x763D00: call    sub_76BEF0
0x763D05: mov     dword ptr [esi+10h], 15h
0x763D0C: mov     [esi+0Ch], eax
0x763D0F: add     esp, 4
