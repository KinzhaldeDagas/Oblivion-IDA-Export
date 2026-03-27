0x4FDAF0: sub     esp, 64Ch
0x4FDAF6: mov     eax, ds:0B30AACh
0x4FDAFB: xor     eax, esp
0x4FDAFD: mov     [esp+64Ch+var_4], eax
0x4FDB04: mov     eax, [esp+64Ch+arg_0]
0x4FDB0B: mov     ecx, [esp+64Ch+arg_4]
0x4FDB12: push    ebx
0x4FDB13: mov     ebx, [esp+650h+arg_8]
0x4FDB1A: push    ebp
0x4FDB1B: push    esi
0x4FDB1C: mov     [esp+658h+var_648], eax
0x4FDB20: mov     eax, ebx
0x4FDB22: push    edi
0x4FDB23: mov     edi, [esp+65Ch+arg_C]
0x4FDB2A: mov     [esp+65Ch+var_640], ecx
0x4FDB2E: mov     [esp+65Ch+var_644], ebx
0x4FDB32: lea     edx, [eax+1]
0x4FDB35: mov     cl, [eax]
0x4FDB37: add     eax, 1
0x4FDB3A: test    cl, cl
0x4FDB3C: jnz     short loc_4FDB35
0x4FDB3E: mov     ebp, 0
0x4FDB43: sub     eax, edx
0x4FDB45: mov     ecx, ebp
0x4FDB47: mov     [esp+65Ch+var_63C], eax
0x4FDB4B: mov     esi, ebp
0x4FDB4D: mov     [esp+65Ch+var_64C], ecx
0x4FDB51: jz      loc_4FDDB6
0x4FDB57: jmp     short loc_4FDB60
0x4FDB59: align 10h
0x4FDB60: movsx   edx, byte ptr [ebx+ecx]
0x4FDB64: push    edx; C
0x4FDB65: call    _isalpha
0x4FDB6A: add     esp, 4
0x4FDB6D: test    eax, eax
0x4FDB6F: jnz     short loc_4FDB7F
0x4FDB71: mov     eax, [esp+65Ch+var_64C]
0x4FDB75: cmp     byte ptr [ebx+eax], 22h ; '"'
0x4FDB79: jnz     loc_4FDD92
0x4FDB7F: push    200h
0x4FDB84: lea     ecx, [esp+660h+ArgList]
0x4FDB88: push    ebp
0x4FDB89: push    ecx
0x4FDB8A: mov     [esp+668h+var_434], ebp
0x4FDB91: mov     [esp+668h+var_428], ebp
0x4FDB98: mov     [esp+668h+var_430], 0
0x4FDBA0: mov     [esp+668h+var_42C], ebp
0x4FDBA7: mov     [esp+668h+var_424], ebp
0x4FDBAE: call    __memset
0x4FDBB3: mov     ecx, [esp+668h+var_648]
0x4FDBB7: push    1
0x4FDBB9: push    1
0x4FDBBB: lea     edx, [esp+670h+var_64C]
0x4FDBBF: push    edx
0x4FDBC0: push    ebx
0x4FDBC1: lea     eax, [esp+678h+ArgList]
0x4FDBC5: push    eax
0x4FDBC6: push    ecx
0x4FDBC7: call    sub_4FD7C0
0x4FDBCC: add     esp, 24h
0x4FDBCF: test    eax, eax
0x4FDBD1: jz      loc_4FDDEF
0x4FDBD7: mov     edx, [esp+65Ch+var_434]
0x4FDBDE: cmp     edx, ebp
0x4FDBE0: mov     al, [esp+65Ch+var_430]
0x4FDBE7: jbe     short loc_4FDC08
0x4FDBE9: cmp     al, 47h ; 'G'
0x4FDBEB: jnz     short loc_4FDBF2
0x4FDBED: mov     [edi+esi], al
0x4FDBF0: jmp     short loc_4FDBF6
0x4FDBF2: mov     byte ptr [edi+esi], 72h ; 'r'
0x4FDBF6: mov     cx, word ptr [esp+65Ch+var_434]
0x4FDBFE: add     esi, 1
0x4FDC01: mov     [edi+esi], cx
0x4FDC05: add     esi, 2
0x4FDC08: cmp     [esp+65Ch+var_428], ebp
0x4FDC0F: jbe     short loc_4FDC28
0x4FDC11: mov     dx, word ptr [esp+65Ch+var_428]
0x4FDC19: mov     [edi+esi], al
0x4FDC1C: add     esi, 1
0x4FDC1F: mov     [edi+esi], dx
0x4FDC23: jmp     loc_4FDD8F
0x4FDC28: cmp     al, 58h ; 'X'
0x4FDC2A: jnz     loc_4FDD58
0x4FDC30: mov     ecx, [esp+65Ch+var_42C]
0x4FDC37: mov     [edi+esi], al
0x4FDC3A: mov     ax, word ptr [esp+65Ch+var_42C]
0x4FDC42: add     esi, 1
0x4FDC45: mov     [edi+esi], ax
0x4FDC49: lea     eax, [ecx-100h]
0x4FDC4F: add     esi, 2
0x4FDC52: cmp     eax, 82h ; '‚'
0x4FDC57: ja      short loc_4FDC65
0x4FDC59: lea     eax, [eax+eax*4]
0x4FDC5C: lea     eax, ds:0B0B420h[eax*8]
0x4FDC63: jmp     short loc_4FDC80
0x4FDC65: lea     eax, [ecx-1000h]
0x4FDC6B: cmp     eax, 170h
0x4FDC70: ja      loc_4FDDD8
0x4FDC76: lea     eax, [eax+eax*4]
0x4FDC79: lea     eax, ds:0B0C8C0h[eax*8]
0x4FDC80: cmp     eax, ebp
0x4FDC82: jz      loc_4FDDD8
0x4FDC88: cmp     byte ptr [eax+10h], 0
0x4FDC8C: jz      short loc_4FDCA0
0x4FDC8E: mov     ecx, [esp+65Ch+var_648]
0x4FDC92: cmp     byte ptr [ecx+38h], 0
0x4FDC96: jz      short loc_4FDCA0
0x4FDC98: cmp     edx, ebp
0x4FDC9A: jz      loc_4FDDF3
0x4FDCA0: mov     ecx, [eax+14h]
0x4FDCA3: cmp     ecx, ebp
0x4FDCA5: mov     [esp+65Ch+var_638], ecx
0x4FDCA9: jz      loc_4FDD52
0x4FDCAF: mov     ebp, [eax+1Ch]
0x4FDCB2: movzx   ebx, word ptr [eax+12h]
0x4FDCB6: lea     ecx, [esp+65Ch+var_420]
0x4FDCBD: call    sub_4FCC40
0x4FDCC2: mov     edx, [esp+65Ch+var_644]
0x4FDCC6: mov     ecx, [esp+65Ch+var_64C]
0x4FDCCA: lea     eax, [edx+ecx]
0x4FDCCD: lea     edx, [esp+65Ch+var_41C]
0x4FDCD4: sub     edx, eax
0x4FDCD6: mov     cl, [eax]
0x4FDCD8: mov     [edx+eax], cl
0x4FDCDB: add     eax, 1
0x4FDCDE: test    cl, cl
0x4FDCE0: jnz     short loc_4FDCD6
0x4FDCE2: mov     eax, [esp+65Ch+var_640]
0x4FDCE6: mov     ecx, [eax]
0x4FDCE8: mov     edx, [esp+65Ch+var_648]
0x4FDCEC: push    edx
0x4FDCED: lea     eax, [esp+660h+var_420]
0x4FDCF4: mov     [esp+660h+var_420], ecx
0x4FDCFB: mov     ecx, [esp+660h+var_638]
0x4FDCFF: push    eax
0x4FDD00: push    ecx
0x4FDD01: push    ebx
0x4FDD02: mov     [esp+66Ch+Size], 0
0x4FDD0D: call    ebp
0x4FDD0F: add     esp, 10h
0x4FDD12: test    al, al
0x4FDD14: jz      loc_4FDDEF
0x4FDD1A: mov     ebp, [esp+65Ch+Size]
0x4FDD21: mov     [edi+esi], bp
0x4FDD25: push    ebp; Size
0x4FDD26: lea     edx, [esp+660h+Src]
0x4FDD2D: add     esi, 2
0x4FDD30: push    edx; Src
0x4FDD31: lea     eax, [edi+esi]
0x4FDD34: push    eax; Dst
0x4FDD35: call    _memcpy
0x4FDD3A: mov     ecx, [esp+668h+var_218]
0x4FDD41: add     [esp+668h+var_64C], ecx
0x4FDD45: mov     ebx, [esp+668h+var_644]
0x4FDD49: add     esp, 0Ch
0x4FDD4C: add     esi, ebp
0x4FDD4E: xor     ebp, ebp
0x4FDD50: jmp     short loc_4FDD92
0x4FDD52: mov     [edi+esi], bp
0x4FDD56: jmp     short loc_4FDD8F
0x4FDD58: cmp     al, 47h ; 'G'
0x4FDD5A: jz      short loc_4FDD92
0x4FDD5C: cmp     edx, ebp
0x4FDD5E: jnz     loc_4FDE0A
0x4FDD64: mov     ecx, [esp+65Ch+var_648]
0x4FDD68: push    ebp; char
0x4FDD69: push    ebp; char
0x4FDD6A: lea     edx, [esp+664h+ArgList]
0x4FDD6E: push    edx; Str
0x4FDD6F: call    sub_4FD0A0
0x4FDD74: test    al, al
0x4FDD76: jz      loc_4FDE0A
0x4FDD7C: mov     ax, word ptr [esp+65Ch+var_434]
0x4FDD84: mov     byte ptr [edi+esi], 5Ah ; 'Z'
0x4FDD88: add     esi, 1
0x4FDD8B: mov     [edi+esi], ax
0x4FDD8F: add     esi, 2
0x4FDD92: mov     eax, [esp+65Ch+var_63C]
0x4FDD96: mov     ecx, [esp+65Ch+var_64C]
0x4FDD9A: cmp     ecx, eax
0x4FDD9C: jnb     short loc_4FDDA7
0x4FDD9E: mov     dl, [ebx+ecx]
0x4FDDA1: mov     [edi+esi], dl
0x4FDDA4: add     esi, 1
0x4FDDA7: add     ecx, 1
0x4FDDAA: cmp     ecx, eax
0x4FDDAC: mov     [esp+65Ch+var_64C], ecx
0x4FDDB0: jb      loc_4FDB60
0x4FDDB6: mov     byte ptr [edi+esi+1], 0
0x4FDDBB: mov     eax, esi
0x4FDDBD: mov     ecx, [esp+65Ch+var_4]
0x4FDDC4: pop     edi
0x4FDDC5: pop     esi
0x4FDDC6: pop     ebp
0x4FDDC7: pop     ebx
0x4FDDC8: xor     ecx, esp
0x4FDDCA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FDDCF: add     esp, 64Ch
0x4FDDD5: retn    10h
0x4FDDD8: mov     ecx, [esp+65Ch+var_648]
0x4FDDDC: lea     eax, [esp+65Ch+ArgList]
0x4FDDE0: push    eax; ArgList
0x4FDDE1: push    offset aSyntaxError_Un; "Syntax Error.  Undefined function '%s'."
0x4FDDE6: push    ecx; int
0x4FDDE7: call    sub_4FCE30
0x4FDDEC: add     esp, 0Ch
0x4FDDEF: xor     eax, eax
0x4FDDF1: jmp     short loc_4FDDBD
0x4FDDF3: lea     edx, [esp+65Ch+ArgList]
0x4FDDF7: push    edx; ArgList
0x4FDDF8: push    offset aReferenceFunct; "Reference function '%s' requires explic"...
0x4FDDFD: push    ecx; int
0x4FDDFE: call    sub_4FCE30
0x4FDE03: add     esp, 0Ch
0x4FDE06: xor     eax, eax
0x4FDE08: jmp     short loc_4FDDBD
0x4FDE0A: mov     ecx, [esp+65Ch+var_648]
0x4FDE0E: lea     eax, [esp+65Ch+ArgList]
0x4FDE12: push    eax; ArgList
0x4FDE13: push    offset aSyntaxError__4; "Syntax Error.  Unknown command '%s'."
0x4FDE18: push    ecx; int
0x4FDE19: call    sub_4FCE30
0x4FDE1E: add     esp, 0Ch
0x4FDE21: xor     eax, eax
0x4FDE23: jmp     short loc_4FDDBD
