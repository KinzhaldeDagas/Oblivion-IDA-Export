0x6439E0: sub     esp, 14h
0x6439E3: push    esi
0x6439E4: push    edi
0x6439E5: lea     edi, [ecx+54h]
0x6439E8: mov     eax, edi
0x6439EA: test    eax, eax
0x6439EC: mov     [esp+1Ch+var_4], ecx
0x6439F0: mov     [esp+1Ch+var_8], edi
0x6439F4: mov     [esp+1Ch+var_10], edi
0x6439F8: jz      loc_643DF8
0x6439FE: mov     esi, [esp+1Ch+arg_0]
0x643A02: push    ebx
0x643A03: push    ebp
0x643A04: mov     eax, [esp+24h+var_10]
0x643A08: mov     ebx, [eax]
0x643A0A: test    ebx, ebx
0x643A0C: jz      loc_643DF6
0x643A12: mov     ecx, [ebx+4]
0x643A15: mov     edi, [ebx]
0x643A17: mov     [esp+24h+var_C], ecx
0x643A1B: mov     ecx, edi; this
0x643A1D: mov     byte ptr [esp+24h+arg_0], 1
0x643A22: call    TESObjectREFR_GetOwner
0x643A27: test    eax, eax
0x643A29: jz      short loc_643A44
0x643A2B: mov     edx, [esi]
0x643A2D: mov     eax, [edx+170h]
0x643A33: mov     ecx, esi
0x643A35: call    eax
0x643A37: mov     ecx, edi; this
0x643A39: mov     ebp, eax
0x643A3B: call    TESObjectREFR_GetOwner
0x643A40: cmp     eax, ebp
0x643A42: jnz     short loc_643A58
0x643A44: mov     edx, [edi]
0x643A46: mov     eax, [edx+190h]
0x643A4C: mov     ecx, edi
0x643A4E: call    eax
0x643A50: test    al, al
0x643A52: jz      loc_643B26
0x643A58: mov     ecx, [esp+24h+var_C]
0x643A5C: push    ecx
0x643A5D: mov     [esp+28h+var_14], 0FFFFFFFFh
0x643A65: call    sub_470520
0x643A6A: mov     edx, [edi]
0x643A6C: add     esp, 4
0x643A6F: mov     ebp, eax
0x643A71: mov     eax, [edx+198h]
0x643A77: push    0
0x643A79: mov     ecx, edi
0x643A7B: call    eax
0x643A7D: test    al, al
0x643A7F: jnz     loc_643B42
0x643A85: mov     ecx, esi
0x643A87: call    sub_5E4420
0x643A8C: cmp     eax, ebp
0x643A8E: jl      loc_643B42
0x643A94: mov     ecx, edi; this
0x643A96: call    Actor_IsNPC
0x643A9B: test    al, al
0x643A9D: push    0; int
0x643A9F: mov     ecx, edi; this
0x643AA1: jz      short loc_643AA7
0x643AA3: mov     ebp, edi
0x643AA5: jmp     short loc_643ADA
0x643AA7: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x643AAC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x643AB1: push    0; int
0x643AB3: call    TESObjectREFR_GetOwner
0x643AB8: push    eax; void *
0x643AB9: call    OblivionDynamicCast
0x643ABE: add     esp, 14h
0x643AC1: test    eax, eax
0x643AC3: jz      short loc_643B42
0x643AC5: push    eax
0x643AC6: mov     ecx, offset ActorProcessManager_ptr
0x643ACB: call    sub_675220
0x643AD0: mov     ebp, eax
0x643AD2: test    ebp, ebp
0x643AD4: jz      short loc_643B42
0x643AD6: push    0; a2
0x643AD8: mov     ecx, ebp; this
0x643ADA: call    Actor_GetActorBaseForm
0x643ADF: mov     ecx, eax
0x643AE1: add     ecx, 24h ; '$'
0x643AE4: call    TESActorBaseData_AllFactionsAreEvil
0x643AE9: test    al, al
0x643AEB: jnz     short loc_643B42
0x643AED: test    ebp, ebp
0x643AEF: jz      short loc_643B42
0x643AF1: mov     ecx, [esp+24h+var_C]
0x643AF5: push    ecx
0x643AF6: push    0; a2
0x643AF8: mov     ecx, ebp; this
0x643AFA: call    Actor_GetActorBaseForm
0x643AFF: mov     ecx, eax
0x643B01: add     ecx, 68h ; 'h'
0x643B04: call    TESAIForm_OffersServiceForItem
0x643B09: test    al, al
0x643B0B: jz      short loc_643B42
0x643B0D: mov     edx, [esi]
0x643B0F: mov     eax, [edx+334h]
0x643B15: push    1
0x643B17: mov     ecx, esi
0x643B19: call    eax
0x643B1B: test    al, al
0x643B1D: jnz     short loc_643B3D
0x643B1F: mov     dword ptr [ebx+1Ch], 2
0x643B26: push    0
0x643B28: push    edi
0x643B29: mov     ecx, esi
0x643B2B: call    TesObjectREF_GetDistance
0x643B30: call    Double_To_SInt32
0x643B35: mov     [ebx+14h], eax
0x643B38: jmp     loc_643D46
0x643B3D: mov     byte ptr [esp+24h+arg_0], 0
0x643B42: mov     edx, [edi]
0x643B44: mov     eax, [edx+190h]
0x643B4A: mov     ecx, edi
0x643B4C: call    eax
0x643B4E: test    al, al
0x643B50: jnz     short loc_643B7C
0x643B52: mov     edx, [esi]
0x643B54: mov     eax, [edx+284h]
0x643B5A: push    24h ; '$'
0x643B5C: mov     ecx, esi
0x643B5E: call    eax
0x643B60: push    eax
0x643B61: push    1Fh
0x643B63: mov     ecx, esi
0x643B65: call    Actor_GetLuckModifiedBaseAV
0x643B6A: call    Double_To_SInt32
0x643B6F: push    eax
0x643B70: call    Calc_AIAquireForStealing?
0x643B75: mov     ebp, eax
0x643B77: jmp     loc_643C51
0x643B7C: mov     edx, [edi]
0x643B7E: mov     eax, [edx+198h]
0x643B84: push    0
0x643B86: mov     ecx, edi
0x643B88: call    eax
0x643B8A: test    al, al
0x643B8C: jnz     loc_643C5F
0x643B92: mov     ecx, edi; this
0x643B94: call    Actor_IsNPC
0x643B99: test    al, al
0x643B9B: jz      loc_643C5F
0x643BA1: mov     edx, [esi]
0x643BA3: mov     eax, [edx+284h]
0x643BA9: push    24h ; '$'
0x643BAB: mov     ecx, esi
0x643BAD: call    eax
0x643BAF: push    eax
0x643BB0: push    1Fh
0x643BB2: mov     ecx, esi
0x643BB4: call    Actor_GetLuckModifiedBaseAV
0x643BB9: call    Double_To_SInt32
0x643BBE: push    eax
0x643BBF: call    Calc_AIAquireForPickpocketing?
0x643BC4: add     esp, 8
0x643BC7: push    64h ; 'd'
0x643BC9: push    0
0x643BCB: push    0; responsibility
0x643BCD: push    0; a7
0x643BCF: push    0
0x643BD1: push    edi
0x643BD2: mov     ecx, esi
0x643BD4: mov     [esp+38h+var_8], eax
0x643BD8: call    TesObjectREF_GetDistance
0x643BDD: mov     edx, [esi]
0x643BDF: mov     eax, [edx+284h]
0x643BE5: push    ecx
0x643BE6: fstp    [esp+34h+a6]; a6
0x643BE9: push    21h ; '!'; a5
0x643BEB: mov     ecx, esi
0x643BED: call    eax
0x643BEF: mov     edx, [esi]
0x643BF1: push    eax; distanceToTarget
0x643BF2: mov     eax, [edx+224h]
0x643BF8: push    0; aggressionStat
0x643BFA: push    edi; friendlyFight?
0x643BFB: mov     ecx, esi
0x643BFD: call    eax
0x643BFF: push    eax; disposition
0x643C00: call    shouldActorFight
0x643C05: mov     edx, [esi]
0x643C07: add     esp, 20h
0x643C0A: mov     ebp, eax
0x643C0C: mov     eax, [edx+284h]
0x643C12: push    24h ; '$'
0x643C14: mov     ecx, esi
0x643C16: call    eax
0x643C18: push    0; a2
0x643C1A: mov     ecx, edi; this
0x643C1C: call    Actor_GetActorBaseForm
0x643C21: mov     ecx, eax
0x643C23: add     ecx, 24h ; '$'
0x643C26: call    TESActorBaseData_AllFactionsAreEvil
0x643C2B: test    al, al
0x643C2D: jz      short loc_643C34
0x643C2F: mov     ebp, 64h ; 'd'
0x643C34: mov     edx, [esi]
0x643C36: mov     eax, [edx+284h]
0x643C3C: push    24h ; '$'
0x643C3E: mov     ecx, esi
0x643C40: call    eax
0x643C42: push    eax
0x643C43: push    ebp
0x643C44: call    sub_546640
0x643C49: mov     ebp, [esp+2Ch+var_C]
0x643C4D: mov     [esp+2Ch+var_14], eax
0x643C51: add     esp, 8
0x643C54: test    ebp, ebp
0x643C56: jg      short loc_643CBA
0x643C58: cmp     [esp+24h+var_14], 0
0x643C5D: jg      short loc_643CBA
0x643C5F: mov     ecx, esi; this
0x643C61: call    Actor_IsCreature
0x643C66: test    al, al
0x643C68: jnz     loc_643DD6
0x643C6E: mov     edx, [edi]
0x643C70: mov     eax, [edx+190h]
0x643C76: mov     ecx, edi
0x643C78: call    eax
0x643C7A: test    al, al
0x643C7C: jz      loc_643DD6
0x643C82: mov     ecx, edi; this
0x643C84: call    Actor_IsNPC
0x643C89: test    al, al
0x643C8B: jnz     loc_643DD6
0x643C91: mov     edx, [esi]
0x643C93: mov     eax, [edx+170h]
0x643C99: mov     ecx, esi
0x643C9B: call    eax
0x643C9D: mov     ecx, edi; this
0x643C9F: mov     ebp, eax
0x643CA1: call    TESObjectREFR_GetOwner
0x643CA6: cmp     eax, ebp
0x643CA8: jz      loc_643DD6
0x643CAE: mov     dword ptr [ebx+1Ch], 5
0x643CB5: jmp     loc_643D46
0x643CBA: mov     edx, [edi]
0x643CBC: mov     eax, [edx+190h]
0x643CC2: mov     ecx, edi
0x643CC4: call    eax
0x643CC6: test    al, al
0x643CC8: jnz     loc_643D93
0x643CCE: cmp     dword ptr [ebx+1Ch], 1
0x643CD2: jnz     loc_643D8A
0x643CD8: lea     ecx, [esp+24h+var_C]
0x643CDC: push    ecx
0x643CDD: push    0
0x643CDF: push    1
0x643CE1: mov     dword ptr [ebx+1Ch], 4
0x643CE8: mov     edx, ds:0B35EC8h
0x643CEE: push    0
0x643CF0: push    edx
0x643CF1: mov     ecx, esi
0x643CF3: mov     [esp+38h+var_C], 0
0x643CFB: call    sub_5E4A00
0x643D00: test    al, al
0x643D02: jnz     short loc_643D31
0x643D04: mov     ecx, ds:0B35ECCh
0x643D0A: lea     eax, [esp+24h+var_C]
0x643D0E: push    eax
0x643D0F: push    0
0x643D11: push    1
0x643D13: push    0
0x643D15: push    ecx
0x643D16: mov     ecx, esi
0x643D18: call    sub_5E4A00
0x643D1D: test    al, al
0x643D1F: jnz     short loc_643D31
0x643D21: mov     ecx, edi
0x643D23: call    sub_4D7740
0x643D28: test    eax, eax
0x643D2A: jz      short loc_643D31
0x643D2C: mov     byte ptr [esp+24h+arg_0], 0
0x643D31: cmp     byte ptr [esp+24h+arg_0], 0
0x643D36: mov     ecx, [esp+24h+var_14]
0x643D3A: mov     [ebx+8], ebp
0x643D3D: mov     [ebx+0Ch], ecx
0x643D40: jz      loc_643DD6
0x643D46: mov     ecx, [ebx]
0x643D48: push    1
0x643D4A: call    Actor__SetCompressedFlag
0x643D4F: mov     edi, [esp+24h+var_4]
0x643D53: add     edi, 3Ch ; '<'
0x643D56: cmp     dword ptr [edi+4], 0
0x643D5A: jz      short loc_643D69
0x643D5C: lea     esp, [esp+0]
0x643D60: mov     edi, [edi+4]
0x643D63: cmp     dword ptr [edi+4], 0
0x643D67: jnz     short loc_643D60
0x643D69: cmp     dword ptr [edi], 0
0x643D6C: jz      short loc_643DD2
0x643D6E: push    8; Size
0x643D70: call    FormHeapAlloc
0x643D75: add     esp, 4
0x643D78: test    eax, eax
0x643D7A: jz      short loc_643DCB
0x643D7C: mov     [eax], ebx
0x643D7E: mov     dword ptr [eax+4], 0
0x643D85: mov     [edi+4], eax
0x643D88: jmp     short loc_643DDF
0x643D8A: mov     dword ptr [ebx+1Ch], 3
0x643D91: jmp     short loc_643D31
0x643D93: mov     edx, [esi]
0x643D95: mov     eax, [edx+334h]
0x643D9B: push    1
0x643D9D: mov     ecx, esi
0x643D9F: call    eax
0x643DA1: cmp     [esp+24h+var_14], ebp
0x643DA5: jle     short loc_643DB7
0x643DA7: test    al, al
0x643DA9: jnz     short loc_643D2C
0x643DAB: mov     dword ptr [ebx+1Ch], 5
0x643DB2: jmp     loc_643D31
0x643DB7: test    al, al
0x643DB9: jnz     loc_643D2C
0x643DBF: mov     dword ptr [ebx+1Ch], 4
0x643DC6: jmp     loc_643D31
0x643DCB: xor     eax, eax
0x643DCD: mov     [edi+4], eax
0x643DD0: jmp     short loc_643DDF
0x643DD2: mov     [edi], ebx
0x643DD4: jmp     short loc_643DDF
0x643DD6: push    ebx
0x643DD7: call    FormHeapFree
0x643DDC: add     esp, 4
0x643DDF: mov     edx, [esp+24h+var_10]
0x643DE3: mov     eax, [edx+4]
0x643DE6: test    eax, eax
0x643DE8: mov     edi, [esp+24h+var_8]
0x643DEC: mov     [esp+24h+var_10], eax
0x643DF0: jnz     loc_643A04
0x643DF6: pop     ebp
0x643DF7: pop     ebx
0x643DF8: cmp     dword ptr [edi+4], 0
0x643DFC: jz      short loc_643E16
0x643DFE: mov     edi, edi
0x643E00: mov     eax, [edi+4]
0x643E03: mov     esi, [eax+4]
0x643E06: push    eax
0x643E07: call    FormHeapFree
0x643E0C: add     esp, 4
0x643E0F: test    esi, esi
0x643E11: mov     [edi+4], esi
0x643E14: jnz     short loc_643E00
0x643E16: mov     dword ptr [edi], 0
0x643E1C: pop     edi
0x643E1D: pop     esi
0x643E1E: add     esp, 14h
0x643E21: retn    4
