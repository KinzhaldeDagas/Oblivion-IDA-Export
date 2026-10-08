0x5BFB90: push    0FFFFFFFFh; Persuasion minigame action/round resolver. Completing the four-action round can award Speechcraft useValue0 after the native disposition-state checks.
0x5BFB92: push    offset SEH_5BFB90
0x5BFB97: mov     eax, large fs:0
0x5BFB9D: push    eax
0x5BFB9E: sub     esp, 20h
0x5BFBA1: push    ebx
0x5BFBA2: push    ebp
0x5BFBA3: push    esi; a3
0x5BFBA4: push    edi; a3
0x5BFBA5: mov     eax, ds:0B30AACh
0x5BFBAA: xor     eax, esp
0x5BFBAC: push    eax; a3
0x5BFBAD: lea     eax, [esp+40h+var_C]
0x5BFBB1: mov     large fs:0, eax
0x5BFBB7: mov     esi, ecx
0x5BFBB9: mov     eax, [esi+28h]
0x5BFBBC: xor     ebx, ebx
0x5BFBBE: cmp     eax, 2
0x5BFBC1: jnz     loc_5C00B2
0x5BFBC7: push    1; arg1
0x5BFBC9: push    ebx; canCreate
0x5BFBCA: call    InterfaceManager_GetSingleton
0x5BFBCF: mov     edi, eax
0x5BFBD1: call    UI_GetVirtualScreenWidth; Returns virtual UI width: 1280 for portrait/square, otherwise aspect*960. Layout coordinates are independent of output pixel resolution.
0x5BFBD6: fmul    qword ptr ds:0A2FAA0h
0x5BFBDC: fadd    dword ptr [edi+20h]
0x5BFBDF: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5BFBE4: mov     [esp+48h+var_2C], eax
0x5BFBE8: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x5BFBED: fstp    [esp+48h+var_24]
0x5BFBF1: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x5BFBF6: fmul    qword ptr ds:0A2FAA0h
0x5BFBFC: fadd    dword ptr [edi+28h]
0x5BFBFF: fsubr   [esp+48h+var_24]
0x5BFC03: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5BFC08: fild    [esp+48h+var_2C]
0x5BFC0C: mov     [esp+48h+var_28], eax
0x5BFC10: push    ecx; hinstDLL
0x5BFC11: fstp    dword ptr [esp+4Ch+var_24]
0x5BFC15: mov     ecx, dword ptr [esp+4Ch+var_24]
0x5BFC19: fild    [esp+4Ch+var_28]
0x5BFC1D: mov     eax, esp
0x5BFC1F: mov     [eax], ecx
0x5BFC21: fstp    dword ptr [esp+4Ch+var_24+4]
0x5BFC25: mov     edx, dword ptr [esp+4Ch+var_24+4]
0x5BFC29: fldz
0x5BFC2B: mov     [eax+4], edx
0x5BFC2E: fstp    [esp+4Ch+var_1C]
0x5BFC32: fild    dword ptr [esi+0E0h]
0x5BFC38: mov     ecx, [esp+4Ch+var_1C]
0x5BFC3C: mov     [eax+8], ecx
0x5BFC3F: mov     ecx, esi
0x5BFC41: fstp    [esp+4Ch+var_18]
0x5BFC45: fild    dword ptr [esi+0E4h]
0x5BFC4B: fstp    [esp+4Ch+var_14]
0x5BFC4F: call    sub_5BE6F0
0x5BFC54: fld     [esp+40h+var_18]
0x5BFC58: mov     edi, eax
0x5BFC5A: fsub    dword ptr [esp+40h+var_24]
0x5BFC5E: mov     [esi+84h], edi
0x5BFC64: fstp    [esp+40h+var_2C]
0x5BFC68: fld     [esp+40h+var_14]
0x5BFC6C: fsub    dword ptr [esp+40h+var_24+4]
0x5BFC70: fstp    [esp+40h+var_28]
0x5BFC74: fldz
0x5BFC76: fsubr   st, st
0x5BFC78: fstp    dword ptr [esp+40h+var_24]
0x5BFC7C: fld     [esp+40h+var_28]
0x5BFC80: fld     [esp+40h+var_2C]
0x5BFC84: fld     dword ptr [esp+40h+var_24]
0x5BFC88: fld     st(1)
0x5BFC8A: fmulp   st(2), st
0x5BFC8C: fld     st(2)
0x5BFC8E: fmulp   st(3), st
0x5BFC90: fxch    st(1)
0x5BFC92: faddp   st(2), st
0x5BFC94: fmul    st, st
0x5BFC96: faddp   st(1), st
0x5BFC98: fstp    dword ptr [esp+40h+var_24]
0x5BFC9C: fld     dword ptr [esp+40h+var_24]
0x5BFCA0: call    __CIsqrt
0x5BFCA5: fstp    dword ptr [esp+40h+var_24]
0x5BFCA9: fld     dword ptr [esp+40h+var_24]
0x5BFCAD: fstp    dword ptr [esp+40h+var_24]
0x5BFCB1: fld     dword ptr [esp+40h+var_24]
0x5BFCB5: fild    dword ptr [esi+0DCh]
0x5BFCBB: fcomp   st(1)
0x5BFCBD: fnstsw  ax
0x5BFCBF: test    ah, 5
0x5BFCC2: jnp     loc_5C0158
0x5BFCC8: fild    dword ptr [esi+0E8h]
0x5BFCCE: fcompp
0x5BFCD0: fnstsw  ax
0x5BFCD2: test    ah, 41h
0x5BFCD5: jz      loc_5C015A
0x5BFCDB: lea     edx, [edi+edi*4]
0x5BFCDE: cmp     byte ptr [esi+edx*4+38h], 1
0x5BFCE3: jz      loc_5C015A
0x5BFCE9: push    8; int
0x5BFCEB: call    sub_57DE50
0x5BFCF0: mov     eax, [esi+84h]
0x5BFCF6: lea     eax, [eax+eax*4]
0x5BFCF9: lea     eax, [esi+eax*4+38h]
0x5BFCFD: add     esp, 4
0x5BFD00: cmp     [eax], bl
0x5BFD02: jnz     loc_5BFDD4
0x5BFD08: mov     byte ptr [eax], 1
0x5BFD0B: mov     eax, [esi+84h]
0x5BFD11: lea     ecx, [eax+eax*4]
0x5BFD14: mov     edx, [esi+ecx*4+2Ch]
0x5BFD18: push    edx
0x5BFD19: mov     ecx, esi
0x5BFD1B: call    sub_5BE780
0x5BFD20: fld     qword ptr ds:0A309F0h
0x5BFD26: mov     eax, [esi+84h]
0x5BFD2C: fdiv    st(1), st
0x5BFD2E: lea     eax, [eax+eax*4]
0x5BFD31: fidivr  dword ptr [esi+eax*4+34h]
0x5BFD35: fmul    dword ptr [esi+7Ch]
0x5BFD38: fmulp   st(1), st
0x5BFD3A: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5BFD3F: mov     ecx, [esi+0D8h]
0x5BFD45: mov     edx, [ecx]
0x5BFD47: mov     edx, [edx+374h]
0x5BFD4D: mov     edi, eax
0x5BFD4F: mov     eax, ds:0B333C4h
0x5BFD54: mov     dword ptr [esp+40h+var_24], edi
0x5BFD58: fild    dword ptr [esp+40h+var_24]
0x5BFD5C: push    ecx
0x5BFD5D: fstp    [esp+44h+var_44]
0x5BFD60: push    eax
0x5BFD61: call    edx
0x5BFD63: add     [esi+0F8h], edi
0x5BFD69: mov     dword ptr [esp+40h+var_24], ebx
0x5BFD6D: mov     word ptr [esp+40h+var_24+4], bx
0x5BFD72: mov     word ptr [esp+40h+var_24+6], bx
0x5BFD77: mov     ecx, [esi+0D8h]
0x5BFD7D: mov     eax, [ecx]
0x5BFD7F: mov     edx, ds:0B333C4h
0x5BFD85: mov     eax, [eax+224h]
0x5BFD8B: push    edx
0x5BFD8C: mov     [esp+44h+var_4], ebx
0x5BFD90: call    eax
0x5BFD92: push    eax; ArgList
0x5BFD93: lea     ecx, [esp+44h+var_24]
0x5BFD97: push    offset aI; "%i"
0x5BFD9C: push    ecx; int
0x5BFD9D: call    BSStringT_Static_Format
0x5BFDA2: mov     edx, dword ptr [esp+4Ch+var_24]
0x5BFDA6: mov     ecx, [esi+0CCh]
0x5BFDAC: add     esp, 0Ch
0x5BFDAF: push    edx
0x5BFDB0: push    0FDEh
0x5BFDB5: call    Tile_SetString
0x5BFDBA: push    1
0x5BFDBC: mov     ecx, esi
0x5BFDBE: call    sub_5BE5C0
0x5BFDC3: lea     ecx, [esp+40h+var_24]; void *
0x5BFDC7: mov     [esp+40h+var_4], 0FFFFFFFFh
0x5BFDCF: call    BSStringT_Clear
0x5BFDD4: mov     eax, [esi+84h]
0x5BFDDA: lea     eax, [eax+eax*4]
0x5BFDDD: lea     edx, [esi+eax*4]
0x5BFDE0: mov     eax, [edx+2Ch]
0x5BFDE3: cmp     eax, 4
0x5BFDE6: jnz     short loc_5BFDFA
0x5BFDE8: mov     ecx, [edx+30h]
0x5BFDEB: push    1
0x5BFDED: push    ecx
0x5BFDEE: mov     ecx, esi
0x5BFDF0: call    sub_5BE400
0x5BFDF5: jmp     loc_5BFFC2
0x5BFDFA: cmp     eax, 1
0x5BFDFD: mov     edx, [edx+30h]
0x5BFE00: jnz     loc_5BFEC0
0x5BFE06: xor     eax, eax
0x5BFE08: cmp     edx, 6; switch 7 cases
0x5BFE0B: ja      short def_5BFE0D; jumptable 005BFE0D default case, case 4
0x5BFE0D: jmp     ds:jpt_5BFE0D[edx*4]; switch jump
0x5BFE14: push    15h; jumptable 005BFE0D case 0
0x5BFE16: jmp     short loc_5BFE2A
0x5BFE18: push    21h ; '!'; jumptable 005BFE0D case 1
0x5BFE1A: jmp     short loc_5BFE2A
0x5BFE1C: push    19h; jumptable 005BFE0D case 2
0x5BFE1E: jmp     short loc_5BFE2A
0x5BFE20: push    1Dh; jumptable 005BFE0D case 3
0x5BFE22: jmp     short loc_5BFE2A
0x5BFE24: push    24h ; '$'; jumptable 005BFE0D case 5
0x5BFE26: jmp     short loc_5BFE2A
0x5BFE28: push    25h ; '%'; jumptable 005BFE0D case 6
0x5BFE2A: push    3; topicType
0x5BFE2C: call    TESTopic__GetTopic; Direct fixed-registry lookup: bounds-checks index against g_dialogueTopicBucketCounts[topicType], then returns g_dialogueTopicBuckets[topicType][index].topic. This is not an EDID/name search.
0x5BFE31: add     esp, 8
0x5BFE34: mov     edx, ds:0B333C4h; jumptable 005BFE0D default case, case 4
0x5BFE3A: mov     ecx, [esi+0D8h]
0x5BFE40: push    ebx; conversation
0x5BFE41: push    ebx; previousTopic
0x5BFE42: push    edx; target
0x5BFE43: push    ecx; speaker
0x5BFE44: mov     ecx, eax; this
0x5BFE46: call    TESTopic__CreateDialogueItem; Selects a matching TESTopicInfo and wraps it as a 0x1C DialogueItem containing response list/cursor, INFO, topic, owner quest, and speaker.
0x5BFE4B: mov     ebp, eax
0x5BFE4D: cmp     ebp, ebx
0x5BFE4F: jz      loc_5BFFC2
0x5BFE55: mov     ecx, ebp; this
0x5BFE57: call    DialogueItem__FirstResponse
0x5BFE5C: mov     ecx, ebp; this
0x5BFE5E: call    DialogueListCursor__GetCurrent; Compiler-folded cursor getter shared by DialogueItem.response list and Conversation.item list because both begin with the same head/next/cursor layout.
0x5BFE63: mov     edi, eax
0x5BFE65: cmp     edi, ebx
0x5BFE67: jz      loc_5BFFB2
0x5BFE6D: mov     ecx, [esi+0D8h]
0x5BFE73: call    sub_5E12B0
0x5BFE78: mov     [eax+1DBh], bl
0x5BFE7E: mov     edx, [esi+0D8h]
0x5BFE84: mov     dword ptr [edx+70h], 7
0x5BFE8B: fld     dword ptr ds:0B33E9Ch
0x5BFE91: mov     ecx, [esi+0D8h]
0x5BFE97: mov     eax, [ecx]
0x5BFE99: mov     edx, [eax+304h]
0x5BFE9F: push    edi
0x5BFEA0: push    ecx
0x5BFEA1: fstp    [esp+48h+var_48]
0x5BFEA4: call    edx
0x5BFEA6: cmp     ds:0B13200h, bl
0x5BFEAC: jz      loc_5BFFB2
0x5BFEB2: mov     eax, [esi+0D8h]
0x5BFEB8: mov     ecx, [eax+58h]
0x5BFEBB: jmp     loc_5BFF90
0x5BFEC0: cmp     eax, 3
0x5BFEC3: jnz     short loc_5BFEE7
0x5BFEC5: xor     eax, eax
0x5BFEC7: cmp     edx, 6; switch 7 cases
0x5BFECA: ja      short def_5BFECC; jumptable 005BFECC default case, case 4
0x5BFECC: jmp     ds:jpt_5BFECC[edx*4]; switch jump
0x5BFED3: push    17h; jumptable 005BFECC case 0
0x5BFED5: jmp     short loc_5BFF07
0x5BFED7: push    23h ; '#'; jumptable 005BFECC case 1
0x5BFED9: jmp     short loc_5BFF07
0x5BFEDB: push    1Bh; jumptable 005BFECC case 2
0x5BFEDD: jmp     short loc_5BFF07
0x5BFEDF: push    1Fh; jumptable 005BFECC case 3
0x5BFEE1: jmp     short loc_5BFF07
0x5BFEE3: push    24h ; '$'; jumptable 005BFECC case 5
0x5BFEE5: jmp     short loc_5BFF07
0x5BFEE7: xor     eax, eax
0x5BFEE9: cmp     edx, 6; switch 7 cases
0x5BFEEC: ja      short def_5BFECC; jumptable 005BFECC default case, case 4
0x5BFEEE: jmp     ds:jpt_5BFEEE[edx*4]; switch jump
0x5BFEF5: push    16h; jumptable 005BFEEE case 0
0x5BFEF7: jmp     short loc_5BFF07
0x5BFEF9: push    22h ; '"'; jumptable 005BFEEE case 1
0x5BFEFB: jmp     short loc_5BFF07
0x5BFEFD: push    1Ah; jumptable 005BFEEE case 2
0x5BFEFF: jmp     short loc_5BFF07
0x5BFF01: push    1Eh; jumptable 005BFEEE case 3
0x5BFF03: jmp     short loc_5BFF07
0x5BFF05: push    25h ; '%'; jumptable 005BFECC case 6
0x5BFF07: push    3; topicType
0x5BFF09: call    TESTopic__GetTopic; Direct fixed-registry lookup: bounds-checks index against g_dialogueTopicBucketCounts[topicType], then returns g_dialogueTopicBuckets[topicType][index].topic. This is not an EDID/name search.
0x5BFF0E: add     esp, 8
0x5BFF11: mov     ecx, ds:0B333C4h; jumptable 005BFECC default case, case 4
0x5BFF17: mov     edx, [esi+0D8h]
0x5BFF1D: push    ebx; conversation
0x5BFF1E: push    ebx; previousTopic
0x5BFF1F: push    ecx; target
0x5BFF20: push    edx; speaker
0x5BFF21: mov     ecx, eax; this
0x5BFF23: call    TESTopic__CreateDialogueItem; Selects a matching TESTopicInfo and wraps it as a 0x1C DialogueItem containing response list/cursor, INFO, topic, owner quest, and speaker.
0x5BFF28: mov     ebp, eax
0x5BFF2A: cmp     ebp, ebx
0x5BFF2C: jz      loc_5BFFC2
0x5BFF32: mov     ecx, ebp; this
0x5BFF34: call    DialogueItem__FirstResponse
0x5BFF39: mov     ecx, ebp; this
0x5BFF3B: call    DialogueListCursor__GetCurrent; Compiler-folded cursor getter shared by DialogueItem.response list and Conversation.item list because both begin with the same head/next/cursor layout.
0x5BFF40: mov     edi, eax
0x5BFF42: cmp     edi, ebx
0x5BFF44: jz      short loc_5BFFB2
0x5BFF46: mov     ecx, [esi+0D8h]
0x5BFF4C: call    sub_5E12B0
0x5BFF51: mov     [eax+1DBh], bl
0x5BFF57: mov     eax, [esi+0D8h]
0x5BFF5D: mov     dword ptr [eax+70h], 7
0x5BFF64: fld     dword ptr ds:0B33E9Ch
0x5BFF6A: mov     ecx, [esi+0D8h]
0x5BFF70: mov     edx, [ecx]
0x5BFF72: mov     eax, [edx+304h]
0x5BFF78: push    edi
0x5BFF79: push    ecx
0x5BFF7A: fstp    [esp+48h+var_48]
0x5BFF7D: call    eax
0x5BFF7F: cmp     ds:0B13200h, bl
0x5BFF85: jz      short loc_5BFFB2
0x5BFF87: mov     ecx, [esi+0D8h]
0x5BFF8D: mov     ecx, [ecx+58h]
0x5BFF90: fld     dword ptr ds:0A30634h
0x5BFF96: mov     edx, [ecx]
0x5BFF98: mov     eax, [edx+33Ch]
0x5BFF9E: mov     edi, [edi]
0x5BFFA0: push    ecx
0x5BFFA1: fstp    [esp+44h+var_44]; duration
0x5BFFA4: push    ebx; unk2
0x5BFFA5: push    ebx; int
0x5BFFA6: call    eax
0x5BFFA8: push    eax; unk1
0x5BFFA9: push    edi; string
0x5BFFAA: call    GameUI_QueueMessage
0x5BFFAF: add     esp, 10h
0x5BFFB2: mov     ecx, ebp; this
0x5BFFB4: call    DialogueItem__Destroy
0x5BFFB9: push    ebp
0x5BFFBA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5BFFBF: add     esp, 4
0x5BFFC2: mov     eax, [esi+84h]
0x5BFFC8: lea     ecx, [eax+eax*4]
0x5BFFCB: mov     edi, 1
0x5BFFD0: cmp     [esi+ecx*4+30h], edi
0x5BFFD4: jnz     short loc_5BFFE1
0x5BFFD6: mov     eax, ds:0B333C4h
0x5BFFDB: add     [eax+6BCh], edi
0x5BFFE1: mov     dl, 1
0x5BFFE3: lea     eax, [esi+38h]
0x5BFFE6: mov     ecx, 4
0x5BFFEB: jmp     short loc_5BFFF0
0x5BFFF0: cmp     [eax], bl
0x5BFFF2: jnz     short loc_5BFFF6
0x5BFFF4: xor     dl, dl
0x5BFFF6: add     eax, 14h
0x5BFFF9: sub     ecx, edi
0x5BFFFB: jnz     short loc_5BFFF0
0x5BFFFD: cmp     dl, 1
0x5C0000: jnz     loc_5C013A
0x5C0006: cmp     [esi+0F0h], ebx
0x5C000C: jnz     short loc_5C002C
0x5C000E: mov     ecx, [esi+0D8h]
0x5C0014: mov     edx, [ecx]
0x5C0016: mov     eax, ds:0B333C4h
0x5C001B: mov     edx, [edx+224h]
0x5C0021: push    eax
0x5C0022: call    edx
0x5C0024: cmp     [esi+0ECh], eax
0x5C002A: jz      short loc_5C0045
0x5C002C: mov     ecx, ds:0B333C4h
0x5C0032: fldz
0x5C0034: mov     eax, [ecx]
0x5C0036: mov     edx, [eax+39Ch]
0x5C003C: push    ecx
0x5C003D: fstp    [esp+44h+var_44]; a3
0x5C0040: push    ebx; a3
0x5C0041: push    20h ; ' '; a3
0x5C0043: call    edx; Completed persuasion round: Speechcraft (0x20), useValue0, identity scale (0.0).
0x5C0045: fld     dword ptr ds:0A379B4h
0x5C004B: push    ecx
0x5C004C: mov     ecx, [esi+0BCh]; this
0x5C0052: fstp    [esp+44h+var_44]; value
0x5C0055: push    0FAFh; propertyCode
0x5C005A: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C005F: fld     dword ptr ds:0A379B4h
0x5C0065: push    ecx
0x5C0066: mov     ecx, [esi+0C4h]; this
0x5C006C: fstp    [esp+44h+var_44]; value
0x5C006F: push    0FA1h; propertyCode
0x5C0074: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C0079: fld1
0x5C007B: push    ecx
0x5C007C: fstp    [esp+44h+var_44]; value
0x5C007F: mov     ecx, [esi+0C0h]; this
0x5C0085: push    0FAFh; propertyCode
0x5C008A: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C008F: call    sub_5BF7D0
0x5C0094: push    1
0x5C0096: call    sub_5BF170
0x5C009B: add     esp, 4
0x5C009E: mov     ecx, [esp+40h+var_C]
0x5C00A2: mov     large fs:0, ecx
0x5C00A9: pop     ecx
0x5C00AA: pop     edi
0x5C00AB: pop     esi
0x5C00AC: pop     ebp
0x5C00AD: pop     ebx
0x5C00AE: add     esp, 2Ch
0x5C00B1: retn
0x5C00B2: cmp     eax, ebx
0x5C00B4: jnz     loc_5C013A
0x5C00BA: fld1
0x5C00BC: push    ecx
0x5C00BD: mov     ecx, [esi+0C4h]; this
0x5C00C3: fstp    [esp+44h+var_44]; value
0x5C00C6: push    0FA1h; propertyCode
0x5C00CB: mov     byte ptr [esi+8Ch], 1
0x5C00D2: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C00D7: push    1
0x5C00D9: call    sub_5BEA90
0x5C00DE: fld1
0x5C00E0: mov     ecx, [esi+0BCh]; this
0x5C00E6: fstp    [esp+44h+var_44]; value
0x5C00E9: push    0FAFh; propertyCode
0x5C00EE: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C00F3: mov     eax, ds:0B33EA0h
0x5C00F8: mov     [esi+80h], eax
0x5C00FE: mov     [esi+0F8h], ebx
0x5C0104: mov     ecx, ds:0B333C4h; this
0x5C010A: push    20h ; ' '; actorValue
0x5C010C: call    Actor_GetSkillMasteryLevel; Oblivion skill-mastery accessor. Accept only native skill AVs 0x0C..0x20, compute the actor's base calculated skill, and map it through the five configurable mastery thresholds.
0x5C0111: test    eax, eax
0x5C0113: push    ecx
0x5C0114: mov     ecx, [esi+0C0h]; this
0x5C011A: jnz     short loc_5C0120
0x5C011C: fld1
0x5C011E: jmp     short loc_5C0126
0x5C0120: fld     dword ptr ds:0A379B4h
0x5C0126: fstp    [esp+44h+var_44]; value
0x5C0129: push    0FAFh; propertyCode
0x5C012E: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C0133: mov     dword ptr [esi+28h], 2
0x5C013A: push    1
0x5C013C: call    sub_5BF170
0x5C0141: add     esp, 4
0x5C0144: mov     ecx, [esp+40h+var_C]
0x5C0148: mov     large fs:0, ecx
0x5C014F: pop     ecx
0x5C0150: pop     edi
0x5C0151: pop     esi
0x5C0152: pop     ebp
0x5C0153: pop     ebx
0x5C0154: add     esp, 2Ch
0x5C0157: retn
0x5C0158: fstp    st
0x5C015A: mov     ecx, [esp+40h+var_C]
0x5C015E: mov     large fs:0, ecx
0x5C0165: pop     ecx
0x5C0166: pop     edi
0x5C0167: pop     esi
0x5C0168: pop     ebp
0x5C0169: pop     ebx
0x5C016A: add     esp, 2Ch
0x5C016D: retn
0x9C0EC0: lea     ecx, [ebp-24h]; void *
0x9C0EC3: jmp     BSStringT_Clear
0x9C0EC8: mov     edx, [esp+arg_4]
0x9C0ECC: lea     eax, [edx-30h]
0x9C0ECF: mov     ecx, [edx-34h]
0x9C0ED2: xor     ecx, eax
0x9C0ED4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0ED9: mov     eax, offset stru_AE9FF8
0x9C0EDE: jmp     ___CxxFrameHandler3
