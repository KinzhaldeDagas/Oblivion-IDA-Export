0x5160D0: push    0FFFFFFFFh
0x5160D2: push    offset SEH_515EF0
0x5160D7: mov     eax, large fs:0
0x5160DD: push    eax
0x5160DE: sub     esp, 18h
0x5160E1: push    ebx
0x5160E2: push    ebp
0x5160E3: push    esi
0x5160E4: push    edi
0x5160E5: mov     eax, ds:0B30AACh
0x5160EA: xor     eax, esp
0x5160EC: push    eax
0x5160ED: lea     eax, [esp+38h+var_C]
0x5160F1: mov     large fs:0, eax
0x5160F7: mov     esi, [esp+38h+a4]
0x5160FB: xor     ebp, ebp
0x5160FD: cmp     esi, ebp
0x5160FF: jz      loc_51629A
0x516105: mov     ecx, [esp+38h+l]
0x516109: mov     edx, [esp+38h+arg_10]
0x51610D: lea     eax, [esp+38h+var_20]
0x516111: push    eax; UInt16
0x516112: mov     eax, [esp+3Ch+arg_C]
0x516116: push    ecx; l
0x516117: mov     ecx, [esp+40h+a3]
0x51611B: push    edx; a6
0x51611C: mov     edx, [esp+44h+arg_4]
0x516120: push    eax; a5
0x516121: mov     eax, [esp+48h+a1]
0x516125: push    esi; a4
0x516126: push    ecx; a3
0x516127: push    edx; a2
0x516128: push    eax; a1
0x516129: mov     dword ptr [esp+58h+var_20], ebp
0x51612D: call    Script_ExtractArgs
0x516132: add     esp, 20h
0x516135: test    al, al
0x516137: jnz     short loc_51614F
0x516139: xor     al, al
0x51613B: mov     ecx, [esp+38h+var_C]
0x51613F: mov     large fs:0, ecx
0x516146: pop     ecx
0x516147: pop     edi
0x516148: pop     esi
0x516149: pop     ebp
0x51614A: pop     ebx
0x51614B: add     esp, 24h
0x51614E: retn
0x51614F: mov     edx, [esi]
0x516151: mov     eax, [edx+170h]
0x516157: push    ebp; int
0x516158: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x51615D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x516162: push    ebp; int
0x516163: mov     ecx, esi
0x516165: call    eax
0x516167: push    eax; void *
0x516168: call    OblivionDynamicCast
0x51616D: add     esp, 14h
0x516170: cmp     eax, ebp
0x516172: jz      loc_51629A
0x516178: mov     ecx, eax
0x51617A: call    sub_4B6CF0
0x51617F: test    al, al
0x516181: jz      loc_51629A
0x516187: mov     ecx, esi; this
0x516189: xor     edi, edi
0x51618B: call    GetTeleportExtraData
0x516190: mov     esi, eax
0x516192: cmp     esi, ebp
0x516194: jz      short loc_5161C9
0x516196: mov     ecx, esi
0x516198: call    sub_42B470
0x51619D: mov     edi, eax
0x51619F: cmp     edi, ebp
0x5161A1: jnz     short loc_5161C9
0x5161A3: mov     ecx, esi
0x5161A5: call    sub_42B460
0x5161AA: test    eax, eax
0x5161AC: jz      short loc_5161C9
0x5161AE: mov     ecx, esi
0x5161B0: call    sub_42B460
0x5161B5: mov     ecx, eax; this
0x5161B7: call    TESObjectCELL_IsInterior
0x5161BC: test    al, al
0x5161BE: jz      short loc_5161C9
0x5161C0: mov     ecx, esi
0x5161C2: call    sub_42B460
0x5161C7: mov     ebp, eax
0x5161C9: push    25h ; '%'
0x5161CB: lea     ecx, [esp+3Ch+var_1C]
0x5161CF: xor     bl, bl
0x5161D1: call    sub_4B8420
0x5161D6: test    edi, edi
0x5161D8: mov     [esp+38h+var_4], 0
0x5161E0: jz      short loc_5161EB
0x5161E2: mov     ecx, edi
0x5161E4: call    sub_4F2770
0x5161E9: jmp     short loc_5161FB
0x5161EB: test    ebp, ebp
0x5161ED: jz      short loc_5161FD
0x5161EF: lea     ecx, [esp+38h+var_1C]
0x5161F3: push    ecx
0x5161F4: mov     ecx, ebp
0x5161F6: call    sub_4CC070
0x5161FB: mov     bl, al
0x5161FD: lea     ecx, [esp+38h+var_1C]
0x516201: call    NiTMap_Clear
0x516206: cmp     dword ptr [esp+38h+var_20], 0
0x51620B: jnz     short loc_516272
0x51620D: test    bl, bl
0x51620F: jz      short loc_516221
0x516211: mov     ecx, ds:0B333C4h
0x516217: mov     edx, [ecx]
0x516219: mov     eax, [edx+118h]
0x51621F: call    eax
0x516221: test    edi, edi
0x516223: mov     ecx, ds:0BA9DE4h
0x516229: mov     edx, large fs:2Ch
0x516230: mov     esi, [edx+ecx*4]
0x516233: mov     al, [esi+185h]
0x516239: mov     [esp+38h+var_21], al
0x51623D: mov     byte ptr [esi+185h], 0
0x516244: jz      short loc_51624F
0x516246: mov     ecx, edi
0x516248: call    sub_4F2630
0x51624D: jmp     short loc_51625F
0x51624F: test    ebp, ebp
0x516251: jz      short loc_51625F
0x516253: lea     ecx, [esp+38h+var_1C]
0x516257: push    ecx
0x516258: mov     ecx, ebp
0x51625A: call    sub_4CBE50
0x51625F: lea     ecx, [esp+38h+var_1C]
0x516263: call    NiTMap_Clear
0x516268: mov     dl, [esp+38h+var_21]
0x51626C: mov     [esi+185h], dl
0x516272: mov     eax, [esp+38h+a4]
0x516276: push    1
0x516278: push    eax
0x516279: call    sub_4B7DB0
0x51627E: add     esp, 8
0x516281: lea     ecx, [esp+38h+var_1C]
0x516285: mov     [esp+38h+var_4], 0FFFFFFFFh
0x51628D: call    ??1?$NiTPointerMap@PAVTESObjectCELL@@_N@@UAE@XZ; NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(void)
0x516292: test    bl, bl
0x516294: jnz     loc_516139
0x51629A: mov     al, 1
0x51629C: mov     ecx, [esp+38h+var_C]
0x5162A0: mov     large fs:0, ecx
0x5162A7: pop     ecx
0x5162A8: pop     edi
0x5162A9: pop     esi
0x5162AA: pop     ebp
0x5162AB: pop     ebx
0x5162AC: add     esp, 24h
0x5162AF: retn
