0x622BD0: sub     esp, 0Ch
0x622BD3: push    esi
0x622BD4: mov     esi, ecx
0x622BD6: cmp     dword ptr [esi+6Ch], 0Ah
0x622BDA: jnz     loc_622D30
0x622BE0: fldz
0x622BE2: fcom    dword ptr [esi+184h]
0x622BE8: fnstsw  ax
0x622BEA: test    ah, 41h
0x622BED: jnz     short loc_622C0F
0x622BEF: push    edi; a5
0x622BF0: fstp    st
0x622BF2: mov     edi, [esi+3Ch]; a1
0x622BF5: push    0; a4
0x622BF7: call    sub_6135F0
0x622BFC: push    eax; a3
0x622BFD: push    edi; a2
0x622BFE: call    TESObjectREFR_GetDistanceBetween?
0x622C03: fstp    dword ptr [esi+184h]
0x622C09: fldz
0x622C0B: add     esp, 0Ch
0x622C0E: pop     edi
0x622C0F: fld     dword ptr [esi+184h]
0x622C15: lea     eax, [esp+10h+var_8]
0x622C19: fstp    [esp+10h+var_4]
0x622C1D: push    eax
0x622C1E: lea     ecx, [esp+14h+var_C]
0x622C22: push    ecx
0x622C23: fst     [esp+18h+var_C]
0x622C27: mov     ecx, esi
0x622C29: fstp    [esp+18h+var_8]
0x622C2D: call    sub_6142D0
0x622C32: cmp     byte ptr [esi+49h], 0
0x622C36: jnz     loc_622D35
0x622C3C: cmp     dword ptr [esi+74h], 1
0x622C40: jz      loc_622D35
0x622C46: fld     [esp+10h+var_4]
0x622C4A: fld     [esp+10h+var_C]
0x622C4E: fcom    st(1)
0x622C50: fnstsw  ax
0x622C52: test    ah, 5
0x622C55: jp      short loc_622C71
0x622C57: fld     [esp+10h+var_8]
0x622C5B: fcomp   st(2)
0x622C5D: fnstsw  ax
0x622C5F: test    ah, 1
0x622C62: jnz     short loc_622C71
0x622C64: fstp    st(1)
0x622C66: mov     ecx, esi
0x622C68: fstp    st
0x622C6A: call    sub_6213D0
0x622C6F: jmp     short loc_622C97
0x622C71: fcompp
0x622C73: fnstsw  ax
0x622C75: test    ah, 1
0x622C78: jnz     short loc_622C97
0x622C7A: mov     ecx, esi
0x622C7C: call    sub_621270
0x622C81: mov     eax, [esi+6Ch]
0x622C84: cmp     eax, 0Ah
0x622C87: jz      short loc_622C97
0x622C89: cmp     eax, 0Bh
0x622C8C: jz      short loc_622C97
0x622C8E: push    0
0x622C90: mov     ecx, esi
0x622C92: call    sub_619920
0x622C97: mov     ecx, esi
0x622C99: call    sub_6195B0
0x622C9E: test    al, al
0x622CA0: jnz     loc_622D30
0x622CA6: fld     dword ptr [esi+44h]
0x622CA9: fsub    dword ptr [esi+0D4h]
0x622CAF: fld     dword ptr [esi+0D8h]
0x622CB5: fcompp
0x622CB7: fnstsw  ax
0x622CB9: test    ah, 5
0x622CBC: jp      short loc_622D30
0x622CBE: mov     ecx, esi
0x622CC0: call    loc_622820
0x622CC5: test    al, al
0x622CC7: jnz     short loc_622D30
0x622CC9: mov     ecx, esi
0x622CCB: call    sub_614290
0x622CD0: test    al, al
0x622CD2: jnz     short loc_622D04
0x622CD4: push    0
0x622CD6: mov     ecx, esi
0x622CD8: call    sub_6150E0
0x622CDD: test    al, al
0x622CDF: jnz     short loc_622D04
0x622CE1: fld     dword ptr [esi+44h]
0x622CE4: fstp    dword ptr [esi+0D4h]
0x622CEA: fld     dword ptr ds:0A46C30h
0x622CF0: fstp    dword ptr [esi+0D8h]
0x622CF6: fld     dword ptr ds:0A30634h
0x622CFC: fstp    dword ptr [esi+0DCh]
0x622D02: jmp     short loc_622D0B
0x622D04: mov     ecx, esi
0x622D06: call    sub_61D320
0x622D0B: cmp     dword ptr [esi+80h], 0
0x622D12: jnz     short loc_622D30
0x622D14: movzx   edx, byte ptr [esi+17Ch]
0x622D1B: push    edx
0x622D1C: push    4
0x622D1E: lea     eax, [esp+18h+var_4]
0x622D22: push    eax
0x622D23: mov     ecx, esi
0x622D25: call    sub_616980
0x622D2A: mov     [esi+80h], eax
0x622D30: pop     esi
0x622D31: add     esp, 0Ch
0x622D34: retn
0x622D35: mov     ecx, esi
0x622D37: pop     esi
0x622D38: add     esp, 0Ch
0x622D3B: jmp     sub_6191B0
