0x76BEF0: push    esi
0x76BEF1: mov     esi, [esp+4+arg_0]
0x76BEF5: mov     eax, [esi+0Ch]
0x76BEF8: cmp     eax, 0FFFFFFFFh
0x76BEFB: mov     cl, [esi+1]
0x76BEFE: jnz     short loc_76BF47
0x76BF00: mov     eax, [esi+4]
0x76BF03: push    edi
0x76BF04: xor     edi, edi
0x76BF06: cmp     eax, 0Fh; switch 16 cases
0x76BF09: ja      short def_76BF0B; jumptable 0076BF0B default case, case 7
0x76BF0B: jmp     ds:jpt_76BF0B[eax*4]; switch jump
0x76BF12: movzx   eax, cl; jumptable 0076BF0B case 0
0x76BF15: add     eax, 0FFFFFFF8h; switch 25 cases
0x76BF18: cmp     eax, 18h
0x76BF1B: ja      def_76BF28; jumptable 0076BF0B cases 3,10,13
0x76BF21: movzx   eax, ds:byte_76C2F0[eax]
0x76BF28: jmp     ds:jpt_76BF28[eax*4]; switch jump
0x76BF2F: push    0; jumptable 0076BF28 case 8
0x76BF31: mov     ecx, esi
0x76BF33: call    sub_700B60
0x76BF38: cmp     eax, 0E0h ; 'à'
0x76BF3D: jnz     short loc_76BF49
0x76BF3F: mov     edi, 1Bh
0x76BF44: mov     eax, edi; jumptable 0076BF0B default case, case 7
0x76BF46: pop     edi
0x76BF47: pop     esi
0x76BF48: retn
0x76BF49: push    0
0x76BF4B: mov     ecx, esi
0x76BF4D: call    sub_700B60
0x76BF52: test    eax, eax
0x76BF54: jnz     short def_76BF0B; jumptable 0076BF0B default case, case 7
0x76BF56: mov     edi, 32h ; '2'
0x76BF5B: mov     eax, edi
0x76BF5D: pop     edi
0x76BF5E: pop     esi
0x76BF5F: retn
0x76BF60: push    0; jumptable 0076BF28 case 16
0x76BF62: mov     ecx, esi
0x76BF64: call    sub_700B60
0x76BF69: cmp     eax, 0F800h
0x76BF6E: jnz     short loc_76BF7A
0x76BF70: mov     edi, 17h
0x76BF75: mov     eax, edi
0x76BF77: pop     edi
0x76BF78: pop     esi
0x76BF79: retn
0x76BF7A: push    0
0x76BF7C: mov     ecx, esi
0x76BF7E: call    sub_700B60
0x76BF83: cmp     eax, 7C00h
0x76BF88: jnz     short loc_76BF94
0x76BF8A: mov     edi, 18h
0x76BF8F: mov     eax, edi
0x76BF91: pop     edi
0x76BF92: pop     esi
0x76BF93: retn
0x76BF94: push    0
0x76BF96: mov     ecx, esi
0x76BF98: call    sub_700B60
0x76BF9D: cmp     eax, 0F00h
0x76BFA2: jnz     short loc_76BFAE
0x76BFA4: mov     edi, 1Eh
0x76BFA9: mov     eax, edi
0x76BFAB: pop     edi
0x76BFAC: pop     esi
0x76BFAD: retn
0x76BFAE: push    0
0x76BFB0: mov     ecx, esi
0x76BFB2: call    sub_700B60
0x76BFB7: test    eax, eax
0x76BFB9: jnz     short def_76BF0B; jumptable 0076BF0B default case, case 7
0x76BFBB: mov     edi, 51h ; 'Q'
0x76BFC0: mov     eax, edi
0x76BFC2: pop     edi
0x76BFC3: pop     esi
0x76BFC4: retn
0x76BFC5: mov     edi, 14h; jumptable 0076BF28 case 24
0x76BFCA: mov     eax, edi
0x76BFCC: pop     edi
0x76BFCD: pop     esi
0x76BFCE: retn
0x76BFCF: push    0; jumptable 0076BF28 case 32
0x76BFD1: mov     ecx, esi
0x76BFD3: call    sub_700B60
0x76BFD8: cmp     eax, 0FF0000h
0x76BFDD: jnz     short loc_76BFE9
0x76BFDF: mov     edi, 16h
0x76BFE4: mov     eax, edi
0x76BFE6: pop     edi
0x76BFE7: pop     esi
0x76BFE8: retn
0x76BFE9: push    0
0x76BFEB: mov     ecx, esi
0x76BFED: call    sub_700B60
0x76BFF2: cmp     eax, 0FFh
0x76BFF7: jnz     short loc_76C003
0x76BFF9: mov     edi, 21h ; '!'
0x76BFFE: mov     eax, edi
0x76C000: pop     edi
0x76C001: pop     esi
0x76C002: retn
0x76C003: push    0
0x76C005: mov     ecx, esi
0x76C007: call    sub_700B60
0x76C00C: cmp     eax, 0FFFF0000h
0x76C011: jnz     def_76BF0B; jumptable 0076BF0B default case, case 7
0x76C017: mov     edi, 22h ; '"'
0x76C01C: mov     eax, edi
0x76C01E: pop     edi
0x76C01F: pop     esi
0x76C020: retn
0x76C021: xor     edi, edi; jumptable 0076BF0B cases 3,10,13
0x76C023: mov     eax, edi
0x76C025: pop     edi
0x76C026: pop     esi
0x76C027: retn
0x76C028: movzx   eax, cl; jumptable 0076BF0B case 1
0x76C02B: add     eax, 0FFFFFFF8h; switch 121 cases
0x76C02E: cmp     eax, 78h
0x76C031: ja      short def_76BF28; jumptable 0076BF0B cases 3,10,13
0x76C033: movzx   ecx, ds:byte_76C328[eax]
0x76C03A: jmp     ds:jpt_76C03A[ecx*4]; switch jump
0x76C041: push    9; jumptable 0076C03A case 8
0x76C043: mov     ecx, esi
0x76C045: call    sub_700B60
0x76C04A: test    eax, eax
0x76C04C: jnz     short loc_76C058
0x76C04E: mov     edi, 1Ch
0x76C053: mov     eax, edi
0x76C055: pop     edi
0x76C056: pop     esi
0x76C057: retn
0x76C058: push    9
0x76C05A: mov     ecx, esi
0x76C05C: call    sub_700B60
0x76C061: cmp     eax, 0Fh
0x76C064: jnz     def_76BF0B; jumptable 0076BF0B default case, case 7
0x76C06A: mov     edi, 34h ; '4'
0x76C06F: mov     eax, edi
0x76C071: pop     edi
0x76C072: pop     esi
0x76C073: retn
0x76C074: push    0; jumptable 0076C03A case 16
0x76C076: mov     ecx, esi
0x76C078: call    sub_700B60
0x76C07D: cmp     eax, 7C00h
0x76C082: jnz     short loc_76C08E
0x76C084: mov     edi, 19h
0x76C089: mov     eax, edi
0x76C08B: pop     edi
0x76C08C: pop     esi
0x76C08D: retn
0x76C08E: push    0
0x76C090: mov     ecx, esi
0x76C092: call    sub_700B60
0x76C097: cmp     eax, 0F00h
0x76C09C: jnz     short loc_76C0A8
0x76C09E: mov     edi, 1Ah
0x76C0A3: mov     eax, edi
0x76C0A5: pop     edi
0x76C0A6: pop     esi
0x76C0A7: retn
0x76C0A8: push    0
0x76C0AA: mov     ecx, esi
0x76C0AC: call    sub_700B60
0x76C0B1: cmp     eax, 0E0h ; 'à'
0x76C0B6: jnz     short loc_76C0C2
0x76C0B8: mov     edi, 1Dh
0x76C0BD: mov     eax, edi
0x76C0BF: pop     edi
0x76C0C0: pop     esi
0x76C0C1: retn
0x76C0C2: push    0
0x76C0C4: mov     ecx, esi
0x76C0C6: call    sub_700B60
0x76C0CB: test    eax, eax
0x76C0CD: jnz     def_76BF0B; jumptable 0076BF0B default case, case 7
0x76C0D3: mov     edi, 33h ; '3'
0x76C0D8: mov     eax, edi
0x76C0DA: pop     edi
0x76C0DB: pop     esi
0x76C0DC: retn
0x76C0DD: push    0; jumptable 0076C03A case 32
0x76C0DF: mov     ecx, esi
0x76C0E1: call    sub_700B60
0x76C0E6: cmp     eax, 0FF0000h
0x76C0EB: jz      loc_76C231
0x76C0F1: push    0
0x76C0F3: mov     ecx, esi
0x76C0F5: call    sub_700B60
0x76C0FA: cmp     eax, 3FFh
0x76C0FF: jnz     short loc_76C10B
0x76C101: mov     edi, 1Fh
0x76C106: mov     eax, edi
0x76C108: pop     edi
0x76C109: pop     esi
0x76C10A: retn
0x76C10B: push    0
0x76C10D: mov     ecx, esi
0x76C10F: call    sub_700B60
0x76C114: cmp     eax, 0FFh
0x76C119: jnz     short loc_76C125
0x76C11B: mov     edi, 20h ; ' '
0x76C120: mov     eax, edi
0x76C122: pop     edi
0x76C123: pop     esi
0x76C124: retn
0x76C125: push    0
0x76C127: mov     ecx, esi
0x76C129: call    sub_700B60
0x76C12E: cmp     eax, 3FF00000h
0x76C133: jnz     def_76BF0B; jumptable 0076BF0B default case, case 7
0x76C139: mov     edi, 23h ; '#'
0x76C13E: mov     eax, edi
0x76C140: pop     edi
0x76C141: pop     esi
0x76C142: retn
0x76C143: mov     edi, 71h ; 'q'; jumptable 0076C03A case 64
0x76C148: mov     eax, edi
0x76C14A: pop     edi
0x76C14B: pop     esi
0x76C14C: retn
0x76C14D: mov     edi, 29h ; ')'; jumptable 0076BF0B case 2
0x76C152: mov     eax, edi
0x76C154: pop     edi
0x76C155: pop     esi
0x76C156: retn
0x76C157: mov     edi, 31545844h; jumptable 0076BF0B case 4
0x76C15C: mov     eax, edi
0x76C15E: pop     edi
0x76C15F: pop     esi
0x76C160: retn
0x76C161: mov     edi, 33545844h; jumptable 0076BF0B case 5
0x76C166: mov     eax, edi
0x76C168: pop     edi
0x76C169: pop     esi
0x76C16A: retn
0x76C16B: mov     edi, 35545844h; jumptable 0076BF0B case 6
0x76C170: mov     eax, edi
0x76C172: pop     edi
0x76C173: pop     esi
0x76C174: retn
0x76C175: mov     edi, 3Ch ; '<'; jumptable 0076BF0B case 8
0x76C17A: mov     eax, edi
0x76C17C: pop     edi
0x76C17D: pop     esi
0x76C17E: retn
0x76C17F: cmp     cl, 10h; jumptable 0076BF0B case 9
0x76C182: jnz     short loc_76C18E
0x76C184: mov     edi, 3Dh ; '='
0x76C189: mov     eax, edi
0x76C18B: pop     edi
0x76C18C: pop     esi
0x76C18D: retn
0x76C18E: cmp     cl, 20h ; ' '
0x76C191: jnz     def_76BF0B; jumptable 0076BF0B default case, case 7
0x76C197: mov     edi, 3Eh ; '>'
0x76C19C: mov     eax, edi
0x76C19E: pop     edi
0x76C19F: pop     esi
0x76C1A0: retn
0x76C1A1: cmp     cl, 8; jumptable 0076BF0B case 11
0x76C1A4: jz      short loc_76C1C8
0x76C1A6: cmp     cl, 10h
0x76C1A9: jz      short loc_76C1BE
0x76C1AB: cmp     cl, 20h ; ' '
0x76C1AE: jnz     def_76BF0B; jumptable 0076BF0B default case, case 7
0x76C1B4: mov     edi, 72h ; 'r'
0x76C1B9: mov     eax, edi
0x76C1BB: pop     edi
0x76C1BC: pop     esi
0x76C1BD: retn
0x76C1BE: mov     edi, 6Fh ; 'o'
0x76C1C3: mov     eax, edi
0x76C1C5: pop     edi
0x76C1C6: pop     esi
0x76C1C7: retn
0x76C1C8: push    3
0x76C1CA: mov     ecx, esi
0x76C1CC: call    sub_700B60
0x76C1D1: mov     edi, eax
0x76C1D3: neg     edi
0x76C1D5: sbb     edi, edi
0x76C1D7: and     edi, 0FFFFFFEAh
0x76C1DA: add     edi, 32h ; '2'
0x76C1DD: mov     eax, edi
0x76C1DF: pop     edi
0x76C1E0: pop     esi
0x76C1E1: retn
0x76C1E2: cmp     cl, 10h; jumptable 0076BF0B case 12
0x76C1E5: jz      loc_76C0D3
0x76C1EB: cmp     cl, 20h ; ' '
0x76C1EE: jz      short loc_76C203
0x76C1F0: cmp     cl, 40h ; '@'
0x76C1F3: jnz     def_76BF0B; jumptable 0076BF0B default case, case 7
0x76C1F9: mov     edi, 73h ; 's'
0x76C1FE: mov     eax, edi
0x76C200: pop     edi
0x76C201: pop     esi
0x76C202: retn
0x76C203: mov     edi, 70h ; 'p'
0x76C208: mov     eax, edi
0x76C20A: pop     edi
0x76C20B: pop     esi
0x76C20C: retn
0x76C20D: movzx   eax, cl; jumptable 0076BF0B case 14
0x76C210: sub     eax, 20h ; ' '
0x76C213: jz      short loc_76C231
0x76C215: sub     eax, 20h ; ' '
0x76C218: jz      loc_76C143; jumptable 0076C03A case 64
0x76C21E: sub     eax, 40h ; '@'
0x76C221: jnz     def_76BF0B; jumptable 0076BF0B default case, case 7
0x76C227: mov     edi, 74h ; 't'; jumptable 0076C03A case 128
0x76C22C: mov     eax, edi
0x76C22E: pop     edi
0x76C22F: pop     esi
0x76C230: retn
0x76C231: mov     edi, 15h
0x76C236: mov     eax, edi
0x76C238: pop     edi
0x76C239: pop     esi
0x76C23A: retn
0x76C23B: cmp     cl, 10h; jumptable 0076BF0B case 15
0x76C23E: jz      short loc_76C282
0x76C240: cmp     cl, 20h ; ' '
0x76C243: jnz     def_76BF0B; jumptable 0076BF0B default case, case 7
0x76C249: push    12h
0x76C24B: mov     ecx, esi
0x76C24D: call    sub_71B4A0
0x76C252: cmp     al, 4
0x76C254: jz      short loc_76C27A
0x76C256: cmp     al, 8
0x76C258: jz      short loc_76C272
0x76C25A: push    11h
0x76C25C: mov     ecx, esi
0x76C25E: call    sub_71B4A0
0x76C263: sub     al, 18h
0x76C265: neg     al
0x76C267: pop     edi
0x76C268: pop     esi
0x76C269: sbb     eax, eax
0x76C26B: and     eax, 0FFFFFFFAh
0x76C26E: add     eax, 4Dh ; 'M'
0x76C271: retn
0x76C272: pop     edi
0x76C273: mov     eax, 4Bh ; 'K'
0x76C278: pop     esi
0x76C279: retn
0x76C27A: pop     edi
0x76C27B: mov     eax, 4Fh ; 'O'
0x76C280: pop     esi
0x76C281: retn
0x76C282: push    12h
0x76C284: mov     ecx, esi
0x76C286: call    sub_71B4A0
0x76C28B: sub     al, 1
0x76C28D: neg     al
0x76C28F: pop     edi
0x76C290: pop     esi
0x76C291: sbb     eax, eax
0x76C293: and     eax, 7
0x76C296: add     eax, 49h ; 'I'
0x76C299: retn
