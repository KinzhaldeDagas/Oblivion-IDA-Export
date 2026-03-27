0x47BC40: push    ebp
0x47BC41: mov     ebp, esp
0x47BC43: and     esp, 0FFFFFFF8h
0x47BC46: push    0FFFFFFFFh
0x47BC48: push    offset SEH_47BC40
0x47BC4D: mov     eax, large fs:0
0x47BC53: push    eax
0x47BC54: sub     esp, 164h
0x47BC5A: push    ebx
0x47BC5B: push    ebp
0x47BC5C: push    esi
0x47BC5D: push    edi
0x47BC5E: mov     eax, ds:0B30AACh
0x47BC63: xor     eax, esp
0x47BC65: push    eax
0x47BC66: lea     eax, [esp+184h+var_C]
0x47BC6D: mov     large fs:0, eax
0x47BC73: mov     ebp, ecx
0x47BC75: mov     ecx, ds:0B333C4h
0x47BC7B: cmp     [ebp+150h], ecx
0x47BC81: mov     byte ptr [esp+184h+var_154], 0
0x47BC86: jnz     short loc_47BC97
0x47BC88: push    ebp
0x47BC89: call    sub_65D770
0x47BC8E: test    al, al
0x47BC90: jz      short loc_47BC97
0x47BC92: mov     byte ptr [esp+184h+var_154], 1
0x47BC97: cmp     byte ptr ds:0B33D80h, 0
0x47BC9E: jz      short loc_47BCBC
0x47BCA0: mov     ecx, [ebp+150h]
0x47BCA6: mov     eax, [ecx]
0x47BCA8: mov     edx, [eax+170h]
0x47BCAE: call    edx
0x47BCB0: mov     eax, [eax+0Ch]
0x47BCB3: push    eax
0x47BCB4: call    sub_550240
0x47BCB9: add     esp, 4
0x47BCBC: xor     ebx, ebx
0x47BCBE: mov     [esp+184h+var_16C], ebx
0x47BCC2: jmp     short loc_47BCC8
0x47BCC4: mov     ebx, [esp+184h+var_16C]
0x47BCC8: lea     eax, [ebx+5]
0x47BCCB: shl     eax, 4
0x47BCCE: add     eax, ebp
0x47BCD0: mov     [esp+184h+var_148], eax
0x47BCD4: mov     eax, [eax]
0x47BCD6: test    eax, eax
0x47BCD8: jz      loc_47BE24
0x47BCDE: mov     edi, ebx
0x47BCE0: shl     edi, 4
0x47BCE3: cmp     eax, ds:dword_B33C84[edi]
0x47BCE9: mov     [esp+184h+var_164], edi
0x47BCED: jnz     loc_47BE24
0x47BCF3: mov     ecx, ds:dword_B33C80[edi]
0x47BCF9: mov     [edi+ebp+4Ch], ecx
0x47BCFD: mov     edx, ds:dword_B33C84[edi]
0x47BD03: lea     esi, [edi+ebp+4Ch]
0x47BD07: mov     [esi+4], edx
0x47BD0A: mov     eax, ds:dword_B33C88[edi]
0x47BD10: mov     [esi+8], eax
0x47BD13: mov     ecx, ds:dword_B33C8C[edi]
0x47BD19: xor     eax, eax
0x47BD1B: cmp     ebx, 6
0x47BD1E: mov     [esi+0Ch], ecx
0x47BD21: mov     ds:dword_B33C80[edi], eax
0x47BD27: mov     ds:dword_B33C84[edi], eax
0x47BD2D: mov     ds:dword_B33C88[edi], eax
0x47BD33: mov     byte ptr [esp+184h+var_168+3], 0
0x47BD38: mov     ds:dword_B33C8C[edi], eax
0x47BD3E: jl      short loc_47BD5D
0x47BD40: cmp     ebx, 8
0x47BD43: jg      short loc_47BD5D
0x47BD45: push    ebx
0x47BD46: mov     ecx, ebp
0x47BD48: call    sub_478290
0x47BD4D: test    al, al
0x47BD4F: jnz     short loc_47BD93
0x47BD51: cmp     dword ptr [edi+ebp+54h], 0
0x47BD56: jnz     short loc_47BD5D
0x47BD58: mov     byte ptr [esp+184h+var_168+3], 1
0x47BD5D: cmp     byte ptr ds:0B33D80h, 0
0x47BD64: jz      short loc_47BDC3
0x47BD66: mov     edx, [edi+ebp+54h]
0x47BD6A: push    edx
0x47BD6B: push    offset dword_B3FAB0
0x47BD70: call    NiRTTI_Cast
0x47BD75: mov     ebx, eax
0x47BD77: add     esp, 8
0x47BD7A: test    ebx, ebx
0x47BD7C: jz      short loc_47BDC3
0x47BD7E: movzx   eax, word ptr [ebx+0B6h]
0x47BD85: xor     esi, esi
0x47BD87: test    eax, eax
0x47BD89: jbe     short loc_47BDC3
0x47BD8B: cmp     eax, esi
0x47BD8D: ja      short loc_47BDA4
0x47BD8F: xor     eax, eax
0x47BD91: jmp     short loc_47BDAD
0x47BD93: push    0
0x47BD95: push    0
0x47BD97: push    esi
0x47BD98: mov     ecx, ebp
0x47BD9A: call    sub_478780
0x47BD9F: jmp     def_47BE97; jumptable 0047BE97 default case, cases 3,5,8,10,11
0x47BDA4: mov     eax, [ebx+0B0h]
0x47BDAA: mov     eax, [eax+esi*4]
0x47BDAD: push    eax
0x47BDAE: mov     ecx, ebp
0x47BDB0: call    sub_47AC20
0x47BDB5: movzx   eax, word ptr [ebx+0B6h]
0x47BDBC: add     esi, 1
0x47BDBF: cmp     eax, esi
0x47BDC1: ja      short loc_47BDA4
0x47BDC3: cmp     byte ptr [edi+ebp+58h], 0
0x47BDC8: jz      short loc_47BE13
0x47BDCA: cmp     dword ptr [edi+ebp+54h], 0
0x47BDCF: lea     ebx, [edi+ebp+54h]
0x47BDD3: jz      short loc_47BE13
0x47BDD5: mov     ecx, 9
0x47BDDA: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x47BDDF: lea     edi, [esp+184h+var_94]
0x47BDE6: rep movsd
0x47BDE8: push    1
0x47BDEA: lea     ecx, [esp+188h+var_94]
0x47BDF1: push    ecx
0x47BDF2: mov     ecx, [ebp+150h]
0x47BDF8: lea     edx, [esp+18Ch+var_100]
0x47BDFF: push    edx
0x47BE00: call    sub_4D7C50
0x47BE05: mov     ebx, [ebx]
0x47BE07: lea     edi, [ebx+30h]
0x47BE0A: mov     ecx, 9
0x47BE0F: mov     esi, eax
0x47BE11: rep movsd
0x47BE13: cmp     byte ptr [esp+184h+var_168+3], 0
0x47BE18: jz      def_47BE97; jumptable 0047BE97 default case, cases 3,5,8,10,11
0x47BE1E: mov     ebx, [esp+184h+var_16C]
0x47BE22: jmp     short loc_47BE48
0x47BE24: mov     eax, ebx
0x47BE26: shl     eax, 4
0x47BE29: cmp     ds:dword_B33C88[eax], 0
0x47BE30: mov     [esp+184h+var_164], eax
0x47BE34: jz      short loc_47BE48
0x47BE36: push    0
0x47BE38: push    1
0x47BE3A: lea     eax, dword_B33C80[eax]
0x47BE40: push    eax
0x47BE41: mov     ecx, ebp
0x47BE43: call    sub_478780
0x47BE48: cmp     ebx, 6
0x47BE4B: jl      short loc_47BE62
0x47BE4D: cmp     ebx, 8
0x47BE50: jg      short loc_47BE62
0x47BE52: push    ebx
0x47BE53: mov     ecx, ebp
0x47BE55: call    sub_478290
0x47BE5A: test    al, al
0x47BE5C: jnz     def_47BE97; jumptable 0047BE97 default case, cases 3,5,8,10,11
0x47BE62: mov     ecx, [esp+184h+var_148]
0x47BE66: mov     eax, [ecx]
0x47BE68: test    eax, eax
0x47BE6A: jz      def_47BE97; jumptable 0047BE97 default case, cases 3,5,8,10,11
0x47BE70: cmp     eax, 0FFFFFFFFh
0x47BE73: jz      def_47BE97; jumptable 0047BE97 default case, cases 3,5,8,10,11
0x47BE79: cmp     byte ptr [esp+184h+var_154], 0
0x47BE7E: jz      short loc_47BE9E; jumptable 0047BE97 cases 2,4,6,7,9,12-14
0x47BE80: mov     eax, [esp+184h+var_16C]
0x47BE84: add     eax, 0FFFFFFFEh; switch 13 cases
0x47BE87: cmp     eax, 0Ch
0x47BE8A: ja      def_47BE97; jumptable 0047BE97 default case, cases 3,5,8,10,11
0x47BE90: movzx   edx, ds:byte_47C5EC[eax]
0x47BE97: jmp     ds:jpt_47BE97[edx*4]; switch jump
0x47BE9E: mov     esi, [esp+184h+var_16C]; jumptable 0047BE97 cases 2,4,6,7,9,12-14
0x47BEA2: cmp     esi, 1
0x47BEA5: jnz     short loc_47BEF3
0x47BEA7: mov     eax, ds:0B333C4h
0x47BEAC: cmp     [ebp+150h], eax
0x47BEB2: jz      short loc_47BF14
0x47BEB4: cmp     dword ptr [ebp+64h], 0
0x47BEB8: jnz     short loc_47BF14
0x47BEBA: cmp     byte ptr ds:0B06608h, 0
0x47BEC1: jz      short loc_47BF14
0x47BEC3: cmp     byte ptr ds:0B120B4h, 0
0x47BECA: jz      short loc_47BF14
0x47BECC: call    sub_477ED0
0x47BED1: test    al, al
0x47BED3: jz      short loc_47BF14
0x47BED5: push    0
0x47BED7: push    0
0x47BED9: lea     ecx, [esp+18Ch+var_128]
0x47BEDD: push    ecx
0x47BEDE: mov     ecx, ebp
0x47BEE0: call    sub_4781D0
0x47BEE5: lea     ecx, [esp+184h+var_128]; void *
0x47BEE9: call    sub_4BDDC0
0x47BEEE: jmp     def_47BE97; jumptable 0047BE97 default case, cases 3,5,8,10,11
0x47BEF3: cmp     esi, 0Eh
0x47BEF6: jnz     short loc_47BF14
0x47BEF8: mov     eax, [ebp+150h]
0x47BEFE: test    eax, eax
0x47BF00: jz      short loc_47BF14
0x47BF02: mov     ecx, [eax+58h]
0x47BF05: test    ecx, ecx
0x47BF07: jz      short loc_47BF14
0x47BF09: mov     edx, [ecx]
0x47BF0B: push    eax
0x47BF0C: mov     eax, [edx+348h]
0x47BF12: call    eax
0x47BF14: mov     ecx, ds:0B065C8h[esi*4]
0x47BF1B: mov     edx, [esp+184h+var_148]
0x47BF1F: mov     [esp+184h+var_12C], ecx
0x47BF23: mov     ecx, [edx]
0x47BF25: mov     eax, [ecx]
0x47BF27: mov     edx, [eax+14h]
0x47BF2A: push    1
0x47BF2C: push    3
0x47BF2E: push    1
0x47BF30: call    edx
0x47BF32: mov     ecx, ds:0B33A1Ch
0x47BF38: push    eax
0x47BF39: call    sub_439EB0
0x47BF3E: mov     esi, eax
0x47BF40: lea     ecx, [esp+184h+var_11C]
0x47BF44: mov     [esp+184h+var_144], esi
0x47BF48: call    sub_478B90
0x47BF4D: fld1
0x47BF4F: fst     [esp+184h+var_104]
0x47BF56: fst     [esp+184h+var_108]
0x47BF5A: fstp    [esp+184h+var_10C]
0x47BF5E: xor     eax, eax
0x47BF60: mov     [esp+184h+var_4], eax
0x47BF67: mov     [esp+184h+var_158], eax
0x47BF6B: push    esi
0x47BF6C: mov     byte ptr [esp+188h+var_4], 1
0x47BF74: call    sub_480820
0x47BF79: add     esp, 4
0x47BF7C: test    al, al
0x47BF7E: mov     ecx, esi
0x47BF80: jz      short loc_47BFA5
0x47BF82: lea     eax, [esp+184h+var_11C]
0x47BF86: push    eax
0x47BF87: push    ecx
0x47BF88: mov     ecx, ds:0B333A0h
0x47BF8E: call    sub_4430C0
0x47BF93: push    eax; a2
0x47BF94: lea     ecx, [esp+188h+var_158]; this
0x47BF98: call    NiSmartPointer_Set??
0x47BF9D: mov     esi, [esp+184h+var_158]
0x47BFA1: mov     ebx, esi
0x47BFA3: jmp     short loc_47BFB5
0x47BFA5: lea     edx, [esp+184h+var_11C]
0x47BFA9: push    edx
0x47BFAA: call    sub_700610
0x47BFAF: mov     esi, [esp+184h+var_158]
0x47BFB3: mov     ebx, eax
0x47BFB5: test    ebx, ebx
0x47BFB7: jz      loc_47C54B
0x47BFBD: mov     eax, [ebx]
0x47BFBF: mov     edx, [eax+4]
0x47BFC2: mov     ecx, ebx
0x47BFC4: call    edx
0x47BFC6: test    eax, eax
0x47BFC8: jz      short loc_47BFE9
0x47BFCA: lea     ebx, [ebx+0]
0x47BFD0: cmp     eax, offset dword_B35288
0x47BFD5: jz      short loc_47BFE0
0x47BFD7: mov     eax, [eax+4]
0x47BFDA: test    eax, eax
0x47BFDC: jnz     short loc_47BFD0
0x47BFDE: jmp     short loc_47BFE9
0x47BFE0: push    7
0x47BFE2: mov     ecx, ebx
0x47BFE4: call    sub_4A01B0
0x47BFE9: push    offset off_A3CEB0
0x47BFEE: mov     ecx, ebx
0x47BFF0: call    sub_6FFAC0
0x47BFF5: mov     eax, ds:0B3F9A8h
0x47BFFA: mov     [ebx+54h], eax
0x47BFFD: mov     ecx, ds:0B3F9ACh
0x47C003: mov     eax, dword ptr [esp+184h+var_154]
0x47C007: mov     [ebx+58h], ecx
0x47C00A: mov     edx, ds:0B3F9B0h
0x47C010: push    0
0x47C012: mov     [ebx+5Ch], edx
0x47C015: lea     edi, [ebx+30h]
0x47C018: mov     ecx, 9
0x47C01D: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x47C022: rep movsd
0x47C024: mov     ecx, [esp+188h+var_16C]
0x47C028: push    eax
0x47C029: push    ecx
0x47C02A: push    ebx
0x47C02B: mov     ecx, ebp
0x47C02D: call    sub_47B5B0
0x47C032: test    eax, eax
0x47C034: mov     [esp+184h+var_15C], eax
0x47C038: jnz     loc_47C2C3
0x47C03E: cmp     [esp+184h+var_16C], 1
0x47C043: mov     [esp+184h+var_15C], ebx
0x47C047: jnz     loc_47C217
0x47C04D: mov     ecx, ebp
0x47C04F: call    sub_478A40
0x47C054: test    eax, eax
0x47C056: mov     [esp+184h+var_120], eax
0x47C05A: jz      loc_47C217
0x47C060: xor     edi, edi
0x47C062: cmp     [ebx+0B6h], di
0x47C069: mov     [esp+184h+var_160], edi
0x47C06D: jbe     loc_47C217
0x47C073: jmp     short loc_47C080
0x47C075: align 10h
0x47C080: movzx   edx, word ptr [ebx+0B6h]
0x47C087: cmp     edx, edi
0x47C089: jbe     loc_47C201
0x47C08F: mov     eax, [ebx+0B0h]
0x47C095: mov     esi, [eax+edi*4]
0x47C098: test    esi, esi
0x47C09A: jz      loc_47C201
0x47C0A0: cmp     dword ptr [esi+0B4h], 0
0x47C0A7: jz      loc_47C201
0x47C0AD: cmp     dword ptr [ebp+150h], 0
0x47C0B4: jz      loc_47C201
0x47C0BA: mov     ecx, [ebp+150h]
0x47C0C0: mov     edx, [ecx]
0x47C0C2: mov     eax, [edx+170h]
0x47C0C8: call    eax
0x47C0CA: test    eax, eax
0x47C0CC: jz      loc_47C201
0x47C0D2: mov     ecx, [ebp+150h]
0x47C0D8: mov     edx, [ecx]
0x47C0DA: mov     eax, [edx+170h]
0x47C0E0: call    eax
0x47C0E2: cmp     byte ptr [eax+4], 23h ; '#'
0x47C0E6: jnz     loc_47C201
0x47C0EC: mov     ecx, [ebp+150h]
0x47C0F2: mov     edx, [ecx]
0x47C0F4: mov     eax, [edx+170h]
0x47C0FA: call    eax
0x47C0FC: push    offset sub_43ACE0; a5
0x47C101: push    offset sub_43EB30; a4
0x47C106: push    4; size
0x47C108: push    18h; a2
0x47C10A: lea     ecx, [esp+194h+a1]
0x47C111: push    ecx; a1
0x47C112: mov     edi, eax
0x47C114: call    ArrayConstructor
0x47C119: mov     ecx, [esi+0B4h]
0x47C11F: lea     edx, [esp+184h+var_134]
0x47C123: push    edx
0x47C124: mov     byte ptr [esp+188h+var_4], 2
0x47C12C: call    sub_700790
0x47C131: mov     eax, [eax]
0x47C133: push    eax
0x47C134: lea     ecx, [esp+188h+var_138]
0x47C138: call    sub_405070
0x47C13D: lea     ecx, [esp+184h+var_134]; this
0x47C141: mov     byte ptr [esp+184h+var_4], 3
0x47C149: call    sub_7016A0
0x47C14E: mov     ecx, dword ptr [esp+184h+var_138]
0x47C152: mov     eax, [esi]
0x47C154: mov     edx, [eax+8Ch]
0x47C15A: push    ecx
0x47C15B: mov     ecx, esi
0x47C15D: call    edx
0x47C15F: lea     eax, [esp+184h+a1]
0x47C166: push    eax
0x47C167: mov     ecx, edi
0x47C169: call    sub_5221C0
0x47C16E: cmp     byte ptr ds:0B120B4h, 0
0x47C175: jz      short loc_47C195
0x47C177: fld1
0x47C179: push    0; int
0x47C17B: push    ecx
0x47C17C: fstp    [esp+18Ch+var_18C]; float
0x47C17F: push    esi; int
0x47C180: lea     ecx, [esp+190h+a1]
0x47C187: push    ecx; int
0x47C188: mov     ecx, [esp+194h+var_120]
0x47C18C: call    sub_558840
0x47C191: test    al, al
0x47C193: jz      short loc_47C1CE
0x47C195: fld     dword ptr ds:0A3721Ch
0x47C19B: push    ecx
0x47C19C: lea     ecx, [esp+188h+var_100]
0x47C1A3: fstp    [esp+188h+var_188]; float
0x47C1A6: call    sub_70FD80
0x47C1AB: lea     edx, [esp+184h+var_100]
0x47C1B2: push    edx
0x47C1B3: lea     eax, [esp+188h+var_B8]
0x47C1BA: lea     edi, [esi+30h]
0x47C1BD: push    eax
0x47C1BE: mov     ecx, edi
0x47C1C0: call    NiMAtrix33_Multiply
0x47C1C5: mov     ecx, 9
0x47C1CA: mov     esi, eax
0x47C1CC: rep movsd
0x47C1CE: lea     ecx, [esp+184h+var_138]; this
0x47C1D2: mov     byte ptr [esp+184h+var_4], 2
0x47C1DA: call    sub_7016A0
0x47C1DF: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x47C1E4: push    4; int
0x47C1E6: push    18h; unsigned int
0x47C1E8: lea     ecx, [esp+190h+a1]
0x47C1EF: push    ecx; void *
0x47C1F0: mov     byte ptr [esp+194h+var_4], 1
0x47C1F8: call    $LN21
0x47C1FD: mov     edi, [esp+184h+var_160]
0x47C201: movzx   edx, word ptr [ebx+0B6h]
0x47C208: add     edi, 1
0x47C20B: cmp     edi, edx
0x47C20D: mov     [esp+184h+var_160], edi
0x47C211: jb      loc_47C080
0x47C217: mov     eax, [esp+184h+var_16C]
0x47C21B: mov     ecx, [ebp+0]
0x47C21E: push    0
0x47C220: push    eax
0x47C221: push    ebp
0x47C222: push    0
0x47C224: push    ebx
0x47C225: push    ecx
0x47C226: call    sub_479140
0x47C22B: mov     ecx, ds:0B33B00h
0x47C231: add     esp, 18h
0x47C234: call    sub_45A500
0x47C239: test    al, al
0x47C23B: jnz     loc_47C2C3
0x47C241: cmp     [esp+184h+var_16C], 9
0x47C246: jnz     short loc_47C2C3
0x47C248: mov     esi, [ebp+150h]
0x47C24E: cmp     dword ptr [esi+58h], 0
0x47C252: jz      short loc_47C2C3
0x47C254: mov     ecx, ds:0B333C4h
0x47C25A: cmp     esi, ecx
0x47C25C: jnz     short loc_47C29A
0x47C25E: push    1
0x47C260: call    sub_6600D0
0x47C265: cmp     ebp, eax
0x47C267: jnz     short loc_47C29A
0x47C269: mov     eax, [esi+58h]
0x47C26C: mov     edi, [eax]
0x47C26E: mov     ecx, ds:0B333C4h; this
0x47C274: push    esi
0x47C275: push    1; a2
0x47C277: mov     [esp+18Ch+var_160], eax
0x47C27B: add     edi, 150h
0x47C281: call    Player_GetAnimData
0x47C286: push    eax
0x47C287: push    ebp
0x47C288: mov     ecx, esi
0x47C28A: call    Actor_IsWeaponOut
0x47C28F: mov     ecx, [esp+190h+var_160]
0x47C293: mov     edx, [edi]
0x47C295: push    eax
0x47C296: call    edx
0x47C298: jmp     short loc_47C2C3
0x47C29A: mov     eax, [esi+58h]
0x47C29D: mov     edi, [eax]
0x47C29F: push    esi
0x47C2A0: mov     ecx, esi
0x47C2A2: mov     [esp+188h+var_160], eax
0x47C2A6: add     edi, 150h
0x47C2AC: call    TESObjectREFR_GetAnimData
0x47C2B1: push    eax
0x47C2B2: push    ebp
0x47C2B3: mov     ecx, esi
0x47C2B5: call    Actor_IsWeaponOut
0x47C2BA: mov     ecx, [esp+190h+var_160]
0x47C2BE: push    eax
0x47C2BF: mov     eax, [edi]
0x47C2C1: call    eax
0x47C2C3: xor     esi, esi
0x47C2C5: mov     [esp+184h+Src], esi
0x47C2C9: mov     word ptr [esp+184h+var_14C], si
0x47C2CE: mov     word ptr [esp+184h+var_14C+2], si
0x47C2D3: mov     ecx, [esp+184h+var_164]
0x47C2D7: mov     ecx, [ecx+ebp+4Ch]
0x47C2DB: mov     eax, [ecx+0Ch]
0x47C2DE: mov     edx, [ecx]
0x47C2E0: push    eax
0x47C2E1: mov     eax, [edx+0D4h]
0x47C2E7: mov     byte ptr [esp+188h+var_4], 4
0x47C2EF: call    eax
0x47C2F1: mov     ecx, [esp+188h+var_16C]
0x47C2F5: mov     edx, ds:0B06588h[ecx*4]
0x47C2FC: push    eax
0x47C2FD: push    edx; ArgList
0x47C2FE: lea     eax, [esp+190h+Src]
0x47C302: push    offset aSS08x; "%s %s (%08X)"
0x47C307: push    eax; int
0x47C308: call    BSStringT_Static_Format
0x47C30D: mov     ecx, [esp+198h+Src]
0x47C311: mov     edi, [esp+198h+var_15C]
0x47C315: add     esp, 14h
0x47C318: push    ecx; Src
0x47C319: mov     ecx, edi
0x47C31B: call    NiObjectNET_SetName
0x47C320: mov     edx, [esp+184h+var_164]
0x47C324: cmp     byte ptr [edx+ebp+58h], 0
0x47C329: jz      short loc_47C371
0x47C32B: mov     esi, edi
0x47C32D: push    1
0x47C32F: add     esi, 30h ; '0'
0x47C332: mov     ecx, 9
0x47C337: lea     edi, [esp+188h+var_DC]
0x47C33E: rep movsd
0x47C340: lea     eax, [esp+188h+var_DC]
0x47C347: push    eax
0x47C348: lea     ecx, [esp+18Ch+var_B8]
0x47C34F: push    ecx
0x47C350: mov     ecx, [ebp+150h]
0x47C356: call    sub_4D7C50
0x47C35B: mov     edi, [esp+184h+var_15C]
0x47C35F: add     edi, 30h ; '0'
0x47C362: mov     ecx, 9
0x47C367: mov     esi, eax
0x47C369: rep movsd
0x47C36B: mov     edi, [esp+184h+var_15C]
0x47C36F: xor     esi, esi
0x47C371: mov     edx, [ebp+150h]
0x47C377: mov     eax, [esp+184h+var_16C]
0x47C37B: mov     ecx, [esp+184h+var_144]
0x47C37F: push    edx
0x47C380: push    eax
0x47C381: push    ebx
0x47C382: push    ecx
0x47C383: call    sub_478220
0x47C388: add     esp, 10h
0x47C38B: cmp     [esp+184h+var_16C], 0Eh
0x47C390: jnz     short loc_47C3E1
0x47C392: mov     eax, [ebp+150h]
0x47C398: mov     ecx, ds:0B333C4h
0x47C39E: cmp     eax, ecx
0x47C3A0: jnz     short loc_47C3E1
0x47C3A2: add     ecx, 44h ; 'D'
0x47C3A5: call    sub_41E650
0x47C3AA: test    eax, eax
0x47C3AC: mov     ecx, ds:0B333C4h
0x47C3B2: jz      short loc_47C3CE
0x47C3B4: add     ecx, 44h ; 'D'
0x47C3B7: call    sub_41E650
0x47C3BC: mov     ecx, ds:0B333C4h
0x47C3C2: mov     ebx, [eax]
0x47C3C4: push    ebp
0x47C3C5: call    sub_65D770
0x47C3CA: push    eax
0x47C3CB: push    ebx
0x47C3CC: jmp     short loc_47C3D6
0x47C3CE: push    ebp
0x47C3CF: call    sub_65D770
0x47C3D4: push    eax
0x47C3D5: push    esi
0x47C3D6: mov     ecx, ds:0B333C4h
0x47C3DC: call    sub_663870
0x47C3E1: mov     edx, [esp+184h+var_164]
0x47C3E5: cmp     byte ptr [edx+ebp+58h], 0
0x47C3EA: jnz     loc_47C524
0x47C3F0: mov     eax, [edi]
0x47C3F2: mov     edx, [eax+8]
0x47C3F5: mov     ecx, edi
0x47C3F7: call    edx
0x47C3F9: test    eax, eax
0x47C3FB: jz      loc_47C524
0x47C401: mov     eax, [esp+184h+var_12C]
0x47C405: cmp     eax, 0FFFFFFFFh
0x47C408: mov     ebx, [edi+1Ch]
0x47C40B: jnz     short loc_47C479
0x47C40D: mov     eax, [esp+184h+var_148]
0x47C411: mov     ecx, [ebp+150h]; this
0x47C417: mov     esi, [eax]
0x47C419: call    TESObjectREFR_GetName
0x47C41E: mov     edx, [esi]
0x47C420: push    eax
0x47C421: mov     eax, [edx+14h]
0x47C424: mov     ecx, esi
0x47C426: call    eax
0x47C428: push    eax; ArgList
0x47C429: push    offset aTheBipedPartSS; "The biped part '%s' should be skinned f"...
0x47C42E: call    PrintError
0x47C433: add     esp, 0Ch
0x47C436: test    ebx, ebx
0x47C438: push    edi
0x47C439: jz      short loc_47C45E
0x47C43B: mov     edx, [ebx]
0x47C43D: mov     edx, [edx+88h]
0x47C443: lea     eax, [esp+188h+var_124]
0x47C447: push    eax
0x47C448: mov     ecx, ebx
0x47C44A: call    edx
0x47C44C: lea     ecx, [esp+184h+var_124]; this
0x47C450: call    sub_7016A0
0x47C455: xor     edi, edi
0x47C457: xor     esi, esi
0x47C459: jmp     loc_47C524
0x47C45E: lea     ecx, [esp+188h+var_130]
0x47C462: call    sub_405070
0x47C467: lea     ecx, [esp+184h+var_130]; this
0x47C46B: call    sub_7016A0
0x47C470: xor     edi, edi
0x47C472: xor     esi, esi
0x47C474: jmp     loc_47C524
0x47C479: cmp     ebx, esi
0x47C47B: jz      loc_47C504
0x47C481: cmp     eax, 3
0x47C484: jnz     loc_47C524
0x47C48A: mov     eax, ds:0B333C4h
0x47C48F: cmp     [ebp+150h], eax
0x47C495: jnz     loc_47C524
0x47C49B: cmp     byte ptr [esp+184h+var_154], 0
0x47C4A0: jnz     loc_47C524
0x47C4A6: mov     [esp+184h+var_140], esi
0x47C4AA: mov     word ptr [esp+184h+var_13C], si
0x47C4AF: mov     word ptr [esp+184h+var_13C+2], si
0x47C4B4: push    eax
0x47C4B5: mov     eax, [esp+188h+var_164]
0x47C4B9: mov     ecx, [eax+ebp+4Ch]
0x47C4BD: push    esi
0x47C4BE: push    ecx
0x47C4BF: mov     byte ptr [esp+190h+var_4], 5
0x47C4C7: call    sub_4702D0
0x47C4CC: add     esp, 8
0x47C4CF: push    eax
0x47C4D0: push    offset aIcons; "Icons"
0x47C4D5: lea     edx, [esp+190h+var_140]
0x47C4D9: push    offset aSS_1; "\\%s\\%s"
0x47C4DE: push    edx; int
0x47C4DF: call    BSStringT_Static_Format
0x47C4E4: mov     eax, [esp+198h+var_140]
0x47C4E8: push    eax
0x47C4E9: call    sub_57B190
0x47C4EE: add     esp, 18h
0x47C4F1: lea     ecx, [esp+184h+var_140]; void *
0x47C4F5: mov     byte ptr [esp+184h+var_4], 4
0x47C4FD: call    BSStringT_Clear
0x47C502: jmp     short loc_47C524
0x47C504: cmp     [ebp+eax*8+8], esi
0x47C508: jz      short loc_47C510
0x47C50A: mov     ecx, [ebp+eax*8+8]
0x47C50E: jmp     short loc_47C517
0x47C510: cmp     ebx, esi
0x47C512: jz      short loc_47C524
0x47C514: mov     ecx, [ebp+0]
0x47C517: mov     edx, [ecx]
0x47C519: mov     eax, [edx+84h]
0x47C51F: push    1
0x47C521: push    edi
0x47C522: call    eax
0x47C524: mov     edx, [esp+184h+Src]
0x47C528: mov     ecx, [esp+184h+var_164]
0x47C52C: push    edx
0x47C52D: mov     [ecx+ebp+54h], edi
0x47C531: call    FormHeapFree
0x47C536: mov     [esp+188h+Src], esi
0x47C53A: mov     word ptr [esp+188h+var_14C+2], si
0x47C53F: mov     word ptr [esp+188h+var_14C], si
0x47C544: mov     esi, [esp+188h+var_158]
0x47C548: add     esp, 4
0x47C54B: test    esi, esi
0x47C54D: mov     byte ptr [esp+184h+var_4], 0
0x47C555: jz      short loc_47C56F
0x47C557: lea     eax, [esi+4]
0x47C55A: push    eax; lpAddend
0x47C55B: call    dword ptr ds:0A2807Ch
0x47C561: test    eax, eax
0x47C563: jnz     short loc_47C56F
0x47C565: mov     edx, [esi]
0x47C567: mov     eax, [edx]
0x47C569: push    1
0x47C56B: mov     ecx, esi
0x47C56D: call    eax
0x47C56F: mov     ecx, [esp+184h+var_11C]
0x47C573: test    ecx, ecx
0x47C575: mov     [esp+184h+var_4], 0FFFFFFFFh
0x47C580: jz      short loc_47C58A
0x47C582: mov     edx, [ecx]
0x47C584: mov     eax, [edx]
0x47C586: push    1
0x47C588: call    eax
0x47C58A: mov     ecx, [esp+184h+var_118]
0x47C58E: test    ecx, ecx
0x47C590: jz      short def_47BE97; jumptable 0047BE97 default case, cases 3,5,8,10,11
0x47C592: mov     edx, [ecx]
0x47C594: mov     eax, [edx]
0x47C596: push    1
0x47C598: call    eax
0x47C59A: mov     eax, [esp+184h+var_16C]; jumptable 0047BE97 default case, cases 3,5,8,10,11
0x47C59E: add     eax, 1
0x47C5A1: cmp     eax, 10h
0x47C5A4: mov     [esp+184h+var_16C], eax
0x47C5A8: jl      loc_47BCC4
0x47C5AE: mov     ecx, [ebp+150h]
0x47C5B4: mov     ecx, [ecx+3Ch]; this
0x47C5B7: call    NiAVObject_InitializePropertyState
0x47C5BC: mov     edx, [ebp+150h]
0x47C5C2: mov     ecx, [edx+3Ch]
0x47C5C5: call    NiNode_UpdateDynamicEffectState
0x47C5CA: mov     ecx, dword ptr [esp+184h+var_C]
0x47C5D1: mov     large fs:0, ecx
0x47C5D8: pop     ecx
0x47C5D9: pop     edi
0x47C5DA: pop     esi
0x47C5DB: pop     ebp
0x47C5DC: pop     ebx
0x47C5DD: mov     esp, ebp
0x47C5DF: pop     ebp
0x47C5E0: retn
