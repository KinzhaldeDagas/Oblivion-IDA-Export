0x5B0A00: push    esi
0x5B0A01: push    3F6h
0x5B0A06: mov     esi, ecx
0x5B0A08: call    Menu_GetOpenMenuTile
0x5B0A0D: add     esp, 4
0x5B0A10: test    eax, eax
0x5B0A12: jz      loc_5B0CCD
0x5B0A18: mov     ecx, eax
0x5B0A1A: call    Tile_GetParentMenu
0x5B0A1F: test    eax, eax
0x5B0A21: jz      loc_5B0CCD
0x5B0A27: push    0; int
0x5B0A29: push    offset ??_R0?AVLockPickMenu@@@8; struct TypeDescriptor *
0x5B0A2E: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5B0A33: push    0; int
0x5B0A35: push    eax; void *
0x5B0A36: call    OblivionDynamicCast
0x5B0A3B: add     esp, 14h
0x5B0A3E: test    eax, eax
0x5B0A40: jz      loc_5B0CCD
0x5B0A46: mov     eax, ds:0B33398h
0x5B0A4B: mov     ecx, [eax+20h]
0x5B0A4E: push    edi
0x5B0A4F: mov     edi, [esp+8+arg_0]
0x5B0A53: cmp     edi, 2
0x5B0A56: jz      loc_5B0D09
0x5B0A5C: push    0Ah
0x5B0A5E: call    sub_6DA150
0x5B0A63: cmp     eax, 2
0x5B0A66: jz      loc_5B0D09
0x5B0A6C: cmp     dword ptr [esi+150h], 4
0x5B0A73: jnz     short loc_5B0A7C
0x5B0A75: mov     ecx, esi
0x5B0A77: call    sub_5B0620
0x5B0A7C: mov     eax, [esi+178h]
0x5B0A82: test    eax, eax
0x5B0A84: push    ebx; a3
0x5B0A85: jz      short loc_5B0A8D
0x5B0A87: cmp     dword ptr [eax+44h], 0
0x5B0A8B: jz      short loc_5B0AA7
0x5B0A8D: mov     ecx, ds:0B35ECCh
0x5B0A93: push    ecx
0x5B0A94: mov     ecx, ds:0B333C4h
0x5B0A9A: call    TESObjectREF_GetItemCount
0x5B0A9F: test    eax, eax
0x5B0AA1: jz      loc_5B0B69
0x5B0AA7: cmp     edi, 5
0x5B0AAA: jnz     loc_5B0B69
0x5B0AB0: fld1
0x5B0AB2: push    ecx
0x5B0AB3: mov     ecx, [esi+178h]; this
0x5B0AB9: fstp    [esp+10h+a2]; a3
0x5B0ABC: push    0FAEh; a2
0x5B0AC1: call    Tile_SetFloat
0x5B0AC6: mov     ecx, [esi+178h]
0x5B0ACC: push    0; float
0x5B0ACE: call    sub_58FBA0
0x5B0AD3: mov     ebx, 1
0x5B0AD8: cmp     [esi+150h], ebx
0x5B0ADE: jz      loc_5B0CCB
0x5B0AE4: mov     ecx, [esi+38h]; this
0x5B0AE7: call    TESObjectREFR_GetOwner
0x5B0AEC: test    eax, eax
0x5B0AEE: jz      short loc_5B0B29
0x5B0AF0: cmp     byte ptr [esi+17Ch], 0
0x5B0AF7: jnz     short loc_5B0B29
0x5B0AF9: mov     edx, ds:0B333C4h
0x5B0AFF: mov     ecx, [esi+38h]; this
0x5B0B02: mov     edi, [edx]
0x5B0B04: push    0FFFFFFFFh
0x5B0B06: call    TESObjectREFR_GetOwner
0x5B0B0B: mov     ecx, ds:0B333C4h
0x5B0B11: mov     edx, [edi+248h]
0x5B0B17: push    eax
0x5B0B18: mov     eax, [esi+38h]
0x5B0B1B: push    eax
0x5B0B1C: call    edx
0x5B0B1E: cmp     eax, 0FFFFFFFFh
0x5B0B21: jz      short loc_5B0B29
0x5B0B23: mov     [esi+17Ch], bl
0x5B0B29: mov     ds:0B3B3F5h, bl
0x5B0B2F: mov     ecx, esi
0x5B0B31: mov     [esi+17Ch], bl
0x5B0B37: call    sub_5B0260
0x5B0B3C: test    al, al
0x5B0B3E: jz      loc_5B0CEA
0x5B0B44: lea     eax, [esi+94h]
0x5B0B4A: mov     ecx, 5
0x5B0B4F: nop
0x5B0B50: mov     [eax+1], bl
0x5B0B53: mov     [eax], bl
0x5B0B55: add     eax, 28h ; '('
0x5B0B58: sub     ecx, ebx
0x5B0B5A: jnz     short loc_5B0B50
0x5B0B5C: mov     ecx, esi
0x5B0B5E: call    sub_5B03B0
0x5B0B63: pop     ebx
0x5B0B64: pop     edi
0x5B0B65: pop     esi
0x5B0B66: retn    8
0x5B0B69: cmp     dword ptr [esi+160h], 0
0x5B0B70: jl      loc_5B0CCB
0x5B0B76: mov     ecx, [esi+38h]; this
0x5B0B79: call    TESObjectREFR_GetOwner
0x5B0B7E: test    eax, eax
0x5B0B80: mov     ebx, 1
0x5B0B85: jz      short loc_5B0BBF
0x5B0B87: cmp     byte ptr [esi+17Ch], 0
0x5B0B8E: jnz     short loc_5B0BBF
0x5B0B90: mov     eax, ds:0B333C4h
0x5B0B95: mov     ecx, [esi+38h]; this
0x5B0B98: mov     edi, [eax]
0x5B0B9A: push    0FFFFFFFFh
0x5B0B9C: call    TESObjectREFR_GetOwner
0x5B0BA1: mov     ecx, [esi+38h]
0x5B0BA4: mov     edx, [edi+248h]
0x5B0BAA: push    eax
0x5B0BAB: push    ecx
0x5B0BAC: mov     ecx, ds:0B333C4h
0x5B0BB2: call    edx
0x5B0BB4: cmp     eax, 0FFFFFFFFh
0x5B0BB7: jz      short loc_5B0BBF
0x5B0BB9: mov     [esi+17Ch], bl
0x5B0BBF: mov     eax, [esi+160h]
0x5B0BC5: lea     eax, [eax+eax*4]
0x5B0BC8: mov     edx, [esi+eax*8+80h]
0x5B0BCF: cmp     edx, 0FFFFFFFFh
0x5B0BD2: lea     ecx, [esi+eax*8]
0x5B0BD5: jz      loc_5B0CD3
0x5B0BDB: cmp     byte ptr [ecx+95h], 0
0x5B0BE2: jnz     loc_5B0CF7
0x5B0BE8: fldz
0x5B0BEA: fcom    dword ptr [ecx+7Ch]
0x5B0BED: fnstsw  ax
0x5B0BEF: test    ah, 44h
0x5B0BF2: jnp     loc_5B0CD1
0x5B0BF8: cmp     [ecx+94h], bl
0x5B0BFE: jnz     loc_5B0CD1
0x5B0C04: mov     ecx, ds:0B333C4h
0x5B0C0A: mov     edx, [ecx]
0x5B0C0C: mov     eax, [edx+39Ch]
0x5B0C12: push    ecx
0x5B0C13: fstp    [esp+10h+a2]
0x5B0C16: push    0
0x5B0C18: push    1Eh
0x5B0C1A: call    eax
0x5B0C1C: mov     ecx, ds:0B333C4h
0x5B0C22: mov     edx, [ecx]
0x5B0C24: mov     eax, [edx+284h]
0x5B0C2A: push    1Eh; a3
0x5B0C2C: call    eax
0x5B0C2E: cmp     eax, 64h ; 'd'
0x5B0C31: jle     short loc_5B0C3D
0x5B0C33: mov     [esp+0Ch+arg_0], 64h ; 'd'
0x5B0C3B: jmp     short loc_5B0C53
0x5B0C3D: mov     ecx, ds:0B333C4h
0x5B0C43: mov     edx, [ecx]
0x5B0C45: mov     eax, [edx+284h]
0x5B0C4B: push    1Eh
0x5B0C4D: call    eax
0x5B0C4F: mov     [esp+0Ch+arg_0], eax
0x5B0C53: fild    [esp+0Ch+arg_0]
0x5B0C57: push    ecx
0x5B0C58: mov     ecx, [esi+28h]; this
0x5B0C5B: fstp    [esp+10h+a2]; a3
0x5B0C5E: push    0FB2h; a2
0x5B0C63: call    Tile_SetFloat
0x5B0C68: mov     eax, [esi+160h]
0x5B0C6E: lea     ecx, [eax+eax*4]
0x5B0C71: mov     [esi+150h], ebx
0x5B0C77: mov     [esi+ecx*8+95h], bl
0x5B0C7E: mov     eax, [esi+160h]
0x5B0C84: lea     edx, [eax+eax*4]
0x5B0C87: mov     byte ptr [esi+edx*8+94h], 0
0x5B0C8F: mov     eax, [esi+160h]
0x5B0C95: add     eax, 4
0x5B0C98: lea     eax, [eax+eax*4]
0x5B0C9B: mov     ecx, [esi+eax*8]
0x5B0C9E: test    ecx, ecx
0x5B0CA0: jz      short loc_5B0CBF
0x5B0CA2: call    sub_6B7260
0x5B0CA7: test    al, al
0x5B0CA9: jz      short loc_5B0CBF
0x5B0CAB: mov     eax, [esi+160h]
0x5B0CB1: add     eax, 4
0x5B0CB4: lea     ecx, [eax+eax*4]
0x5B0CB7: mov     ecx, [esi+ecx*8]
0x5B0CBA: call    sub_6B7240
0x5B0CBF: push    offset aUilocktumblerl; "UILockTumblerLock"
0x5B0CC4: mov     ecx, esi
0x5B0CC6: call    sub_5AFD50
0x5B0CCB: pop     ebx
0x5B0CCC: pop     edi
0x5B0CCD: pop     esi
0x5B0CCE: retn    8
0x5B0CD1: fstp    st
0x5B0CD3: cmp     byte ptr [ecx+95h], 0
0x5B0CDA: jnz     short loc_5B0CF7
0x5B0CDC: cmp     edx, 0FFFFFFFFh
0x5B0CDF: jnz     short loc_5B0CF7
0x5B0CE1: cmp     byte ptr [ecx+94h], 0
0x5B0CE8: jz      short loc_5B0CF7
0x5B0CEA: mov     ecx, esi
0x5B0CEC: call    sub_5AF200
0x5B0CF1: pop     ebx
0x5B0CF2: pop     edi
0x5B0CF3: pop     esi
0x5B0CF4: retn    8
0x5B0CF7: push    offset aUilockpickatte; "UILockPickAttempt"
0x5B0CFC: mov     ecx, esi
0x5B0CFE: call    sub_5AFD50
0x5B0D03: pop     ebx
0x5B0D04: pop     edi
0x5B0D05: pop     esi
0x5B0D06: retn    8
0x5B0D09: mov     ecx, esi
0x5B0D0B: call    sub_5B07E0
0x5B0D10: pop     edi
0x5B0D11: pop     esi
0x5B0D12: retn    8
