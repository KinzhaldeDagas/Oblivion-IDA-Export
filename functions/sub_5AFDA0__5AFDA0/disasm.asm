0x5AFDA0: sub     esp, 14h
0x5AFDA3: push    ebx
0x5AFDA4: push    esi
0x5AFDA5: push    edi
0x5AFDA6: push    0; Seed
0x5AFDA8: mov     edi, ecx
0x5AFDAA: call    GetRandomLargeInteger?
0x5AFDAF: mov     esi, eax
0x5AFDB1: mov     eax, ds:0B33EA0h
0x5AFDB6: push    eax; Seed
0x5AFDB7: call    GetRandomLargeInteger?
0x5AFDBC: push    esi; Seed
0x5AFDBD: mov     ds:0B3B3FCh, eax
0x5AFDC2: call    GetRandomLargeInteger?
0x5AFDC7: mov     eax, ds:0B3B3FCh
0x5AFDCC: and     eax, 1
0x5AFDCF: add     esp, 0Ch
0x5AFDD2: cmp     ds:0B3B400h, eax
0x5AFDD8: jg      short loc_5AFDDD
0x5AFDDA: add     eax, 1
0x5AFDDD: mov     ecx, ds:0B333C4h
0x5AFDE3: mov     edx, [ecx]
0x5AFDE5: mov     ds:0B3B400h, eax
0x5AFDEA: mov     eax, [edx+284h]
0x5AFDF0: push    1Eh
0x5AFDF2: call    eax
0x5AFDF4: cmp     eax, 64h ; 'd'
0x5AFDF7: jle     short loc_5AFE00
0x5AFDF9: mov     eax, 64h ; 'd'
0x5AFDFE: jmp     short loc_5AFE12
0x5AFE00: mov     ecx, ds:0B333C4h
0x5AFE06: mov     edx, [ecx]
0x5AFE08: mov     eax, [edx+284h]
0x5AFE0E: push    1Eh
0x5AFE10: call    eax
0x5AFE12: xor     esi, esi
0x5AFE14: cmp     eax, 0Ah
0x5AFE17: mov     [esp+20h+var_14], eax
0x5AFE1B: jl      short loc_5AFE87
0x5AFE1D: cmp     eax, 14h
0x5AFE20: jge     short loc_5AFE29
0x5AFE22: mov     esi, 1
0x5AFE27: jmp     short loc_5AFE87
0x5AFE29: cmp     eax, 1Eh
0x5AFE2C: jge     short loc_5AFE35
0x5AFE2E: mov     esi, 2
0x5AFE33: jmp     short loc_5AFE87
0x5AFE35: cmp     eax, 28h ; '('
0x5AFE38: jge     short loc_5AFE41
0x5AFE3A: mov     esi, 3
0x5AFE3F: jmp     short loc_5AFE87
0x5AFE41: cmp     eax, 32h ; '2'
0x5AFE44: jge     short loc_5AFE4D
0x5AFE46: mov     esi, 4
0x5AFE4B: jmp     short loc_5AFE87
0x5AFE4D: cmp     eax, 3Ch ; '<'
0x5AFE50: jge     short loc_5AFE59
0x5AFE52: mov     esi, 5
0x5AFE57: jmp     short loc_5AFE87
0x5AFE59: cmp     eax, 46h ; 'F'
0x5AFE5C: jge     short loc_5AFE65
0x5AFE5E: mov     esi, 6
0x5AFE63: jmp     short loc_5AFE87
0x5AFE65: cmp     eax, 50h ; 'P'
0x5AFE68: jge     short loc_5AFE71
0x5AFE6A: mov     esi, 7
0x5AFE6F: jmp     short loc_5AFE87
0x5AFE71: cmp     eax, 5Ah ; 'Z'
0x5AFE74: jge     short loc_5AFE7D
0x5AFE76: mov     esi, 8
0x5AFE7B: jmp     short loc_5AFE87
0x5AFE7D: cmp     eax, 64h ; 'd'
0x5AFE80: jg      short loc_5AFE87
0x5AFE82: mov     esi, 9
0x5AFE87: mov     ecx, [edi+48h]
0x5AFE8A: push    ecx
0x5AFE8B: call    GetLockLevel
0x5AFE90: add     esp, 4
0x5AFE93: cmp     eax, 4; switch 5 cases
0x5AFE96: ja      def_5AFE9C
0x5AFE9C: jmp     ds:jpt_5AFE9C[eax*4]; switch jump
0x5AFEA3: test    esi, esi; jumptable 005AFE9C case 0
0x5AFEA5: jle     short loc_5AFEF4
0x5AFEA7: fild    [esp+20h+var_14]
0x5AFEAB: lea     eax, [esi+esi*4]
0x5AFEAE: add     eax, eax
0x5AFEB0: sub     esp, 14h
0x5AFEB3: fstp    [esp+34h+var_24]; float
0x5AFEB7: mov     [esp+34h+var_10], eax
0x5AFEBB: add     eax, 0Ah
0x5AFEBE: mov     [esp+34h+var_14], eax
0x5AFEC2: fild    [esp+34h+var_14]
0x5AFEC6: fstp    [esp+34h+var_28]; float
0x5AFECA: fild    [esp+34h+var_10]
0x5AFECE: fstp    [esp+34h+var_2C]; float
0x5AFED2: fld     dword ptr ds:0B14198h[esi*4]
0x5AFED9: fstp    [esp+34h+var_30]; float
0x5AFEDD: fld     dword ptr ds:0B14194h[esi*4]
0x5AFEE4: fstp    [esp+34h+var_34]; float
0x5AFEE7: call    sub_410EB0
0x5AFEEC: add     esp, 14h
0x5AFEEF: jmp     loc_5B006A
0x5AFEF4: fld     dword ptr ds:0B14198h[esi*4]
0x5AFEFB: jmp     loc_5B006A
0x5AFF00: test    esi, esi; jumptable 005AFE9C case 1
0x5AFF02: jle     short loc_5AFF51
0x5AFF04: fild    [esp+20h+var_14]
0x5AFF08: lea     eax, [esi+esi*4]
0x5AFF0B: add     eax, eax
0x5AFF0D: sub     esp, 14h
0x5AFF10: fstp    [esp+34h+var_24]; float
0x5AFF14: mov     [esp+34h+var_10], eax
0x5AFF18: add     eax, 0Ah
0x5AFF1B: mov     [esp+34h+var_14], eax
0x5AFF1F: fild    [esp+34h+var_14]
0x5AFF23: fstp    [esp+34h+var_28]; float
0x5AFF27: fild    [esp+34h+var_10]
0x5AFF2B: fstp    [esp+34h+var_2C]; float
0x5AFF2F: fld     dword ptr ds:0B141C0h[esi*4]
0x5AFF36: fstp    [esp+34h+var_30]; float
0x5AFF3A: fld     dword ptr ds:0B141BCh[esi*4]
0x5AFF41: fstp    [esp+34h+var_34]; float
0x5AFF44: call    sub_410EB0
0x5AFF49: add     esp, 14h
0x5AFF4C: jmp     loc_5B006A
0x5AFF51: fld     dword ptr ds:0B141C0h[esi*4]
0x5AFF58: jmp     loc_5B006A
0x5AFF5D: test    esi, esi; jumptable 005AFE9C case 2
0x5AFF5F: jle     short loc_5AFFAE
0x5AFF61: fild    [esp+20h+var_14]
0x5AFF65: lea     eax, [esi+esi*4]
0x5AFF68: add     eax, eax
0x5AFF6A: sub     esp, 14h
0x5AFF6D: fstp    [esp+34h+var_24]; float
0x5AFF71: mov     [esp+34h+var_10], eax
0x5AFF75: add     eax, 0Ah
0x5AFF78: mov     [esp+34h+var_14], eax
0x5AFF7C: fild    [esp+34h+var_14]
0x5AFF80: fstp    [esp+34h+var_28]; float
0x5AFF84: fild    [esp+34h+var_10]
0x5AFF88: fstp    [esp+34h+var_2C]; float
0x5AFF8C: fld     dword ptr ds:0B141E8h[esi*4]
0x5AFF93: fstp    [esp+34h+var_30]; float
0x5AFF97: fld     dword ptr ds:0B141E4h[esi*4]
0x5AFF9E: fstp    [esp+34h+var_34]; float
0x5AFFA1: call    sub_410EB0
0x5AFFA6: add     esp, 14h
0x5AFFA9: jmp     loc_5B006A
0x5AFFAE: fld     dword ptr ds:0B141E8h[esi*4]
0x5AFFB5: jmp     loc_5B006A
0x5AFFBA: test    esi, esi; jumptable 005AFE9C case 3
0x5AFFBC: jle     short loc_5B0008
0x5AFFBE: fild    [esp+20h+var_14]
0x5AFFC2: lea     eax, [esi+esi*4]
0x5AFFC5: add     eax, eax
0x5AFFC7: sub     esp, 14h
0x5AFFCA: fstp    [esp+34h+var_24]; float
0x5AFFCE: mov     [esp+34h+var_10], eax
0x5AFFD2: add     eax, 0Ah
0x5AFFD5: mov     [esp+34h+var_14], eax
0x5AFFD9: fild    [esp+34h+var_14]
0x5AFFDD: fstp    [esp+34h+var_28]; float
0x5AFFE1: fild    [esp+34h+var_10]
0x5AFFE5: fstp    [esp+34h+var_2C]; float
0x5AFFE9: fld     dword ptr ds:0B14210h[esi*4]
0x5AFFF0: fstp    [esp+34h+var_30]; float
0x5AFFF4: fld     dword ptr ds:0B1420Ch[esi*4]
0x5AFFFB: fstp    [esp+34h+var_34]; float
0x5AFFFE: call    sub_410EB0
0x5B0003: add     esp, 14h
0x5B0006: jmp     short loc_5B006A
0x5B0008: fld     dword ptr ds:0B14210h[esi*4]
0x5B000F: jmp     short loc_5B006A
0x5B0011: test    esi, esi; jumptable 005AFE9C case 4
0x5B0013: jle     short loc_5B005F
0x5B0015: fild    [esp+20h+var_14]
0x5B0019: lea     eax, [esi+esi*4]
0x5B001C: add     eax, eax
0x5B001E: sub     esp, 14h
0x5B0021: fstp    [esp+34h+var_24]; float
0x5B0025: mov     [esp+34h+var_10], eax
0x5B0029: add     eax, 0Ah
0x5B002C: mov     [esp+34h+var_14], eax
0x5B0030: fild    [esp+34h+var_14]
0x5B0034: fstp    [esp+34h+var_28]; float
0x5B0038: fild    [esp+34h+var_10]
0x5B003C: fstp    [esp+34h+var_2C]; float
0x5B0040: fld     dword ptr ds:0B14238h[esi*4]
0x5B0047: fstp    [esp+34h+var_30]; float
0x5B004B: fld     dword ptr ds:0B14234h[esi*4]
0x5B0052: fstp    [esp+34h+var_34]; float
0x5B0055: call    sub_410EB0
0x5B005A: add     esp, 14h
0x5B005D: jmp     short loc_5B006A
0x5B005F: fld     dword ptr ds:0B14238h[esi*4]
0x5B0066: jmp     short loc_5B006A
