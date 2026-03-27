0x67D820: push    0FFFFFFFFh
0x67D822: push    offset SEH_67D820
0x67D827: mov     eax, large fs:0
0x67D82D: push    eax
0x67D82E: sub     esp, 90h
0x67D834: push    ebx
0x67D835: push    ebp
0x67D836: push    esi
0x67D837: push    edi
0x67D838: mov     eax, ds:0B30AACh
0x67D83D: xor     eax, esp
0x67D83F: push    eax
0x67D840: lea     eax, [esp+0B0h+var_C]
0x67D847: mov     large fs:0, eax
0x67D84D: mov     esi, [esp+0B0h+arg_4]
0x67D854: xor     ebp, ebp
0x67D856: cmp     esi, ebp
0x67D858: mov     [esp+0B0h+var_84], ebp
0x67D85C: jz      loc_67D96E
0x67D862: mov     ecx, esi; this
0x67D864: call    sub_4D8B90
0x67D869: test    al, al
0x67D86B: jnz     short loc_67D88C
0x67D86D: mov     ecx, ds:0B333A0h
0x67D873: call    TES__GetCurrentWorldspace
0x67D878: mov     ecx, esi; this
0x67D87A: mov     edi, eax
0x67D87C: call    TESObjectREFR_GetWorldSpace
0x67D881: cmp     eax, edi
0x67D883: jz      short loc_67D88C
0x67D885: xor     eax, eax
0x67D887: jmp     loc_67D972
0x67D88C: mov     ecx, esi; this
0x67D88E: call    sub_4D8B90
0x67D893: test    al, al
0x67D895: jz      loc_67D98C
0x67D89B: mov     ecx, esi; this
0x67D89D: call    TESObjectREFR_GetParentCell
0x67D8A2: test    eax, eax
0x67D8A4: jz      loc_67D96E
0x67D8AA: mov     ecx, esi; this
0x67D8AC: call    TESObjectREFR_GetParentCell
0x67D8B1: mov     ecx, eax
0x67D8B3: call    sub_4AF170
0x67D8B8: mov     ebx, eax
0x67D8BA: cmp     ebx, ebp
0x67D8BC: jz      loc_67D96E
0x67D8C2: lea     ecx, [esp+0B0h+var_38]
0x67D8C6: call    sub_4E7DF0
0x67D8CB: mov     edi, [esp+0B0h+arg_0]
0x67D8D2: push    edi
0x67D8D3: lea     ecx, [esp+0B4h+var_38]
0x67D8D7: mov     [esp+0B4h+var_4], ebp
0x67D8DE: call    sub_4BEF50
0x67D8E3: fld     dword ptr [edi+8]
0x67D8E6: mov     ecx, esi; this
0x67D8E8: fstp    [esp+0B0h+var_80]
0x67D8EC: call    TESObjectREFR_GetParentCell
0x67D8F1: mov     ecx, eax
0x67D8F3: call    TESObjectCELL_GetWaterHeight
0x67D8F8: fcomp   [esp+0B0h+var_80]
0x67D8FC: fnstsw  ax
0x67D8FE: test    ah, 41h
0x67D901: jnz     short loc_67D90E
0x67D903: push    1
0x67D905: lea     ecx, [esp+0B4h+var_38]
0x67D909: call    sub_67ED00
0x67D90E: push    edi
0x67D90F: mov     ecx, esi; this
0x67D911: call    TESObjectREFR_GetParentCell
0x67D916: mov     ecx, eax
0x67D918: call    sub_4CBBB0
0x67D91D: test    eax, eax
0x67D91F: jz      short loc_67D92C
0x67D921: push    1
0x67D923: lea     ecx, [esp+0B4h+var_38]
0x67D927: call    sub_67ED50
0x67D92C: mov     ecx, [esp+0B0h+arg_C]
0x67D933: mov     edx, [esp+0B0h+arg_8]
0x67D93A: lea     eax, [esp+0B0h+var_85]
0x67D93E: push    eax
0x67D93F: push    ecx
0x67D940: push    edx
0x67D941: push    esi
0x67D942: lea     eax, [esp+0C0h+var_38]
0x67D949: push    eax
0x67D94A: mov     ecx, ebx
0x67D94C: mov     [esp+0C4h+var_85], 0
0x67D951: call    sub_4E5730
0x67D956: mov     [esp+0B0h+var_84], eax
0x67D95A: mov     [esp+0B0h+var_4], 0FFFFFFFFh
0x67D965: lea     ecx, [esp+0B0h+var_38]
0x67D969: call    sub_4E8200
0x67D96E: mov     eax, [esp+0B0h+var_84]
0x67D972: mov     ecx, [esp+0B0h+var_C]
0x67D979: mov     large fs:0, ecx
0x67D980: pop     ecx
0x67D981: pop     edi
0x67D982: pop     esi
0x67D983: pop     ebp
0x67D984: pop     ebx
0x67D985: add     esp, 9Ch
0x67D98B: retn
0x67D98C: mov     ecx, ds:0B333A0h
0x67D992: call    TES__GetCurrentWorldspace
0x67D997: test    eax, eax
0x67D999: jz      short loc_67D96E
0x67D99B: mov     edi, [esp+0B0h+arg_0]
0x67D9A2: mov     ecx, ds:0B333A0h
0x67D9A8: push    edi
0x67D9A9: call    sub_43F840
0x67D9AE: test    al, al
0x67D9B0: jz      loc_67DC63
0x67D9B6: mov     ecx, ds:0B333A0h
0x67D9BC: call    TES__GetCurrentWorldspace
0x67D9C1: mov     ebx, eax
0x67D9C3: push    edi; float *
0x67D9C4: mov     ecx, ebx; this
0x67D9C6: mov     [esp+0B4h+var_98], ebx
0x67D9CA: call    TESWorldSpace__GetCellAtPos
0x67D9CF: lea     ecx, [esp+0B0h+var_64]
0x67D9D3: mov     esi, eax
0x67D9D5: call    sub_4E7DF0
0x67D9DA: push    edi
0x67D9DB: lea     ecx, [esp+0B4h+var_64]
0x67D9DF: mov     [esp+0B4h+var_4], 1
0x67D9EA: call    sub_4BEF50
0x67D9EF: cmp     esi, ebp
0x67D9F1: jz      short loc_67DA2E
0x67D9F3: fld     dword ptr [edi+8]
0x67D9F6: mov     ecx, esi
0x67D9F8: fstp    [esp+0B0h+var_80]
0x67D9FC: call    TESObjectCELL_GetWaterHeight
0x67DA01: fcomp   [esp+0B0h+var_80]
0x67DA05: fnstsw  ax
0x67DA07: test    ah, 41h
0x67DA0A: jnz     short loc_67DA17
0x67DA0C: push    1
0x67DA0E: lea     ecx, [esp+0B4h+var_64]
0x67DA12: call    sub_67ED00
0x67DA17: push    edi
0x67DA18: mov     ecx, ebx
0x67DA1A: call    sub_4F0600
0x67DA1F: test    eax, eax
0x67DA21: jz      short loc_67DA2E
0x67DA23: push    1
0x67DA25: lea     ecx, [esp+0B4h+var_64]
0x67DA29: call    sub_67ED50
0x67DA2E: fld     dword ptr [edi]
0x67DA30: xor     eax, eax
0x67DA32: mov     [esp+0B0h+var_74], eax
0x67DA36: fstp    [esp+0B0h+var_90]
0x67DA3A: mov     [esp+0B0h+var_70], eax
0x67DA3E: mov     [esp+0B0h+var_6C], eax
0x67DA42: mov     [esp+0B0h+var_68], eax
0x67DA46: mov     [esp+0B0h+var_74], esi
0x67DA4A: fld     [esp+0B0h+var_90]
0x67DA4E: fistp   [esp+0B0h+var_9C]
0x67DA52: fld     dword ptr [edi+4]
0x67DA55: mov     esi, [esp+0B0h+var_9C]
0x67DA59: fstp    [esp+0B0h+var_90]
0x67DA5D: sar     esi, 0Ch
0x67DA60: fld     [esp+0B0h+var_90]
0x67DA64: fistp   [esp+0B0h+var_9C]
0x67DA68: mov     ebp, [esp+0B0h+var_9C]
0x67DA6C: mov     ecx, esi
0x67DA6E: shl     ecx, 0Ch
0x67DA71: mov     [esp+0B0h+var_90], ecx
0x67DA75: fild    [esp+0B0h+var_90]
0x67DA79: sar     ebp, 0Ch
0x67DA7C: mov     edx, ebp
0x67DA7E: fstp    [esp+0B0h+var_90]
0x67DA82: shl     edx, 0Ch
0x67DA85: fld     [esp+0B0h+var_90]
0x67DA89: mov     [esp+0B0h+var_90], edx
0x67DA8D: fst     dword ptr [esp+0B0h+var_80]
0x67DA91: xor     ebx, ebx
0x67DA93: fild    [esp+0B0h+var_90]
0x67DA97: mov     [esp+0B0h+var_9C], ebx
0x67DA9B: fstp    [esp+0B0h+var_90]
0x67DA9F: fld     [esp+0B0h+var_90]
0x67DAA3: fst     dword ptr [esp+0B0h+var_80+4]
0x67DAA7: fld     qword ptr ds:0A37650h
0x67DAAD: fadd    st(2), st
0x67DAAF: fxch    st(2)
0x67DAB1: fstp    [esp+0B0h+var_90]
0x67DAB5: faddp   st(1), st
0x67DAB7: fstp    [esp+0B0h+var_8C]
0x67DABB: fld     dword ptr [edi]
0x67DABD: fld     qword ptr ds:0A6CC88h
0x67DAC3: fsub    st(1), st
0x67DAC5: fld     dword ptr [esp+0B0h+var_80]
0x67DAC9: fcomp   st(2)
0x67DACB: fnstsw  ax
0x67DACD: fstp    st(1)
0x67DACF: test    ah, 1
0x67DAD2: jnz     short loc_67DAD9
0x67DAD4: or      ebx, 0FFFFFFFFh
0x67DAD7: jmp     short loc_67DAEF
0x67DAD9: fld     dword ptr [edi]
0x67DADB: fadd    st, st(1)
0x67DADD: fld     [esp+0B0h+var_90]
0x67DAE1: fcompp
0x67DAE3: fnstsw  ax
0x67DAE5: test    ah, 41h
0x67DAE8: jp      short loc_67DAEF
0x67DAEA: mov     ebx, 1
0x67DAEF: fld     dword ptr [edi+4]
0x67DAF2: fsub    st, st(1)
0x67DAF4: fld     dword ptr [esp+0B0h+var_80+4]
0x67DAF8: fcompp
0x67DAFA: fnstsw  ax
0x67DAFC: test    ah, 1
0x67DAFF: jnz     short loc_67DB0D
0x67DB01: fstp    st
0x67DB03: mov     [esp+0B0h+var_9C], 0FFFFFFFFh
0x67DB0B: jmp     short loc_67DB25
0x67DB0D: fadd    dword ptr [edi+4]
0x67DB10: fld     [esp+0B0h+var_8C]
0x67DB14: fcompp
0x67DB16: fnstsw  ax
0x67DB18: test    ah, 41h
0x67DB1B: jp      short loc_67DB25
0x67DB1D: mov     [esp+0B0h+var_9C], 1
0x67DB25: test    ebx, ebx
0x67DB27: mov     edi, 1
0x67DB2C: jz      short loc_67DB45
0x67DB2E: mov     ecx, [esp+0B0h+var_98]; this
0x67DB32: push    ebp; signed int
0x67DB33: lea     eax, [ebx+esi]
0x67DB36: push    eax; signed int
0x67DB37: call    TESWorldSpace__GetCellAtCellCoord
0x67DB3C: mov     [esp+0B0h+var_70], eax
0x67DB40: mov     edi, 2
0x67DB45: mov     eax, [esp+0B0h+var_9C]
0x67DB49: test    eax, eax
0x67DB4B: jz      short loc_67DB61
0x67DB4D: mov     ecx, [esp+0B0h+var_98]; this
0x67DB51: add     eax, ebp
0x67DB53: push    eax; signed int
0x67DB54: push    esi; signed int
0x67DB55: call    TESWorldSpace__GetCellAtCellCoord
0x67DB5A: mov     [esp+edi*4+0B0h+var_74], eax
0x67DB5E: add     edi, 1
0x67DB61: test    ebx, ebx
0x67DB63: jz      short loc_67DB80
0x67DB65: mov     eax, [esp+0B0h+var_9C]
0x67DB69: test    eax, eax
0x67DB6B: jz      short loc_67DB80
0x67DB6D: mov     ecx, [esp+0B0h+var_98]; this
0x67DB71: add     eax, ebp
0x67DB73: push    eax; signed int
0x67DB74: add     ebx, esi
0x67DB76: push    ebx; signed int
0x67DB77: call    TESWorldSpace__GetCellAtCellCoord
0x67DB7C: mov     [esp+edi*4+0B0h+var_74], eax
0x67DB80: fld     dword ptr ds:0A32048h
0x67DB86: mov     ebx, [esp+0B0h+arg_C]
0x67DB8D: mov     ebp, [esp+0B0h+arg_8]
0x67DB94: fstp    [esp+0B0h+var_9C]
0x67DB98: xor     esi, esi
0x67DB9A: xor     edi, edi
0x67DB9C: mov     ecx, [esp+edi*4+0B0h+var_74]
0x67DBA0: test    ecx, ecx
0x67DBA2: jz      loc_67DC43
0x67DBA8: mov     [esp+0B0h+var_91], 0
0x67DBAD: call    sub_4AF170
0x67DBB2: test    eax, eax
0x67DBB4: jz      short loc_67DBD3
0x67DBB6: mov     edx, [esp+0B0h+arg_4]
0x67DBBD: lea     ecx, [esp+0B0h+var_91]
0x67DBC1: push    ecx
0x67DBC2: push    ebx
0x67DBC3: push    ebp
0x67DBC4: push    edx
0x67DBC5: lea     ecx, [esp+0C0h+var_64]
0x67DBC9: push    ecx
0x67DBCA: mov     ecx, eax
0x67DBCC: call    sub_4E5730
0x67DBD1: mov     esi, eax
0x67DBD3: test    esi, esi
0x67DBD5: jz      short loc_67DC43
0x67DBD7: mov     ecx, esi
0x67DBD9: call    sub_4E8040
0x67DBDE: push    0
0x67DBE0: mov     ecx, esi
0x67DBE2: mov     byte ptr [esp+0B4h+var_90], al
0x67DBE6: call    sub_4E8060
0x67DBEB: mov     edx, [esp+0B0h+arg_4]
0x67DBF2: push    edx
0x67DBF3: lea     eax, [esp+0B4h+var_64]
0x67DBF7: push    esi
0x67DBF8: push    eax
0x67DBF9: call    sub_67EDE0
0x67DBFE: fstp    [esp+0BCh+var_98]
0x67DC02: mov     ecx, [esp+0BCh+var_90]
0x67DC06: add     esp, 0Ch
0x67DC09: push    ecx
0x67DC0A: mov     ecx, esi
0x67DC0C: call    sub_4E8060
0x67DC11: cmp     [esp+0B0h+var_91], 0
0x67DC16: jnz     short loc_67DC26
0x67DC18: fld     [esp+0B0h+var_98]
0x67DC1C: fmul    qword ptr ds:0A309F0h
0x67DC22: fstp    [esp+0B0h+var_98]
0x67DC26: fld     [esp+0B0h+var_98]
0x67DC2A: fld     [esp+0B0h+var_9C]
0x67DC2E: fcomp   st(1)
0x67DC30: fnstsw  ax
0x67DC32: test    ah, 41h
0x67DC35: jnz     short loc_67DC41
0x67DC37: fstp    [esp+0B0h+var_9C]
0x67DC3B: mov     [esp+0B0h+var_84], esi
0x67DC3F: jmp     short loc_67DC43
0x67DC41: fstp    st
0x67DC43: add     edi, 1
0x67DC46: cmp     edi, 4
0x67DC49: jl      loc_67DB9C
0x67DC4F: mov     [esp+0B0h+var_4], 0FFFFFFFFh
0x67DC5A: lea     ecx, [esp+0B0h+var_64]
0x67DC5E: jmp     loc_67D969
0x67DC63: fld     dword ptr ds:0A32048h
0x67DC69: mov     eax, ds:0B06A2Ch
0x67DC6E: fstp    [esp+0B0h+var_98]
0x67DC72: cmp     ebp, eax
0x67DC74: jnb     loc_67D96E
0x67DC7A: xor     ebx, ebx
0x67DC7C: lea     esp, [esp+0]
0x67DC80: cmp     ebx, eax
0x67DC82: jnb     loc_67DD5B
0x67DC88: mov     edx, ds:0B333A0h
0x67DC8E: mov     ecx, [edx+8]
0x67DC91: push    ebx
0x67DC92: push    ebp
0x67DC93: call    GetGridEntry
0x67DC98: cmp     [esp+0B0h+var_84], 0
0x67DC9D: mov     esi, [eax]
0x67DC9F: jz      short loc_67DCC2
0x67DCA1: test    esi, esi
0x67DCA3: jz      loc_67DD4E
0x67DCA9: push    edi
0x67DCAA: mov     ecx, esi
0x67DCAC: call    sub_4C9DA0
0x67DCB1: fld     [esp+0B0h+var_98]
0x67DCB5: fcompp
0x67DCB7: fnstsw  ax
0x67DCB9: test    ah, 41h
0x67DCBC: jnz     loc_67DD4E
0x67DCC2: test    esi, esi
0x67DCC4: jz      loc_67DD4E
0x67DCCA: mov     ecx, esi
0x67DCCC: call    sub_4AF170
0x67DCD1: test    eax, eax
0x67DCD3: jz      short loc_67DD4E
0x67DCD5: push    edi
0x67DCD6: mov     ecx, eax
0x67DCD8: call    sub_4E55E0
0x67DCDD: mov     esi, eax
0x67DCDF: test    esi, esi
0x67DCE1: jz      short loc_67DD4E
0x67DCE3: mov     ecx, esi
0x67DCE5: call    sub_4BEF40
0x67DCEA: fld     dword ptr [eax]
0x67DCEC: fsub    dword ptr [edi]
0x67DCEE: fstp    dword ptr [esp+0B0h+var_80]
0x67DCF2: fld     dword ptr [eax+4]
0x67DCF5: fsub    dword ptr [edi+4]
0x67DCF8: fstp    dword ptr [esp+0B0h+var_80+4]
0x67DCFC: fld     dword ptr [eax+8]
0x67DCFF: fsub    dword ptr [edi+8]
0x67DD02: fstp    [esp+0B0h+var_78]
0x67DD06: fld     dword ptr [esp+0B0h+var_80]
0x67DD0A: fld     dword ptr [esp+0B0h+var_80+4]
0x67DD0E: fld     [esp+0B0h+var_78]
0x67DD12: fld     st(1)
0x67DD14: fmulp   st(2), st
0x67DD16: fld     st(2)
0x67DD18: fmulp   st(3), st
0x67DD1A: fxch    st(1)
0x67DD1C: faddp   st(2), st
0x67DD1E: fmul    st, st
0x67DD20: faddp   st(1), st
0x67DD22: fstp    [esp+0B0h+var_90]
0x67DD26: fld     [esp+0B0h+var_90]
0x67DD2A: fld     [esp+0B0h+var_98]
0x67DD2E: fcomp   st(1)
0x67DD30: fnstsw  ax
0x67DD32: test    ah, 41h
0x67DD35: jnz     short loc_67DD4C
0x67DD37: mov     eax, ds:0B06A2Ch
0x67DD3C: fstp    [esp+0B0h+var_98]
0x67DD40: mov     [esp+0B0h+var_84], esi
0x67DD44: add     ebx, 1
0x67DD47: jmp     loc_67DC80
0x67DD4C: fstp    st
0x67DD4E: mov     eax, ds:0B06A2Ch
0x67DD53: add     ebx, 1
0x67DD56: jmp     loc_67DC80
0x67DD5B: add     ebp, 1
0x67DD5E: jmp     loc_67DC72
