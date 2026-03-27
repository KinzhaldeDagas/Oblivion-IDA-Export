0x4F0750: sub     esp, 14h
0x4F0753: cmp     [esp+14h+a6], 0
0x4F0758: mov     [esp+14h+var_C], ecx
0x4F075C: jz      loc_4F0D62
0x4F0762: push    ebx
0x4F0763: mov     ebx, [esp+18h+a2]
0x4F0767: fld     dword ptr [ebx]
0x4F0769: push    ebp
0x4F076A: push    esi
0x4F076B: push    edi
0x4F076C: xor     esi, esi
0x4F076E: call    Double_To_SInt32
0x4F0773: fld     dword ptr [ebx+4]
0x4F0776: mov     edi, eax
0x4F0778: sar     edi, 0Ch
0x4F077B: call    Double_To_SInt32
0x4F0780: mov     ecx, [esp+24h+var_C]; this
0x4F0784: mov     ebp, eax
0x4F0786: sar     ebp, 0Ch
0x4F0789: push    ebp; signed int
0x4F078A: push    edi; signed int
0x4F078B: call    TESWorldSpace__GetCellAtCellCoord
0x4F0790: test    eax, eax
0x4F0792: jz      short loc_4F07C3
0x4F0794: mov     ecx, [esp+24h+a7]
0x4F0798: fld     [esp+24h+arg_C]
0x4F079C: mov     edx, [esp+24h+a6]
0x4F07A0: push    ecx; a7
0x4F07A1: push    edx; a6
0x4F07A2: push    ecx
0x4F07A3: mov     ecx, [esp+30h+a4]
0x4F07A7: fstp    [esp+30h+a5]; a5
0x4F07AA: fld     [esp+30h+arg_4]
0x4F07AE: push    ecx; a4
0x4F07AF: push    ecx
0x4F07B0: fstp    [esp+38h+a3]; a3
0x4F07B3: push    ebx; a2
0x4F07B4: mov     ecx, eax; this
0x4F07B6: call    sub_4CBC20
0x4F07BB: test    al, al
0x4F07BD: jz      loc_4F0D5E
0x4F07C3: add     esi, 2
0x4F07C6: sub     edi, 1
0x4F07C9: xor     ebx, ebx
0x4F07CB: sub     ebp, 1
0x4F07CE: test    esi, esi
0x4F07D0: mov     [esp+24h+var_14], edi
0x4F07D4: mov     [esp+24h+var_8], esi
0x4F07D8: mov     [esp+24h+var_10], ebx
0x4F07DC: jle     loc_4F090E
0x4F07E2: cmp     edi, 7FFFh
0x4F07E8: jg      loc_4F08DD
0x4F07EE: cmp     ebp, 7FFFh
0x4F07F4: jg      loc_4F08DD
0x4F07FA: cmp     edi, 0FFFF8000h
0x4F0800: jl      loc_4F08DD
0x4F0806: cmp     ebp, 0FFFF8000h
0x4F080C: jl      loc_4F08DD
0x4F0812: movsx   eax, di
0x4F0815: movzx   ecx, bp
0x4F0818: lea     edx, [esp+24h+var_14]
0x4F081C: push    edx
0x4F081D: mov     edx, [esp+28h+var_C]
0x4F0821: shl     eax, 10h
0x4F0824: or      eax, ecx
0x4F0826: mov     ecx, [edx+30h]
0x4F0829: push    eax
0x4F082A: mov     [esp+2Ch+var_14], 0
0x4F0832: call    NiTMap_GetAt
0x4F0837: test    al, al
0x4F0839: jz      loc_4F08F8
0x4F083F: mov     esi, [esp+24h+var_14]
0x4F0843: test    esi, esi
0x4F0845: jz      loc_4F08F8
0x4F084B: fld     [esp+24h+arg_4]
0x4F084F: fcomp   qword ptr ds:0A3A5B0h
0x4F0855: fnstsw  ax
0x4F0857: test    ah, 44h
0x4F085A: jnp     short loc_4F0879
0x4F085C: mov     eax, [esp+24h+a2]
0x4F0860: push    eax
0x4F0861: mov     ecx, esi
0x4F0863: call    sub_4C9DA0
0x4F0868: fld     [esp+24h+arg_4]
0x4F086C: fcompp
0x4F086E: fnstsw  ax
0x4F0870: test    ah, 41h
0x4F0873: jnz     loc_4F08F8
0x4F0879: fld     [esp+24h+arg_C]
0x4F087D: fcom    qword ptr ds:0A3A5B0h
0x4F0883: fnstsw  ax
0x4F0885: test    ah, 44h
0x4F0888: jnp     short loc_4F08A7
0x4F088A: mov     ecx, [esp+24h+a4]
0x4F088E: fstp    st
0x4F0890: push    ecx
0x4F0891: mov     ecx, esi
0x4F0893: call    sub_4C9DA0
0x4F0898: fld     [esp+24h+arg_C]
0x4F089C: fcom    st(1)
0x4F089E: fnstsw  ax
0x4F08A0: fstp    st(1)
0x4F08A2: test    ah, 41h
0x4F08A5: jnz     short loc_4F08F6
0x4F08A7: mov     edx, [esp+24h+a7]
0x4F08AB: mov     eax, [esp+24h+a6]
0x4F08AF: add     [esp+24h+var_10], 1
0x4F08B4: push    edx; a7
0x4F08B5: mov     edx, [esp+28h+a2]
0x4F08B9: push    eax; a6
0x4F08BA: push    ecx
0x4F08BB: mov     ecx, [esp+30h+a4]
0x4F08BF: fstp    [esp+30h+a5]; a5
0x4F08C2: fld     [esp+30h+arg_4]
0x4F08C6: push    ecx; a4
0x4F08C7: push    ecx
0x4F08C8: fstp    [esp+38h+a3]; a3
0x4F08CB: push    edx; a2
0x4F08CC: mov     ecx, esi; this
0x4F08CE: call    sub_4CBC20
0x4F08D3: test    al, al
0x4F08D5: jz      loc_4F0D5E
0x4F08DB: jmp     short loc_4F08F8
0x4F08DD: push    7FFFh
0x4F08E2: push    0FFFF8000h; ArgList
0x4F08E7: push    offset aTryingToGetExt; "Trying to get exterior cell for invalid"...
0x4F08EC: call    PrintError
0x4F08F1: add     esp, 0Ch
0x4F08F4: jmp     short loc_4F08F8
0x4F08F6: fstp    st
0x4F08F8: mov     esi, [esp+24h+var_8]
0x4F08FC: add     edi, 1
0x4F08FF: add     ebx, 1
0x4F0902: cmp     ebx, esi
0x4F0904: mov     [esp+24h+var_14], edi
0x4F0908: jl      loc_4F07E2
0x4F090E: xor     ebx, ebx
0x4F0910: test    esi, esi
0x4F0912: jle     loc_4F0A48
0x4F0918: jmp     short loc_4F0920
0x4F091A: align 10h
0x4F0920: cmp     edi, 7FFFh
0x4F0926: jg      loc_4F0A1B
0x4F092C: cmp     ebp, 7FFFh
0x4F0932: jg      loc_4F0A1B
0x4F0938: cmp     edi, 0FFFF8000h
0x4F093E: jl      loc_4F0A1B
0x4F0944: cmp     ebp, 0FFFF8000h
0x4F094A: jl      loc_4F0A1B
0x4F0950: movsx   ecx, di
0x4F0953: movzx   edx, bp
0x4F0956: shl     ecx, 10h
0x4F0959: lea     eax, [esp+24h+var_4]
0x4F095D: push    eax
0x4F095E: mov     eax, [esp+28h+var_C]
0x4F0962: or      ecx, edx
0x4F0964: push    ecx
0x4F0965: mov     ecx, [eax+30h]
0x4F0968: mov     [esp+2Ch+var_4], 0
0x4F0970: call    NiTMap_GetAt
0x4F0975: test    al, al
0x4F0977: jz      loc_4F0A36
0x4F097D: mov     esi, [esp+24h+var_4]
0x4F0981: test    esi, esi
0x4F0983: jz      loc_4F0A36
0x4F0989: fld     [esp+24h+arg_4]
0x4F098D: fcomp   qword ptr ds:0A3A5B0h
0x4F0993: fnstsw  ax
0x4F0995: test    ah, 44h
0x4F0998: jnp     short loc_4F09B7
0x4F099A: mov     ecx, [esp+24h+a2]
0x4F099E: push    ecx
0x4F099F: mov     ecx, esi
0x4F09A1: call    sub_4C9DA0
0x4F09A6: fld     [esp+24h+arg_4]
0x4F09AA: fcompp
0x4F09AC: fnstsw  ax
0x4F09AE: test    ah, 41h
0x4F09B1: jnz     loc_4F0A36
0x4F09B7: fld     [esp+24h+arg_C]
0x4F09BB: fcom    qword ptr ds:0A3A5B0h
0x4F09C1: fnstsw  ax
0x4F09C3: test    ah, 44h
0x4F09C6: jnp     short loc_4F09E5
0x4F09C8: mov     edx, [esp+24h+a4]
0x4F09CC: fstp    st
0x4F09CE: push    edx
0x4F09CF: mov     ecx, esi
0x4F09D1: call    sub_4C9DA0
0x4F09D6: fld     [esp+24h+arg_C]
0x4F09DA: fcom    st(1)
0x4F09DC: fnstsw  ax
0x4F09DE: fstp    st(1)
0x4F09E0: test    ah, 41h
0x4F09E3: jnz     short loc_4F0A34
0x4F09E5: mov     eax, [esp+24h+a7]
0x4F09E9: mov     ecx, [esp+24h+a6]
0x4F09ED: mov     edx, [esp+24h+a4]
0x4F09F1: add     [esp+24h+var_10], 1
0x4F09F6: push    eax; a7
0x4F09F7: mov     eax, [esp+28h+a2]
0x4F09FB: push    ecx; a6
0x4F09FC: push    ecx
0x4F09FD: fstp    [esp+30h+a5]; a5
0x4F0A00: push    edx; a4
0x4F0A01: fld     [esp+34h+arg_4]
0x4F0A05: push    ecx
0x4F0A06: fstp    [esp+38h+a3]; a3
0x4F0A09: push    eax; a2
0x4F0A0A: mov     ecx, esi; this
0x4F0A0C: call    sub_4CBC20
0x4F0A11: test    al, al
0x4F0A13: jz      loc_4F0D5E
0x4F0A19: jmp     short loc_4F0A36
0x4F0A1B: push    7FFFh
0x4F0A20: push    0FFFF8000h; ArgList
0x4F0A25: push    offset aTryingToGetExt; "Trying to get exterior cell for invalid"...
0x4F0A2A: call    PrintError
0x4F0A2F: add     esp, 0Ch
0x4F0A32: jmp     short loc_4F0A36
0x4F0A34: fstp    st
0x4F0A36: mov     esi, [esp+24h+var_8]
0x4F0A3A: add     ebx, 1
0x4F0A3D: add     ebp, 1
0x4F0A40: cmp     ebx, esi
0x4F0A42: jl      loc_4F0920
0x4F0A48: test    esi, esi
0x4F0A4A: mov     [esp+24h+var_4], 0
0x4F0A52: jle     loc_4F0BB7
0x4F0A58: jmp     short loc_4F0A60
0x4F0A5A: align 10h
0x4F0A60: cmp     edi, 7FFFh
0x4F0A66: jg      loc_4F0B7A
0x4F0A6C: cmp     ebp, 7FFFh
0x4F0A72: jg      loc_4F0B7A
0x4F0A78: cmp     edi, 0FFFF8000h
0x4F0A7E: jl      loc_4F0B7A
0x4F0A84: cmp     ebp, 0FFFF8000h
0x4F0A8A: jl      loc_4F0B7A
0x4F0A90: mov     edx, [esp+24h+var_C]
0x4F0A94: movsx   esi, di
0x4F0A97: mov     edi, [edx+30h]
0x4F0A9A: mov     eax, [edi]
0x4F0A9C: mov     edx, [eax+4]
0x4F0A9F: movzx   ecx, bp
0x4F0AA2: shl     esi, 10h
0x4F0AA5: or      esi, ecx
0x4F0AA7: push    esi
0x4F0AA8: mov     ecx, edi
0x4F0AAA: call    edx
0x4F0AAC: mov     ecx, [edi+8]
0x4F0AAF: mov     ebx, [ecx+eax*4]
0x4F0AB2: test    ebx, ebx
0x4F0AB4: jz      loc_4F0B95
0x4F0ABA: lea     ebx, [ebx+0]
0x4F0AC0: mov     eax, [ebx+4]
0x4F0AC3: mov     edx, [edi]
0x4F0AC5: mov     edx, [edx+8]
0x4F0AC8: push    eax
0x4F0AC9: push    esi
0x4F0ACA: mov     ecx, edi
0x4F0ACC: call    edx
0x4F0ACE: test    al, al
0x4F0AD0: jnz     short loc_4F0ADD
0x4F0AD2: mov     ebx, [ebx]
0x4F0AD4: test    ebx, ebx
0x4F0AD6: jnz     short loc_4F0AC0
0x4F0AD8: jmp     loc_4F0B95
0x4F0ADD: mov     ebx, [ebx+8]
0x4F0AE0: test    ebx, ebx
0x4F0AE2: jz      loc_4F0B95
0x4F0AE8: fld     [esp+24h+arg_4]
0x4F0AEC: fcomp   qword ptr ds:0A3A5B0h
0x4F0AF2: fnstsw  ax
0x4F0AF4: test    ah, 44h
0x4F0AF7: jnp     short loc_4F0B16
0x4F0AF9: mov     eax, [esp+24h+a2]
0x4F0AFD: push    eax
0x4F0AFE: mov     ecx, ebx
0x4F0B00: call    sub_4C9DA0
0x4F0B05: fld     [esp+24h+arg_4]
0x4F0B09: fcompp
0x4F0B0B: fnstsw  ax
0x4F0B0D: test    ah, 41h
0x4F0B10: jnz     loc_4F0B95
0x4F0B16: fld     [esp+24h+arg_C]
0x4F0B1A: fcom    qword ptr ds:0A3A5B0h
0x4F0B20: fnstsw  ax
0x4F0B22: test    ah, 44h
0x4F0B25: jnp     short loc_4F0B44
0x4F0B27: mov     ecx, [esp+24h+a4]
0x4F0B2B: fstp    st
0x4F0B2D: push    ecx
0x4F0B2E: mov     ecx, ebx
0x4F0B30: call    sub_4C9DA0
0x4F0B35: fld     [esp+24h+arg_C]
0x4F0B39: fcom    st(1)
0x4F0B3B: fnstsw  ax
0x4F0B3D: fstp    st(1)
0x4F0B3F: test    ah, 41h
0x4F0B42: jnz     short loc_4F0B93
0x4F0B44: mov     edx, [esp+24h+a7]
0x4F0B48: mov     eax, [esp+24h+a6]
0x4F0B4C: add     [esp+24h+var_10], 1
0x4F0B51: push    edx; a7
0x4F0B52: mov     edx, [esp+28h+a2]
0x4F0B56: push    eax; a6
0x4F0B57: push    ecx
0x4F0B58: mov     ecx, [esp+30h+a4]
0x4F0B5C: fstp    [esp+30h+a5]; a5
0x4F0B5F: fld     [esp+30h+arg_4]
0x4F0B63: push    ecx; a4
0x4F0B64: push    ecx
0x4F0B65: fstp    [esp+38h+a3]; a3
0x4F0B68: push    edx; a2
0x4F0B69: mov     ecx, ebx; this
0x4F0B6B: call    sub_4CBC20
0x4F0B70: test    al, al
0x4F0B72: jz      loc_4F0D5E
0x4F0B78: jmp     short loc_4F0B95
0x4F0B7A: push    7FFFh
0x4F0B7F: push    0FFFF8000h; ArgList
0x4F0B84: push    offset aTryingToGetExt; "Trying to get exterior cell for invalid"...
0x4F0B89: call    PrintError
0x4F0B8E: add     esp, 0Ch
0x4F0B91: jmp     short loc_4F0B99
0x4F0B93: fstp    st
0x4F0B95: mov     edi, [esp+24h+var_14]
0x4F0B99: mov     eax, [esp+24h+var_4]
0x4F0B9D: mov     esi, [esp+24h+var_8]
0x4F0BA1: add     eax, 1
0x4F0BA4: sub     edi, 1
0x4F0BA7: cmp     eax, esi
0x4F0BA9: mov     [esp+24h+var_14], edi
0x4F0BAD: mov     [esp+24h+var_4], eax
0x4F0BB1: jl      loc_4F0A60
0x4F0BB7: test    esi, esi
0x4F0BB9: mov     [esp+24h+var_4], 0
0x4F0BC1: jle     loc_4F0D1F
0x4F0BC7: jmp     short loc_4F0BD0
0x4F0BC9: align 10h
0x4F0BD0: cmp     edi, 7FFFh
0x4F0BD6: jg      loc_4F0CE6
0x4F0BDC: cmp     ebp, 7FFFh
0x4F0BE2: jg      loc_4F0CE6
0x4F0BE8: cmp     edi, 0FFFF8000h
0x4F0BEE: jl      loc_4F0CE6
0x4F0BF4: cmp     ebp, 0FFFF8000h
0x4F0BFA: jl      loc_4F0CE6
0x4F0C00: mov     ecx, [esp+24h+var_C]
0x4F0C04: movsx   esi, di
0x4F0C07: mov     edi, [ecx+30h]
0x4F0C0A: mov     edx, [edi]
0x4F0C0C: movzx   eax, bp
0x4F0C0F: shl     esi, 10h
0x4F0C12: or      esi, eax
0x4F0C14: mov     eax, [edx+4]
0x4F0C17: push    esi
0x4F0C18: mov     ecx, edi
0x4F0C1A: call    eax
0x4F0C1C: mov     ecx, [edi+8]
0x4F0C1F: mov     ebx, [ecx+eax*4]
0x4F0C22: test    ebx, ebx
0x4F0C24: jz      loc_4F0D01
0x4F0C2A: lea     ebx, [ebx+0]
0x4F0C30: mov     eax, [ebx+4]
0x4F0C33: mov     edx, [edi]
0x4F0C35: mov     edx, [edx+8]
0x4F0C38: push    eax
0x4F0C39: push    esi
0x4F0C3A: mov     ecx, edi
0x4F0C3C: call    edx
0x4F0C3E: test    al, al
0x4F0C40: jnz     short loc_4F0C4D
0x4F0C42: mov     ebx, [ebx]
0x4F0C44: test    ebx, ebx
0x4F0C46: jnz     short loc_4F0C30
0x4F0C48: jmp     loc_4F0D01
0x4F0C4D: mov     ebx, [ebx+8]
0x4F0C50: test    ebx, ebx
0x4F0C52: jz      loc_4F0D01
0x4F0C58: fld     [esp+24h+arg_4]
0x4F0C5C: fcomp   qword ptr ds:0A3A5B0h
0x4F0C62: fnstsw  ax
0x4F0C64: test    ah, 44h
0x4F0C67: jnp     short loc_4F0C86
0x4F0C69: mov     eax, [esp+24h+a2]
0x4F0C6D: push    eax
0x4F0C6E: mov     ecx, ebx
0x4F0C70: call    sub_4C9DA0
0x4F0C75: fld     [esp+24h+arg_4]
0x4F0C79: fcompp
0x4F0C7B: fnstsw  ax
0x4F0C7D: test    ah, 41h
0x4F0C80: jnz     loc_4F0D01
0x4F0C86: fld     [esp+24h+arg_C]
0x4F0C8A: fcom    qword ptr ds:0A3A5B0h
0x4F0C90: fnstsw  ax
0x4F0C92: test    ah, 44h
0x4F0C95: jnp     short loc_4F0CB4
0x4F0C97: mov     ecx, [esp+24h+a4]
0x4F0C9B: fstp    st
0x4F0C9D: push    ecx
0x4F0C9E: mov     ecx, ebx
0x4F0CA0: call    sub_4C9DA0
0x4F0CA5: fld     [esp+24h+arg_C]
0x4F0CA9: fcom    st(1)
0x4F0CAB: fnstsw  ax
0x4F0CAD: fstp    st(1)
0x4F0CAF: test    ah, 41h
0x4F0CB2: jnz     short loc_4F0CFF
0x4F0CB4: mov     edx, [esp+24h+a7]
0x4F0CB8: mov     eax, [esp+24h+a6]
0x4F0CBC: add     [esp+24h+var_10], 1
0x4F0CC1: push    edx; a7
0x4F0CC2: mov     edx, [esp+28h+a2]
0x4F0CC6: push    eax; a6
0x4F0CC7: push    ecx
0x4F0CC8: mov     ecx, [esp+30h+a4]
0x4F0CCC: fstp    [esp+30h+a5]; a5
0x4F0CCF: fld     [esp+30h+arg_4]
0x4F0CD3: push    ecx; a4
0x4F0CD4: push    ecx
0x4F0CD5: fstp    [esp+38h+a3]; a3
0x4F0CD8: push    edx; a2
0x4F0CD9: mov     ecx, ebx; this
0x4F0CDB: call    sub_4CBC20
0x4F0CE0: test    al, al
0x4F0CE2: jz      short loc_4F0D5E
0x4F0CE4: jmp     short loc_4F0D01
0x4F0CE6: push    7FFFh
0x4F0CEB: push    0FFFF8000h; ArgList
0x4F0CF0: push    offset aTryingToGetExt; "Trying to get exterior cell for invalid"...
0x4F0CF5: call    PrintError
0x4F0CFA: add     esp, 0Ch
0x4F0CFD: jmp     short loc_4F0D05
0x4F0CFF: fstp    st
0x4F0D01: mov     edi, [esp+24h+var_14]
0x4F0D05: mov     eax, [esp+24h+var_4]
0x4F0D09: mov     esi, [esp+24h+var_8]
0x4F0D0D: add     eax, 1
0x4F0D10: sub     ebp, 1
0x4F0D13: cmp     eax, esi
0x4F0D15: mov     [esp+24h+var_4], eax
0x4F0D19: jl      loc_4F0BD0
0x4F0D1F: cmp     [esp+24h+var_10], 0
0x4F0D24: jnz     loc_4F07C3
0x4F0D2A: mov     eax, [esp+24h+var_C]
0x4F0D2E: mov     ecx, [eax+34h]; this
0x4F0D31: test    ecx, ecx
0x4F0D33: jz      short loc_4F0D5E
0x4F0D35: mov     edx, [esp+24h+a7]
0x4F0D39: fld     [esp+24h+arg_C]
0x4F0D3D: mov     eax, [esp+24h+a6]
0x4F0D41: push    edx; a7
0x4F0D42: mov     edx, [esp+28h+a4]
0x4F0D46: push    eax; a6
0x4F0D47: mov     eax, [esp+2Ch+a2]
0x4F0D4B: push    ecx
0x4F0D4C: fstp    [esp+30h+a5]; a5
0x4F0D4F: push    edx; a4
0x4F0D50: fld     [esp+34h+arg_4]
0x4F0D54: push    ecx
0x4F0D55: fstp    [esp+38h+a3]; a3
0x4F0D58: push    eax; a2
0x4F0D59: call    sub_4CBC20
0x4F0D5E: pop     edi
0x4F0D5F: pop     esi
0x4F0D60: pop     ebp
0x4F0D61: pop     ebx
0x4F0D62: add     esp, 14h
0x4F0D65: retn    18h
