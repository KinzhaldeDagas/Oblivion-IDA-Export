0x540850: sub     esp, 60h
0x540853: cmp     byte ptr ds:0B43070h, 0
0x54085A: push    edi
0x54085B: mov     edi, ecx
0x54085D: jz      loc_540E7D
0x540863: fldz
0x540865: push    esi
0x540866: mov     esi, [edi+10h]
0x540869: fcom    dword ptr [esi+130h]
0x54086F: fnstsw  ax
0x540871: test    ah, 5
0x540874: jp      short loc_54087E
0x540876: fld     dword ptr [esi+130h]
0x54087C: jmp     short loc_540884
0x54087E: fld     dword ptr ds:0A56E28h
0x540884: fstp    [esp+68h+var_60]
0x540888: fld     [esp+68h+var_60]
0x54088C: fstp    [esp+68h+var_5C]
0x540890: fcom    dword ptr [esi+118h]
0x540896: fnstsw  ax
0x540898: test    ah, 5
0x54089B: jp      short loc_5408A5
0x54089D: fld     dword ptr [esi+118h]
0x5408A3: jmp     short loc_5408AB
0x5408A5: fild    dword ptr ds:0B06DF4h
0x5408AB: fstp    [esp+68h+var_60]
0x5408AF: fld     [esp+68h+var_60]
0x5408B3: call    Double_To_SInt32
0x5408B8: fcom    dword ptr [esi+114h]
0x5408BE: mov     ecx, eax
0x5408C0: mov     [esp+68h+var_28], ecx
0x5408C4: fnstsw  ax
0x5408C6: test    ah, 5
0x5408C9: jp      short loc_5408D3
0x5408CB: fld     dword ptr [esi+114h]
0x5408D1: jmp     short loc_5408D9
0x5408D3: fld     dword ptr ds:0B06DFCh
0x5408D9: fstp    [esp+68h+var_60]
0x5408DD: fld     [esp+68h+var_60]
0x5408E1: fstp    [esp+68h+var_58]
0x5408E5: fcom    dword ptr [esi+12Ch]
0x5408EB: fnstsw  ax
0x5408ED: test    ah, 5
0x5408F0: jp      short loc_5408FA
0x5408F2: fld     dword ptr [esi+12Ch]
0x5408F8: jmp     short loc_540900
0x5408FA: fld     dword ptr ds:0B06E04h
0x540900: fstp    [esp+68h+var_60]
0x540904: fld     [esp+68h+var_60]
0x540908: fstp    [esp+68h+var_54]
0x54090C: fcom    dword ptr [esi+128h]
0x540912: fnstsw  ax
0x540914: test    ah, 5
0x540917: jp      short loc_540921
0x540919: fld     dword ptr [esi+128h]
0x54091F: jmp     short loc_540927
0x540921: fld     dword ptr ds:0B06E0Ch
0x540927: fstp    [esp+68h+var_60]
0x54092B: fld     [esp+68h+var_60]
0x54092F: fstp    [esp+68h+var_50]
0x540933: fcom    dword ptr [esi+110h]
0x540939: fnstsw  ax
0x54093B: test    ah, 5
0x54093E: jp      short loc_540948
0x540940: fld     dword ptr [esi+110h]
0x540946: jmp     short loc_54094E
0x540948: fld     dword ptr ds:0B06E3Ch
0x54094E: fstp    [esp+68h+var_60]
0x540952: fld     [esp+68h+var_60]
0x540956: fstp    [esp+68h+var_4C]
0x54095A: fcom    dword ptr [esi+11Ch]
0x540960: fnstsw  ax
0x540962: test    ah, 5
0x540965: jp      short loc_54096F
0x540967: fld     dword ptr [esi+11Ch]
0x54096D: jmp     short loc_540975
0x54096F: fld     dword ptr ds:0B06E44h
0x540975: fstp    [esp+68h+var_60]
0x540979: fld     [esp+68h+var_60]
0x54097D: fstp    [esp+68h+var_48]
0x540981: fcom    dword ptr [esi+124h]
0x540987: fnstsw  ax
0x540989: fld     dword ptr ds:0B06E5Ch
0x54098F: test    ah, 5
0x540992: jp      short loc_5409A0
0x540994: fld     dword ptr [esi+124h]
0x54099A: fstp    [esp+68h+var_60]
0x54099E: jmp     short loc_5409A4
0x5409A0: fst     [esp+68h+var_60]
0x5409A4: fld     [esp+68h+var_60]
0x5409A8: fstp    [esp+68h+var_44]
0x5409AC: fxch    st(1)
0x5409AE: fcom    dword ptr [esi+120h]
0x5409B4: fnstsw  ax
0x5409B6: fld     dword ptr ds:0B06E64h
0x5409BC: test    ah, 5
0x5409BF: jp      short loc_5409CD
0x5409C1: fld     dword ptr [esi+120h]
0x5409C7: fstp    [esp+68h+var_60]
0x5409CB: jmp     short loc_5409D1
0x5409CD: fst     [esp+68h+var_60]
0x5409D1: fld     [esp+68h+var_60]
0x5409D5: fstp    [esp+68h+var_40]
0x5409D9: fxch    st(1)
0x5409DB: fcom    dword ptr [esi+13Ch]
0x5409E1: fnstsw  ax
0x5409E3: fld     dword ptr ds:0B06E34h
0x5409E9: test    ah, 5
0x5409EC: jp      short loc_5409FA
0x5409EE: fld     dword ptr [esi+13Ch]
0x5409F4: fstp    [esp+68h+var_60]
0x5409F8: jmp     short loc_5409FE
0x5409FA: fst     [esp+68h+var_60]
0x5409FE: fld     [esp+68h+var_60]
0x540A02: fstp    [esp+68h+var_3C]
0x540A06: fxch    st(1)
0x540A08: fcom    dword ptr [esi+144h]
0x540A0E: fnstsw  ax
0x540A10: fld     dword ptr ds:0B06E4Ch
0x540A16: test    ah, 5
0x540A19: jp      short loc_540A27
0x540A1B: fld     dword ptr [esi+144h]
0x540A21: fstp    [esp+68h+var_60]
0x540A25: jmp     short loc_540A2B
0x540A27: fst     [esp+68h+var_60]
0x540A2B: fld     [esp+68h+var_60]
0x540A2F: fstp    [esp+68h+var_38]
0x540A33: fxch    st(1)
0x540A35: fcom    dword ptr [esi+140h]
0x540A3B: fnstsw  ax
0x540A3D: fld     dword ptr ds:0B06E54h
0x540A43: test    ah, 5
0x540A46: jp      short loc_540A54
0x540A48: fld     dword ptr [esi+140h]
0x540A4E: fstp    [esp+68h+var_60]
0x540A52: jmp     short loc_540A58
0x540A54: fst     [esp+68h+var_60]
0x540A58: fld     [esp+68h+var_60]
0x540A5C: mov     esi, [edi+14h]
0x540A5F: test    esi, esi
0x540A61: fstp    [esp+68h+var_34]
0x540A65: fld1
0x540A67: jz      loc_540DF6
0x540A6D: fcom    dword ptr [edi+0D8h]
0x540A73: fnstsw  ax
0x540A75: test    ah, 41h
0x540A78: jnz     loc_540DF6
0x540A7E: fstp    st
0x540A80: fxch    st(1)
0x540A82: fcom    dword ptr [esi+130h]
0x540A88: fnstsw  ax
0x540A8A: test    ah, 5
0x540A8D: jp      short loc_540A97
0x540A8F: fld     dword ptr [esi+130h]
0x540A95: jmp     short loc_540A9D
0x540A97: fld     dword ptr ds:0A56E28h
0x540A9D: fstp    [esp+68h+var_60]
0x540AA1: fld     [esp+68h+var_60]
0x540AA5: fstp    [esp+68h+var_30]
0x540AA9: fcom    dword ptr [esi+118h]
0x540AAF: fnstsw  ax
0x540AB1: test    ah, 5
0x540AB4: jp      short loc_540ABE
0x540AB6: fld     dword ptr [esi+118h]
0x540ABC: jmp     short loc_540AC4
0x540ABE: fild    dword ptr ds:0B06DF4h
0x540AC4: fstp    [esp+68h+var_60]
0x540AC8: fld     [esp+68h+var_60]
0x540ACC: call    Double_To_SInt32
0x540AD1: fcom    dword ptr [esi+114h]
0x540AD7: mov     [esp+68h+var_2C], eax
0x540ADB: fnstsw  ax
0x540ADD: test    ah, 5
0x540AE0: jp      short loc_540AEA
0x540AE2: fld     dword ptr [esi+114h]
0x540AE8: jmp     short loc_540AF0
0x540AEA: fld     dword ptr ds:0B06DFCh
0x540AF0: fstp    [esp+68h+var_60]
0x540AF4: fld     [esp+68h+var_60]
0x540AF8: fstp    [esp+68h+var_24]
0x540AFC: fcom    dword ptr [esi+12Ch]
0x540B02: fnstsw  ax
0x540B04: test    ah, 5
0x540B07: jp      short loc_540B11
0x540B09: fld     dword ptr [esi+12Ch]
0x540B0F: jmp     short loc_540B17
0x540B11: fld     dword ptr ds:0B06E04h
0x540B17: fstp    [esp+68h+var_60]
0x540B1B: fld     [esp+68h+var_60]
0x540B1F: fstp    [esp+68h+var_20]
0x540B23: fcom    dword ptr [esi+128h]
0x540B29: fnstsw  ax
0x540B2B: test    ah, 5
0x540B2E: jp      short loc_540B38
0x540B30: fld     dword ptr [esi+128h]
0x540B36: jmp     short loc_540B3E
0x540B38: fld     dword ptr ds:0B06E0Ch
0x540B3E: fstp    [esp+68h+var_60]
0x540B42: fld     [esp+68h+var_60]
0x540B46: fstp    [esp+68h+var_1C]
0x540B4A: fcom    dword ptr [esi+110h]
0x540B50: fnstsw  ax
0x540B52: test    ah, 5
0x540B55: jp      short loc_540B5F
0x540B57: fld     dword ptr [esi+110h]
0x540B5D: jmp     short loc_540B65
0x540B5F: fld     dword ptr ds:0B06E3Ch
0x540B65: fstp    [esp+68h+var_60]
0x540B69: fld     [esp+68h+var_60]
0x540B6D: fstp    [esp+68h+var_18]
0x540B71: fcom    dword ptr [esi+11Ch]
0x540B77: fnstsw  ax
0x540B79: test    ah, 5
0x540B7C: jp      short loc_540B86
0x540B7E: fld     dword ptr [esi+11Ch]
0x540B84: jmp     short loc_540B8C
0x540B86: fld     dword ptr ds:0B06E44h
0x540B8C: fstp    [esp+68h+var_60]
0x540B90: fld     [esp+68h+var_60]
0x540B94: fstp    [esp+68h+var_14]
0x540B98: fcom    dword ptr [esi+124h]
0x540B9E: fnstsw  ax
0x540BA0: test    ah, 5
0x540BA3: jp      short loc_540BAF
0x540BA5: fstp    st(5)
0x540BA7: fld     dword ptr [esi+124h]
0x540BAD: jmp     short loc_540BB1
0x540BAF: fxch    st(5)
0x540BB1: fstp    [esp+68h+var_60]
0x540BB5: fld     [esp+68h+var_60]
0x540BB9: fstp    [esp+68h+var_10]
0x540BBD: fxch    st(4)
0x540BBF: fcom    dword ptr [esi+120h]
0x540BC5: fnstsw  ax
0x540BC7: test    ah, 5
0x540BCA: jp      short loc_540BD6
0x540BCC: fstp    st(3)
0x540BCE: fld     dword ptr [esi+120h]
0x540BD4: jmp     short loc_540BD8
0x540BD6: fxch    st(3)
0x540BD8: fstp    [esp+68h+var_60]
0x540BDC: fld     [esp+68h+var_60]
0x540BE0: fstp    [esp+68h+var_C]
0x540BE4: fxch    st(2)
0x540BE6: fcom    dword ptr [esi+13Ch]
0x540BEC: fnstsw  ax
0x540BEE: test    ah, 5
0x540BF1: jp      short loc_540BFD
0x540BF3: fstp    st(1)
0x540BF5: fld     dword ptr [esi+13Ch]
0x540BFB: jmp     short loc_540BFF
0x540BFD: fxch    st(1)
0x540BFF: fstp    [esp+68h+var_60]
0x540C03: fld     [esp+68h+var_60]
0x540C07: fstp    [esp+68h+var_8]
0x540C0B: fcom    dword ptr [esi+144h]
0x540C11: fnstsw  ax
0x540C13: test    ah, 5
0x540C16: jp      short loc_540C22
0x540C18: fstp    st(1)
0x540C1A: fld     dword ptr [esi+144h]
0x540C20: jmp     short loc_540C24
0x540C22: fxch    st(1)
0x540C24: fstp    [esp+68h+var_60]
0x540C28: fld     [esp+68h+var_60]
0x540C2C: fstp    [esp+68h+var_4]
0x540C30: fcomp   dword ptr [esi+140h]
0x540C36: fnstsw  ax
0x540C38: test    ah, 5
0x540C3B: jp      short loc_540C45
0x540C3D: fstp    st
0x540C3F: fld     dword ptr [esi+140h]
0x540C45: fstp    [esp+68h+var_60]
0x540C49: fld     [esp+68h+var_60]
0x540C4D: fstp    [esp+68h+var_60]
0x540C51: fld     [esp+68h+var_30]
0x540C55: fstp    dword ptr ds:0B2C73Ch
0x540C5B: fld     [esp+68h+var_5C]
0x540C5F: fstp    dword ptr ds:0B2C740h
0x540C65: fild    [esp+68h+var_2C]
0x540C69: fstp    [esp+68h+var_2C]
0x540C6D: fld1
0x540C6F: fldz
0x540C71: fsub    st(1), st
0x540C73: fild    [esp+68h+var_28]
0x540C77: fld     [esp+68h+var_2C]
0x540C7B: fld     st
0x540C7D: fsubp   st(2), st
0x540C7F: fld     dword ptr [edi+0D8h]
0x540C85: fsub    st, st(3)
0x540C87: fdiv    st, st(4)
0x540C89: fmulp   st(2), st
0x540C8B: faddp   st(1), st
0x540C8D: fstp    [esp+68h+var_28]
0x540C91: fld     [esp+68h+var_28]
0x540C95: call    Double_To_SInt32
0x540C9A: mov     ds:0B43220h, eax
0x540C9F: fld     dword ptr [edi+0D8h]
0x540CA5: fsub    st, st(1)
0x540CA7: fdiv    st, st(2)
0x540CA9: fld     [esp+68h+var_58]
0x540CAD: fld     [esp+68h+var_24]
0x540CB1: fld     st
0x540CB3: fsubp   st(2), st
0x540CB5: fxch    st(2)
0x540CB7: fmulp   st(1), st
0x540CB9: faddp   st(1), st
0x540CBB: fstp    dword ptr ds:0B431F8h
0x540CC1: fld     dword ptr [edi+0D8h]
0x540CC7: fsub    st, st(1)
0x540CC9: fdiv    st, st(2)
0x540CCB: fld     [esp+68h+var_54]
0x540CCF: fld     [esp+68h+var_20]
0x540CD3: fld     st
0x540CD5: fsubp   st(2), st
0x540CD7: fxch    st(2)
0x540CD9: fmulp   st(1), st
0x540CDB: faddp   st(1), st
0x540CDD: fstp    dword ptr ds:0B431E8h
0x540CE3: fld     dword ptr [edi+0D8h]
0x540CE9: fsub    st, st(1)
0x540CEB: fdiv    st, st(2)
0x540CED: fld     [esp+68h+var_50]
0x540CF1: fld     [esp+68h+var_1C]
0x540CF5: fld     st
0x540CF7: fsubp   st(2), st
0x540CF9: fxch    st(2)
0x540CFB: fmulp   st(1), st
0x540CFD: faddp   st(1), st
0x540CFF: fstp    dword ptr ds:0B431F0h
0x540D05: fld     dword ptr [edi+0D8h]
0x540D0B: fsub    st, st(1)
0x540D0D: fdiv    st, st(2)
0x540D0F: fld     [esp+68h+var_4C]
0x540D13: fld     [esp+68h+var_18]
0x540D17: fld     st
0x540D19: fsubp   st(2), st
0x540D1B: fxch    st(2)
0x540D1D: fmulp   st(1), st
0x540D1F: faddp   st(1), st
0x540D21: fstp    dword ptr ds:0B43200h
0x540D27: fld     dword ptr [edi+0D8h]
0x540D2D: fsub    st, st(1)
0x540D2F: fdiv    st, st(2)
0x540D31: fld     [esp+68h+var_48]
0x540D35: fld     [esp+68h+var_14]
0x540D39: fld     st
0x540D3B: fsubp   st(2), st
0x540D3D: fxch    st(2)
0x540D3F: fmulp   st(1), st
0x540D41: faddp   st(1), st
0x540D43: fstp    dword ptr ds:0B43208h
0x540D49: fld     dword ptr [edi+0D8h]
0x540D4F: fsub    st, st(1)
0x540D51: pop     esi
0x540D52: fdiv    st, st(2)
0x540D54: fld     [esp+64h+var_44]
0x540D58: fld     [esp+64h+var_10]
0x540D5C: fld     st
0x540D5E: fsubp   st(2), st
0x540D60: fxch    st(2)
0x540D62: fmulp   st(1), st
0x540D64: faddp   st(1), st
0x540D66: fstp    dword ptr ds:0B43210h
0x540D6C: fld     dword ptr [edi+0D8h]
0x540D72: fsub    st, st(1)
0x540D74: fdiv    st, st(2)
0x540D76: fld     [esp+64h+var_40]
0x540D7A: fld     [esp+64h+var_C]
0x540D7E: fld     st
0x540D80: fsubp   st(2), st
0x540D82: fxch    st(2)
0x540D84: fmulp   st(1), st
0x540D86: faddp   st(1), st
0x540D88: fstp    dword ptr ds:0B43218h
0x540D8E: fld     dword ptr [edi+0D8h]
0x540D94: fsub    st, st(1)
0x540D96: fdiv    st, st(2)
0x540D98: fld     [esp+64h+var_3C]
0x540D9C: fld     [esp+64h+var_8]
0x540DA0: fld     st
0x540DA2: fsubp   st(2), st
0x540DA4: fxch    st(2)
0x540DA6: fmulp   st(1), st
0x540DA8: faddp   st(1), st
0x540DAA: fstp    dword ptr ds:0B42F4Ch
0x540DB0: fld     dword ptr [edi+0D8h]
0x540DB6: fsub    st, st(1)
0x540DB8: fdiv    st, st(2)
0x540DBA: fld     [esp+64h+var_38]
0x540DBE: fld     [esp+64h+var_4]
0x540DC2: fld     st
0x540DC4: fsubp   st(2), st
0x540DC6: fxch    st(2)
0x540DC8: fmulp   st(1), st
0x540DCA: faddp   st(1), st
0x540DCC: fstp    dword ptr ds:0B42EA8h
0x540DD2: fsubr   dword ptr [edi+0D8h]
0x540DD8: pop     edi
0x540DD9: fdivrp  st(1), st
0x540DDB: fld     [esp+60h+var_34]
0x540DDF: fld     [esp+60h+var_60]
0x540DE2: fld     st
0x540DE4: fsubp   st(2), st
0x540DE6: fxch    st(2)
0x540DE8: fmulp   st(1), st
0x540DEA: faddp   st(1), st
0x540DEC: fstp    dword ptr ds:0B42F44h
0x540DF2: add     esp, 60h
0x540DF5: retn
0x540DF6: fstp    st(2)
0x540DF8: mov     ds:0B43220h, ecx
0x540DFE: fstp    st
0x540E00: pop     esi
0x540E01: fstp    st(1)
0x540E03: fstp    st(1)
0x540E05: fstp    st(1)
0x540E07: fstp    st(1)
0x540E09: fld     [esp+64h+var_5C]
0x540E0D: fstp    dword ptr ds:0B2C73Ch
0x540E13: fstp    dword ptr ds:0B2C740h
0x540E19: fld     [esp+64h+var_58]
0x540E1D: fstp    dword ptr ds:0B431F8h
0x540E23: fld     [esp+64h+var_54]
0x540E27: fstp    dword ptr ds:0B431E8h
0x540E2D: fld     [esp+64h+var_50]
0x540E31: fstp    dword ptr ds:0B431F0h
0x540E37: fld     [esp+64h+var_4C]
0x540E3B: fstp    dword ptr ds:0B43200h
0x540E41: fld     [esp+64h+var_48]
0x540E45: fstp    dword ptr ds:0B43208h
0x540E4B: fld     [esp+64h+var_44]
0x540E4F: fstp    dword ptr ds:0B43210h
0x540E55: fld     [esp+64h+var_40]
0x540E59: fstp    dword ptr ds:0B43218h
0x540E5F: fld     [esp+64h+var_3C]
0x540E63: fstp    dword ptr ds:0B42F4Ch
0x540E69: fld     [esp+64h+var_38]
0x540E6D: fstp    dword ptr ds:0B42EA8h
0x540E73: fld     [esp+64h+var_34]
0x540E77: fstp    dword ptr ds:0B42F44h
0x540E7D: pop     edi
0x540E7E: add     esp, 60h
0x540E81: retn
