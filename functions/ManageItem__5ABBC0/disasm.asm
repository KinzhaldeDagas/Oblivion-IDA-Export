0x5ABBC0: sub     esp, 0Ch
0x5ABBC3: push    ebx
0x5ABBC4: push    ebp
0x5ABBC5: push    esi; a3
0x5ABBC6: push    edi; a3
0x5ABBC7: push    416h
0x5ABBCC: mov     ebx, ecx
0x5ABBCE: call    Menu_GetOpenMenuTile
0x5ABBD3: mov     edi, [esp+20h+arg_0]
0x5ABBD7: mov     ebp, eax
0x5ABBD9: lea     eax, [edi-1]
0x5ABBDC: add     esp, 4
0x5ABBDF: cmp     eax, 4
0x5ABBE2: mov     byte ptr ds:0B3B3D9h, 0
0x5ABBE9: ja      short loc_5ABC02
0x5ABBEB: mov     ecx, [esp+1Ch+arg_4]
0x5ABBEF: push    ecx
0x5ABBF0: push    edi
0x5ABBF1: mov     ecx, ebx
0x5ABBF3: call    sub_5AACF0
0x5ABBF8: pop     edi
0x5ABBF9: pop     esi
0x5ABBFA: pop     ebp
0x5ABBFB: pop     ebx
0x5ABBFC: add     esp, 0Ch
0x5ABBFF: retn    8
0x5ABC02: cmp     edi, 7
0x5ABC05: jz      loc_5AC30D
0x5ABC0B: cmp     edi, 8
0x5ABC0E: jz      loc_5AC30D
0x5ABC14: test    ebp, ebp
0x5ABC16: jz      loc_5ABCD3
0x5ABC1C: cmp     byte ptr ds:0B3B43Dh, 0
0x5ABC23: jz      loc_5ABCD3
0x5ABC29: cmp     edi, 3E9h
0x5ABC2F: jl      loc_5ABCD3
0x5ABC35: mov     ecx, [esp+1Ch+arg_4]
0x5ABC39: push    0FB9h
0x5ABC3E: call    Tile_GetFloat
0x5ABC43: call    Double_To_SInt32
0x5ABC48: mov     ecx, ds:0B333C4h; this
0x5ABC4E: push    0; a3
0x5ABC50: push    eax; a2
0x5ABC51: call    GetInventoryEntryOfItem
0x5ABC56: mov     esi, eax
0x5ABC58: test    esi, esi
0x5ABC5A: jz      loc_5AC36B
0x5ABC60: mov     edx, [esi+8]
0x5ABC63: push    edx
0x5ABC64: mov     ecx, ebp
0x5ABC66: call    sub_5C25C0
0x5ABC6B: mov     ecx, esi
0x5ABC6D: call    sub_484BA0
0x5ABC72: cmp     eax, 0FFFFFFFFh
0x5ABC75: jz      short loc_5ABC8E
0x5ABC77: call    sub_5C1100
0x5ABC7C: push    eax
0x5ABC7D: mov     ecx, esi
0x5ABC7F: call    sub_484BC0
0x5ABC84: call    sub_5C1900
0x5ABC89: jmp     loc_5AC219
0x5ABC8E: mov     ecx, ds:0B333C4h; this
0x5ABC94: call    TESObjectREFR_GetContainer
0x5ABC99: push    eax
0x5ABC9A: mov     eax, ds:0B333C4h
0x5ABC9F: push    eax; a1
0x5ABCA0: call    ContainerExtraData_GetContainerExtraDataForRef
0x5ABCA5: mov     ebp, eax
0x5ABCA7: add     esp, 8
0x5ABCAA: test    ebp, ebp
0x5ABCAC: jz      loc_5AC219
0x5ABCB2: mov     eax, [esi]
0x5ABCB4: xor     edi, edi
0x5ABCB6: test    eax, eax
0x5ABCB8: jz      short loc_5ABCBC
0x5ABCBA: mov     edi, [eax]
0x5ABCBC: mov     ebx, [esi+8]
0x5ABCBF: call    sub_5C1100
0x5ABCC4: push    eax
0x5ABCC5: push    edi
0x5ABCC6: push    ebx
0x5ABCC7: mov     ecx, ebp
0x5ABCC9: call    sub_489820
0x5ABCCE: jmp     loc_5AC219
0x5ABCD3: lea     ecx, [edi-0Eh]
0x5ABCD6: cmp     ecx, 4
0x5ABCD9: ja      short loc_5ABD21
0x5ABCDB: movzx   edx, byte ptr ds:0B3B3DBh
0x5ABCE2: lea     eax, [edi-0Eh]
0x5ABCE5: and     edx, 7Fh
0x5ABCE8: cmp     edx, eax
0x5ABCEA: mov     ecx, offset byte_B3B3DB
0x5ABCEF: jnz     short loc_5ABD05
0x5ABCF1: call    sub_597A60
0x5ABCF6: call    InventoryMenu_InitializeOrUpdate
0x5ABCFB: pop     edi
0x5ABCFC: pop     esi
0x5ABCFD: pop     ebp
0x5ABCFE: pop     ebx
0x5ABCFF: add     esp, 0Ch
0x5ABD02: retn    8
0x5ABD05: push    eax
0x5ABD06: call    sub_597A40
0x5ABD0B: and     byte ptr ds:0B3B3DBh, 7Fh
0x5ABD12: call    InventoryMenu_InitializeOrUpdate
0x5ABD17: pop     edi
0x5ABD18: pop     esi
0x5ABD19: pop     ebp
0x5ABD1A: pop     ebx
0x5ABD1B: add     esp, 0Ch
0x5ABD1E: retn    8
0x5ABD21: cmp     edi, 3E9h
0x5ABD27: jl      loc_5AC36B
0x5ABD2D: mov     ebp, [esp+1Ch+arg_4]
0x5ABD31: push    0FB9h
0x5ABD36: mov     ecx, ebp
0x5ABD38: call    Tile_GetFloat
0x5ABD3D: call    Double_To_SInt32
0x5ABD42: mov     ecx, ds:0B333C4h; this
0x5ABD48: push    0; a3
0x5ABD4A: push    eax; a2
0x5ABD4B: call    GetInventoryEntryOfItem
0x5ABD50: mov     esi, eax
0x5ABD52: test    esi, esi
0x5ABD54: jz      loc_5AC36B
0x5ABD5A: mov     eax, ds:0B3F9A8h
0x5ABD5F: mov     ecx, ds:0B3F9ACh
0x5ABD65: mov     edx, ds:0B3F9B0h
0x5ABD6B: push    1; arg1
0x5ABD6D: push    0; canCreate
0x5ABD6F: mov     dword ptr [esp+24h+var_C], eax
0x5ABD73: mov     dword ptr [esp+24h+var_C+4], ecx
0x5ABD77: mov     [esp+24h+var_4], edx
0x5ABD7B: call    InterfaceManager_GetSingleton
0x5ABD80: mov     eax, [eax+118h]
0x5ABD86: shr     eax, 2
0x5ABD89: add     esp, 8
0x5ABD8C: test    al, 1
0x5ABD8E: jnz     short loc_5ABD9D
0x5ABD90: cmp     byte ptr ds:0B3B3D8h, 0
0x5ABD97: jz      loc_5ABE73
0x5ABD9D: mov     ecx, [esi+8]
0x5ABDA0: mov     edx, [ecx]
0x5ABDA2: mov     eax, [edx+78h]
0x5ABDA5: call    eax
0x5ABDA7: test    al, al
0x5ABDA9: jz      short loc_5ABDDC
0x5ABDAB: push    ecx
0x5ABDAC: mov     ecx, ds:0B38568h
0x5ABDB2: fld     dword ptr ds:0A30634h
0x5ABDB8: fstp    [esp+20h+a2]; duration
0x5ABDBB: push    1; unk2
0x5ABDBD: push    0; unk1
0x5ABDBF: push    ecx; string
0x5ABDC0: call    GameUI_QueueMessage
0x5ABDC5: add     esp, 10h
0x5ABDC8: mov     dword ptr ds:0B140E4h, 0FFFFFFFFh
0x5ABDD2: pop     edi
0x5ABDD3: pop     esi
0x5ABDD4: pop     ebp
0x5ABDD5: pop     ebx
0x5ABDD6: add     esp, 0Ch
0x5ABDD9: retn    8
0x5ABDDC: mov     ecx, ds:0B333C4h
0x5ABDE2: call    Actor_GetCurrentAction
0x5ABDE7: cmp     eax, 0FFFFFFFFh
0x5ABDEA: jz      short loc_5ABE10
0x5ABDEC: push    0
0x5ABDEE: mov     ecx, esi
0x5ABDF0: call    ContainerEntryExtraData_HasWorn
0x5ABDF5: test    al, al
0x5ABDF7: jz      short loc_5ABE10
0x5ABDF9: fld     dword ptr ds:0A30634h
0x5ABDFF: mov     edx, ds:0B38A08h
0x5ABE05: push    ecx
0x5ABE06: fstp    [esp+20h+a2]
0x5ABE09: push    1
0x5ABE0B: push    0
0x5ABE0D: push    edx
0x5ABE0E: jmp     short loc_5ABDC0
0x5ABE10: mov     ecx, ds:0B333C4h
0x5ABE16: call    sub_65AAD0
0x5ABE1B: test    al, al
0x5ABE1D: jz      short loc_5ABE35
0x5ABE1F: fld     dword ptr ds:0A30634h
0x5ABE25: mov     eax, ds:0B38A18h
0x5ABE2A: push    ecx
0x5ABE2B: fstp    [esp+20h+a2]
0x5ABE2E: push    1
0x5ABE30: push    0
0x5ABE32: push    eax
0x5ABE33: jmp     short loc_5ABDC0
0x5ABE35: cmp     dword ptr ds:0B140E4h, 0FFFFFFFFh
0x5ABE3C: mov     eax, [esi+8]
0x5ABE3F: setz    cl
0x5ABE42: lea     edx, [esp+1Ch+var_C]
0x5ABE46: push    ecx
0x5ABE47: mov     ecx, ds:0B333C4h
0x5ABE4D: push    1
0x5ABE4F: push    edx
0x5ABE50: push    eax
0x5ABE51: call    sub_66E0D0
0x5ABE56: test    al, al
0x5ABE58: jnz     short loc_5ABE73
0x5ABE5A: fld     dword ptr ds:0A30634h
0x5ABE60: mov     eax, ds:0B38A10h
0x5ABE65: push    ecx
0x5ABE66: fstp    [esp+20h+a2]
0x5ABE69: push    1
0x5ABE6B: push    0
0x5ABE6D: push    eax
0x5ABE6E: jmp     loc_5ABDC0
0x5ABE73: cmp     dword ptr ds:0B140E4h, 0FFFFFFFFh
0x5ABE7A: jnz     loc_5ABF4B
0x5ABE80: mov     ecx, esi
0x5ABE82: call    TESHealthForm_GetHealth
0x5ABE87: cmp     eax, 1
0x5ABE8A: jle     loc_5ABF38
0x5ABE90: mov     ecx, [esi+8]
0x5ABE93: cmp     byte ptr [ecx+4], 19h
0x5ABE97: jnz     short loc_5ABEE1
0x5ABE99: push    1; arg1
0x5ABE9B: push    0; canCreate
0x5ABE9D: call    InterfaceManager_GetSingleton
0x5ABEA2: mov     edx, [eax+118h]
0x5ABEA8: shr     edx, 2
0x5ABEAB: add     esp, 8
0x5ABEAE: test    dl, 1
0x5ABEB1: jz      loc_5ABF41
0x5ABEB7: push    0
0x5ABEB9: mov     ecx, esi
0x5ABEBB: mov     byte ptr ds:0B3B3D8h, 1
0x5ABEC2: call    TESHealthForm_GetHealth
0x5ABEC7: push    eax
0x5ABEC8: push    ebp
0x5ABEC9: push    edi
0x5ABECA: push    offset CountDelta
0x5ABECF: call    sub_5C05D0
0x5ABED4: add     esp, 14h
0x5ABED7: pop     edi
0x5ABED8: pop     esi
0x5ABED9: pop     ebp
0x5ABEDA: pop     ebx
0x5ABEDB: add     esp, 0Ch
0x5ABEDE: retn    8
0x5ABEE1: mov     ecx, esi
0x5ABEE3: call    TESHealthForm_GetHealth
0x5ABEE8: cmp     eax, ds:0B38688h
0x5ABEEE: jl      short loc_5ABF09
0x5ABEF0: push    1; arg1
0x5ABEF2: push    0; canCreate
0x5ABEF4: call    InterfaceManager_GetSingleton
0x5ABEF9: mov     eax, [eax+118h]
0x5ABEFF: shr     eax, 2
0x5ABF02: add     esp, 8
0x5ABF05: test    al, 1
0x5ABF07: jnz     short loc_5ABEB7
0x5ABF09: push    1; arg1
0x5ABF0B: push    0; canCreate
0x5ABF0D: call    InterfaceManager_GetSingleton
0x5ABF12: mov     ecx, [eax+118h]
0x5ABF18: shr     ecx, 2
0x5ABF1B: add     esp, 8
0x5ABF1E: test    cl, 1
0x5ABF21: jnz     short loc_5ABF41
0x5ABF23: cmp     byte ptr ds:0B3B3D8h, 0
0x5ABF2A: jnz     short loc_5ABF41
0x5ABF2C: mov     ecx, esi
0x5ABF2E: call    TESHealthForm_GetHealth
0x5ABF33: mov     ds:0B140E4h, eax
0x5ABF38: cmp     dword ptr ds:0B140E4h, 0FFFFFFFFh
0x5ABF3F: jnz     short loc_5ABF4B
0x5ABF41: mov     dword ptr ds:0B140E4h, 1
0x5ABF4B: push    1; arg1
0x5ABF4D: push    0; canCreate
0x5ABF4F: call    InterfaceManager_GetSingleton
0x5ABF54: mov     edx, [eax+118h]
0x5ABF5A: shr     edx, 2
0x5ABF5D: add     esp, 8
0x5ABF60: test    dl, 1
0x5ABF63: jnz     loc_5AC233
0x5ABF69: cmp     byte ptr ds:0B3B3D8h, 0
0x5ABF70: jnz     loc_5AC233
0x5ABF76: push    0
0x5ABF78: mov     ecx, esi
0x5ABF7A: call    ContainerEntryExtraData_HasWorn
0x5ABF7F: test    al, al
0x5ABF81: jnz     loc_5AC0FE
0x5ABF87: mov     eax, [esi+8]
0x5ABF8A: cmp     byte ptr [eax+4], 15h
0x5ABF8E: jnz     short loc_5ABFCA
0x5ABF90: push    0; int
0x5ABF92: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5ABF97: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5ABF9C: push    0; int
0x5ABF9E: push    eax; void *
0x5ABF9F: call    OblivionDynamicCast
0x5ABFA4: add     esp, 14h
0x5ABFA7: test    eax, eax
0x5ABFA9: jz      short loc_5ABFCA
0x5ABFAB: cmp     dword ptr [eax+4], 0
0x5ABFAF: jz      short loc_5ABFCA
0x5ABFB1: mov     eax, [esi+8]
0x5ABFB4: mov     ecx, ds:0B333C4h
0x5ABFBA: push    eax
0x5ABFBB: call    sub_664850
0x5ABFC0: pop     edi
0x5ABFC1: pop     esi
0x5ABFC2: pop     ebp
0x5ABFC3: pop     ebx
0x5ABFC4: add     esp, 0Ch
0x5ABFC7: retn    8
0x5ABFCA: mov     ecx, ds:0B333C4h
0x5ABFD0: mov     ecx, [ecx+58h]
0x5ABFD3: mov     edx, [ecx]
0x5ABFD5: mov     eax, [edx+304h]
0x5ABFDB: call    eax
0x5ABFDD: test    al, al
0x5ABFDF: jz      short loc_5AC014
0x5ABFE1: mov     ecx, [esi+8]
0x5ABFE4: cmp     byte ptr [ecx+4], 21h ; '!'
0x5ABFE8: jnz     short loc_5AC014
0x5ABFEA: mov     ecx, ds:0B333C4h
0x5ABFF0: call    Actor_GetCurrentAction
0x5ABFF5: cmp     eax, 0FFFFFFFFh
0x5ABFF8: jz      short loc_5AC014
0x5ABFFA: fld     dword ptr ds:0A30634h
0x5AC000: mov     edx, ds:0B38A20h
0x5AC006: push    ecx
0x5AC007: fstp    [esp+20h+a2]
0x5AC00A: push    1
0x5AC00C: push    0
0x5AC00E: push    edx
0x5AC00F: jmp     loc_5ABDC0
0x5AC014: push    0FB8h
0x5AC019: mov     ecx, ebp
0x5AC01B: call    Tile_GetFloat
0x5AC020: fcomp   dword ptr ds:0A379B4h
0x5AC026: fnstsw  ax
0x5AC028: test    ah, 44h
0x5AC02B: jnp     short loc_5AC031
0x5AC02D: mov     al, 1
0x5AC02F: jmp     short loc_5AC033
0x5AC031: xor     al, al
0x5AC033: xor     ecx, ecx
0x5AC035: test    al, al
0x5AC037: setnz   cl
0x5AC03A: add     ecx, 1
0x5AC03D: mov     [esp+1Ch+arg_4], ecx
0x5AC041: fild    [esp+1Ch+arg_4]
0x5AC045: push    ecx
0x5AC046: mov     ecx, ebp; this
0x5AC048: fstp    [esp+20h+a2]; a3
0x5AC04B: push    0FB8h; a2
0x5AC050: call    Tile_SetFloat
0x5AC055: mov     edi, [esi]
0x5AC057: test    edi, edi
0x5AC059: jz      short loc_5AC0BE
0x5AC05B: mov     ecx, edi
0x5AC05D: call    BSSimpleList_IsEmpty
0x5AC062: test    al, al
0x5AC064: jnz     short loc_5AC0BE
0x5AC066: mov     ecx, [edi]
0x5AC068: call    sub_41DF40
0x5AC06D: test    al, al
0x5AC06F: jz      short loc_5AC0B3
0x5AC071: fld     dword ptr ds:0A30634h
0x5AC077: mov     edx, ds:0B38A30h
0x5AC07D: push    ecx
0x5AC07E: fstp    [esp+20h+a2]; duration
0x5AC081: push    1; unk2
0x5AC083: push    0; unk1
0x5AC085: push    edx; string
0x5AC086: call    GameUI_QueueMessage
0x5AC08B: fld1
0x5AC08D: add     esp, 0Ch
0x5AC090: fstp    [esp+20h+a2]; a3
0x5AC093: push    0FB8h; a2
0x5AC098: mov     ecx, ebp; this
0x5AC09A: call    Tile_SetFloat
0x5AC09F: mov     dword ptr ds:0B140E4h, 0FFFFFFFFh
0x5AC0A9: pop     edi
0x5AC0AA: pop     esi
0x5AC0AB: pop     ebp
0x5AC0AC: pop     ebx
0x5AC0AD: add     esp, 0Ch
0x5AC0B0: retn    8
0x5AC0B3: mov     eax, [esi]
0x5AC0B5: mov     ecx, [eax]
0x5AC0B7: push    0
0x5AC0B9: push    0
0x5AC0BB: push    ecx
0x5AC0BC: jmp     short loc_5AC0E3
0x5AC0BE: xor     ebp, ebp
0x5AC0C0: test    edi, edi
0x5AC0C2: jz      short loc_5AC0DE
0x5AC0C4: mov     ebp, [edi]
0x5AC0C6: test    ebp, ebp
0x5AC0C8: jz      short loc_5AC0DE
0x5AC0CA: mov     ecx, ebp
0x5AC0CC: call    ExtraDataList_GetExtraCount
0x5AC0D1: movsx   ecx, ax
0x5AC0D4: cmp     ecx, ds:0B140E4h
0x5AC0DA: jge     short loc_5AC0DE
0x5AC0DC: xor     ebp, ebp
0x5AC0DE: push    0
0x5AC0E0: push    0
0x5AC0E2: push    ebp
0x5AC0E3: mov     edx, ds:0B140E4h
0x5AC0E9: mov     eax, [esi+8]
0x5AC0EC: mov     ecx, ds:0B333C4h
0x5AC0F2: push    edx
0x5AC0F3: push    eax
0x5AC0F4: call    Actor_EquipItem
0x5AC0F9: jmp     loc_5AC1CF
0x5AC0FE: mov     ecx, [esi+8]
0x5AC101: push    0
0x5AC103: push    0
0x5AC105: push    ecx
0x5AC106: mov     ecx, ds:0B333C4h
0x5AC10C: call    sub_5E99C0
0x5AC111: mov     edx, [esi+8]
0x5AC114: movzx   eax, byte ptr [edx+4]
0x5AC118: add     eax, 0FFFFFFECh; switch 15 cases
0x5AC11B: cmp     eax, 0Eh
0x5AC11E: ja      short ManageItem___def_5AC127; jumptable 005AC127 default case, cases 21,23-32
0x5AC120: movzx   eax, ds:byte_5AC380[eax]
0x5AC127: jmp     ds:jpt_5AC127[eax*4]; switch jump
0x5AC12E: mov     ecx, ds:0B333C4h; jumptable 005AC127 cases 20,22,33,34
0x5AC134: call    Actor_GetCurrentAction
0x5AC139: cmp     eax, 0FFFFFFFFh
0x5AC13C: jz      short ManageItem___def_5AC127; jumptable 005AC127 default case, cases 21,23-32
0x5AC13E: push    ecx
0x5AC13F: mov     ecx, ds:0B38A38h
0x5AC145: jmp     loc_5ABDB2
0x5AC14A: push    0FB8h; jumptable 005AC127 default case, cases 21,23-32
0x5AC14F: mov     ecx, ebp
0x5AC151: call    Tile_GetFloat
0x5AC156: fcomp   dword ptr ds:0A379B4h
0x5AC15C: fnstsw  ax
0x5AC15E: test    ah, 44h
0x5AC161: jnp     short loc_5AC167
0x5AC163: mov     al, 1
0x5AC165: jmp     short loc_5AC169
0x5AC167: xor     al, al
0x5AC169: xor     edx, edx
0x5AC16B: test    al, al
0x5AC16D: setnz   dl
0x5AC170: push    ecx
0x5AC171: mov     ecx, ebp; this
0x5AC173: add     edx, 1
0x5AC176: mov     [esp+20h+arg_4], edx
0x5AC17A: fild    [esp+20h+arg_4]
0x5AC17E: fstp    [esp+20h+a2]; a3
0x5AC181: push    0FB8h; a2
0x5AC186: call    Tile_SetFloat
0x5AC18B: mov     eax, [esi]
0x5AC18D: test    eax, eax
0x5AC18F: push    0
0x5AC191: push    0
0x5AC193: push    1
0x5AC195: jz      short loc_5AC1A7
0x5AC197: mov     eax, [eax]
0x5AC199: mov     ecx, ds:0B140E4h
0x5AC19F: mov     edx, [esi+8]
0x5AC1A2: push    eax
0x5AC1A3: push    ecx
0x5AC1A4: push    edx
0x5AC1A5: jmp     short loc_5AC1B3
0x5AC1A7: mov     eax, ds:0B140E4h
0x5AC1AC: mov     ecx, [esi+8]
0x5AC1AF: push    0
0x5AC1B1: push    eax
0x5AC1B2: push    ecx
0x5AC1B3: mov     ecx, ds:0B333C4h
0x5AC1B9: call    Actor_UnequipItem
0x5AC1BE: mov     edx, [esi+8]
0x5AC1C1: mov     ecx, ds:0B333C4h
0x5AC1C7: push    0
0x5AC1C9: push    edx
0x5AC1CA: call    HideEquipment
0x5AC1CF: mov     ecx, ds:0B333C4h; Concurrency::details::SchedulerBase *
0x5AC1D5: call    sub_668CC0
0x5AC1DA: mov     eax, ds:0B333C4h
0x5AC1DF: mov     ecx, [eax+58h]
0x5AC1E2: mov     edx, [ecx]
0x5AC1E4: push    0
0x5AC1E6: push    0
0x5AC1E8: push    1
0x5AC1EA: push    eax
0x5AC1EB: mov     eax, [edx+42Ch]
0x5AC1F1: call    eax
0x5AC1F3: mov     ecx, ds:0B333C4h
0x5AC1F9: mov     edx, [ecx]
0x5AC1FB: mov     eax, [edx+2C0h]
0x5AC201: call    eax
0x5AC203: call    InventoryMenu_InitializeOrUpdate
0x5AC208: mov     dword ptr ds:0B140E4h, 0FFFFFFFFh
0x5AC212: mov     byte ptr ds:0B3B3D8h, 0
0x5AC219: mov     ecx, esi
0x5AC21B: call    ContainerEntryExtraData_DestroyDataTable
0x5AC220: push    esi
0x5AC221: call    FormHeapFree
0x5AC226: add     esp, 4
0x5AC229: pop     edi
0x5AC22A: pop     esi
0x5AC22B: pop     ebp
0x5AC22C: pop     ebx
0x5AC22D: add     esp, 0Ch
0x5AC230: retn    8
0x5AC233: mov     eax, [esi]
0x5AC235: test    eax, eax
0x5AC237: jz      short loc_5AC273
0x5AC239: mov     eax, [eax]
0x5AC23B: test    eax, eax
0x5AC23D: jz      short loc_5AC273
0x5AC23F: mov     ecx, eax
0x5AC241: call    sub_41DF40
0x5AC246: test    al, al
0x5AC248: jz      short loc_5AC273
0x5AC24A: mov     ecx, [esi]
0x5AC24C: mov     ecx, [ecx]
0x5AC24E: push    0
0x5AC250: call    ExtraDataList_HasWorn
0x5AC255: test    al, al
0x5AC257: jz      short loc_5AC273
0x5AC259: fld     dword ptr ds:0A30634h
0x5AC25F: mov     edx, ds:0B38560h
0x5AC265: push    ecx
0x5AC266: fstp    [esp+20h+a2]
0x5AC269: push    1
0x5AC26B: push    0
0x5AC26D: push    edx
0x5AC26E: jmp     loc_5ABDC0
0x5AC273: mov     eax, [esi+8]
0x5AC276: mov     ecx, ds:0B333C4h
0x5AC27C: push    0
0x5AC27E: push    0
0x5AC280: push    eax
0x5AC281: call    sub_5E99C0
0x5AC286: mov     ecx, dword ptr [esp+1Ch+var_C]
0x5AC28A: mov     edx, dword ptr [esp+1Ch+var_C+4]
0x5AC28E: push    0
0x5AC290: sub     esp, 0Ch
0x5AC293: mov     eax, esp
0x5AC295: mov     [eax], ecx
0x5AC297: mov     ecx, [esp+2Ch+var_4]
0x5AC29B: mov     [ebx+50h], esi
0x5AC29E: mov     esi, [esi+8]
0x5AC2A1: mov     [eax+4], edx
0x5AC2A4: mov     [eax+8], ecx
0x5AC2A7: call    sub_5AB800
0x5AC2AC: add     esp, 10h
0x5AC2AF: cmp     byte ptr [esi+4], 15h
0x5AC2B3: jnz     short loc_5AC2D1
0x5AC2B5: mov     ecx, ds:0B333C4h
0x5AC2BB: call    sub_65D4C0
0x5AC2C0: cmp     esi, eax
0x5AC2C2: jnz     short loc_5AC2D1
0x5AC2C4: mov     ecx, ds:0B333C4h
0x5AC2CA: push    0
0x5AC2CC: call    sub_664850
0x5AC2D1: mov     ecx, ds:0B333C4h
0x5AC2D7: push    0
0x5AC2D9: push    esi
0x5AC2DA: call    HideEquipment
0x5AC2DF: mov     ecx, ds:0B333C4h; Concurrency::details::SchedulerBase *
0x5AC2E5: call    sub_668CC0
0x5AC2EA: mov     eax, ds:0B333C4h
0x5AC2EF: mov     ecx, [eax+58h]
0x5AC2F2: mov     edx, [ecx]
0x5AC2F4: push    0
0x5AC2F6: push    0
0x5AC2F8: push    1
0x5AC2FA: push    eax
0x5AC2FB: mov     eax, [edx+42Ch]
0x5AC301: call    eax
0x5AC303: pop     edi
0x5AC304: pop     esi
0x5AC305: pop     ebp
0x5AC306: pop     ebx
0x5AC307: add     esp, 0Ch
0x5AC30A: retn    8
0x5AC30D: mov     ecx, [ebx+4]
0x5AC310: push    0FAEh
0x5AC315: call    Tile_GetFloat
0x5AC31A: call    Double_To_SInt32
0x5AC31F: cmp     edi, 7
0x5AC322: mov     esi, eax
0x5AC324: jnz     short loc_5AC32B
0x5AC326: sub     esi, 1
0x5AC329: jmp     short loc_5AC32E
0x5AC32B: add     esi, 1
0x5AC32E: cmp     esi, 1
0x5AC331: mov     [esp+1Ch+arg_4], esi
0x5AC335: jge     short loc_5AC33E
0x5AC337: mov     esi, 5
0x5AC33C: jmp     short loc_5AC348
0x5AC33E: cmp     esi, 5
0x5AC341: jle     short loc_5AC34C
0x5AC343: mov     esi, 1
0x5AC348: mov     [esp+1Ch+arg_4], esi
0x5AC34C: fild    [esp+1Ch+arg_4]
0x5AC350: push    ecx
0x5AC351: mov     ecx, [ebx+4]; this
0x5AC354: fstp    [esp+20h+a2]; a3
0x5AC357: push    0FAEh; a2
0x5AC35C: call    Tile_SetFloat
0x5AC361: push    0
0x5AC363: push    esi
0x5AC364: mov     ecx, ebx
0x5AC366: call    sub_5AACF0
0x5AC36B: pop     edi
0x5AC36C: pop     esi
0x5AC36D: pop     ebp
0x5AC36E: pop     ebx
0x5AC36F: add     esp, 0Ch
0x5AC372: retn    8
