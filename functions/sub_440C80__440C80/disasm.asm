0x440C80: push    ecx
0x440C81: push    ebp
0x440C82: mov     ebp, [esp+8+arg_0]
0x440C86: cmp     ds:0B33A64h, ebp
0x440C8C: push    esi
0x440C8D: mov     esi, ecx
0x440C8F: mov     [esp+0Ch+var_4], esi
0x440C93: jz      loc_440E07
0x440C99: push    edi
0x440C9A: mov     ecx, ebp; this
0x440C9C: call    TESObjectCELL_IsInterior
0x440CA1: test    al, al
0x440CA3: jz      short loc_440CB6
0x440CA5: mov     esi, ds:0B06A2Ch
0x440CAB: shr     esi, 1
0x440CAD: mov     edi, esi
0x440CAF: mov     eax, esi
0x440CB1: jmp     loc_440D41
0x440CB6: push    ebx
0x440CB7: mov     ebx, [esp+14h+arg_4]
0x440CBB: test    ebx, ebx
0x440CBD: jz      short loc_440D13
0x440CBF: fld     dword ptr [ebx]
0x440CC1: fstp    [esp+14h+arg_4]
0x440CC5: fld     [esp+14h+arg_4]
0x440CC9: fistp   [esp+14h+arg_0]
0x440CCD: mov     esi, [esp+14h+arg_0]
0x440CD1: mov     ecx, ebp; this
0x440CD3: call    TESObjectCELL_GetXCoordinate
0x440CD8: fld     dword ptr [ebx+4]
0x440CDB: mov     edi, eax
0x440CDD: fstp    [esp+14h+arg_4]
0x440CE1: mov     eax, ds:0B06A2Ch
0x440CE6: shr     eax, 1
0x440CE8: sar     esi, 0Ch
0x440CEB: sub     eax, esi
0x440CED: add     edi, eax
0x440CEF: fld     [esp+14h+arg_4]
0x440CF3: fistp   [esp+14h+arg_0]
0x440CF7: mov     esi, ds:0B06A2Ch
0x440CFD: mov     ebx, [esp+14h+arg_0]
0x440D01: mov     ecx, ebp; this
0x440D03: shr     esi, 1
0x440D05: call    TESObjectCELL_GetYCoordinate
0x440D0A: sar     ebx, 0Ch
0x440D0D: mov     ecx, esi
0x440D0F: sub     ecx, ebx
0x440D11: jmp     short loc_440D3E
0x440D13: mov     ecx, ebp; this
0x440D15: call    TESObjectCELL_GetXCoordinate
0x440D1A: mov     edi, eax
0x440D1C: mov     eax, ds:0B06A2Ch
0x440D21: mov     edx, eax
0x440D23: shr     edx, 1
0x440D25: sub     edx, [esi+20h]
0x440D28: mov     esi, eax
0x440D2A: mov     ecx, ebp; this
0x440D2C: add     edi, edx
0x440D2E: shr     esi, 1
0x440D30: call    TESObjectCELL_GetYCoordinate
0x440D35: mov     edx, [esp+14h+var_4]
0x440D39: mov     ecx, esi
0x440D3B: sub     ecx, [edx+24h]
0x440D3E: add     eax, ecx
0x440D40: pop     ebx
0x440D41: sub     edi, esi
0x440D43: sub     eax, esi
0x440D45: cmp     edi, eax
0x440D47: jle     short loc_440D58
0x440D49: mov     eax, edi
0x440D4B: cdq
0x440D4C: xor     eax, edx
0x440D4E: sub     eax, edx
0x440D50: add     al, 1
0x440D52: mov     cl, 0Ah
0x440D54: imul    cl
0x440D56: jmp     short loc_440D63
0x440D58: cdq
0x440D59: xor     eax, edx
0x440D5B: sub     eax, edx
0x440D5D: add     al, 1
0x440D5F: mov     dl, 0Ah
0x440D61: imul    dl
0x440D63: mov     cl, 14h
0x440D65: cmp     cl, al
0x440D67: sbb     al, al
0x440D69: and     al, cl
0x440D6B: add     al, cl
0x440D6D: movzx   eax, al
0x440D70: add     eax, 0FFFFFFF6h; switch 41 cases
0x440D73: cmp     eax, 28h
0x440D76: pop     edi
0x440D77: ja      def_440D84; jumptable 00440D84 default case, cases 11-19,21-29,31-39,41-49
0x440D7D: movzx   edx, ds:byte_440E2C[eax]
0x440D84: jmp     ds:jpt_440D84[edx*4]; switch jump
0x440D8B: pop     esi; jumptable 00440D84 case 10
0x440D8C: mov     dword ptr ds:0B33A60h, 0
0x440D96: mov     eax, ds:0B33A60h
0x440D9B: mov     ds:0B33A64h, ebp
0x440DA1: pop     ebp
0x440DA2: pop     ecx
0x440DA3: retn    8
0x440DA6: pop     esi; jumptable 00440D84 case 20
0x440DA7: mov     dword ptr ds:0B33A60h, 1
0x440DB1: mov     eax, ds:0B33A60h
0x440DB6: mov     ds:0B33A64h, ebp
0x440DBC: pop     ebp
0x440DBD: pop     ecx
0x440DBE: retn    8
0x440DC1: pop     esi; jumptable 00440D84 case 30
0x440DC2: mov     dword ptr ds:0B33A60h, 2
0x440DCC: mov     eax, ds:0B33A60h
0x440DD1: mov     ds:0B33A64h, ebp
0x440DD7: pop     ebp
0x440DD8: pop     ecx
0x440DD9: retn    8
0x440DDC: pop     esi; jumptable 00440D84 case 40
0x440DDD: mov     dword ptr ds:0B33A60h, 3
0x440DE7: mov     eax, ds:0B33A60h
0x440DEC: mov     ds:0B33A64h, ebp
0x440DF2: pop     ebp
0x440DF3: pop     ecx
0x440DF4: retn    8
0x440DF7: mov     dword ptr ds:0B33A60h, 4; jumptable 00440D84 case 50
0x440E01: mov     ds:0B33A64h, ebp; jumptable 00440D84 default case, cases 11-19,21-29,31-39,41-49
0x440E07: mov     eax, ds:0B33A60h
0x440E0C: pop     esi
0x440E0D: pop     ebp
0x440E0E: pop     ecx
0x440E0F: retn    8
