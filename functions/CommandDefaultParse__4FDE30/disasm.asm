0x4FDE30: sub     esp, 230h
0x4FDE36: mov     eax, ds:0B30AACh
0x4FDE3B: xor     eax, esp
0x4FDE3D: mov     [esp+230h+var_4], eax
0x4FDE44: mov     eax, [esp+230h+arg_4]
0x4FDE4B: mov     ecx, [esp+230h+arg_C]
0x4FDE52: push    ebx
0x4FDE53: push    ebp
0x4FDE54: push    esi
0x4FDE55: mov     esi, [esp+23Ch+arg_8]
0x4FDE5C: mov     [esp+23Ch+var_22C], eax
0x4FDE60: mov     eax, [esi+40Ch]
0x4FDE66: xor     edx, edx
0x4FDE68: mov     [esp+23Ch+var_228], ecx
0x4FDE6C: lea     ecx, [eax+esi+20Ch]
0x4FDE73: mov     ax, word ptr [esp+23Ch+arg_0]
0x4FDE7B: mov     [esi+208h], edx
0x4FDE81: mov     [ecx], ax
0x4FDE84: add     dword ptr [esi+40Ch], 2
0x4FDE8B: movzx   eax, ax
0x4FDE8E: cmp     eax, edx
0x4FDE90: push    edi
0x4FDE91: mov     [esp+240h+var_220], ecx
0x4FDE95: mov     [esp+240h+var_230], edx
0x4FDE99: mov     [esp+240h+var_21C], eax
0x4FDE9D: jle     loc_4FEC56
0x4FDEA3: xor     eax, eax
0x4FDEA5: mov     edx, [esp+240h+var_22C]
0x4FDEA9: lea     ecx, [eax+eax*2]
0x4FDEAC: mov     eax, [edx+ecx*4+4]
0x4FDEB0: mov     bl, ds:0B0A54Ch[eax*8]
0x4FDEB7: xor     edi, edi
0x4FDEB9: lea     ebp, [edx+ecx*4+4]
0x4FDEBD: push    200h
0x4FDEC2: lea     ecx, [esp+244h+Src]
0x4FDEC6: push    edi
0x4FDEC7: push    ecx
0x4FDEC8: mov     byte ptr [esp+24Ch+var_224], bl
0x4FDECC: mov     [esp+24Ch+var_18], edi
0x4FDED3: mov     [esp+24Ch+var_C], edi
0x4FDEDA: mov     [esp+24Ch+var_14], 0
0x4FDEE2: mov     [esp+24Ch+var_10], edi
0x4FDEE9: mov     [esp+24Ch+var_8], edi
0x4FDEF0: call    __memset
0x4FDEF5: mov     edx, [esp+24Ch+var_224]
0x4FDEF9: mov     ecx, [esp+24Ch+var_228]
0x4FDEFD: push    edi
0x4FDEFE: push    edx
0x4FDEFF: lea     eax, [esi+208h]
0x4FDF05: push    eax
0x4FDF06: lea     eax, [esi+4]
0x4FDF09: push    eax
0x4FDF0A: lea     eax, [esp+25Ch+Src]
0x4FDF0E: push    eax
0x4FDF0F: push    ecx
0x4FDF10: call    sub_4FD7C0
0x4FDF15: mov     edi, eax
0x4FDF17: add     esp, 24h
0x4FDF1A: test    edi, edi
0x4FDF1C: jz      loc_4FEC8A
0x4FDF22: test    bl, bl
0x4FDF24: mov     cl, [esp+240h+var_14]
0x4FDF2B: mov     edx, [esp+240h+var_18]
0x4FDF32: jnz     short loc_4FDF44
0x4FDF34: test    edx, edx
0x4FDF36: ja      loc_4FECDD
0x4FDF3C: test    cl, cl
0x4FDF3E: jnz     loc_4FECDD
0x4FDF44: mov     eax, [ebp+0]
0x4FDF47: cmp     byte ptr ds:0B0A54Dh[eax*8], 0
0x4FDF4F: mov     ebx, [esp+240h+var_228]
0x4FDF53: jz      short loc_4FDF83
0x4FDF55: push    0; char
0x4FDF57: push    0; char
0x4FDF59: lea     ecx, [esp+248h+Src]
0x4FDF5D: push    ecx; Str
0x4FDF5E: mov     ecx, ebx
0x4FDF60: call    sub_4FD0A0
0x4FDF65: test    al, al
0x4FDF67: jz      loc_4FED03
0x4FDF6D: mov     edx, [esp+240h+var_18]
0x4FDF74: test    edx, edx
0x4FDF76: jz      loc_4FED03
0x4FDF7C: mov     cl, [esp+240h+var_14]
0x4FDF83: mov     eax, [ebp+0]
0x4FDF86: cmp     byte ptr ds:0B0A54Dh[eax*8], 0
0x4FDF8E: jz      loc_4FE88B
0x4FDF94: add     eax, 0FFFFFFFDh; switch 35 cases
0x4FDF97: cmp     eax, 22h
0x4FDF9A: ja      CommandDefaultParse___def_4FDFA0; jumptable 004FDFA0 default case, cases 5,8,10,18,22,23,28,33
0x4FDFA0: jmp     ds:jpt_4FDFA0[eax*4]; switch jump
0x4FDFA7: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 3
0x4FDFAF: jnz     loc_4FE85B
0x4FDFB5: mov     eax, [esp+240h+var_8]
0x4FDFBC: test    eax, eax
0x4FDFBE: jz      short loc_4FDFD5
0x4FDFC0: movzx   eax, byte ptr [eax+4]
0x4FDFC4: push    eax
0x4FDFC5: call    TESContainer_IsInventoryItemType
0x4FDFCA: add     esp, 4
0x4FDFCD: test    al, al
0x4FDFCF: jnz     loc_4FE85B
0x4FDFD5: movsx   eax, word ptr [esp+240h+var_230]
0x4FDFDA: lea     edx, [eax+eax*2]
0x4FDFDD: mov     eax, [esp+240h+var_22C]
0x4FDFE1: mov     ecx, [eax+edx*4]
0x4FDFE4: push    ecx
0x4FDFE5: lea     edx, [esp+244h+Src]
0x4FDFE9: push    edx; ArgList
0x4FDFEA: push    offset aInvalidInvento; "Invalid inventory object '%s' for param"...
0x4FDFEF: push    ebx; int
0x4FDFF0: call    sub_4FCE30
0x4FDFF5: add     esp, 10h
0x4FDFF8: xor     al, al
0x4FDFFA: jmp     loc_4FECC4
0x4FDFFF: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 cases 4,6,24,26
0x4FE007: jnz     loc_4FE85B
0x4FE00D: mov     edx, [esp+240h+var_8]
0x4FE014: push    0; int
0x4FE016: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4FE01B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE020: push    0; int
0x4FE022: push    edx; void *
0x4FE023: call    OblivionDynamicCast
0x4FE028: mov     ecx, eax; this
0x4FE02A: add     esp, 14h
0x4FE02D: test    ecx, ecx
0x4FE02F: jz      loc_4FED2A
0x4FE035: mov     edx, [ebp+0]
0x4FE038: sub     edx, 6
0x4FE03B: jz      loc_4FE0C6
0x4FE041: sub     edx, 12h
0x4FE044: jz      short loc_4FE086
0x4FE046: sub     edx, 2
0x4FE049: jnz     loc_4FE85B
0x4FE04F: call    TESObjectREFR_GetContainer
0x4FE054: test    eax, eax
0x4FE056: jnz     loc_4FE85B
0x4FE05C: movsx   eax, word ptr [esp+240h+var_230]
0x4FE061: mov     edx, [esp+240h+var_22C]
0x4FE065: lea     ecx, [eax+eax*2]
0x4FE068: mov     eax, [edx+ecx*4]
0x4FE06B: push    eax
0x4FE06C: lea     ecx, [esp+244h+Src]
0x4FE070: push    ecx; ArgList
0x4FE071: push    offset aInvalidContain; "Invalid container reference '%s' for pa"...
0x4FE076: push    ebx; int
0x4FE077: call    sub_4FCE30
0x4FE07C: add     esp, 10h
0x4FE07F: xor     al, al
0x4FE081: jmp     loc_4FECC4
0x4FE086: mov     eax, [ecx]
0x4FE088: mov     edx, [eax+170h]
0x4FE08E: call    edx
0x4FE090: cmp     eax, ds:0B35EA8h
0x4FE096: jz      loc_4FE85B
0x4FE09C: movsx   eax, word ptr [esp+240h+var_230]
0x4FE0A1: lea     edx, [eax+eax*2]
0x4FE0A4: mov     eax, [esp+240h+var_22C]
0x4FE0A8: mov     ecx, [eax+edx*4]
0x4FE0AB: push    ecx
0x4FE0AC: lea     edx, [esp+244h+Src]
0x4FE0B0: push    edx; ArgList
0x4FE0B1: push    offset aInvalidMapMark; "Invalid map marker '%s' for parameter %"...
0x4FE0B6: push    ebx; int
0x4FE0B7: call    sub_4FCE30
0x4FE0BC: add     esp, 10h
0x4FE0BF: xor     al, al
0x4FE0C1: jmp     loc_4FECC4
0x4FE0C6: mov     eax, [ecx]
0x4FE0C8: mov     edx, [eax+190h]
0x4FE0CE: call    edx
0x4FE0D0: test    al, al
0x4FE0D2: jnz     loc_4FE85B
0x4FE0D8: movsx   eax, word ptr [esp+240h+var_230]
0x4FE0DD: mov     ecx, [esp+240h+var_22C]
0x4FE0E1: lea     eax, [eax+eax*2]
0x4FE0E4: mov     edx, [ecx+eax*4]
0x4FE0E7: push    edx
0x4FE0E8: lea     eax, [esp+244h+Src]
0x4FE0EC: push    eax; ArgList
0x4FE0ED: push    offset aInvalidActorSF; "Invalid actor '%s' for parameter %s.\r"...
0x4FE0F2: push    ebx; int
0x4FE0F3: call    sub_4FCE30
0x4FE0F8: add     esp, 10h
0x4FE0FB: xor     al, al
0x4FE0FD: jmp     loc_4FECC4
0x4FE102: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 7
0x4FE10A: jnz     loc_4FE85B
0x4FE110: mov     eax, [esp+240h+var_8]
0x4FE117: test    eax, eax
0x4FE119: jz      short loc_4FE15E
0x4FE11B: push    0; int
0x4FE11D: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x4FE122: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE127: push    0; int
0x4FE129: push    eax; void *
0x4FE12A: call    OblivionDynamicCast
0x4FE12F: add     esp, 14h
0x4FE132: test    eax, eax
0x4FE134: jnz     loc_4FE85B
0x4FE13A: push    eax; int
0x4FE13B: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x4FE140: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE145: push    eax; int
0x4FE146: mov     eax, [esp+250h+var_8]
0x4FE14D: push    eax; void *
0x4FE14E: call    OblivionDynamicCast
0x4FE153: add     esp, 14h
0x4FE156: test    eax, eax
0x4FE158: jnz     loc_4FE85B
0x4FE15E: movsx   eax, word ptr [esp+240h+var_230]
0x4FE163: mov     edx, [esp+240h+var_22C]
0x4FE167: lea     ecx, [eax+eax*2]
0x4FE16A: mov     eax, [edx+ecx*4]
0x4FE16D: push    eax
0x4FE16E: lea     ecx, [esp+244h+Src]
0x4FE172: push    ecx; ArgList
0x4FE173: push    offset aInvalidSpellIt; "Invalid spell item '%s' for parameter %"...
0x4FE178: push    ebx; int
0x4FE179: call    sub_4FCE30
0x4FE17E: add     esp, 10h
0x4FE181: xor     al, al
0x4FE183: jmp     loc_4FECC4
0x4FE188: mov     ecx, [esp+240h+var_8]; jumptable 004FDFA0 case 9
0x4FE18F: push    0; int
0x4FE191: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4FE196: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE19B: push    0; int
0x4FE19D: push    ecx; void *
0x4FE19E: call    OblivionDynamicCast
0x4FE1A3: add     esp, 14h
0x4FE1A6: cmp     [esp+240h+var_C], 0
0x4FE1AE: jnz     loc_4FE85B
0x4FE1B4: test    eax, eax
0x4FE1B6: jz      short loc_4FE1C7
0x4FE1B8: mov     ecx, eax; this
0x4FE1BA: call    TESObjectCELL_IsInterior
0x4FE1BF: test    al, al
0x4FE1C1: jnz     loc_4FE85B
0x4FE1C7: movsx   eax, word ptr [esp+240h+var_230]
0x4FE1CC: lea     edx, [eax+eax*2]
0x4FE1CF: mov     eax, [esp+240h+var_22C]
0x4FE1D3: mov     ecx, [eax+edx*4]
0x4FE1D6: push    ecx
0x4FE1D7: lea     edx, [esp+244h+Src]
0x4FE1DB: push    edx; ArgList
0x4FE1DC: push    offset aInvalidInterio; "Invalid interior cell '%s' for paramete"...
0x4FE1E1: push    ebx; int
0x4FE1E2: call    sub_4FCE30
0x4FE1E7: add     esp, 10h
0x4FE1EA: xor     al, al
0x4FE1EC: jmp     loc_4FECC4
0x4FE1F1: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 27
0x4FE1F9: jnz     loc_4FE85B
0x4FE1FF: mov     eax, [esp+240h+var_8]
0x4FE206: test    eax, eax
0x4FE208: jz      short loc_4FE229
0x4FE20A: push    0; int
0x4FE20C: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x4FE211: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE216: push    0; int
0x4FE218: push    eax; void *
0x4FE219: call    OblivionDynamicCast
0x4FE21E: add     esp, 14h
0x4FE221: test    eax, eax
0x4FE223: jnz     loc_4FE85B
0x4FE229: movsx   eax, word ptr [esp+240h+var_230]
0x4FE22E: mov     ecx, [esp+240h+var_22C]
0x4FE232: lea     eax, [eax+eax*2]
0x4FE235: mov     edx, [ecx+eax*4]
0x4FE238: push    edx
0x4FE239: lea     eax, [esp+244h+Src]
0x4FE23D: push    eax; ArgList
0x4FE23E: push    offset aInvalidWorldsp; "Invalid worldspace '%s' for parameter %"...
0x4FE243: push    ebx; int
0x4FE244: call    sub_4FCE30
0x4FE249: add     esp, 10h
0x4FE24C: xor     al, al
0x4FE24E: jmp     loc_4FECC4
0x4FE253: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 11
0x4FE25B: jnz     loc_4FE85B
0x4FE261: mov     eax, [esp+240h+var_8]
0x4FE268: test    eax, eax
0x4FE26A: jz      short loc_4FE28B
0x4FE26C: push    0; int
0x4FE26E: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x4FE273: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE278: push    0; int
0x4FE27A: push    eax; void *
0x4FE27B: call    OblivionDynamicCast
0x4FE280: add     esp, 14h
0x4FE283: test    eax, eax
0x4FE285: jnz     loc_4FE85B
0x4FE28B: movsx   eax, word ptr [esp+240h+var_230]
0x4FE290: mov     edx, [esp+240h+var_22C]
0x4FE294: lea     ecx, [eax+eax*2]
0x4FE297: mov     eax, [edx+ecx*4]
0x4FE29A: push    eax
0x4FE29B: lea     ecx, [esp+244h+Src]
0x4FE29F: push    ecx; ArgList
0x4FE2A0: push    offset aInvalidMagicIt; "Invalid magic item '%s' for parameter %"...
0x4FE2A5: push    ebx; int
0x4FE2A6: call    sub_4FCE30
0x4FE2AB: add     esp, 10h
0x4FE2AE: xor     al, al
0x4FE2B0: jmp     loc_4FECC4
0x4FE2B5: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 31
0x4FE2BD: jnz     loc_4FE85B
0x4FE2C3: mov     eax, [esp+240h+var_8]
0x4FE2CA: test    eax, eax
0x4FE2CC: jz      short loc_4FE2ED
0x4FE2CE: push    0; int
0x4FE2D0: push    offset ??_R0?AVEffectSetting@@@8; struct TypeDescriptor *
0x4FE2D5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE2DA: push    0; int
0x4FE2DC: push    eax; void *
0x4FE2DD: call    OblivionDynamicCast
0x4FE2E2: add     esp, 14h
0x4FE2E5: test    eax, eax
0x4FE2E7: jnz     loc_4FE85B
0x4FE2ED: movsx   eax, word ptr [esp+240h+var_230]
0x4FE2F2: lea     edx, [eax+eax*2]
0x4FE2F5: mov     eax, [esp+240h+var_22C]
0x4FE2F9: mov     ecx, [eax+edx*4]
0x4FE2FC: push    ecx
0x4FE2FD: lea     edx, [esp+244h+Src]
0x4FE301: push    edx; ArgList
0x4FE302: push    offset aInvalidEffectS; "Invalid effect setting '%s' for paramet"...
0x4FE307: push    ebx; int
0x4FE308: call    sub_4FCE30
0x4FE30D: add     esp, 10h
0x4FE310: xor     al, al
0x4FE312: jmp     loc_4FECC4
0x4FE317: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 12
0x4FE31F: jnz     loc_4FE85B
0x4FE325: mov     eax, [esp+240h+var_8]
0x4FE32C: test    eax, eax
0x4FE32E: jz      short loc_4FE33A
0x4FE330: cmp     byte ptr [eax+4], 0Ah
0x4FE334: jz      loc_4FE85B
0x4FE33A: movsx   eax, word ptr [esp+240h+var_230]
0x4FE33F: mov     ecx, [esp+240h+var_22C]
0x4FE343: lea     eax, [eax+eax*2]
0x4FE346: mov     edx, [ecx+eax*4]
0x4FE349: push    edx
0x4FE34A: lea     eax, [esp+244h+Src]
0x4FE34E: push    eax; ArgList
0x4FE34F: push    offset aInvalidSoundSF; "Invalid sound '%s' for parameter %s.\r"...
0x4FE354: push    ebx; int
0x4FE355: call    sub_4FCE30
0x4FE35A: add     esp, 10h
0x4FE35D: xor     al, al
0x4FE35F: jmp     loc_4FECC4
0x4FE364: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 13
0x4FE36C: jnz     loc_4FE85B
0x4FE372: mov     eax, [esp+240h+var_8]
0x4FE379: test    eax, eax
0x4FE37B: jz      short loc_4FE387
0x4FE37D: cmp     byte ptr [eax+4], 39h ; '9'
0x4FE381: jz      loc_4FE85B
0x4FE387: movsx   eax, word ptr [esp+240h+var_230]
0x4FE38C: mov     edx, [esp+240h+var_22C]
0x4FE390: lea     ecx, [eax+eax*2]
0x4FE393: mov     eax, [edx+ecx*4]
0x4FE396: push    eax
0x4FE397: lea     ecx, [esp+244h+Src]
0x4FE39B: push    ecx; ArgList
0x4FE39C: push    offset aInvalidTopicSF; "Invalid topic '%s' for parameter %s.\r"...
0x4FE3A1: push    ebx; int
0x4FE3A2: call    sub_4FCE30
0x4FE3A7: add     esp, 10h
0x4FE3AA: xor     al, al
0x4FE3AC: jmp     loc_4FECC4
0x4FE3B1: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 14
0x4FE3B9: jnz     loc_4FE85B
0x4FE3BF: mov     eax, [esp+240h+var_8]
0x4FE3C6: test    eax, eax
0x4FE3C8: jz      short loc_4FE3D4
0x4FE3CA: cmp     byte ptr [eax+4], 3Bh ; ';'
0x4FE3CE: jz      loc_4FE85B
0x4FE3D4: movsx   eax, word ptr [esp+240h+var_230]
0x4FE3D9: lea     edx, [eax+eax*2]
0x4FE3DC: mov     eax, [esp+240h+var_22C]
0x4FE3E0: mov     ecx, [eax+edx*4]
0x4FE3E3: push    ecx
0x4FE3E4: lea     edx, [esp+244h+Src]
0x4FE3E8: push    edx; ArgList
0x4FE3E9: push    offset aInvalidInfoSFo; "Invalid info '%s' for parameter %s.\r\n"...
0x4FE3EE: push    ebx; int
0x4FE3EF: call    sub_4FCE30
0x4FE3F4: add     esp, 10h
0x4FE3F7: xor     al, al
0x4FE3F9: jmp     loc_4FECC4
0x4FE3FE: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 15
0x4FE406: jnz     loc_4FE85B
0x4FE40C: mov     eax, [esp+240h+var_8]
0x4FE413: test    eax, eax
0x4FE415: jz      short loc_4FE421
0x4FE417: cmp     byte ptr [eax+4], 9
0x4FE41B: jz      loc_4FE85B
0x4FE421: movsx   eax, word ptr [esp+240h+var_230]
0x4FE426: mov     ecx, [esp+240h+var_22C]
0x4FE42A: lea     eax, [eax+eax*2]
0x4FE42D: mov     edx, [ecx+eax*4]
0x4FE430: push    edx
0x4FE431: lea     eax, [esp+244h+Src]
0x4FE435: push    eax; ArgList
0x4FE436: push    offset aInvalidRaceSFo; "Invalid race '%s' for parameter %s.\r\n"...
0x4FE43B: push    ebx; int
0x4FE43C: call    sub_4FCE30
0x4FE441: add     esp, 10h
0x4FE444: xor     al, al
0x4FE446: jmp     loc_4FECC4
0x4FE44B: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 16
0x4FE453: jnz     loc_4FE85B
0x4FE459: mov     eax, [esp+240h+var_8]
0x4FE460: test    eax, eax
0x4FE462: jz      short loc_4FE46E
0x4FE464: cmp     byte ptr [eax+4], 5
0x4FE468: jz      loc_4FE85B
0x4FE46E: movsx   eax, word ptr [esp+240h+var_230]
0x4FE473: mov     edx, [esp+240h+var_22C]
0x4FE477: lea     ecx, [eax+eax*2]
0x4FE47A: mov     eax, [edx+ecx*4]
0x4FE47D: push    eax
0x4FE47E: lea     ecx, [esp+244h+Src]
0x4FE482: push    ecx; ArgList
0x4FE483: push    offset aInvalidClassSF; "Invalid class '%s' for parameter %s.\r"...
0x4FE488: push    ebx; int
0x4FE489: call    sub_4FCE30
0x4FE48E: add     esp, 10h
0x4FE491: xor     al, al
0x4FE493: jmp     loc_4FECC4
0x4FE498: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 32
0x4FE4A0: jnz     loc_4FE85B
0x4FE4A6: mov     eax, [esp+240h+var_8]
0x4FE4AD: test    eax, eax
0x4FE4AF: jz      short loc_4FE4BB
0x4FE4B1: cmp     byte ptr [eax+4], 11h
0x4FE4B5: jz      loc_4FE85B
0x4FE4BB: movsx   eax, word ptr [esp+240h+var_230]
0x4FE4C0: lea     edx, [eax+eax*2]
0x4FE4C3: mov     eax, [esp+240h+var_22C]
0x4FE4C7: mov     ecx, [eax+edx*4]
0x4FE4CA: push    ecx
0x4FE4CB: lea     edx, [esp+244h+Src]
0x4FE4CF: push    edx; ArgList
0x4FE4D0: push    offset aInvalidBirthsi; "Invalid birthsign '%s' for parameter %s"...
0x4FE4D5: push    ebx; int
0x4FE4D6: call    sub_4FCE30
0x4FE4DB: add     esp, 10h
0x4FE4DE: xor     al, al
0x4FE4E0: jmp     loc_4FECC4
0x4FE4E5: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 17
0x4FE4ED: jnz     loc_4FE85B
0x4FE4F3: mov     eax, [esp+240h+var_8]
0x4FE4FA: test    eax, eax
0x4FE4FC: jz      short loc_4FE508
0x4FE4FE: cmp     byte ptr [eax+4], 6
0x4FE502: jz      loc_4FE85B
0x4FE508: movsx   eax, word ptr [esp+240h+var_230]
0x4FE50D: mov     ecx, [esp+240h+var_22C]
0x4FE511: lea     eax, [eax+eax*2]
0x4FE514: mov     edx, [ecx+eax*4]
0x4FE517: push    edx
0x4FE518: lea     eax, [esp+244h+Src]
0x4FE51C: push    eax; ArgList
0x4FE51D: push    offset aInvalidFaction; "Invalid faction '%s' for parameter %s."...
0x4FE522: push    ebx; int
0x4FE523: call    sub_4FCE30
0x4FE528: add     esp, 10h
0x4FE52B: xor     al, al
0x4FE52D: jmp     loc_4FECC4
0x4FE532: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 19
0x4FE53A: jnz     loc_4FE85B
0x4FE540: mov     eax, [esp+240h+var_8]
0x4FE547: test    eax, eax
0x4FE549: jz      short loc_4FE555
0x4FE54B: cmp     byte ptr [eax+4], 4
0x4FE54F: jz      loc_4FE85B
0x4FE555: movsx   eax, word ptr [esp+240h+var_230]
0x4FE55A: mov     edx, [esp+240h+var_22C]
0x4FE55E: lea     ecx, [eax+eax*2]
0x4FE561: mov     eax, [edx+ecx*4]
0x4FE564: push    eax
0x4FE565: lea     ecx, [esp+244h+Src]
0x4FE569: push    ecx; ArgList
0x4FE56A: push    offset aInvalidGlobalS; "Invalid global '%s' for parameter %s.\r"...
0x4FE56F: push    ebx; int
0x4FE570: call    sub_4FCE30
0x4FE575: add     esp, 10h
0x4FE578: xor     al, al
0x4FE57A: jmp     loc_4FECC4
0x4FE57F: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 20
0x4FE587: jnz     loc_4FE85B
0x4FE58D: mov     eax, [esp+240h+var_8]
0x4FE594: test    eax, eax
0x4FE596: jz      short loc_4FE5A2
0x4FE598: cmp     byte ptr [eax+4], 20h ; ' '
0x4FE59C: jz      loc_4FE85B
0x4FE5A2: movsx   eax, word ptr [esp+240h+var_230]
0x4FE5A7: lea     edx, [eax+eax*2]
0x4FE5AA: mov     eax, [esp+240h+var_22C]
0x4FE5AE: mov     ecx, [eax+edx*4]
0x4FE5B1: push    ecx
0x4FE5B2: lea     edx, [esp+244h+Src]
0x4FE5B6: push    edx; ArgList
0x4FE5B7: push    offset aInvalidFurnitu; "Invalid furniture object '%s' for param"...
0x4FE5BC: push    ebx; int
0x4FE5BD: call    sub_4FCE30
0x4FE5C2: add     esp, 10h
0x4FE5C5: xor     al, al
0x4FE5C7: jmp     loc_4FECC4
0x4FE5CC: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 21
0x4FE5D4: jnz     loc_4FE85B
0x4FE5DA: mov     eax, [esp+240h+var_8]
0x4FE5E1: test    eax, eax
0x4FE5E3: jz      short loc_4FE604
0x4FE5E5: push    0; int
0x4FE5E7: push    offset ??_R0?AVTESObject@@@8; struct TypeDescriptor *
0x4FE5EC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE5F1: push    0; int
0x4FE5F3: push    eax; void *
0x4FE5F4: call    OblivionDynamicCast
0x4FE5F9: add     esp, 14h
0x4FE5FC: test    eax, eax
0x4FE5FE: jnz     loc_4FE85B
0x4FE604: movsx   eax, word ptr [esp+240h+var_230]
0x4FE609: mov     ecx, [esp+240h+var_22C]
0x4FE60D: lea     eax, [eax+eax*2]
0x4FE610: mov     edx, [ecx+eax*4]
0x4FE613: push    edx
0x4FE614: lea     eax, [esp+244h+Src]
0x4FE618: push    eax; ArgList
0x4FE619: push    offset aInvalidObjectS; "Invalid object '%s' for parameter %s.\r"...
0x4FE61E: push    ebx; int
0x4FE61F: call    sub_4FCE30
0x4FE624: add     esp, 10h
0x4FE627: xor     al, al
0x4FE629: jmp     loc_4FECC4
0x4FE62E: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 25
0x4FE636: jnz     loc_4FE85B
0x4FE63C: mov     eax, [esp+240h+var_8]
0x4FE643: test    eax, eax
0x4FE645: jz      short loc_4FE666
0x4FE647: push    0; int
0x4FE649: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x4FE64E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE653: push    0; int
0x4FE655: push    eax; void *
0x4FE656: call    OblivionDynamicCast
0x4FE65B: add     esp, 14h
0x4FE65E: test    eax, eax
0x4FE660: jnz     loc_4FE85B
0x4FE666: movsx   eax, word ptr [esp+240h+var_230]
0x4FE66B: mov     edx, [esp+240h+var_22C]
0x4FE66F: lea     ecx, [eax+eax*2]
0x4FE672: mov     eax, [edx+ecx*4]
0x4FE675: push    eax
0x4FE676: lea     ecx, [esp+244h+Src]
0x4FE67A: push    ecx; ArgList
0x4FE67B: push    offset aInvalidActorBa; "Invalid actor base '%s' for parameter %"...
0x4FE680: push    ebx; int
0x4FE681: call    sub_4FCE30
0x4FE686: add     esp, 10h
0x4FE689: xor     al, al
0x4FE68B: jmp     loc_4FECC4
0x4FE690: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 29
0x4FE698: jnz     loc_4FE85B
0x4FE69E: mov     eax, [esp+240h+var_8]
0x4FE6A5: test    eax, eax
0x4FE6A7: jz      short loc_4FE6C8
0x4FE6A9: push    0; int
0x4FE6AB: push    offset ??_R0?AVTESPackage@@@8; struct TypeDescriptor *
0x4FE6B0: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE6B5: push    0; int
0x4FE6B7: push    eax; void *
0x4FE6B8: call    OblivionDynamicCast
0x4FE6BD: add     esp, 14h
0x4FE6C0: test    eax, eax
0x4FE6C2: jnz     loc_4FE85B
0x4FE6C8: movsx   eax, word ptr [esp+240h+var_230]
0x4FE6CD: lea     edx, [eax+eax*2]
0x4FE6D0: mov     eax, [esp+240h+var_22C]
0x4FE6D4: mov     ecx, [eax+edx*4]
0x4FE6D7: push    ecx
0x4FE6D8: lea     edx, [esp+244h+Src]
0x4FE6DC: push    edx; ArgList
0x4FE6DD: push    offset aInvalidPackage; "Invalid package '%s' for parameter %s."...
0x4FE6E2: push    ebx; int
0x4FE6E3: call    sub_4FCE30
0x4FE6E8: add     esp, 10h
0x4FE6EB: xor     al, al
0x4FE6ED: jmp     loc_4FECC4
0x4FE6F2: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 30
0x4FE6FA: jnz     loc_4FE85B
0x4FE700: mov     eax, [esp+240h+var_8]
0x4FE707: test    eax, eax
0x4FE709: jz      short loc_4FE72A
0x4FE70B: push    0; int
0x4FE70D: push    offset ??_R0?AVTESCombatStyle@@@8; struct TypeDescriptor *
0x4FE712: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FE717: push    0; int
0x4FE719: push    eax; void *
0x4FE71A: call    OblivionDynamicCast
0x4FE71F: add     esp, 14h
0x4FE722: test    eax, eax
0x4FE724: jnz     loc_4FE85B
0x4FE72A: movsx   eax, word ptr [esp+240h+var_230]
0x4FE72F: mov     ecx, [esp+240h+var_22C]
0x4FE733: lea     eax, [eax+eax*2]
0x4FE736: mov     edx, [ecx+eax*4]
0x4FE739: push    edx
0x4FE73A: lea     eax, [esp+244h+Src]
0x4FE73E: push    eax; ArgList
0x4FE73F: push    offset aInvalidCombatS; "Invalid combat style '%s' for parameter"...
0x4FE744: push    ebx; int
0x4FE745: call    sub_4FCE30
0x4FE74A: add     esp, 10h
0x4FE74D: xor     al, al
0x4FE74F: jmp     loc_4FECC4
0x4FE754: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 34
0x4FE75C: jnz     loc_4FE85B
0x4FE762: mov     eax, [esp+240h+var_8]
0x4FE769: test    eax, eax
0x4FE76B: jz      short loc_4FE777
0x4FE76D: cmp     byte ptr [eax+4], 2Dh ; '-'
0x4FE771: jz      loc_4FE85B
0x4FE777: movsx   eax, word ptr [esp+240h+var_230]
0x4FE77C: mov     edx, [esp+240h+var_22C]
0x4FE780: lea     ecx, [eax+eax*2]
0x4FE783: mov     eax, [edx+ecx*4]
0x4FE786: push    eax
0x4FE787: lea     ecx, [esp+244h+Src]
0x4FE78B: push    ecx; ArgList
0x4FE78C: push    offset aInvalidWeather; "Invalid weather '%s' for parameter %s."...
0x4FE791: push    ebx; int
0x4FE792: call    sub_4FCE30
0x4FE797: add     esp, 10h
0x4FE79A: xor     al, al
0x4FE79C: jmp     loc_4FECC4
0x4FE7A1: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 35
0x4FE7A9: jnz     loc_4FE85B
0x4FE7AF: mov     eax, [esp+240h+var_8]
0x4FE7B6: test    eax, eax
0x4FE7B8: jz      short loc_4FE7C4
0x4FE7BA: cmp     byte ptr [eax+4], 23h ; '#'
0x4FE7BE: jz      loc_4FE85B
0x4FE7C4: movsx   eax, word ptr [esp+240h+var_230]
0x4FE7C9: lea     edx, [eax+eax*2]
0x4FE7CC: mov     eax, [esp+240h+var_22C]
0x4FE7D0: mov     ecx, [eax+edx*4]
0x4FE7D3: push    ecx
0x4FE7D4: lea     edx, [esp+244h+Src]
0x4FE7D8: push    edx; ArgList
0x4FE7D9: push    offset aInvalidNpcSFor; "Invalid NPC '%s' for parameter %s.\r\nC"...
0x4FE7DE: push    ebx; int
0x4FE7DF: call    sub_4FCE30
0x4FE7E4: add     esp, 10h
0x4FE7E7: xor     al, al
0x4FE7E9: jmp     loc_4FECC4
0x4FE7EE: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 36
0x4FE7F6: jnz     short loc_4FE85B
0x4FE7F8: mov     eax, [esp+240h+var_8]
0x4FE7FF: test    eax, eax
0x4FE801: jz      short loc_4FE80E
0x4FE803: mov     al, [eax+4]
0x4FE806: cmp     al, 23h ; '#'
0x4FE808: jz      short loc_4FE85B
0x4FE80A: cmp     al, 6
0x4FE80C: jz      short loc_4FE85B
0x4FE80E: movsx   eax, word ptr [esp+240h+var_230]
0x4FE813: mov     ecx, [esp+240h+var_22C]
0x4FE817: lea     eax, [eax+eax*2]
0x4FE81A: mov     edx, [ecx+eax*4]
0x4FE81D: push    edx
0x4FE81E: lea     eax, [esp+244h+Src]
0x4FE822: push    eax; ArgList
0x4FE823: push    offset aInvalidOwnerSF; "Invalid owner '%s' for parameter %s.\r"...
0x4FE828: push    ebx; int
0x4FE829: call    sub_4FCE30
0x4FE82E: add     esp, 10h
0x4FE831: xor     al, al
0x4FE833: jmp     loc_4FECC4
0x4FE838: cmp     [esp+240h+var_C], 0; jumptable 004FDFA0 case 37
0x4FE840: jnz     short loc_4FE85B
0x4FE842: mov     eax, [esp+240h+var_8]
0x4FE849: test    eax, eax
0x4FE84B: jz      loc_4FED54
0x4FE851: cmp     byte ptr [eax+4], 43h ; 'C'
0x4FE855: jnz     loc_4FED54
0x4FE85B: mov     edx, [esi+40Ch]
0x4FE861: mov     byte ptr [esi+edx+20Ch], 72h ; 'r'
0x4FE869: add     dword ptr [esi+40Ch], 1
0x4FE870: mov     eax, [esi+40Ch]
0x4FE876: mov     cx, word ptr [esp+240h+var_18]
0x4FE87E: mov     [eax+esi+20Ch], cx
0x4FE886: jmp     loc_4FEC37
0x4FE88B: cmp     eax, 21h; switch 34 cases
0x4FE88E: ja      CommandDefaultParse___def_4FE89B; jumptable 004FE89B default case, cases 3,4,6,7,9,11-17,19-22,24-27,29-32
0x4FE894: movzx   eax, ds:byte_4FEF5C[eax]
0x4FE89B: jmp     ds:jpt_4FE89B[eax*4]; switch jump
0x4FE8A2: mov     ecx, [esi+40Ch]; jumptable 004FE89B case 0
0x4FE8A8: mov     [ecx+esi+20Ch], di
0x4FE8B0: add     dword ptr [esi+40Ch], 2
0x4FE8B7: mov     eax, [esi+40Ch]
0x4FE8BD: push    edi; Size
0x4FE8BE: lea     edx, [esp+244h+Src]
0x4FE8C2: push    edx; Src
0x4FE8C3: lea     eax, [esi+eax+20Ch]
0x4FE8CA: push    eax; Dst
0x4FE8CB: call    _memcpy
0x4FE8D0: add     esp, 0Ch
0x4FE8D3: add     [esi+40Ch], edi
0x4FE8D9: jmp     loc_4FEC3E
0x4FE8DE: test    edx, edx; jumptable 004FE89B cases 1,2,23
0x4FE8E0: jbe     short loc_4FE930
0x4FE8E2: cmp     cl, 47h ; 'G'
0x4FE8E5: jnz     short loc_4FE8F7
0x4FE8E7: mov     ecx, [esi+40Ch]
0x4FE8ED: mov     byte ptr [esi+ecx+20Ch], 47h ; 'G'
0x4FE8F5: jmp     short loc_4FE905
0x4FE8F7: mov     edx, [esi+40Ch]
0x4FE8FD: mov     byte ptr [esi+edx+20Ch], 72h ; 'r'
0x4FE905: add     dword ptr [esi+40Ch], 1
0x4FE90C: mov     eax, [esi+40Ch]
0x4FE912: mov     cx, word ptr [esp+240h+var_18]
0x4FE91A: mov     [eax+esi+20Ch], cx
0x4FE922: add     dword ptr [esi+40Ch], 2
0x4FE929: mov     cl, [esp+240h+var_14]
0x4FE930: cmp     cl, 47h ; 'G'
0x4FE933: jz      loc_4FEC3E
0x4FE939: cmp     [esp+240h+var_C], 0
0x4FE941: jbe     short loc_4FE972
0x4FE943: mov     edx, [esi+40Ch]
0x4FE949: mov     [esi+edx+20Ch], cl
0x4FE950: add     dword ptr [esi+40Ch], 1
0x4FE957: mov     eax, [esi+40Ch]
0x4FE95D: mov     cx, word ptr [esp+240h+var_C]
0x4FE965: mov     [eax+esi+20Ch], cx
0x4FE96D: jmp     loc_4FEC37
0x4FE972: mov     ebp, [ebp+0]
0x4FE975: mov     edi, 1
0x4FE97A: cmp     ebp, edi
0x4FE97C: jz      short loc_4FE9D2
0x4FE97E: cmp     ebp, 17h
0x4FE981: jz      short loc_4FE9D2
0x4FE983: lea     edx, [esp+240h+Src]
0x4FE987: push    edx
0x4FE988: call    sub_47D5B0
0x4FE98D: add     esp, 4
0x4FE990: test    eax, eax
0x4FE992: jz      loc_4FEDA3
0x4FE998: mov     eax, [esi+40Ch]
0x4FE99E: lea     ecx, [esp+240h+Src]
0x4FE9A2: mov     byte ptr [esi+eax+20Ch], 7Ah ; 'z'
0x4FE9AA: add     [esi+40Ch], edi
0x4FE9B0: push    ecx; String
0x4FE9B1: call    _atof
0x4FE9B6: mov     edx, [esi+40Ch]
0x4FE9BC: fstp    qword ptr [esi+edx+20Ch]
0x4FE9C3: add     esp, 4
0x4FE9C6: add     dword ptr [esi+40Ch], 8
0x4FE9CD: jmp     loc_4FEC3E
0x4FE9D2: lea     eax, [esp+240h+Src]
0x4FE9D6: push    eax
0x4FE9D7: call    sub_47D550
0x4FE9DC: add     esp, 4
0x4FE9DF: test    eax, eax
0x4FE9E1: jz      loc_4FEDBA
0x4FE9E7: mov     ecx, [esi+40Ch]
0x4FE9ED: lea     edx, [esp+240h+Src]
0x4FE9F1: mov     byte ptr [esi+ecx+20Ch], 6Eh ; 'n'
0x4FE9F9: add     [esi+40Ch], edi
0x4FE9FF: push    edx; Str
0x4FEA00: call    _atol
0x4FEA05: mov     ecx, [esi+40Ch]
0x4FEA0B: add     esp, 4
0x4FEA0E: mov     [esi+ecx+20Ch], eax
0x4FEA15: add     dword ptr [esi+40Ch], 4
0x4FEA1C: jmp     loc_4FEC3E
0x4FEA21: xor     edi, edi; jumptable 004FE89B case 5
0x4FEA23: mov     eax, ds:0B0A1A8h[edi*4]
0x4FEA2A: lea     edx, [esp+240h+Src]
0x4FEA2E: push    edx; Str2
0x4FEA2F: push    eax; Str1
0x4FEA30: call    __strcmp
0x4FEA35: add     esp, 8
0x4FEA38: test    eax, eax
0x4FEA3A: jz      short loc_4FEA6E
0x4FEA3C: add     edi, 1
0x4FEA3F: cmp     edi, 48h ; 'H'
0x4FEA42: jl      short loc_4FEA23
0x4FEA44: movsx   eax, word ptr [esp+240h+var_230]
0x4FEA49: mov     edx, [esp+240h+var_22C]
0x4FEA4D: lea     ecx, [eax+eax*2]
0x4FEA50: mov     eax, [edx+ecx*4]
0x4FEA53: push    eax
0x4FEA54: lea     ecx, [esp+244h+Src]
0x4FEA58: push    ecx; ArgList
0x4FEA59: push    offset aInvalidActorVa; "Invalid actor value '%s' for parameter "...
0x4FEA5E: push    ebx; int
0x4FEA5F: call    sub_4FCE30
0x4FEA64: add     esp, 10h
0x4FEA67: xor     al, al
0x4FEA69: jmp     loc_4FECC4
0x4FEA6E: mov     ecx, [esi+40Ch]
0x4FEA74: mov     [ecx+esi+20Ch], di
0x4FEA7C: jmp     loc_4FEC37
0x4FEA81: lea     edx, [esp+240h+Src]; jumptable 004FE89B case 28
0x4FEA85: push    edx
0x4FEA86: call    sub_47D550
0x4FEA8B: add     esp, 4
0x4FEA8E: test    eax, eax
0x4FEA90: jz      loc_4FEDE4
0x4FEA96: lea     eax, [esp+240h+Src]
0x4FEA9A: push    eax; Str
0x4FEA9B: call    _atol
0x4FEAA0: add     esp, 4
0x4FEAA3: cmp     eax, 5
0x4FEAA6: ja      loc_4FEE10
0x4FEAAC: mov     ecx, [esi+40Ch]
0x4FEAB2: mov     [ecx+esi+20Ch], ax
0x4FEABA: jmp     loc_4FEC37
0x4FEABF: movsx   edx, [esp+240h+Src]; jumptable 004FE89B case 8
0x4FEAC4: push    edx; C
0x4FEAC5: call    _toupper
0x4FEACA: add     esp, 4
0x4FEACD: cmp     al, 58h ; 'X'
0x4FEACF: jz      short loc_4FEADD
0x4FEAD1: cmp     al, 59h ; 'Y'
0x4FEAD3: jz      short loc_4FEADD
0x4FEAD5: cmp     al, 5Ah ; 'Z'
0x4FEAD7: jnz     loc_4FEE3C
0x4FEADD: mov     ecx, [esi+40Ch]
0x4FEAE3: mov     [ecx+esi+20Ch], al
0x4FEAEA: add     dword ptr [esi+40Ch], 1
0x4FEAF1: jmp     loc_4FEC3E
0x4FEAF6: mov     edx, ds:0B10BC4h; jumptable 004FE89B case 18
0x4FEAFC: push    edx; Str2
0x4FEAFD: lea     eax, [esp+244h+Src]
0x4FEB01: push    eax; Str1
0x4FEB02: call    __strcmp
0x4FEB07: add     esp, 8
0x4FEB0A: test    eax, eax
0x4FEB0C: jnz     short loc_4FEB21
0x4FEB0E: mov     ecx, [esi+40Ch]
0x4FEB14: mov     [ecx+esi+20Ch], ax
0x4FEB1C: jmp     loc_4FEC37
0x4FEB21: mov     ecx, ds:0B10BC8h
0x4FEB27: push    ecx; Str2
0x4FEB28: lea     edx, [esp+244h+Src]
0x4FEB2C: push    edx; Str1
0x4FEB2D: call    __strcmp
0x4FEB32: add     esp, 8
0x4FEB35: test    eax, eax
0x4FEB37: jnz     loc_4FEE61
0x4FEB3D: mov     ecx, [esi+40Ch]
0x4FEB43: mov     eax, 1
0x4FEB48: mov     [ecx+esi+20Ch], ax
0x4FEB50: jmp     loc_4FEC37
0x4FEB55: xor     ebp, ebp; jumptable 004FE89B case 10
0x4FEB57: mov     edi, offset animGroupInfos_ptr
0x4FEB5C: lea     esp, [esp+0]
0x4FEB60: mov     edx, [edi]
0x4FEB62: push    edx; Str2
0x4FEB63: lea     eax, [esp+244h+Src]
0x4FEB67: push    eax; Str1
0x4FEB68: call    __strcmp
0x4FEB6D: add     esp, 8
0x4FEB70: test    eax, eax
0x4FEB72: jz      short loc_4FEBB0
0x4FEB74: add     edi, 24h ; '$'
0x4FEB77: add     ebp, 1
0x4FEB7A: cmp     edi, offset off_B108EC; "LowerBody"
0x4FEB80: jl      short loc_4FEB60
0x4FEB82: movsx   eax, word ptr [esp+240h+var_230]
0x4FEB87: mov     edx, [esp+240h+var_22C]
0x4FEB8B: lea     ecx, [eax+eax*2]
0x4FEB8E: mov     eax, [edx+ecx*4]
0x4FEB91: mov     edx, [esp+240h+var_228]
0x4FEB95: push    eax
0x4FEB96: lea     ecx, [esp+244h+Src]
0x4FEB9A: push    ecx; ArgList
0x4FEB9B: push    offset aAnimationGro_0; "Animation group \"%s\" not found for pa"...
0x4FEBA0: push    edx; int
0x4FEBA1: call    sub_4FCE30
0x4FEBA6: add     esp, 10h
0x4FEBA9: xor     al, al
0x4FEBAB: jmp     loc_4FECC4
0x4FEBB0: cmp     ebp, 0FFh
0x4FEBB6: jz      short loc_4FEB82
0x4FEBB8: mov     ecx, [esi+40Ch]
0x4FEBBE: mov     [ecx+esi+20Ch], bp
0x4FEBC6: jmp     short loc_4FEC37
0x4FEBC8: xor     edi, edi; jumptable 004FE89B case 33
0x4FEBCA: lea     ebx, [ebx+0]
0x4FEBD0: mov     edx, ds:0B081D0h[edi*4]
0x4FEBD7: push    edx; Str2
0x4FEBD8: lea     eax, [esp+244h+Src]
0x4FEBDC: push    eax; Str1
0x4FEBDD: call    __strcmp
0x4FEBE2: add     esp, 8
0x4FEBE5: test    eax, eax
0x4FEBE7: jz      short loc_4FEC1B
0x4FEBE9: add     edi, 1
0x4FEBEC: cmp     edi, 24h ; '$'
0x4FEBEF: jl      short loc_4FEBD0
0x4FEBF1: movsx   eax, word ptr [esp+240h+var_230]
0x4FEBF6: mov     ecx, [esp+240h+var_22C]
0x4FEBFA: lea     eax, [eax+eax*2]
0x4FEBFD: mov     edx, [ecx+eax*4]
0x4FEC00: push    edx
0x4FEC01: lea     eax, [esp+244h+Src]
0x4FEC05: push    eax; ArgList
0x4FEC06: push    offset aFormTypeSNotFo; "Form Type \"%s\" not found for paramete"...
0x4FEC0B: push    ebx; int
0x4FEC0C: call    sub_4FCE30
0x4FEC11: add     esp, 10h
0x4FEC14: xor     al, al
0x4FEC16: jmp     loc_4FECC4
0x4FEC1B: mov     al, ds:byte_B081AC[edi]
0x4FEC21: test    al, al
0x4FEC23: jz      short loc_4FEBF1
0x4FEC25: mov     edx, [esi+40Ch]
0x4FEC2B: movzx   cx, al
0x4FEC2F: mov     [edx+esi+20Ch], cx
0x4FEC37: add     dword ptr [esi+40Ch], 2
0x4FEC3E: mov     eax, [esp+240h+var_230]
0x4FEC42: add     eax, 1
0x4FEC45: mov     [esp+240h+var_230], eax
0x4FEC49: movsx   eax, ax
0x4FEC4C: cmp     eax, [esp+240h+var_21C]
0x4FEC50: jl      loc_4FDEA5
0x4FEC56: mov     ecx, [esi+208h]
0x4FEC5C: cmp     ecx, [esi+204h]
0x4FEC62: jnb     short loc_4FECC2
0x4FEC64: movsx   eax, word ptr [esp+240h+var_230]
0x4FEC69: lea     edx, [eax+eax*2]
0x4FEC6C: mov     eax, [esp+240h+var_22C]
0x4FEC70: mov     ecx, [eax+edx*4]
0x4FEC73: mov     edx, [esp+240h+var_228]
0x4FEC77: push    ecx; ArgList
0x4FEC78: push    offset aExpectedEndOfL; "Expected end of line.\r\nCompiled scrip"...
0x4FEC7D: push    edx; int
0x4FEC7E: call    sub_4FCE30
0x4FEC83: add     esp, 0Ch
0x4FEC86: xor     al, al
0x4FEC88: jmp     short loc_4FECC4
0x4FEC8A: mov     ecx, [esp+240h+var_230]
0x4FEC8E: mov     edx, [esp+240h+var_22C]
0x4FEC92: movsx   eax, cx
0x4FEC95: lea     eax, [eax+eax*2]
0x4FEC98: cmp     byte ptr [edx+eax*4+8], 0
0x4FEC9D: lea     eax, [edx+eax*4]
0x4FECA0: jnz     short loc_4FECBB
0x4FECA2: mov     eax, [eax]
0x4FECA4: mov     ecx, [esp+240h+var_228]
0x4FECA8: push    eax; ArgList
0x4FECA9: push    offset aMissingParamet; "Missing parameter %s.\r\nCompiled scrip"...
0x4FECAE: push    ecx; int
0x4FECAF: call    sub_4FCE30
0x4FECB4: add     esp, 0Ch
0x4FECB7: xor     al, al
0x4FECB9: jmp     short loc_4FECC4
0x4FECBB: mov     edx, [esp+240h+var_220]
0x4FECBF: mov     [edx], cx
0x4FECC2: mov     al, 1
0x4FECC4: mov     ecx, [esp+240h+var_4]
0x4FECCB: pop     edi
0x4FECCC: pop     esi
0x4FECCD: pop     ebp
0x4FECCE: pop     ebx
0x4FECCF: xor     ecx, esp
0x4FECD1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FECD6: add     esp, 230h
0x4FECDC: retn
0x4FECDD: movsx   eax, word ptr [esp+240h+var_230]
0x4FECE2: mov     ecx, [esp+240h+var_22C]
0x4FECE6: lea     eax, [eax+eax*2]
0x4FECE9: mov     edx, [ecx+eax*4]
0x4FECEC: mov     eax, [esp+240h+var_228]
0x4FECF0: push    edx; ArgList
0x4FECF1: push    offset aParameterSMayN; "Parameter %s may not be a variable.\r\n"...
0x4FECF6: push    eax; int
0x4FECF7: call    sub_4FCE30
0x4FECFC: add     esp, 0Ch
0x4FECFF: xor     al, al
0x4FED01: jmp     short loc_4FECC4
0x4FED03: movsx   eax, word ptr [esp+240h+var_230]
0x4FED08: mov     edx, [esp+240h+var_22C]
0x4FED0C: lea     ecx, [eax+eax*2]
0x4FED0F: mov     eax, [edx+ecx*4]
0x4FED12: push    eax
0x4FED13: lea     ecx, [esp+244h+Src]
0x4FED17: push    ecx; ArgList
0x4FED18: push    offset aItemSNotFoundF; "Item '%s' not found for parameter %s.\r"...
0x4FED1D: push    ebx; int
0x4FED1E: call    sub_4FCE30
0x4FED23: add     esp, 10h
0x4FED26: xor     al, al
0x4FED28: jmp     short loc_4FECC4
0x4FED2A: movsx   eax, word ptr [esp+240h+var_230]
0x4FED2F: mov     ecx, [esp+240h+var_22C]
0x4FED33: lea     eax, [eax+eax*2]
0x4FED36: mov     edx, [ecx+eax*4]
0x4FED39: push    edx
0x4FED3A: lea     eax, [esp+244h+Src]
0x4FED3E: push    eax; ArgList
0x4FED3F: push    offset aInvalidObjectR; "Invalid object reference '%s' for param"...
0x4FED44: push    ebx; int
0x4FED45: call    sub_4FCE30
0x4FED4A: add     esp, 10h
0x4FED4D: xor     al, al
0x4FED4F: jmp     loc_4FECC4
0x4FED54: movsx   eax, word ptr [esp+240h+var_230]
0x4FED59: mov     edx, [esp+240h+var_22C]
0x4FED5D: lea     ecx, [eax+eax*2]
0x4FED60: mov     eax, [edx+ecx*4]
0x4FED63: push    eax
0x4FED64: lea     ecx, [esp+244h+Src]
0x4FED68: push    ecx; ArgList
0x4FED69: push    offset aInvalidEffec_0; "Invalid Effect Shader '%s' for paramete"...
0x4FED6E: push    ebx; int
0x4FED6F: call    sub_4FCE30
0x4FED74: add     esp, 10h
0x4FED77: xor     al, al
0x4FED79: jmp     loc_4FECC4
0x4FED7E: movsx   eax, word ptr [esp+240h+var_230]; jumptable 004FDFA0 default case, cases 5,8,10,18,22,23,28,33
0x4FED83: lea     edx, [eax+eax*2]
0x4FED86: mov     eax, [esp+240h+var_22C]
0x4FED8A: mov     ecx, [eax+edx*4+4]
0x4FED8E: push    ecx; ArgList
0x4FED8F: push    offset aParamTypeDRefe; "Param type '%d' (referenced object) uni"...
0x4FED94: call    PrintError
0x4FED99: add     esp, 8
0x4FED9C: xor     al, al
0x4FED9E: jmp     loc_4FECC4
0x4FEDA3: movsx   eax, word ptr [esp+240h+var_230]
0x4FEDA8: lea     edx, [eax+eax*2]
0x4FEDAB: mov     eax, [esp+240h+var_22C]
0x4FEDAF: mov     ecx, [eax+edx*4]
0x4FEDB2: push    ecx
0x4FEDB3: lea     edx, [esp+244h+Src]
0x4FEDB7: push    edx
0x4FEDB8: jmp     short loc_4FEDCF
0x4FEDBA: movsx   eax, word ptr [esp+240h+var_230]
0x4FEDBF: mov     ecx, [esp+240h+var_22C]
0x4FEDC3: lea     eax, [eax+eax*2]
0x4FEDC6: mov     edx, [ecx+eax*4]
0x4FEDC9: push    edx
0x4FEDCA: lea     eax, [esp+244h+Src]
0x4FEDCE: push    eax; ArgList
0x4FEDCF: push    offset aUnknownVaria_1; "Unknown variable '%s' for parameter %s."...
0x4FEDD4: push    ebx; int
0x4FEDD5: call    sub_4FCE30
0x4FEDDA: add     esp, 10h
0x4FEDDD: xor     al, al
0x4FEDDF: jmp     loc_4FECC4
0x4FEDE4: movsx   eax, word ptr [esp+240h+var_230]
0x4FEDE9: lea     edx, [eax+eax*2]
0x4FEDEC: mov     eax, [esp+240h+var_22C]
0x4FEDF0: mov     ecx, [eax+edx*4]
0x4FEDF3: push    5
0x4FEDF5: push    ecx
0x4FEDF6: lea     edx, [esp+248h+Src]
0x4FEDFA: push    edx; ArgList
0x4FEDFB: push    offset aInvalidCrimeTy; "Invalid crime type '%s' for parameter %"...
0x4FEE00: push    ebx; int
0x4FEE01: call    sub_4FCE30
0x4FEE06: add     esp, 14h
0x4FEE09: xor     al, al
0x4FEE0B: jmp     loc_4FECC4
0x4FEE10: movsx   eax, word ptr [esp+240h+var_230]
0x4FEE15: mov     ecx, [esp+240h+var_22C]
0x4FEE19: lea     eax, [eax+eax*2]
0x4FEE1C: mov     edx, [ecx+eax*4]
0x4FEE1F: push    5
0x4FEE21: push    edx
0x4FEE22: lea     eax, [esp+248h+Src]
0x4FEE26: push    eax; ArgList
0x4FEE27: push    offset aInvalidCrimeTy; "Invalid crime type '%s' for parameter %"...
0x4FEE2C: push    ebx; int
0x4FEE2D: call    sub_4FCE30
0x4FEE32: add     esp, 14h
0x4FEE35: xor     al, al
0x4FEE37: jmp     loc_4FECC4
0x4FEE3C: movsx   eax, word ptr [esp+240h+var_230]
0x4FEE41: mov     edx, [esp+240h+var_22C]
0x4FEE45: lea     ecx, [eax+eax*2]
0x4FEE48: mov     eax, [edx+ecx*4]
0x4FEE4B: push    eax; ArgList
0x4FEE4C: push    offset aAxisXYZRequire; "Axis (X,Y,Z) required for parameter %s."...
0x4FEE51: push    ebx; int
0x4FEE52: call    sub_4FCE30
0x4FEE57: add     esp, 0Ch
0x4FEE5A: xor     al, al
0x4FEE5C: jmp     loc_4FECC4
0x4FEE61: movsx   eax, word ptr [esp+240h+var_230]
0x4FEE66: mov     edx, [esp+240h+var_22C]
0x4FEE6A: lea     ecx, [eax+eax*2]
0x4FEE6D: mov     eax, [edx+ecx*4]
0x4FEE70: push    eax; ArgList
0x4FEE71: push    offset aSexMaleFemaleR; "Sex (Male, Female) required for paramet"...
0x4FEE76: push    ebx; int
0x4FEE77: call    sub_4FCE30
0x4FEE7C: add     esp, 0Ch
0x4FEE7F: xor     al, al
0x4FEE81: jmp     loc_4FECC4
0x4FEE86: movsx   eax, word ptr [esp+240h+var_230]; jumptable 004FE89B default case, cases 3,4,6,7,9,11-17,19-22,24-27,29-32
0x4FEE8B: mov     edx, [esp+240h+var_22C]
0x4FEE8F: lea     ecx, [eax+eax*2]
0x4FEE92: mov     eax, [edx+ecx*4+4]
0x4FEE96: push    eax; ArgList
0x4FEE97: push    offset aParamTypeDUnim; "Param type '%d' unimplemented in Script"...
0x4FEE9C: call    PrintError
0x4FEEA1: add     esp, 8
0x4FEEA4: xor     al, al
0x4FEEA6: jmp     loc_4FECC4
