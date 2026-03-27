0x63BA30: sub     esp, 48h
0x63BA33: push    ebx
0x63BA34: mov     ebx, [esp+4Ch+arg_0]
0x63BA38: test    ebx, ebx
0x63BA3A: push    ebp
0x63BA3B: push    esi
0x63BA3C: push    edi
0x63BA3D: mov     esi, ecx
0x63BA3F: jz      loc_63C697
0x63BA45: fldz
0x63BA47: mov     byte ptr [esi+228h], 0
0x63BA4E: fstp    dword ptr [esi+22Ch]
0x63BA54: fld     dword ptr ds:0A30634h
0x63BA5A: fstp    dword ptr [esi+0BCh]
0x63BA60: mov     eax, ds:0B33398h
0x63BA65: mov     ecx, [eax+24h]
0x63BA68: call    sub_6AC3D0
0x63BA6D: fldz
0x63BA6F: mov     edx, [esi]
0x63BA71: fstp    dword ptr [esi+1D8h]
0x63BA77: mov     eax, [edx+184h]
0x63BA7D: mov     ecx, esi
0x63BA7F: call    eax
0x63BA81: mov     edx, [ebx]
0x63BA83: mov     ebp, eax
0x63BA85: mov     eax, [edx+190h]
0x63BA8B: mov     ecx, ebx
0x63BA8D: xor     edi, edi
0x63BA8F: call    eax
0x63BA91: test    al, al
0x63BA93: jz      short loc_63BA97
0x63BA95: mov     edi, ebx
0x63BA97: mov     edx, [edi]
0x63BA99: mov     eax, [edx+1F8h]
0x63BA9F: mov     ecx, edi
0x63BAA1: call    eax
0x63BAA3: test    al, al
0x63BAA5: jnz     short loc_63BAB7
0x63BAA7: fldz
0x63BAA9: mov     edx, [esi]
0x63BAAB: mov     eax, [edx+364h]
0x63BAB1: push    ecx
0x63BAB2: fstp    [esp+5Ch+var_5C]
0x63BAB5: jmp     short loc_63BAC7
0x63BAB7: mov     ecx, edi
0x63BAB9: call    sub_5E9E70
0x63BABE: mov     edx, [esi]
0x63BAC0: mov     eax, [edx+23Ch]
0x63BAC6: push    edi
0x63BAC7: mov     ecx, esi
0x63BAC9: call    eax
0x63BACB: mov     ecx, ds:0B333C4h
0x63BAD1: call    sub_65DA10
0x63BAD6: fldz
0x63BAD8: fcomp   dword ptr [esi+260h]
0x63BADE: mov     [esp+58h+var_45], 1
0x63BAE3: mov     byte ptr [esp+58h+var_44], 0
0x63BAE8: fnstsw  ax
0x63BAEA: test    ah, 44h
0x63BAED: jnp     loc_63BB87
0x63BAF3: mov     ecx, offset TimeGlobals
0x63BAF8: call    TimeGlobals_GetGameHour
0x63BAFD: fstp    [esp+58h+var_40]
0x63BB01: fld     [esp+58h+var_40]
0x63BB05: fsub    dword ptr [esi+0Ch]
0x63BB08: fstp    [esp+58h+var_40]
0x63BB0C: fld     [esp+58h+var_40]
0x63BB10: fabs
0x63BB12: fstp    [esp+58h+var_40]
0x63BB16: fld     [esp+58h+var_40]
0x63BB1A: fmul    qword ptr ds:0A309F0h
0x63BB20: fstp    [esp+58h+var_40]
0x63BB24: fld     [esp+58h+var_40]
0x63BB28: fld     dword ptr [esi+260h]
0x63BB2E: fcompp
0x63BB30: fnstsw  ax
0x63BB32: test    ah, 41h
0x63BB35: jp      short loc_63BB87
0x63BB37: mov     edx, [esi]
0x63BB39: fldz
0x63BB3B: mov     eax, [edx+188h]
0x63BB41: fstp    dword ptr [esi+1ACh]
0x63BB47: push    3
0x63BB49: push    edi
0x63BB4A: mov     ecx, esi
0x63BB4C: mov     byte ptr [esp+60h+var_44], 1
0x63BB51: call    eax
0x63BB53: push    400h
0x63BB58: lea     ebx, [edi+44h]
0x63BB5B: push    ebx
0x63BB5C: push    ebp
0x63BB5D: call    Script_AddEventToExtraScript
0x63BB62: add     esp, 0Ch
0x63BB65: test    ebp, ebp
0x63BB67: jz      short loc_63BB87
0x63BB69: mov     ecx, ebp
0x63BB6B: call    sub_565DF0
0x63BB70: test    al, al
0x63BB72: jz      short loc_63BB87
0x63BB74: mov     ecx, offset TimeGlobals
0x63BB79: call    TimeGlobals_GetGameDay
0x63BB7E: mov     ecx, ebx
0x63BB80: push    eax
0x63BB81: push    ebp
0x63BB82: call    sub_41FFC0
0x63BB87: mov     eax, [esp+58h+var_44]
0x63BB8B: mov     edx, [esi]
0x63BB8D: mov     edx, [edx+18h]
0x63BB90: push    eax
0x63BB91: push    edi
0x63BB92: mov     ecx, esi
0x63BB94: call    edx
0x63BB96: test    al, al
0x63BB98: jz      short loc_63BC00
0x63BB9A: mov     eax, [edi]
0x63BB9C: mov     edx, [eax+380h]
0x63BBA2: mov     ecx, edi
0x63BBA4: call    edx
0x63BBA6: test    eax, eax
0x63BBA8: jz      short loc_63BC00
0x63BBAA: mov     eax, [esi+8]
0x63BBAD: mov     ecx, [eax+1Ch]
0x63BBB0: shr     ecx, 17h
0x63BBB3: test    cl, 1
0x63BBB6: jnz     short loc_63BC00
0x63BBB8: mov     edx, [edi]
0x63BBBA: mov     eax, [edx+380h]
0x63BBC0: mov     ecx, edi
0x63BBC2: call    eax
0x63BBC4: mov     ecx, eax
0x63BBC6: call    sub_5E9A60
0x63BBCB: test    al, al
0x63BBCD: jnz     short loc_63BBEA
0x63BBCF: mov     edx, [edi]
0x63BBD1: mov     eax, [edx+380h]
0x63BBD7: mov     ecx, edi
0x63BBD9: call    eax
0x63BBDB: mov     ecx, eax; int
0x63BBDD: call    sub_5F80D0
0x63BBE2: fldz
0x63BBE4: fstp    dword ptr [esi+1A8h]
0x63BBEA: mov     edx, [edi]
0x63BBEC: mov     eax, [edx+230h]
0x63BBF2: mov     ecx, edi
0x63BBF4: call    eax
0x63BBF6: pop     edi
0x63BBF7: pop     esi
0x63BBF8: pop     ebp
0x63BBF9: pop     ebx
0x63BBFA: add     esp, 48h
0x63BBFD: retn    8
0x63BC00: mov     edx, [esi]
0x63BC02: mov     eax, [edx+574h]
0x63BC08: mov     ecx, esi
0x63BC0A: call    eax
0x63BC0C: mov     edx, [esi]
0x63BC0E: mov     eax, [edx+184h]
0x63BC14: mov     ecx, esi
0x63BC16: call    eax
0x63BC18: test    eax, eax
0x63BC1A: jz      def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BC20: cmp     dword ptr [eax+18h], 0FFFFFFFFh
0x63BC24: jz      def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BC2A: lea     ebx, [ebx+0]
0x63BC30: mov     edx, [esi]
0x63BC32: mov     eax, [edx+184h]
0x63BC38: mov     ecx, esi
0x63BC3A: call    eax
0x63BC3C: mov     ebp, eax
0x63BC3E: test    ebp, ebp
0x63BC40: jz      def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BC46: mov     edx, [esi]
0x63BC48: mov     eax, [edx+180h]
0x63BC4E: mov     ebx, [ebp+18h]
0x63BC51: mov     ecx, esi
0x63BC53: call    eax
0x63BC55: mov     ecx, ds:0B152B0h[ebx*4]
0x63BC5C: mov     eax, [ecx+eax*4]
0x63BC5F: cmp     eax, 2Ch; switch 45 cases
0x63BC62: ja      def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BC68: movzx   edx, ds:byte_63C6FC[eax]
0x63BC6F: jmp     ds:jpt_63BC6F[edx*4]; switch jump
0x63BC76: mov     eax, [esi]; jumptable 0063BC6F case 2
0x63BC78: fld     [esp+58h+arg_4]
0x63BC7C: mov     edx, [eax+6Ch]
0x63BC7F: push    ecx
0x63BC80: fstp    [esp+5Ch+var_5C]
0x63BC83: push    edi
0x63BC84: mov     ecx, esi
0x63BC86: call    edx
0x63BC88: mov     [esp+58h+var_45], al
0x63BC8C: jmp     loc_63BE9D
0x63BC91: cmp     dword ptr [esi+2Ch], 0; jumptable 0063BC6F case 13
0x63BC95: jnz     short loc_63BCA4
0x63BC97: mov     eax, [esi]
0x63BC99: mov     edx, [eax+558h]
0x63BC9F: push    edi
0x63BCA0: mov     ecx, esi
0x63BCA2: call    edx
0x63BCA4: mov     ecx, [esi+2Ch]
0x63BCA7: test    ecx, ecx
0x63BCA9: jnz     short loc_63BCBF
0x63BCAB: mov     eax, [esi]
0x63BCAD: mov     edx, [eax+188h]
0x63BCB3: push    1
0x63BCB5: push    edi
0x63BCB6: mov     ecx, esi
0x63BCB8: call    edx
0x63BCBA: jmp     loc_63BE9D
0x63BCBF: cmp     byte ptr [ebp+20h], 1
0x63BCC3: jnz     short loc_63BCF0
0x63BCC5: mov     ecx, ds:0B333C4h
0x63BCCB: call    sub_663A00
0x63BCD0: cmp     eax, ds:0B36A80h
0x63BCD6: jge     def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BCDC: mov     eax, [esi]
0x63BCDE: mov     edx, [eax+188h]
0x63BCE4: push    1
0x63BCE6: push    edi
0x63BCE7: mov     ecx, esi
0x63BCE9: call    edx
0x63BCEB: jmp     loc_63BE9D
0x63BCF0: mov     eax, [ecx+8]
0x63BCF3: mov     edx, eax
0x63BCF5: shr     edx, 5
0x63BCF8: test    dl, 1
0x63BCFB: jnz     loc_63C393
0x63BD01: shr     eax, 0Bh
0x63BD04: test    al, 1
0x63BD06: jnz     loc_63C393
0x63BD0C: mov     eax, [ecx]
0x63BD0E: mov     edx, [eax+198h]
0x63BD14: push    1
0x63BD16: call    edx
0x63BD18: test    al, al
0x63BD1A: mov     ecx, ebp
0x63BD1C: jnz     loc_63C36E
0x63BD22: call    sub_566DB0
0x63BD27: test    eax, eax
0x63BD29: mov     [esp+58h+var_40], eax
0x63BD2D: fild    [esp+58h+var_40]
0x63BD31: jge     short loc_63BD39
0x63BD33: fadd    dword ptr ds:0A2FC78h
0x63BD39: fstp    [esp+58h+var_44]
0x63BD3D: fld1
0x63BD3F: fcomp   [esp+58h+var_44]
0x63BD43: fnstsw  ax
0x63BD45: test    ah, 41h
0x63BD48: jnz     short loc_63BD54
0x63BD4A: fld     dword ptr ds:0A57A64h
0x63BD50: fstp    [esp+58h+var_44]
0x63BD54: mov     eax, [esi+2Ch]
0x63BD57: push    0
0x63BD59: push    eax
0x63BD5A: mov     ecx, edi
0x63BD5C: call    TesObjectREF_GetDistance
0x63BD61: fld     [esp+58h+var_44]
0x63BD65: fcompp
0x63BD67: fnstsw  ax
0x63BD69: test    ah, 1
0x63BD6C: jnz     def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BD72: jmp     loc_63BE8E
0x63BD77: mov     edx, [esi]; jumptable 0063BC6F case 17
0x63BD79: mov     eax, [edx+84h]
0x63BD7F: push    1
0x63BD81: push    ebp
0x63BD82: push    edi
0x63BD83: mov     ecx, esi
0x63BD85: call    eax
0x63BD87: jmp     loc_63BE8E
0x63BD8C: fld     [esp+58h+arg_4]; jumptable 0063BC6F case 4
0x63BD90: push    ecx
0x63BD91: fstp    [esp+5Ch+var_5C]
0x63BD94: push    edi
0x63BD95: mov     ecx, esi
0x63BD97: call    sub_6284B0
0x63BD9C: mov     [esp+58h+var_45], al
0x63BDA0: jmp     loc_63BE9D
0x63BDA5: fld     [esp+58h+arg_4]; jumptable 0063BC6F case 5
0x63BDA9: push    ecx
0x63BDAA: fstp    [esp+5Ch+var_5C]
0x63BDAD: push    edi
0x63BDAE: mov     ecx, esi
0x63BDB0: call    sub_628520
0x63BDB5: mov     [esp+58h+var_45], al
0x63BDB9: jmp     loc_63BE9D
0x63BDBE: mov     edx, [esi]; jumptable 0063BC6F case 6
0x63BDC0: mov     eax, [edx+36Ch]
0x63BDC6: mov     ecx, esi
0x63BDC8: call    eax
0x63BDCA: test    eax, eax
0x63BDCC: jz      short loc_63BDEB
0x63BDCE: mov     edx, [edi]
0x63BDD0: mov     eax, [edx+380h]
0x63BDD6: mov     ecx, edi
0x63BDD8: call    eax
0x63BDDA: test    eax, eax
0x63BDDC: jnz     short loc_63BDEB
0x63BDDE: mov     edx, [esi]
0x63BDE0: mov     eax, [edx+1B0h]
0x63BDE6: push    edi
0x63BDE7: mov     ecx, esi
0x63BDE9: call    eax
0x63BDEB: fld     [esp+58h+arg_4]
0x63BDEF: push    1
0x63BDF1: push    ecx
0x63BDF2: fstp    [esp+60h+var_60]
0x63BDF5: push    edi
0x63BDF6: mov     ecx, esi
0x63BDF8: call    sub_630D40
0x63BDFD: mov     [esp+58h+var_45], al
0x63BE01: jmp     loc_63BE9D
0x63BE06: mov     edx, [esi]; jumptable 0063BC6F case 7
0x63BE08: mov     eax, [edx+36Ch]
0x63BE0E: mov     ecx, esi
0x63BE10: call    eax
0x63BE12: test    eax, eax
0x63BE14: jz      short loc_63BE33
0x63BE16: mov     edx, [edi]
0x63BE18: mov     eax, [edx+380h]
0x63BE1E: mov     ecx, edi
0x63BE20: call    eax
0x63BE22: test    eax, eax
0x63BE24: jnz     short loc_63BE33
0x63BE26: mov     edx, [esi]
0x63BE28: mov     eax, [edx+1B0h]
0x63BE2E: push    edi
0x63BE2F: mov     ecx, esi
0x63BE31: call    eax
0x63BE33: fld     [esp+58h+arg_4]
0x63BE37: push    ecx
0x63BE38: fstp    [esp+5Ch+var_5C]
0x63BE3B: push    edi
0x63BE3C: mov     ecx, esi
0x63BE3E: call    sub_630400
0x63BE43: mov     [esp+58h+var_45], al
0x63BE47: jmp     short loc_63BE9D
0x63BE49: mov     edx, [esi]; jumptable 0063BC6F case 9
0x63BE4B: mov     eax, [edx+36Ch]
0x63BE51: mov     ecx, esi
0x63BE53: call    eax
0x63BE55: test    eax, eax
0x63BE57: jz      short loc_63BE66
0x63BE59: mov     edx, [esi]
0x63BE5B: mov     eax, [edx+1B0h]
0x63BE61: push    edi
0x63BE62: mov     ecx, esi
0x63BE64: call    eax
0x63BE66: mov     edx, [esi]
0x63BE68: fld     [esp+58h+arg_4]
0x63BE6C: mov     eax, [edx+56Ch]
0x63BE72: push    ecx
0x63BE73: fstp    [esp+5Ch+var_5C]
0x63BE76: push    edi
0x63BE77: mov     ecx, esi
0x63BE79: call    eax
0x63BE7B: mov     [esp+58h+var_45], al
0x63BE7F: jmp     short loc_63BE9D
0x63BE81: mov     edx, [esi]; jumptable 0063BC6F case 22
0x63BE83: mov     eax, [edx+1B0h]
0x63BE89: push    edi
0x63BE8A: mov     ecx, esi
0x63BE8C: call    eax
0x63BE8E: mov     edx, [esi]
0x63BE90: mov     eax, [edx+188h]
0x63BE96: push    1
0x63BE98: push    edi
0x63BE99: mov     ecx, esi
0x63BE9B: call    eax
0x63BE9D: cmp     [esp+58h+var_45], 0
0x63BEA2: jnz     loc_63BC30
0x63BEA8: jmp     short def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BEAA: fld     dword ptr ds:0A30634h; jumptable 0063BC6F case 0
0x63BEB0: push    ecx
0x63BEB1: fstp    [esp+5Ch+var_5C]; float
0x63BEB4: push    0; char
0x63BEB6: push    edi; int
0x63BEB7: mov     ecx, ebp
0x63BEB9: call    sub_566DC0
0x63BEBE: test    al, al
0x63BEC0: jz      loc_63BFB5
0x63BEC6: mov     edx, [esi]
0x63BEC8: mov     eax, [edx+188h]
0x63BECE: push    1
0x63BED0: push    edi
0x63BED1: mov     ecx, esi
0x63BED3: call    eax
0x63BED5: mov     ebp, [ebp+24h]
0x63BED8: test    ebp, ebp
0x63BEDA: jz      short def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BEDC: mov     ecx, ebp
0x63BEDE: call    sub_569740
0x63BEE3: cmp     eax, 3
0x63BEE6: jnz     short def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BEE8: mov     ecx, esi
0x63BEEA: call    sub_64ADA0
0x63BEEF: test    al, al
0x63BEF1: jnz     short def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BEF3: mov     edx, [edi]
0x63BEF5: mov     edx, [edx+0F0h]
0x63BEFB: lea     eax, [esp+58h+var_30]
0x63BEFF: push    eax
0x63BF00: mov     ecx, edi
0x63BF02: call    edx
0x63BF04: fld     dword ptr [eax+8]
0x63BF07: mov     eax, [edi]
0x63BF09: fstp    [esp+58h+arg_4]
0x63BF0D: fld     [esp+58h+arg_4]
0x63BF11: mov     edx, [eax+1E8h]
0x63BF17: push    ecx
0x63BF18: fstp    [esp+5Ch+var_5C]
0x63BF1B: mov     ecx, edi
0x63BF1D: call    edx
0x63BF1F: mov     ecx, edi; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63BF21: call    Actor__GetProcessLevel
0x63BF26: test    eax, eax
0x63BF28: jnz     loc_63C66C
0x63BF2E: mov     edx, [esi]
0x63BF30: mov     eax, [edx+184h]
0x63BF36: mov     ecx, esi
0x63BF38: call    eax
0x63BF3A: mov     ebx, eax
0x63BF3C: test    ebx, ebx
0x63BF3E: jz      loc_63C66C
0x63BF44: mov     edx, [esi]
0x63BF46: mov     eax, [edx+180h]
0x63BF4C: mov     ebp, [ebx+18h]
0x63BF4F: mov     ecx, esi
0x63BF51: call    eax
0x63BF53: mov     ecx, ds:0B152B0h[ebp*4]
0x63BF5A: cmp     dword ptr [ecx+eax*4], 2Ch ; ','
0x63BF5E: jnz     loc_63C66C
0x63BF64: cmp     dword ptr [esi+0C0h], 0
0x63BF6B: jnz     short loc_63BF75
0x63BF6D: fldz
0x63BF6F: fstp    dword ptr [esi+260h]
0x63BF75: mov     ecx, [ebx+18h]
0x63BF78: test    ecx, ecx
0x63BF7A: jnz     loc_63C3C4
0x63BF80: fld     dword ptr ds:0A30634h
0x63BF86: push    ecx
0x63BF87: fstp    [esp+5Ch+var_5C]; float
0x63BF8A: push    0; char
0x63BF8C: push    edi; int
0x63BF8D: mov     ecx, ebx
0x63BF8F: call    sub_566DC0
0x63BF94: test    al, al
0x63BF96: jnz     loc_63C3E9
0x63BF9C: mov     edx, [esi]
0x63BF9E: mov     eax, [edx+188h]
0x63BFA4: push    0FFFFFFFFh
0x63BFA6: push    edi
0x63BFA7: mov     ecx, esi
0x63BFA9: call    eax
0x63BFAB: pop     edi
0x63BFAC: pop     esi
0x63BFAD: pop     ebp
0x63BFAE: pop     ebx
0x63BFAF: add     esp, 48h
0x63BFB2: retn    8
0x63BFB5: mov     ecx, [ebp+24h]
0x63BFB8: test    ecx, ecx
0x63BFBA: mov     [esp+58h+var_44], 0
0x63BFC2: jz      short loc_63BFCD
0x63BFC4: call    sub_5697E0
0x63BFC9: mov     [esp+58h+var_44], eax
0x63BFCD: mov     eax, [esi+30h]
0x63BFD0: test    eax, eax
0x63BFD2: jz      short loc_63BFE1
0x63BFD4: cmp     dword ptr [esi+0C0h], 0
0x63BFDB: jnz     short loc_63BFE1
0x63BFDD: mov     [esp+58h+var_44], eax
0x63BFE1: mov     eax, [esi]
0x63BFE3: mov     edx, [eax+36Ch]
0x63BFE9: mov     ecx, esi
0x63BFEB: call    edx
0x63BFED: test    eax, eax
0x63BFEF: jz      short loc_63C01D
0x63BFF1: fld     dword ptr ds:0A30634h
0x63BFF7: push    ecx
0x63BFF8: fstp    [esp+5Ch+var_5C]; float
0x63BFFB: push    0; char
0x63BFFD: push    edi; int
0x63BFFE: mov     ecx, edi
0x63C000: call    sub_5E0380
0x63C005: mov     ecx, eax
0x63C007: call    sub_566DC0
0x63C00C: test    al, al
0x63C00E: jnz     short loc_63C01D
0x63C010: mov     eax, [esi]
0x63C012: mov     edx, [eax+1B0h]
0x63C018: push    edi
0x63C019: mov     ecx, esi
0x63C01B: call    edx
0x63C01D: mov     ebx, [esi]
0x63C01F: push    1
0x63C021: push    edi
0x63C022: mov     ecx, ebp
0x63C024: add     ebx, 418h
0x63C02A: call    sub_5677B0
0x63C02F: sub     esp, 8
0x63C032: fstp    [esp+60h+var_5C]
0x63C036: mov     ecx, ebp
0x63C038: fld     [esp+60h+arg_4]
0x63C03C: fstp    [esp+60h+var_60]
0x63C03F: push    edi
0x63C040: call    sub_566940
0x63C045: push    eax
0x63C046: push    edi
0x63C047: mov     ecx, ebp
0x63C049: call    sub_566A40
0x63C04E: push    eax
0x63C04F: push    edi
0x63C050: lea     eax, [esp+6Ch+var_24]
0x63C054: push    eax
0x63C055: mov     ecx, ebp
0x63C057: call    sub_566B30
0x63C05C: mov     edx, [ebx]
0x63C05E: push    eax
0x63C05F: push    edi
0x63C060: mov     ecx, esi
0x63C062: call    edx
0x63C064: mov     ecx, [edi+58h]
0x63C067: mov     eax, [ecx]
0x63C069: mov     edx, [eax+8]
0x63C06C: call    edx
0x63C06E: test    eax, eax
0x63C070: jnz     def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C076: fld     dword ptr ds:0A30634h
0x63C07C: push    ecx
0x63C07D: fstp    [esp+5Ch+var_5C]; float
0x63C080: push    eax; char
0x63C081: push    edi; int
0x63C082: mov     ecx, ebp
0x63C084: call    sub_566DC0
0x63C089: test    al, al
0x63C08B: jz      def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C091: cmp     byte ptr [esi+84h], 0
0x63C098: jnz     short loc_63C0F3
0x63C09A: mov     ecx, ebp
0x63C09C: call    sub_565DD0
0x63C0A1: test    al, al
0x63C0A3: jz      short loc_63C0EC
0x63C0A5: mov     eax, [edi]
0x63C0A7: fld     dword ptr ds:0A5B6C0h
0x63C0AD: mov     edx, [eax+174h]
0x63C0B3: push    edi; a7
0x63C0B4: push    offset sub_645A30; a6
0x63C0B9: push    ecx
0x63C0BA: mov     ecx, edi
0x63C0BC: fstp    [esp+64h+a5]; a5
0x63C0BF: call    edx
0x63C0C1: fld     dword ptr ds:0A5B6C0h
0x63C0C7: push    eax; a4
0x63C0C8: mov     eax, [edi]
0x63C0CA: mov     edx, [eax+174h]
0x63C0D0: push    ecx
0x63C0D1: mov     ecx, edi
0x63C0D3: fstp    [esp+6Ch+a3]; a3
0x63C0D6: call    edx
0x63C0D8: push    eax; a2
0x63C0D9: mov     ecx, edi; this
0x63C0DB: call    TESObjectREFR_GetParentCell
0x63C0E0: mov     ecx, ds:0B33A98h
0x63C0E6: push    eax; a1
0x63C0E7: call    sub_446B90
0x63C0EC: mov     byte ptr [esi+84h], 1
0x63C0F3: mov     ecx, ebp
0x63C0F5: call    sub_565DE0
0x63C0FA: test    al, al
0x63C0FC: jz      short loc_63C145
0x63C0FE: mov     eax, [edi]
0x63C100: fld     dword ptr ds:0A5B6C0h
0x63C106: mov     edx, [eax+174h]
0x63C10C: push    edi; a7
0x63C10D: push    offset sub_645AF0; a6
0x63C112: push    ecx
0x63C113: mov     ecx, edi
0x63C115: fstp    [esp+64h+a5]; a5
0x63C118: call    edx
0x63C11A: fld     dword ptr ds:0A5B6C0h
0x63C120: push    eax; a4
0x63C121: mov     eax, [edi]
0x63C123: mov     edx, [eax+174h]
0x63C129: push    ecx
0x63C12A: mov     ecx, edi
0x63C12C: fstp    [esp+6Ch+a3]; a3
0x63C12F: call    edx
0x63C131: push    eax; a2
0x63C132: mov     ecx, edi; this
0x63C134: call    TESObjectREFR_GetParentCell
0x63C139: mov     ecx, ds:0B33A98h
0x63C13F: push    eax; a1
0x63C140: call    sub_446B90
0x63C145: mov     eax, [esi]
0x63C147: mov     edx, [eax+188h]
0x63C14D: push    1
0x63C14F: push    edi
0x63C150: mov     ecx, esi
0x63C152: call    edx
0x63C154: mov     ebx, [esp+58h+var_44]
0x63C158: test    ebx, ebx
0x63C15A: jz      short loc_63C170
0x63C15C: mov     eax, [ebx]
0x63C15E: mov     edx, [eax+170h]
0x63C164: mov     ecx, ebx
0x63C166: call    edx
0x63C168: cmp     eax, ds:0B35EB0h
0x63C16E: jz      short loc_63C181
0x63C170: mov     ecx, [ebp+24h]
0x63C173: test    ecx, ecx
0x63C175: jz      short loc_63C1AA
0x63C177: call    sub_569740
0x63C17C: cmp     eax, 3
0x63C17F: jnz     short loc_63C1AA
0x63C181: mov     ecx, esi
0x63C183: call    sub_64ADA0
0x63C188: test    al, al
0x63C18A: jnz     short loc_63C1AA
0x63C18C: test    ebx, ebx
0x63C18E: jz      short loc_63C198
0x63C190: fld     dword ptr [ebx+28h]
0x63C193: jmp     loc_63BF07
0x63C198: mov     eax, [edi]
0x63C19A: mov     edx, [eax+0F0h]
0x63C1A0: lea     ecx, [esp+58h+var_18]
0x63C1A4: push    ecx
0x63C1A5: jmp     loc_63BF00
0x63C1AA: mov     ecx, ebp
0x63C1AC: call    sub_566DB0
0x63C1B1: test    eax, eax
0x63C1B3: jz      def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C1B9: push    edi
0x63C1BA: lea     eax, [esp+5Ch+var_C]
0x63C1BE: push    eax
0x63C1BF: mov     ecx, ebp
0x63C1C1: call    sub_566B30
0x63C1C6: lea     ecx, [esp+58h+var_3C]
0x63C1CA: push    ecx; int
0x63C1CB: mov     ecx, ebp
0x63C1CD: mov     ebx, eax
0x63C1CF: call    sub_566DB0
0x63C1D4: test    eax, eax
0x63C1D6: mov     [esp+5Ch+arg_4], eax
0x63C1DA: fild    [esp+5Ch+arg_4]
0x63C1DE: jge     short loc_63C1E6
0x63C1E0: fadd    dword ptr ds:0A2FC78h
0x63C1E6: mov     edx, [ebx]
0x63C1E8: mov     ecx, [ebx+4]
0x63C1EB: sub     esp, 10h
0x63C1EE: mov     eax, esp
0x63C1F0: fstp    [esp+6Ch+var_60]; float
0x63C1F4: mov     [eax], edx
0x63C1F6: mov     edx, [ebx+8]
0x63C1F9: mov     [eax+4], ecx
0x63C1FC: push    edi; int
0x63C1FD: mov     [eax+8], edx
0x63C200: call    sub_635D60
0x63C205: add     esp, 18h
0x63C208: test    al, al
0x63C20A: jz      def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C210: mov     eax, [edi]
0x63C212: mov     edx, [eax+1CCh]
0x63C218: lea     ecx, [esp+58h+var_3C]
0x63C21C: push    ecx
0x63C21D: mov     ecx, edi
0x63C21F: jmp     loc_63BF1D
0x63C224: fld     [esp+58h+arg_4]; jumptable 0063BC6F case 29
0x63C228: push    ecx
0x63C229: fstp    [esp+5Ch+var_5C]; float
0x63C22C: push    edi; int
0x63C22D: mov     ecx, esi
0x63C22F: call    sub_6358E0
0x63C234: jmp     def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C239: mov     eax, [esi]; jumptable 0063BC6F case 41
0x63C23B: mov     edx, [eax+53Ch]
0x63C241: push    edi
0x63C242: mov     ecx, esi
0x63C244: jmp     loc_63BF1D
0x63C249: mov     eax, [esi]; jumptable 0063BC6F case 37
0x63C24B: mov     edx, [eax+588h]
0x63C251: push    0
0x63C253: push    1
0x63C255: push    edi
0x63C256: mov     ecx, esi
0x63C258: call    edx
0x63C25A: jmp     def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C25F: push    0FFFFFFFFh; jumptable 0063BC6F case 15
0x63C261: push    1
0x63C263: push    0
0x63C265: push    edi
0x63C266: mov     ecx, esi
0x63C268: call    sub_646200
0x63C26D: jmp     def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C272: mov     eax, [esi]; jumptable 0063BC6F case 3
0x63C274: mov     edx, [eax+36Ch]
0x63C27A: mov     ecx, esi
0x63C27C: call    edx
0x63C27E: test    eax, eax
0x63C280: jz      short loc_63C29F
0x63C282: mov     eax, [edi]
0x63C284: mov     edx, [eax+380h]
0x63C28A: mov     ecx, edi
0x63C28C: call    edx
0x63C28E: test    eax, eax
0x63C290: jnz     short loc_63C29F
0x63C292: mov     eax, [esi]
0x63C294: mov     edx, [eax+1B0h]
0x63C29A: push    edi
0x63C29B: mov     ecx, esi
0x63C29D: call    edx
0x63C29F: push    edi
0x63C2A0: mov     ecx, esi
0x63C2A2: call    sub_6440B0
0x63C2A7: jmp     def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C2AC: mov     eax, [esi]; jumptable 0063BC6F case 31
0x63C2AE: mov     edx, [eax+528h]
0x63C2B4: push    edi
0x63C2B5: mov     ecx, esi
0x63C2B7: jmp     loc_63BF1D
0x63C2BC: mov     eax, [esi]; jumptable 0063BC6F case 32
0x63C2BE: mov     edx, [eax+52Ch]
0x63C2C4: push    edi
0x63C2C5: mov     ecx, esi
0x63C2C7: jmp     loc_63BF1D
0x63C2CC: cmp     dword ptr [esi+2Ch], 0; jumptable 0063BC6F case 14
0x63C2D0: jnz     short loc_63C30A
0x63C2D2: mov     eax, [esi]
0x63C2D4: mov     edx, [eax+558h]
0x63C2DA: push    edi
0x63C2DB: mov     ecx, esi
0x63C2DD: call    edx
0x63C2DF: cmp     dword ptr [esi+2Ch], 0
0x63C2E3: jnz     short loc_63C30A
0x63C2E5: mov     eax, [esi]
0x63C2E7: mov     edx, [eax+188h]
0x63C2ED: push    1
0x63C2EF: push    edi
0x63C2F0: mov     ecx, esi
0x63C2F2: call    edx
0x63C2F4: cmp     byte ptr [esi+0D0h], 0
0x63C2FB: jnz     short loc_63C30A
0x63C2FD: mov     eax, [esi]
0x63C2FF: mov     edx, [eax+194h]
0x63C305: push    edi
0x63C306: mov     ecx, esi
0x63C308: call    edx
0x63C30A: mov     eax, [esi]
0x63C30C: fld     [esp+58h+arg_4]
0x63C310: mov     edx, [eax+6Ch]
0x63C313: push    ecx
0x63C314: fstp    [esp+5Ch+var_5C]
0x63C317: push    edi
0x63C318: mov     ecx, esi
0x63C31A: call    edx
0x63C31C: jmp     def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C321: fld     [esp+58h+arg_4]; jumptable 0063BC6F case 1
0x63C325: push    ecx
0x63C326: fstp    [esp+5Ch+var_5C]; float
0x63C329: push    edi; int
0x63C32A: mov     ecx, esi
0x63C32C: call    sub_631050
0x63C331: jmp     def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C336: mov     eax, [esi]; jumptable 0063BC6F case 8
0x63C338: mov     edx, [eax+36Ch]
0x63C33E: mov     ecx, esi
0x63C340: call    edx
0x63C342: test    eax, eax
0x63C344: jz      def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C34A: mov     eax, [edi]
0x63C34C: mov     edx, [eax+380h]
0x63C352: mov     ecx, edi
0x63C354: call    edx
0x63C356: test    eax, eax
0x63C358: jnz     def_63BC6F; jumptable 0063BC6F default case, cases 10-12,16,18-21,23-28,30,33-36,38-40,42-44
0x63C35E: mov     eax, [esi]
0x63C360: mov     edx, [eax+1B0h]
0x63C366: push    edi
0x63C367: mov     ecx, esi
0x63C369: jmp     loc_63BF1D
0x63C36E: mov     eax, [esi+2Ch]
0x63C371: push    1
0x63C373: push    eax
0x63C374: call    sub_566870
0x63C379: mov     edx, [edi]
0x63C37B: mov     eax, [esi+2Ch]
0x63C37E: mov     edx, [edx+2F8h]
0x63C384: push    eax
0x63C385: mov     ecx, edi
0x63C387: call    edx
0x63C389: pop     edi
0x63C38A: pop     esi
0x63C38B: pop     ebp
0x63C38C: pop     ebx
0x63C38D: add     esp, 48h
0x63C390: retn    8
0x63C393: mov     eax, [esi+2Ch]
0x63C396: mov     ecx, [eax+8]
0x63C399: shr     ecx, 5
0x63C39C: test    cl, 1
0x63C39F: jz      short loc_63C3AB
0x63C3A1: push    1
0x63C3A3: push    eax
0x63C3A4: mov     ecx, ebp
0x63C3A6: call    sub_566870
0x63C3AB: mov     edx, [esi]
0x63C3AD: mov     eax, [edx+188h]
0x63C3B3: push    1
0x63C3B5: push    edi
0x63C3B6: mov     ecx, esi
0x63C3B8: call    eax
0x63C3BA: pop     edi
0x63C3BB: pop     esi
0x63C3BC: pop     ebp
0x63C3BD: pop     ebx
0x63C3BE: add     esp, 48h
0x63C3C1: retn    8
0x63C3C4: cmp     ecx, 3
0x63C3C7: jz      loc_63BF9C
0x63C3CD: mov     al, [ebx+20h]
0x63C3D0: cmp     al, 3
0x63C3D2: jz      loc_63BF9C
0x63C3D8: cmp     al, 4
0x63C3DA: jz      loc_63BF9C
0x63C3E0: cmp     ecx, 7
0x63C3E3: jz      loc_63BF80
0x63C3E9: mov     edx, [esi]
0x63C3EB: mov     eax, [edx+194h]
0x63C3F1: push    edi
0x63C3F2: mov     ecx, esi
0x63C3F4: call    eax
0x63C3F6: cmp     byte ptr [esi+25Ch], 0
0x63C3FD: jz      short loc_63C426
0x63C3FF: mov     edx, [esi]
0x63C401: mov     eax, [edx+188h]
0x63C407: push    0FFFFFFFFh
0x63C409: push    edi
0x63C40A: mov     ecx, esi
0x63C40C: call    eax
0x63C40E: mov     edx, [esi]
0x63C410: mov     eax, [edx+0BCh]
0x63C416: push    0
0x63C418: mov     ecx, esi
0x63C41A: call    eax
0x63C41C: pop     edi
0x63C41D: pop     esi
0x63C41E: pop     ebp
0x63C41F: pop     ebx
0x63C420: add     esp, 48h
0x63C423: retn    8
0x63C426: push    400h
0x63C42B: lea     ebp, [edi+44h]
0x63C42E: push    ebp
0x63C42F: push    ebx
0x63C430: call    Script_AddEventToExtraScript
0x63C435: add     esp, 0Ch
0x63C438: mov     ecx, ebx
0x63C43A: call    sub_565DF0
0x63C43F: test    al, al
0x63C441: jz      short loc_63C456
0x63C443: mov     ecx, offset TimeGlobals
0x63C448: call    TimeGlobals_GetGameDay
0x63C44D: mov     ecx, ebp
0x63C44F: push    eax
0x63C450: push    ebx
0x63C451: call    sub_41FFC0
0x63C456: cmp     dword ptr [ebx+30h], 0
0x63C45A: jnz     loc_63C66C
0x63C460: cmp     dword ptr [esi+0C0h], 0
0x63C467: mov     dword ptr [esi+2Ch], 0
0x63C46E: jz      short loc_63C4A2
0x63C470: mov     edx, [esi]
0x63C472: mov     eax, [edx+388h]
0x63C478: mov     ecx, esi
0x63C47A: call    eax
0x63C47C: test    al, al
0x63C47E: jnz     short loc_63C4A2
0x63C480: mov     ecx, [esi+0C0h]
0x63C486: test    ecx, ecx
0x63C488: jz      short loc_63C493
0x63C48A: mov     edx, [ecx]
0x63C48C: mov     eax, [edx+10h]
0x63C48F: push    1
0x63C491: call    eax
0x63C493: mov     dword ptr [esi+0C0h], 0
0x63C49D: jmp     loc_63C5DF
0x63C4A2: mov     ecx, [esi+8]
0x63C4A5: call    sub_5660A0
0x63C4AA: test    al, al
0x63C4AC: jz      loc_63C5DF
0x63C4B2: mov     ebx, [esi+8]
0x63C4B5: mov     ecx, ebx
0x63C4B7: mov     [esp+58h+var_40], ebx
0x63C4BB: call    sub_567770
0x63C4C0: test    al, al
0x63C4C2: jz      loc_63C5B3
0x63C4C8: mov     edx, [edi]
0x63C4CA: mov     eax, [edx+44h]
0x63C4CD: push    30000h
0x63C4D2: mov     ecx, edi
0x63C4D4: call    eax
0x63C4D6: mov     ecx, ebp
0x63C4D8: call    ExtraDataList__GetExtraPackage
0x63C4DD: test    eax, eax
0x63C4DF: jz      loc_63C56E
0x63C4E5: mov     ebx, [edi+58h]
0x63C4E8: mov     ecx, ebp
0x63C4EA: call    ExtraDataList__GetExtraPackage
0x63C4EF: mov     [ebx+8], eax
0x63C4F2: mov     ecx, [edi+58h]
0x63C4F5: mov     edx, [ecx+8]
0x63C4F8: push    edx
0x63C4F9: mov     ecx, edi
0x63C4FB: call    sub_5E8DE0
0x63C500: mov     ebx, [edi+58h]
0x63C503: mov     ecx, ebp
0x63C505: call    sub_41FB40
0x63C50A: mov     [ebx+4], eax
0x63C50D: mov     eax, [edi+58h]
0x63C510: mov     ebx, [eax]
0x63C512: mov     ecx, ebp
0x63C514: mov     [esp+58h+arg_4], eax
0x63C518: add     ebx, 0D0h ; 'Ð'
0x63C51E: call    sub_41FB60
0x63C523: mov     ecx, [esp+58h+arg_4]
0x63C527: push    eax
0x63C528: mov     eax, [ebx]
0x63C52A: call    eax
0x63C52C: mov     ebx, [edi]
0x63C52E: mov     ecx, ebp
0x63C530: add     ebx, 17Ch
0x63C536: call    sub_41FB80
0x63C53B: mov     edx, [ebx]
0x63C53D: mov     ecx, edi
0x63C53F: push    eax
0x63C540: call    edx
0x63C542: mov     eax, [edi+58h]
0x63C545: mov     ebx, [eax]
0x63C547: mov     ecx, ebp
0x63C549: mov     [esp+58h+arg_4], eax
0x63C54D: add     ebx, 394h
0x63C553: call    sub_41FBA0
0x63C558: mov     ecx, [esp+58h+arg_4]
0x63C55C: push    eax
0x63C55D: mov     eax, [ebx]
0x63C55F: call    eax
0x63C561: mov     ecx, ebp
0x63C563: call    sub_4246D0
0x63C568: mov     ebx, [esp+58h+var_40]
0x63C56C: jmp     short loc_63C5BA
0x63C56E: mov     ecx, [edi+58h]
0x63C571: xor     ebp, ebp
0x63C573: mov     [ecx+8], ebp
0x63C576: mov     edx, [edi+58h]
0x63C579: mov     [edx+4], ebp
0x63C57C: mov     ecx, [edi+58h]
0x63C57F: mov     eax, [ecx]
0x63C581: mov     edx, [eax+0D0h]
0x63C587: push    ebp
0x63C588: call    edx
0x63C58A: mov     eax, [edi]
0x63C58C: mov     edx, [eax+17Ch]
0x63C592: push    ebp
0x63C593: mov     ecx, edi
0x63C595: call    edx
0x63C597: mov     ecx, [edi+58h]
0x63C59A: mov     eax, [ecx]
0x63C59C: mov     edx, [eax+394h]
0x63C5A2: push    ebp
0x63C5A3: call    edx
0x63C5A5: mov     ecx, [edi+58h]
0x63C5A8: mov     eax, [ecx]
0x63C5AA: mov     edx, [eax+18h]
0x63C5AD: push    ebp
0x63C5AE: push    edi
0x63C5AF: call    edx
0x63C5B1: jmp     short loc_63C5BA
0x63C5B3: mov     dword ptr [esi+8], 0
0x63C5BA: test    ebx, ebx
0x63C5BC: jz      short loc_63C5C9
0x63C5BE: mov     eax, [ebx]
0x63C5C0: mov     edx, [eax+10h]
0x63C5C3: push    1
0x63C5C5: mov     ecx, ebx
0x63C5C7: call    edx
0x63C5C9: cmp     byte ptr [esi+0D0h], 0
0x63C5D0: jnz     short loc_63C5DF
0x63C5D2: mov     eax, [esi]
0x63C5D4: mov     edx, [eax+194h]
0x63C5DA: push    edi
0x63C5DB: mov     ecx, esi
0x63C5DD: call    edx
0x63C5DF: mov     ecx, [esi+8]
0x63C5E2: xor     ebx, ebx
0x63C5E4: cmp     ecx, ebx
0x63C5E6: jz      short loc_63C60F
0x63C5E8: call    sub_565DF0
0x63C5ED: test    al, al
0x63C5EF: jnz     short loc_63C607
0x63C5F1: mov     eax, [esi+8]
0x63C5F4: mov     eax, [eax+1Ch]
0x63C5F7: mov     ecx, eax
0x63C5F9: shr     ecx, 1
0x63C5FB: test    cl, 1
0x63C5FE: jnz     short loc_63C607
0x63C600: shr     eax, 2
0x63C603: test    al, 1
0x63C605: jz      short loc_63C60F
0x63C607: fldz
0x63C609: fstp    dword ptr [esi+1ACh]
0x63C60F: mov     eax, [esi+44h]
0x63C612: cmp     eax, ebx
0x63C614: jz      short loc_63C61F
0x63C616: push    eax
0x63C617: call    FormHeapFree
0x63C61C: add     esp, 4
0x63C61F: mov     [esi+44h], ebx
0x63C622: mov     [esi+24h], ebx
0x63C625: lea     ebx, [esi+3Ch]
0x63C628: mov     ecx, ebx
0x63C62A: call    BSSimpleList_IsEmpty
0x63C62F: test    al, al
0x63C631: jnz     short loc_63C655
0x63C633: mov     ebp, [ebx]
0x63C635: test    ebp, ebp
0x63C637: jz      short loc_63C642
0x63C639: push    ebp
0x63C63A: call    FormHeapFree
0x63C63F: add     esp, 4
0x63C642: push    ebp
0x63C643: mov     ecx, ebx
0x63C645: call    BSSimpleList_Remove
0x63C64A: mov     ecx, ebx
0x63C64C: call    BSSimpleList_IsEmpty
0x63C651: test    al, al
0x63C653: jz      short loc_63C633
0x63C655: fldz
0x63C657: lea     ecx, [esi+4Ch]
0x63C65A: fstp    dword ptr [esi+198h]
0x63C660: mov     dword ptr [esi+30h], 0
0x63C667: call    BSSimpleList_Clear
0x63C66C: cmp     byte ptr ds:0B15800h, 0
0x63C673: jz      short loc_63C689
0x63C675: mov     ecx, ds:0B3BF80h
0x63C67B: test    ecx, ecx
0x63C67D: jz      short loc_63C689
0x63C67F: push    edi
0x63C680: call    sub_6825C0
0x63C685: test    al, al
0x63C687: jnz     short loc_63C697
0x63C689: mov     ecx, [esp+58h+arg_0]
0x63C68D: mov     ecx, [ecx+58h]
0x63C690: mov     edx, [ecx]
0x63C692: mov     eax, [edx+20h]
0x63C695: call    eax
0x63C697: pop     edi
0x63C698: pop     esi
0x63C699: pop     ebp
0x63C69A: pop     ebx
0x63C69B: add     esp, 48h
0x63C69E: retn    8
