0x58CF40: sub     esp, 8
0x58CF43: mov     eax, [esp+8+arg_0]
0x58CF47: mov     ecx, [eax+10h]
0x58CF4A: push    ebx
0x58CF4B: push    ebp
0x58CF4C: push    esi
0x58CF4D: push    edi
0x58CF4E: xor     edi, edi
0x58CF50: xor     ebp, ebp
0x58CF52: xor     ebx, ebx
0x58CF54: cmp     ecx, edi
0x58CF56: mov     [esp+18h+var_8], edi
0x58CF5A: jz      loc_58D1AC
0x58CF60: jmp     short loc_58CF66
0x58CF62: mov     ecx, [esp+18h+arg_0]
0x58CF66: mov     esi, [ecx+8]
0x58CF69: lea     eax, [ecx+8]
0x58CF6C: mov     eax, [esi]
0x58CF6E: cmp     eax, 28h ; '('
0x58CF71: mov     ecx, [ecx]
0x58CF73: mov     [esp+18h+arg_0], ecx
0x58CF77: jnz     short loc_58CF92
0x58CF79: cmp     [esp+18h+var_8], edi
0x58CF7D: mov     ebp, [esi+10h]
0x58CF80: jnz     short loc_58CF86
0x58CF82: mov     [esp+18h+var_8], ebp
0x58CF86: mov     byte ptr ds:0B3B0A1h, 1
0x58CF8D: jmp     loc_58D1A0
0x58CF92: cmp     eax, 2Dh ; '-'
0x58CF95: jnz     short loc_58CFD3
0x58CF97: mov     byte ptr ds:0B3B0A1h, 0
0x58CF9E: mov     esi, [ebp+18h]
0x58CFA1: cmp     esi, edi
0x58CFA3: jz      short loc_58CFCB
0x58CFA5: jmp     short loc_58CFB0
0x58CFA7: align 10h
0x58CFB0: mov     ecx, [esi+8]
0x58CFB3: cmp     word ptr [ecx+18h], 0FA2h
0x58CFB9: lea     eax, [esi+8]
0x58CFBC: mov     esi, [esi]
0x58CFBE: jz      short loc_58CFC7
0x58CFC0: push    1
0x58CFC2: call    DoActionEnumeration
0x58CFC7: cmp     esi, edi
0x58CFC9: jnz     short loc_58CFB0
0x58CFCB: mov     ebp, [ebp+10h]
0x58CFCE: jmp     loc_58D1A0
0x58CFD3: cmp     eax, 32h ; '2'
0x58CFD6: jnz     loc_58D0CF
0x58CFDC: cmp     ebp, edi
0x58CFDE: jz      loc_58D0C5
0x58CFE4: fldz
0x58CFE6: fcomp   dword ptr [esi+4]
0x58CFE9: fnstsw  ax
0x58CFEB: test    ah, 44h
0x58CFEE: jp      short loc_58D014
0x58CFF0: movzx   eax, word ptr [esi+0Ch]
0x58CFF4: cmp     ax, 0FFFFh
0x58CFF8: jnz     short loc_58D00D
0x58CFFA: mov     eax, [esi+8]
0x58CFFD: lea     edx, [eax+1]
0x58D000: mov     cl, [eax]
0x58D002: add     eax, 1
0x58D005: test    cl, cl
0x58D007: jnz     short loc_58D000
0x58D009: sub     eax, edx
0x58D00B: jmp     short loc_58D010
0x58D00D: movzx   eax, ax
0x58D010: cmp     eax, edi
0x58D012: jnz     short loc_58D050
0x58D014: mov     eax, [esi+10h]
0x58D017: cmp     eax, 0FDEh
0x58D01C: jz      short loc_58D050
0x58D01E: cmp     eax, 0FE6h
0x58D023: jz      short loc_58D050
0x58D025: fld     dword ptr [esi+4]
0x58D028: push    eax
0x58D029: mov     ecx, ebp
0x58D02B: fstp    [esp+1Ch+var_4]
0x58D02F: call    Tile_GetPropertyByCode?
0x58D034: cmp     eax, edi
0x58D036: jz      loc_58D1A0
0x58D03C: fld     [esp+18h+var_4]
0x58D040: push    ecx
0x58D041: mov     ecx, eax
0x58D043: fstp    [esp+1Ch+var_1C]; float
0x58D046: call    Tile_Property_SetFloatValue?
0x58D04B: jmp     loc_58D1A0
0x58D050: mov     eax, [esi+10h]
0x58D053: cmp     eax, 0BBAh
0x58D058: jnz     short loc_58D083
0x58D05A: sub     esp, 8
0x58D05D: mov     ecx, esp; this
0x58D05F: mov     [esp+20h+var_4], esp
0x58D063: mov     [ecx], edi
0x58D065: mov     [ecx+4], di
0x58D069: mov     [ecx+6], di
0x58D06D: mov     edx, [esi+8]
0x58D070: push    edi; a3
0x58D071: push    edx; a2
0x58D072: call    BSStringT_Set
0x58D077: mov     ecx, ebp
0x58D079: call    sub_58A020
0x58D07E: jmp     loc_58D1A0
0x58D083: cmp     eax, 0FE6h
0x58D088: mov     esi, [esi+8]
0x58D08B: mov     ecx, ebp
0x58D08D: jnz     short loc_58D0AA
0x58D08F: push    eax
0x58D090: call    Tile_GetPropertyByCode?
0x58D095: cmp     eax, edi
0x58D097: jz      short loc_58D0A1
0x58D099: push    esi
0x58D09A: mov     ecx, eax
0x58D09C: call    sub_58CA50
0x58D0A1: or      dword ptr [ebp+2Ch], 20h
0x58D0A5: jmp     loc_58D1A0
0x58D0AA: push    eax
0x58D0AB: call    Tile_GetPropertyByCode?
0x58D0B0: cmp     eax, edi
0x58D0B2: jz      loc_58D1A0
0x58D0B8: push    esi
0x58D0B9: mov     ecx, eax
0x58D0BB: call    sub_58CA50
0x58D0C0: jmp     loc_58D1A0
0x58D0C5: push    offset aTraitDefinedOu; "Trait defined outside of any tile."
0x58D0CA: jmp     loc_58D198
0x58D0CF: cmp     eax, 1Eh
0x58D0D2: jnz     short loc_58D0E3
0x58D0D4: fld     dword ptr [esi+4]
0x58D0D7: call    Double_To_SInt32
0x58D0DC: mov     ebx, eax
0x58D0DE: jmp     loc_58D1A0
0x58D0E3: cmp     eax, 23h ; '#'
0x58D0E6: jnz     short loc_58D0EF
0x58D0E8: xor     ebx, ebx
0x58D0EA: jmp     loc_58D1A0
0x58D0EF: cmp     eax, 37h ; '7'
0x58D0F2: jnz     short loc_58D126
0x58D0F4: cmp     ebx, edi
0x58D0F6: jz      short loc_58D11F
0x58D0F8: mov     eax, [esi+10h]
0x58D0FB: fld     dword ptr [esi+4]
0x58D0FE: push    eax; int
0x58D0FF: fstp    [esp+1Ch+var_4]
0x58D103: fld     [esp+1Ch+var_4]
0x58D107: push    ecx
0x58D108: fstp    [esp+20h+var_20]; float
0x58D10B: push    ebx
0x58D10C: mov     ecx, ebp
0x58D10E: call    Tile_GetPropertyByCode?
0x58D113: mov     ecx, eax
0x58D115: call    sub_58CBE0
0x58D11A: jmp     loc_58D1A0
0x58D11F: push    offset aActionDefinedO; "Action defined outside of any trait."
0x58D124: jmp     short loc_58D198
0x58D126: cmp     eax, 3Ch ; '<'
0x58D129: jnz     short loc_58D161
0x58D12B: cmp     ebx, edi
0x58D12D: jz      short loc_58D15A
0x58D12F: mov     eax, [esi+8]
0x58D132: push    eax; unsigned __int8 *
0x58D133: push    ebp; int
0x58D134: call    sub_58B800
0x58D139: mov     edi, eax
0x58D13B: add     esp, 8
0x58D13E: test    edi, edi
0x58D140: jz      short loc_58D1A0
0x58D142: mov     eax, [esi+10h]
0x58D145: fld     dword ptr [esi+4]
0x58D148: push    eax
0x58D149: call    Double_To_SInt32
0x58D14E: push    eax
0x58D14F: push    edi
0x58D150: push    ebx
0x58D151: mov     ecx, ebp
0x58D153: call    sub_58CF10
0x58D158: jmp     short loc_58D1A0
0x58D15A: push    offset aActionLinkDefi; "Action link defined outside of any trai"...
0x58D15F: jmp     short loc_58D198
0x58D161: cmp     eax, 14h
0x58D164: jnz     short loc_58D175
0x58D166: cmp     ebx, edi
0x58D168: jz      short loc_58D16E
0x58D16A: push    0Ah
0x58D16C: jmp     short loc_58D180
0x58D16E: push    offset aActionBegunOut; "Action begun outside of any trait."
0x58D173: jmp     short loc_58D198
0x58D175: cmp     eax, 19h
0x58D178: jnz     short loc_58D1A0
0x58D17A: cmp     ebx, edi
0x58D17C: jz      short loc_58D193
0x58D17E: push    0Fh
0x58D180: fld     dword ptr [esi+4]
0x58D183: call    Double_To_SInt32
0x58D188: push    eax
0x58D189: push    ebx
0x58D18A: mov     ecx, ebp
0x58D18C: call    sub_58CEF0
0x58D191: jmp     short loc_58D1A0
0x58D193: push    offset aActionEndedOut; "Action ended outside of any trait."
0x58D198: call    PrintError
0x58D19D: add     esp, 4
0x58D1A0: xor     edi, edi
0x58D1A2: cmp     [esp+18h+arg_0], edi
0x58D1A6: jnz     loc_58CF62
0x58D1AC: pop     edi
0x58D1AD: pop     esi
0x58D1AE: pop     ebp
0x58D1AF: pop     ebx
0x58D1B0: add     esp, 8
0x58D1B3: retn    4
