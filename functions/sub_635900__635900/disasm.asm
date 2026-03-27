0x635900: sub     esp, 14h
0x635903: push    ebx
0x635904: push    esi
0x635905: mov     ebx, ecx
0x635907: push    edi
0x635908: lea     edi, [ebx+54h]
0x63590B: mov     eax, edi
0x63590D: test    eax, eax
0x63590F: mov     [esp+20h+var_8], ebx
0x635913: mov     [esp+20h+var_4], edi
0x635917: mov     [esp+20h+var_10], edi
0x63591B: jz      loc_635D1F
0x635921: mov     esi, [esp+20h+arg_0]
0x635925: push    ebp
0x635926: mov     eax, [esp+24h+var_10]
0x63592A: mov     ebp, [eax]
0x63592C: test    ebp, ebp
0x63592E: jz      loc_635D1E
0x635934: mov     ecx, [ebp+4]
0x635937: mov     edi, [ebp+0]
0x63593A: mov     [esp+24h+var_C], ecx
0x63593E: mov     ecx, edi; this
0x635940: mov     byte ptr [esp+24h+arg_0], 1
0x635945: call    TESObjectREFR_GetOwner
0x63594A: test    eax, eax
0x63594C: jz      short loc_63595C
0x63594E: push    1
0x635950: push    esi
0x635951: mov     ecx, edi
0x635953: call    TESOBjectREFR_IsOwnedBy
0x635958: test    al, al
0x63595A: jz      short loc_635970
0x63595C: mov     edx, [edi]
0x63595E: mov     eax, [edx+190h]
0x635964: mov     ecx, edi
0x635966: call    eax
0x635968: test    al, al
0x63596A: jz      loc_635A2B
0x635970: mov     ecx, edi; this
0x635972: mov     [esp+24h+var_14], 0FFFFFFFFh
0x63597A: call    Actor_IsNPC
0x63597F: test    al, al
0x635981: jz      short loc_635999
0x635983: mov     edx, [edi]
0x635985: mov     eax, [edx+198h]
0x63598B: push    0
0x63598D: mov     ecx, edi
0x63598F: call    eax
0x635991: test    al, al
0x635993: jnz     short loc_635999
0x635995: mov     ebx, edi
0x635997: jmp     short loc_6359BF
0x635999: mov     ecx, edi; this
0x63599B: call    TESObjectREFR_GetOwner
0x6359A0: test    eax, eax
0x6359A2: jz      loc_635A81
0x6359A8: cmp     byte ptr [eax+4], 23h ; '#'
0x6359AC: jnz     loc_635A81
0x6359B2: push    eax
0x6359B3: mov     ecx, offset ActorProcessManager_ptr
0x6359B8: call    sub_675220
0x6359BD: mov     ebx, eax
0x6359BF: test    ebx, ebx
0x6359C1: jz      loc_635A81
0x6359C7: mov     edx, [ebx]
0x6359C9: mov     eax, [edx+198h]
0x6359CF: push    0
0x6359D1: mov     ecx, ebx
0x6359D3: call    eax
0x6359D5: test    al, al
0x6359D7: jnz     loc_635A81
0x6359DD: mov     ecx, [esp+24h+var_C]
0x6359E1: push    ecx
0x6359E2: push    0; a2
0x6359E4: mov     ecx, ebx; this
0x6359E6: call    Actor_GetActorBaseForm
0x6359EB: mov     ecx, eax
0x6359ED: add     ecx, 68h ; 'h'
0x6359F0: call    TESAIForm_OffersServiceForItem
0x6359F5: test    al, al
0x6359F7: jz      short loc_635A47
0x6359F9: mov     edx, [ebp+4]
0x6359FC: push    edx
0x6359FD: call    sub_470520
0x635A02: add     esp, 4
0x635A05: mov     ecx, esi
0x635A07: mov     ebx, eax
0x635A09: call    sub_5E4420
0x635A0E: cmp     eax, ebx
0x635A10: jl      short loc_635A47
0x635A12: mov     eax, [esi]
0x635A14: mov     edx, [eax+334h]
0x635A1A: push    1
0x635A1C: mov     ecx, esi
0x635A1E: call    edx
0x635A20: test    al, al
0x635A22: jnz     short loc_635A42
0x635A24: mov     dword ptr [ebp+1Ch], 2
0x635A2B: push    0
0x635A2D: push    edi
0x635A2E: mov     ecx, esi
0x635A30: call    TesObjectREF_GetDistance
0x635A35: call    Double_To_SInt32
0x635A3A: mov     [ebp+14h], eax
0x635A3D: jmp     loc_635C61
0x635A42: mov     byte ptr [esp+24h+arg_0], 0
0x635A47: mov     eax, [edi]
0x635A49: mov     edx, [eax+190h]
0x635A4F: mov     ecx, edi
0x635A51: call    edx
0x635A53: test    al, al
0x635A55: jnz     short loc_635A98
0x635A57: mov     eax, [esi]
0x635A59: mov     edx, [eax+284h]
0x635A5F: push    24h ; '$'
0x635A61: mov     ecx, esi
0x635A63: call    edx
0x635A65: push    eax
0x635A66: push    1Fh
0x635A68: mov     ecx, esi
0x635A6A: call    Actor_GetLuckModifiedBaseAV
0x635A6F: call    Double_To_SInt32
0x635A74: push    eax
0x635A75: call    Calc_AIAquireForStealing?
0x635A7A: mov     ebx, eax
0x635A7C: jmp     loc_635B6D
0x635A81: mov     ecx, edi; this
0x635A83: call    Actor_IsNPC
0x635A88: test    al, al
0x635A8A: jz      short loc_635A47
0x635A8C: mov     dword ptr [ebp+1Ch], 0
0x635A93: jmp     loc_635C61
0x635A98: mov     eax, [edi]
0x635A9A: mov     edx, [eax+198h]
0x635AA0: push    0
0x635AA2: mov     ecx, edi
0x635AA4: call    edx
0x635AA6: test    al, al
0x635AA8: jnz     loc_635B7B
0x635AAE: mov     ecx, edi; this
0x635AB0: call    Actor_IsNPC
0x635AB5: test    al, al
0x635AB7: jz      loc_635B7B
0x635ABD: mov     eax, [esi]
0x635ABF: mov     edx, [eax+284h]
0x635AC5: push    24h ; '$'
0x635AC7: mov     ecx, esi
0x635AC9: call    edx
0x635ACB: push    eax
0x635ACC: push    1Fh
0x635ACE: mov     ecx, esi
0x635AD0: call    Actor_GetLuckModifiedBaseAV
0x635AD5: call    Double_To_SInt32
0x635ADA: push    eax
0x635ADB: call    Calc_AIAquireForPickpocketing?
0x635AE0: add     esp, 8
0x635AE3: push    64h ; 'd'
0x635AE5: push    0
0x635AE7: push    0; responsibility
0x635AE9: push    0; a7
0x635AEB: push    0
0x635AED: push    edi
0x635AEE: mov     ecx, esi
0x635AF0: mov     [esp+38h+var_8], eax
0x635AF4: call    TesObjectREF_GetDistance
0x635AF9: mov     eax, [esi]
0x635AFB: mov     edx, [eax+284h]
0x635B01: push    ecx
0x635B02: fstp    [esp+34h+a6]; a6
0x635B05: push    21h ; '!'; a5
0x635B07: mov     ecx, esi
0x635B09: call    edx
0x635B0B: push    eax; distanceToTarget
0x635B0C: mov     eax, [esi]
0x635B0E: mov     edx, [eax+224h]
0x635B14: push    0; aggressionStat
0x635B16: push    edi; friendlyFight?
0x635B17: mov     ecx, esi
0x635B19: call    edx
0x635B1B: push    eax; disposition
0x635B1C: call    shouldActorFight
0x635B21: mov     ebx, eax
0x635B23: mov     eax, [esi]
0x635B25: mov     edx, [eax+284h]
0x635B2B: add     esp, 20h
0x635B2E: push    24h ; '$'
0x635B30: mov     ecx, esi
0x635B32: call    edx
0x635B34: push    0; a2
0x635B36: mov     ecx, edi; this
0x635B38: call    Actor_GetActorBaseForm
0x635B3D: mov     ecx, eax
0x635B3F: add     ecx, 24h ; '$'
0x635B42: call    TESActorBaseData_AllFactionsAreEvil
0x635B47: test    al, al
0x635B49: jz      short loc_635B50
0x635B4B: mov     ebx, 64h ; 'd'
0x635B50: mov     eax, [esi]
0x635B52: mov     edx, [eax+284h]
0x635B58: push    24h ; '$'
0x635B5A: mov     ecx, esi
0x635B5C: call    edx
0x635B5E: push    eax
0x635B5F: push    ebx
0x635B60: call    sub_546640
0x635B65: mov     ebx, [esp+2Ch+var_C]
0x635B69: mov     [esp+2Ch+var_14], eax
0x635B6D: add     esp, 8
0x635B70: test    ebx, ebx
0x635B72: jg      short loc_635BD6
0x635B74: cmp     [esp+24h+var_14], 0
0x635B79: jg      short loc_635BD6
0x635B7B: mov     ecx, esi; this
0x635B7D: call    Actor_IsCreature
0x635B82: test    al, al
0x635B84: jnz     loc_635CFA
0x635B8A: mov     eax, [edi]
0x635B8C: mov     edx, [eax+190h]
0x635B92: mov     ecx, edi
0x635B94: call    edx
0x635B96: test    al, al
0x635B98: jz      loc_635CFA
0x635B9E: mov     ecx, edi; this
0x635BA0: call    Actor_IsNPC
0x635BA5: test    al, al
0x635BA7: jnz     loc_635CFA
0x635BAD: mov     eax, [esi]
0x635BAF: mov     edx, [eax+170h]
0x635BB5: mov     ecx, esi
0x635BB7: call    edx
0x635BB9: mov     ecx, edi; this
0x635BBB: mov     ebx, eax
0x635BBD: call    TESObjectREFR_GetOwner
0x635BC2: cmp     eax, ebx
0x635BC4: jz      loc_635CFA
0x635BCA: mov     dword ptr [ebp+1Ch], 5
0x635BD1: jmp     loc_635C61
0x635BD6: mov     eax, [edi]
0x635BD8: mov     edx, [eax+190h]
0x635BDE: mov     ecx, edi
0x635BE0: call    edx
0x635BE2: test    al, al
0x635BE4: jnz     loc_635CB3
0x635BEA: cmp     dword ptr [ebp+1Ch], 1
0x635BEE: jnz     loc_635CAA
0x635BF4: lea     eax, [esp+24h+var_C]
0x635BF8: push    eax
0x635BF9: push    0
0x635BFB: push    1
0x635BFD: mov     dword ptr [ebp+1Ch], 4
0x635C04: mov     ecx, ds:0B35EC8h
0x635C0A: push    0
0x635C0C: push    ecx
0x635C0D: mov     ecx, esi
0x635C0F: mov     [esp+38h+var_C], 0
0x635C17: call    sub_5E4A00
0x635C1C: test    al, al
0x635C1E: jnz     short loc_635C4C
0x635C20: mov     eax, ds:0B35ECCh
0x635C25: lea     edx, [esp+24h+var_C]
0x635C29: push    edx
0x635C2A: push    0
0x635C2C: push    1
0x635C2E: push    0
0x635C30: push    eax
0x635C31: mov     ecx, esi
0x635C33: call    sub_5E4A00
0x635C38: test    al, al
0x635C3A: jnz     short loc_635C4C
0x635C3C: mov     ecx, edi
0x635C3E: call    sub_4D7740
0x635C43: test    eax, eax
0x635C45: jz      short loc_635C4C
0x635C47: mov     byte ptr [esp+24h+arg_0], 0
0x635C4C: cmp     byte ptr [esp+24h+arg_0], 0
0x635C51: mov     ecx, [esp+24h+var_14]
0x635C55: mov     [ebp+8], ebx
0x635C58: mov     [ebp+0Ch], ecx
0x635C5B: jz      loc_635CFA
0x635C61: mov     ecx, [ebp+0]
0x635C64: push    1
0x635C66: call    Actor__SetCompressedFlag
0x635C6B: mov     ebx, [esp+24h+var_8]
0x635C6F: cmp     dword ptr [ebx+40h], 0
0x635C73: lea     edi, [ebx+3Ch]
0x635C76: jz      short loc_635C89
0x635C78: jmp     short loc_635C80
0x635C7A: align 10h
0x635C80: mov     edi, [edi+4]
0x635C83: cmp     dword ptr [edi+4], 0
0x635C87: jnz     short loc_635C80
0x635C89: cmp     dword ptr [edi], 0
0x635C8C: jz      short loc_635CF6
0x635C8E: push    8; Size
0x635C90: call    FormHeapAlloc
0x635C95: add     esp, 4
0x635C98: test    eax, eax
0x635C9A: jz      short loc_635CEF
0x635C9C: mov     [eax], ebp
0x635C9E: mov     dword ptr [eax+4], 0
0x635CA5: mov     [edi+4], eax
0x635CA8: jmp     short loc_635D07
0x635CAA: mov     dword ptr [ebp+1Ch], 3
0x635CB1: jmp     short loc_635C4C
0x635CB3: mov     edx, [esi]
0x635CB5: mov     eax, [edx+334h]
0x635CBB: push    1
0x635CBD: mov     ecx, esi
0x635CBF: call    eax
0x635CC1: cmp     [esp+24h+var_14], ebx
0x635CC5: jle     short loc_635CDB
0x635CC7: test    al, al
0x635CC9: jnz     loc_635C47
0x635CCF: mov     dword ptr [ebp+1Ch], 5
0x635CD6: jmp     loc_635C4C
0x635CDB: test    al, al
0x635CDD: jnz     loc_635C47
0x635CE3: mov     dword ptr [ebp+1Ch], 4
0x635CEA: jmp     loc_635C4C
0x635CEF: xor     eax, eax
0x635CF1: mov     [edi+4], eax
0x635CF4: jmp     short loc_635D07
0x635CF6: mov     [edi], ebp
0x635CF8: jmp     short loc_635D07
0x635CFA: push    ebp
0x635CFB: call    FormHeapFree
0x635D00: mov     ebx, [esp+28h+var_8]
0x635D04: add     esp, 4
0x635D07: mov     edx, [esp+24h+var_10]
0x635D0B: mov     eax, [edx+4]
0x635D0E: test    eax, eax
0x635D10: mov     edi, [esp+24h+var_4]
0x635D14: mov     [esp+24h+var_10], eax
0x635D18: jnz     loc_635926
0x635D1E: pop     ebp
0x635D1F: mov     ecx, ebx
0x635D21: call    sub_64E240
0x635D26: mov     ecx, ebx
0x635D28: call    sub_64E2B0
0x635D2D: cmp     dword ptr [edi+4], 0
0x635D31: jz      short loc_635D49
0x635D33: mov     eax, [edi+4]
0x635D36: mov     esi, [eax+4]
0x635D39: push    eax
0x635D3A: call    FormHeapFree
0x635D3F: add     esp, 4
0x635D42: test    esi, esi
0x635D44: mov     [edi+4], esi
0x635D47: jnz     short loc_635D33
0x635D49: mov     dword ptr [edi], 0
0x635D4F: pop     edi
0x635D50: pop     esi
0x635D51: pop     ebx
0x635D52: add     esp, 14h
0x635D55: retn    4
