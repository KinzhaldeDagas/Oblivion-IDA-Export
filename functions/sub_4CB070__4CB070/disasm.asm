0x4CB070: sub     esp, 14h
0x4CB073: push    esi
0x4CB074: mov     esi, [esp+18h+a2]
0x4CB078: push    edi
0x4CB079: xor     edi, edi
0x4CB07B: cmp     esi, edi
0x4CB07D: mov     [esp+1Ch+var_14], edi
0x4CB081: jz      loc_4CB2A4
0x4CB087: mov     eax, [esp+1Ch+arg_4]
0x4CB08B: cmp     eax, edi
0x4CB08D: jz      loc_4CB2A4
0x4CB093: cmp     [esp+1Ch+arg_8], edi
0x4CB097: jz      loc_4CB2A4
0x4CB09D: cmp     esi, eax
0x4CB09F: jz      loc_4CB2A4
0x4CB0A5: push    ebx
0x4CB0A6: push    ebp
0x4CB0A7: push    edi; int
0x4CB0A8: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4CB0AD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CB0B2: push    edi; int
0x4CB0B3: push    esi; void *
0x4CB0B4: mov     [esp+38h+var_10], edi
0x4CB0B8: mov     [esp+38h+var_8], edi
0x4CB0BC: mov     [esp+38h+var_4], edi
0x4CB0C0: xor     ebp, ebp
0x4CB0C2: xor     ebx, ebx
0x4CB0C4: call    OblivionDynamicCast
0x4CB0C9: add     esp, 14h
0x4CB0CC: test    eax, eax
0x4CB0CE: mov     [esp+24h+var_C], eax
0x4CB0D2: mov     [esp+24h+a2], ebx
0x4CB0D6: jz      short loc_4CB0DD
0x4CB0D8: lea     ebp, [eax+48h]
0x4CB0DB: jmp     short loc_4CB118
0x4CB0DD: push    0; int
0x4CB0DF: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x4CB0E4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CB0E9: push    0; int
0x4CB0EB: push    esi; void *
0x4CB0EC: call    OblivionDynamicCast
0x4CB0F1: mov     ebx, eax
0x4CB0F3: add     esp, 14h
0x4CB0F6: test    ebx, ebx
0x4CB0F8: jz      short loc_4CB11C
0x4CB0FA: mov     ecx, ebx
0x4CB0FC: call    sub_4EF1E0
0x4CB101: test    eax, eax
0x4CB103: jz      short loc_4CB11C
0x4CB105: mov     ecx, ebx
0x4CB107: call    sub_4EF1E0
0x4CB10C: mov     ebp, eax
0x4CB10E: mov     ecx, ebx
0x4CB110: add     ebp, 48h ; 'H'
0x4CB113: call    sub_4EF1E0
0x4CB118: mov     [esp+24h+a2], eax
0x4CB11C: mov     eax, [esp+24h+a2]
0x4CB120: push    eax; a2
0x4CB121: mov     ecx, offset stru_B35C80; this
0x4CB126: call    sub_496EA0
0x4CB12B: test    ebp, ebp
0x4CB12D: jz      loc_4CB224
0x4CB133: cmp     dword ptr [ebp+4], 0
0x4CB137: jnz     short loc_4CB143
0x4CB139: cmp     dword ptr [ebp+0], 0
0x4CB13D: jz      loc_4CB224
0x4CB143: mov     esi, [ebp+0]
0x4CB146: mov     edx, [esi]
0x4CB148: mov     eax, [edx+170h]
0x4CB14E: mov     ecx, esi
0x4CB150: call    eax
0x4CB152: cmp     byte ptr [eax+4], 18h
0x4CB156: jnz     loc_4CB215
0x4CB15C: mov     eax, [esi+8]
0x4CB15F: mov     ecx, eax
0x4CB161: shr     ecx, 5
0x4CB164: test    cl, 1
0x4CB167: jnz     loc_4CB215
0x4CB16D: mov     edx, eax
0x4CB16F: shr     edx, 0Bh
0x4CB172: test    dl, 1
0x4CB175: jnz     loc_4CB215
0x4CB17B: shr     eax, 0Dh
0x4CB17E: test    al, 1
0x4CB180: jnz     loc_4CB215
0x4CB186: mov     eax, [esi]
0x4CB188: mov     edx, [eax+170h]
0x4CB18E: push    0; int
0x4CB190: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x4CB195: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4CB19A: push    0; int
0x4CB19C: mov     ecx, esi
0x4CB19E: call    edx
0x4CB1A0: push    eax; void *
0x4CB1A1: call    OblivionDynamicCast
0x4CB1A6: mov     edi, eax
0x4CB1A8: add     esp, 14h
0x4CB1AB: test    edi, edi
0x4CB1AD: jz      short loc_4CB215
0x4CB1AF: mov     ecx, edi
0x4CB1B1: call    sub_4B78E0
0x4CB1B6: test    al, al
0x4CB1B8: jz      short loc_4CB215
0x4CB1BA: mov     eax, [esp+24h+arg_4]
0x4CB1BE: push    eax
0x4CB1BF: mov     ecx, edi
0x4CB1C1: call    sub_4B80A0
0x4CB1C6: test    al, al
0x4CB1C8: jz      short loc_4CB215
0x4CB1CA: mov     ecx, esi; this
0x4CB1CC: call    GetTeleportExtraData
0x4CB1D1: test    eax, eax
0x4CB1D3: jnz     short loc_4CB1E6
0x4CB1D5: push    esi
0x4CB1D6: lea     ecx, [esp+28h+var_8]
0x4CB1DA: call    BSSimpleList_PushFront
0x4CB1DF: add     [esp+24h+var_10], 1
0x4CB1E4: jmp     short loc_4CB215
0x4CB1E6: mov     ecx, [esp+24h+arg_8]
0x4CB1EA: cmp     dword ptr [ecx], 0
0x4CB1ED: jnz     short loc_4CB215
0x4CB1EF: mov     ecx, [esp+24h+var_C]
0x4CB1F3: test    ecx, ecx
0x4CB1F5: jz      short loc_4CB200
0x4CB1F7: call    sub_4CA6F0
0x4CB1FC: test    al, al
0x4CB1FE: jnz     short loc_4CB20F
0x4CB200: test    ebx, ebx
0x4CB202: jz      short loc_4CB215
0x4CB204: mov     ecx, ebx
0x4CB206: call    sub_4EF150
0x4CB20B: test    al, al
0x4CB20D: jz      short loc_4CB215
0x4CB20F: mov     edx, [esp+24h+arg_8]
0x4CB213: mov     [edx], esi
0x4CB215: mov     ebp, [ebp+4]
0x4CB218: test    ebp, ebp
0x4CB21A: mov     edi, [esp+24h+var_14]
0x4CB21E: jnz     loc_4CB133
0x4CB224: mov     eax, [esp+24h+a2]
0x4CB228: push    eax; a2
0x4CB229: mov     ecx, offset stru_B35C80; this
0x4CB22E: call    sub_496F50
0x4CB233: mov     esi, [esp+24h+var_10]
0x4CB237: test    esi, esi
0x4CB239: pop     ebp
0x4CB23A: pop     ebx
0x4CB23B: jbe     short loc_4CB2A4
0x4CB23D: lea     ecx, [esp+1Ch+var_8]
0x4CB241: call    BSSimpleList_IsEmpty
0x4CB246: test    al, al
0x4CB248: jnz     short loc_4CB2A4
0x4CB24A: push    esi
0x4CB24B: call    Rand3
0x4CB250: add     esp, 4
0x4CB253: xor     esi, esi
0x4CB255: lea     ecx, [esp+1Ch+var_8]
0x4CB259: lea     esp, [esp+0]
0x4CB260: mov     edx, [ecx+4]
0x4CB263: test    edx, edx
0x4CB265: jnz     short loc_4CB26B
0x4CB267: cmp     [ecx], edx
0x4CB269: jz      short loc_4CB291
0x4CB26B: cmp     esi, eax
0x4CB26D: jz      short loc_4CB28B
0x4CB26F: mov     ecx, edx
0x4CB271: add     esi, 1
0x4CB274: test    ecx, ecx
0x4CB276: jnz     short loc_4CB260
0x4CB278: lea     ecx, [esp+1Ch+var_8]
0x4CB27C: call    BSSimpleList_Clear
0x4CB281: mov     eax, [esp+1Ch+var_14]
0x4CB285: pop     edi
0x4CB286: pop     esi
0x4CB287: add     esp, 14h
0x4CB28A: retn
0x4CB28B: mov     ecx, [ecx]
0x4CB28D: mov     [esp+1Ch+var_14], ecx
0x4CB291: lea     ecx, [esp+1Ch+var_8]
0x4CB295: call    BSSimpleList_Clear
0x4CB29A: mov     eax, [esp+1Ch+var_14]
0x4CB29E: pop     edi
0x4CB29F: pop     esi
0x4CB2A0: add     esp, 14h
0x4CB2A3: retn
0x4CB2A4: mov     eax, edi
0x4CB2A6: pop     edi
0x4CB2A7: pop     esi
0x4CB2A8: add     esp, 14h
0x4CB2AB: retn
