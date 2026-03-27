0x4FAE80: sub     esp, 18h
0x4FAE83: cmp     [esp+18h+a1], 0
0x4FAE88: jnz     short loc_4FAE90
0x4FAE8A: xor     al, al
0x4FAE8C: add     esp, 18h
0x4FAE8F: retn
0x4FAE90: mov     ecx, [esp+18h+arg_8]
0x4FAE94: mov     eax, [ecx]
0x4FAE96: mov     edx, [esp+18h+arg_4]
0x4FAE9A: movzx   edx, word ptr [eax+edx]
0x4FAE9E: push    ebx
0x4FAE9F: push    ebp
0x4FAEA0: push    esi
0x4FAEA1: add     eax, 2
0x4FAEA4: test    dx, dx
0x4FAEA7: push    edi
0x4FAEA8: lea     esi, [esp+28h+arg_1C]
0x4FAEAC: mov     [esp+28h+var_C], edx
0x4FAEB0: mov     [ecx], eax
0x4FAEB2: mov     [esp+28h+var_18], 0
0x4FAEBA: jle     Script_ExtractArgs___Return_1
0x4FAEC0: mov     ebp, ecx
0x4FAEC2: movsx   eax, word ptr [esp+28h+var_18]
0x4FAEC7: fldz
0x4FAEC9: mov     ecx, [esp+28h+a1]
0x4FAECD: lea     eax, [eax+eax*2]
0x4FAED0: lea     ebx, [ecx+eax*4+4]
0x4FAED4: mov     eax, [ebx]
0x4FAED6: cmp     byte ptr ds:0B0A54Dh[eax*8], 0
0x4FAEDE: jz      Script_ExtractArgs___ArgLoop_ExtractNonForm
0x4FAEE4: mov     eax, [ebp+0]
0x4FAEE7: fstp    st
0x4FAEE9: mov     edx, [esp+28h+arg_4]
0x4FAEED: mov     cl, [eax+edx]
0x4FAEF0: add     eax, 1
0x4FAEF3: cmp     cl, 72h ; 'r'
0x4FAEF6: mov     [ebp+0], eax
0x4FAEF9: jnz     Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAEFF: movzx   ecx, word ptr [eax+edx]
0x4FAF03: add     eax, 2
0x4FAF06: mov     [ebp+0], eax
0x4FAF09: mov     eax, [esp+28h+l]
0x4FAF0D: movsx   ecx, cx
0x4FAF10: push    eax; int
0x4FAF11: push    ecx; int
0x4FAF12: mov     ecx, [esp+30h+arg_14]; int
0x4FAF16: call    Script_GetRefVariableByIndex
0x4FAF1B: mov     edx, [esp+28h+arg_14]
0x4FAF1F: mov     edi, eax
0x4FAF21: mov     eax, [edx+8]
0x4FAF24: shr     eax, 3
0x4FAF27: test    al, 1
0x4FAF29: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAF2F: test    edi, edi
0x4FAF31: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAF37: mov     eax, [edi+8]
0x4FAF3A: test    eax, eax
0x4FAF3C: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAF42: mov     ecx, [ebx]
0x4FAF44: add     ecx, 0FFFFFFFDh; switch 35 cases
0x4FAF47: cmp     ecx, 22h
0x4FAF4A: ja      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAF50: jmp     ds:jpt_4FAF50[ecx*4]; switch jump
0x4FAF57: movzx   eax, byte ptr [eax+4]; jumptable 004FAF50 case 3
0x4FAF5B: push    eax
0x4FAF5C: call    TESContainer_IsInventoryItemType
0x4FAF61: add     esp, 4
0x4FAF64: test    al, al
0x4FAF66: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAF6C: mov     ebx, [esi]
0x4FAF6E: add     esi, 4
0x4FAF71: mov     dword ptr [ebx], 0
0x4FAF77: cmp     dword ptr [edi+8], 0
0x4FAF7B: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAF81: mov     ecx, [edi+8]
0x4FAF84: mov     edx, [ecx]
0x4FAF86: mov     eax, [edx+0A8h]
0x4FAF8C: call    eax
0x4FAF8E: test    al, al
0x4FAF90: jz      short loc_4FAF97
0x4FAF92: mov     ecx, [edi+8]
0x4FAF95: mov     [ebx], ecx
0x4FAF97: cmp     dword ptr [ebx], 0
0x4FAF9A: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAFA0: jmp     Script_ExtractArgs___ArgLoop_Next
0x4FAFA5: movzx   eax, byte ptr [eax+4]; jumptable 004FAF50 cases 4,24,26
0x4FAFA9: add     eax, 0FFFFFFCFh
0x4FAFAC: cmp     eax, 2
0x4FAFAF: ja      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAFB5: mov     eax, [esi]
0x4FAFB7: add     esi, 4
0x4FAFBA: mov     dword ptr [eax], 0
0x4FAFC0: mov     edi, [edi+8]
0x4FAFC3: test    edi, edi
0x4FAFC5: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAFCB: movzx   ecx, byte ptr [edi+4]
0x4FAFCF: add     ecx, 0FFFFFFCFh
0x4FAFD2: cmp     ecx, 2
0x4FAFD5: ja      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAFDB: test    edi, edi
0x4FAFDD: mov     [eax], edi
0x4FAFDF: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAFE5: jmp     Script_ExtractArgs___ArgLoop_Next
0x4FAFEA: movzx   ecx, byte ptr [eax+4]; jumptable 004FAF50 case 6
0x4FAFEE: add     ecx, 0FFFFFFCEh
0x4FAFF1: cmp     ecx, 1
0x4FAFF4: ja      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FAFFA: jmp     loc_4FB18D
0x4FAFFF: cmp     byte ptr [eax+4], 30h ; '0'; jumptable 004FAF50 case 9
0x4FB003: jmp     loc_4FB187
0x4FB008: cmp     byte ptr [eax+4], 35h ; '5'; jumptable 004FAF50 case 27
0x4FB00C: jmp     loc_4FB187
0x4FB011: mov     ebx, [esi]; jumptable 004FAF50 case 7
0x4FB013: push    0; int
0x4FB015: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x4FB01A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FB01F: push    0; int
0x4FB021: add     esi, 4
0x4FB024: push    eax; void *
0x4FB025: call    OblivionDynamicCast
0x4FB02A: add     esp, 14h
0x4FB02D: test    eax, eax
0x4FB02F: mov     [ebx], eax
0x4FB031: jnz     Script_ExtractArgs___ArgLoop_Next
0x4FB037: mov     edi, [edi+8]
0x4FB03A: test    edi, edi
0x4FB03C: jz      short loc_4FB046
0x4FB03E: cmp     byte ptr [edi+4], 15h
0x4FB042: jnz     short loc_4FB046
0x4FB044: mov     eax, edi
0x4FB046: test    eax, eax
0x4FB048: mov     [ebx], eax
0x4FB04A: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB050: cmp     dword ptr [eax+64h], 0
0x4FB054: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB05A: jmp     Script_ExtractArgs___ArgLoop_Next
0x4FB05F: push    0; jumptable 004FAF50 case 11
0x4FB061: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x4FB066: mov     edi, [esi]
0x4FB068: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FB06D: push    0; int
0x4FB06F: add     esi, 4
0x4FB072: push    eax; void *
0x4FB073: call    OblivionDynamicCast
0x4FB078: add     esp, 14h
0x4FB07B: mov     [edi], eax
0x4FB07D: jmp     loc_4FB194
0x4FB082: push    0; jumptable 004FAF50 case 31
0x4FB084: push    offset ??_R0?AVEffectSetting@@@8; EffectSetting `RTTI Type Descriptor'
0x4FB089: jmp     short loc_4FB066
0x4FB08B: cmp     byte ptr [eax+4], 0Ah; jumptable 004FAF50 case 12
0x4FB08F: jmp     loc_4FB187
0x4FB094: cmp     byte ptr [eax+4], 39h ; '9'; jumptable 004FAF50 case 13
0x4FB098: jmp     loc_4FB187
0x4FB09D: cmp     byte ptr [eax+4], 3Bh ; ';'; jumptable 004FAF50 case 14
0x4FB0A1: jmp     loc_4FB187
0x4FB0A6: cmp     byte ptr [eax+4], 9; jumptable 004FAF50 case 15
0x4FB0AA: jmp     loc_4FB187
0x4FB0AF: cmp     byte ptr [eax+4], 5; jumptable 004FAF50 case 16
0x4FB0B3: jmp     loc_4FB187
0x4FB0B8: cmp     byte ptr [eax+4], 11h; jumptable 004FAF50 case 32
0x4FB0BC: jmp     loc_4FB187
0x4FB0C1: cmp     byte ptr [eax+4], 6; jumptable 004FAF50 case 17
0x4FB0C5: jmp     loc_4FB187
0x4FB0CA: cmp     byte ptr [eax+4], 4; jumptable 004FAF50 case 19
0x4FB0CE: jmp     loc_4FB187
0x4FB0D3: cmp     byte ptr [eax+4], 20h ; ' '; jumptable 004FAF50 case 20
0x4FB0D7: jmp     loc_4FB187
0x4FB0DC: mov     ebx, [esi]; jumptable 004FAF50 case 21
0x4FB0DE: add     esi, 4
0x4FB0E1: mov     dword ptr [ebx], 0
0x4FB0E7: cmp     dword ptr [edi+8], 0
0x4FB0EB: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB0F1: mov     ecx, [edi+8]
0x4FB0F4: mov     edx, [ecx]
0x4FB0F6: mov     eax, [edx+0A8h]
0x4FB0FC: call    eax
0x4FB0FE: test    al, al
0x4FB100: jz      short loc_4FB107
0x4FB102: mov     ecx, [edi+8]
0x4FB105: mov     [ebx], ecx
0x4FB107: cmp     dword ptr [ebx], 0
0x4FB10A: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB110: jmp     Script_ExtractArgs___ArgLoop_Next
0x4FB115: mov     eax, [esi]; jumptable 004FAF50 case 25
0x4FB117: add     esi, 4
0x4FB11A: mov     dword ptr [eax], 0
0x4FB120: mov     edi, [edi+8]
0x4FB123: test    edi, edi
0x4FB125: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB12B: movzx   ecx, byte ptr [edi+4]
0x4FB12F: add     ecx, 0FFFFFFDDh
0x4FB132: cmp     ecx, 1
0x4FB135: jmp     loc_4FAFD5
0x4FB13A: cmp     byte ptr [eax+4], 3Dh ; '='; jumptable 004FAF50 case 29
0x4FB13E: jmp     short loc_4FB187
0x4FB140: cmp     byte ptr [eax+4], 3Eh ; '>'; jumptable 004FAF50 case 30
0x4FB144: jmp     short loc_4FB187
0x4FB146: cmp     byte ptr [eax+4], 2Dh ; '-'; jumptable 004FAF50 case 34
0x4FB14A: jmp     short loc_4FB187
0x4FB14C: cmp     byte ptr [eax+4], 23h ; '#'; jumptable 004FAF50 case 35
0x4FB150: jmp     short loc_4FB187
0x4FB152: mov     eax, [esi]; jumptable 004FAF50 case 36
0x4FB154: add     esi, 4
0x4FB157: mov     dword ptr [eax], 0
0x4FB15D: mov     edi, [edi+8]
0x4FB160: test    edi, edi
0x4FB162: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB168: movzx   ecx, byte ptr [edi+4]
0x4FB16C: cmp     ecx, 6
0x4FB16F: jz      loc_4FAFDB
0x4FB175: cmp     ecx, 23h ; '#'
0x4FB178: jnz     Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB17E: jmp     loc_4FAFDB
0x4FB183: cmp     byte ptr [eax+4], 43h ; 'C'; jumptable 004FAF50 case 37
0x4FB187: jnz     Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB18D: mov     ecx, [esi]
0x4FB18F: add     esi, 4
0x4FB192: mov     [ecx], eax
0x4FB194: test    eax, eax
0x4FB196: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB19C: jmp     Script_ExtractArgs___ArgLoop_Next
0x4FB1A1: cmp     eax, 21h; switch 34 cases
0x4FB1A4: ja      Script_ExtractArgs___Script_ExtractArgs_Return_0_; jumptable 004FB1B1 default case, cases 3,4,6,7,9,11-17,19-22,24-27,29-32
0x4FB1AA: movzx   edx, ds:byte_4FB40C[eax]
0x4FB1B1: jmp     ds:jpt_4FB1B1[edx*4]; switch jump
0x4FB1B8: mov     eax, [ebp+0]; jumptable 004FB1B1 case 0
0x4FB1BB: fstp    st
0x4FB1BD: mov     ecx, [esp+28h+arg_4]
0x4FB1C1: movzx   ebx, word ptr [eax+ecx]
0x4FB1C5: mov     edx, [esp+28h+arg_14]
0x4FB1C9: add     eax, 2
0x4FB1CC: mov     [ebp+0], eax
0x4FB1CF: mov     ecx, [edx+8]
0x4FB1D2: shr     ecx, 3
0x4FB1D5: test    cl, 1
0x4FB1D8: jz      short loc_4FB1FB
0x4FB1DA: mov     edx, [esp+28h+arg_4]
0x4FB1DE: mov     edi, [esi]
0x4FB1E0: movsx   ebp, bx
0x4FB1E3: push    ebp; Size
0x4FB1E4: add     eax, edx
0x4FB1E6: add     esi, 4
0x4FB1E9: push    eax; Src
0x4FB1EA: push    edi; Dst
0x4FB1EB: call    _memcpy
0x4FB1F0: mov     byte ptr [edi+ebp], 0
0x4FB1F4: mov     ebp, [esp+34h+arg_8]
0x4FB1F8: add     esp, 0Ch
0x4FB1FB: movsx   eax, bx
0x4FB1FE: add     [ebp+0], eax
0x4FB201: jmp     Script_ExtractArgs___ArgLoop_Next
0x4FB206: mov     ecx, [esp+28h+l]; jumptable 004FB1B1 cases 1,23
0x4FB20A: fstp    [esp+28h+var_14]
0x4FB20E: mov     edi, [esp+28h+arg_14]
0x4FB212: mov     edx, [esp+28h+a5]
0x4FB216: mov     eax, [esp+28h+a4]
0x4FB21A: push    1
0x4FB21C: push    ecx
0x4FB21D: mov     ecx, [esp+30h+arg_4]
0x4FB221: push    edi
0x4FB222: push    edx
0x4FB223: push    eax
0x4FB224: push    ebp
0x4FB225: push    ecx
0x4FB226: lea     edx, [esp+44h+var_14]
0x4FB22A: push    edx
0x4FB22B: call    ExecuteScriptInstruction?
0x4FB230: add     esp, 20h
0x4FB233: test    al, al
0x4FB235: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB23B: mov     eax, [edi+8]
0x4FB23E: shr     eax, 3
0x4FB241: test    al, 1
0x4FB243: jz      Script_ExtractArgs___ArgLoop_Next
0x4FB249: fld     [esp+28h+var_14]
0x4FB24D: add     esi, 4
0x4FB250: call    Double_To_SInt32
0x4FB255: mov     ecx, [esi-4]
0x4FB258: mov     [ecx], eax
0x4FB25A: jmp     Script_ExtractArgs___ArgLoop_Next
0x4FB25F: mov     edx, [esp+28h+l]; jumptable 004FB1B1 case 2
0x4FB263: fstp    [esp+28h+var_8]
0x4FB267: mov     edi, [esp+28h+arg_14]
0x4FB26B: mov     eax, [esp+28h+a5]
0x4FB26F: mov     ecx, [esp+28h+a4]
0x4FB273: push    1
0x4FB275: push    edx
0x4FB276: mov     edx, [esp+30h+arg_4]
0x4FB27A: push    edi
0x4FB27B: push    eax
0x4FB27C: push    ecx
0x4FB27D: push    ebp
0x4FB27E: push    edx
0x4FB27F: lea     eax, [esp+44h+var_8]
0x4FB283: push    eax
0x4FB284: call    ExecuteScriptInstruction?
0x4FB289: add     esp, 20h
0x4FB28C: test    al, al
0x4FB28E: jz      Script_ExtractArgs___Script_ExtractArgs_Return_0; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB294: mov     ecx, [edi+8]
0x4FB297: shr     ecx, 3
0x4FB29A: test    cl, 1
0x4FB29D: jz      Script_ExtractArgs___ArgLoop_Next
0x4FB2A3: fld     [esp+28h+var_8]
0x4FB2A7: mov     edx, [esi]
0x4FB2A9: fstp    dword ptr [esp+28h+var_14]
0x4FB2AD: add     esi, 4
0x4FB2B0: fld     dword ptr [esp+28h+var_14]
0x4FB2B4: fstp    dword ptr [edx]
0x4FB2B6: jmp     short Script_ExtractArgs___ArgLoop_Next
0x4FB2B8: mov     eax, [esp+28h+arg_14]; jumptable 004FB1B1 case 8
0x4FB2BC: fstp    st
0x4FB2BE: mov     ecx, [eax+8]
0x4FB2C1: shr     ecx, 3
0x4FB2C4: test    cl, 1
0x4FB2C7: jz      short loc_4FB2DA
0x4FB2C9: mov     edx, [ebp+0]
0x4FB2CC: mov     ecx, [esp+28h+arg_4]
0x4FB2D0: mov     eax, [esi]
0x4FB2D2: mov     dl, [ecx+edx]
0x4FB2D5: add     esi, 4
0x4FB2D8: mov     [eax], dl
0x4FB2DA: add     dword ptr [ebp+0], 1
0x4FB2DE: jmp     short Script_ExtractArgs___ArgLoop_Next
0x4FB2E0: mov     eax, [ebp+0]; jumptable 004FB1B1 case 33
0x4FB2E3: fstp    st
0x4FB2E5: mov     ecx, [esp+28h+arg_4]
0x4FB2E9: movzx   ecx, word ptr [eax+ecx]
0x4FB2ED: mov     edx, [esp+28h+arg_14]
0x4FB2F1: add     eax, 2
0x4FB2F4: mov     [ebp+0], eax
0x4FB2F7: mov     eax, [edx+8]
0x4FB2FA: shr     eax, 3
0x4FB2FD: test    al, 1
0x4FB2FF: jz      short Script_ExtractArgs___ArgLoop_Next
0x4FB301: mov     edx, [esi]
0x4FB303: add     esi, 4
0x4FB306: mov     [edx], cl
0x4FB308: jmp     short Script_ExtractArgs___ArgLoop_Next
0x4FB30A: mov     eax, [ebp+0]; jumptable 004FB1B1 cases 5,10,18,28
0x4FB30D: fstp    st
0x4FB30F: mov     ecx, [esp+28h+arg_4]
0x4FB313: movzx   ecx, word ptr [eax+ecx]
0x4FB317: mov     edx, [esp+28h+arg_14]
0x4FB31B: add     eax, 2
0x4FB31E: mov     [ebp+0], eax
0x4FB321: mov     eax, [edx+8]
0x4FB324: shr     eax, 3
0x4FB327: test    al, 1
0x4FB329: jz      short Script_ExtractArgs___ArgLoop_Next
0x4FB32B: mov     edx, [esi]
0x4FB32D: add     esi, 4
0x4FB330: movsx   ecx, cx
0x4FB333: mov     [edx], ecx
0x4FB335: mov     eax, [esp+28h+var_18]
0x4FB339: add     eax, 1
0x4FB33C: cmp     ax, word ptr [esp+28h+var_C]
0x4FB341: mov     [esp+28h+var_18], eax
0x4FB345: jl      Script_ExtractArgs___ArgLoop_Continue
0x4FB34B: pop     edi
0x4FB34C: pop     esi
0x4FB34D: pop     ebp
0x4FB34E: mov     al, 1
0x4FB350: pop     ebx
0x4FB351: add     esp, 18h
0x4FB354: retn
0x4FB355: fstp    st; jumptable 004FB1B1 default case, cases 3,4,6,7,9,11-17,19-22,24-27,29-32
0x4FB357: pop     edi; jumptable 004FAF50 default case, cases 5,8,10,18,22,23,28,33
0x4FB358: pop     esi
0x4FB359: pop     ebp
0x4FB35A: xor     al, al
0x4FB35C: pop     ebx
0x4FB35D: add     esp, 18h
0x4FB360: retn
