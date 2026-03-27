0x60BF70: push    esi
0x60BF71: mov     esi, ecx
0x60BF73: and     dword ptr [esi+8], 0FFDFFFFFh
0x60BF7A: push    edi
0x60BF7B: xor     edi, edi
0x60BF7D: cmp     [esi+3Ch], edi
0x60BF80: jnz     loc_60C034
0x60BF86: mov     eax, [esi+5Ch]
0x60BF89: cmp     eax, edi
0x60BF8B: jz      loc_60C01E
0x60BF91: mov     ecx, [eax+28h]
0x60BF94: cmp     ecx, edi
0x60BF96: jz      short loc_60BFC6
0x60BF98: mov     ecx, [ecx+8]
0x60BF9B: mov     edx, ecx
0x60BF9D: shr     edx, 0Bh
0x60BFA0: test    dl, 1
0x60BFA3: jz      short loc_60BFC6
0x60BFA5: shr     ecx, 5
0x60BFA8: test    cl, 1
0x60BFAB: jz      short loc_60BFC6
0x60BFAD: mov     eax, [esi]
0x60BFAF: mov     edx, [eax+8Ch]
0x60BFB5: push    1
0x60BFB7: mov     ecx, esi
0x60BFB9: call    edx
0x60BFBB: mov     eax, [esi+5Ch]
0x60BFBE: mov     [eax+2Ch], edi
0x60BFC1: pop     edi
0x60BFC2: pop     esi
0x60BFC3: retn    8
0x60BFC6: cmp     eax, edi
0x60BFC8: jz      short loc_60C01E
0x60BFCA: cmp     [eax+28h], edi
0x60BFCD: jz      short loc_60C01E
0x60BFCF: mov     eax, [eax+28h]
0x60BFD2: mov     edx, [eax]
0x60BFD4: mov     ecx, eax
0x60BFD6: mov     eax, [edx+190h]
0x60BFDC: call    eax
0x60BFDE: test    al, al
0x60BFE0: jz      short loc_60C01E
0x60BFE2: mov     ecx, [esi+5Ch]
0x60BFE5: mov     edx, [ecx+28h]
0x60BFE8: mov     ecx, [edx+58h]
0x60BFEB: cmp     ecx, edi
0x60BFED: jz      short loc_60C01E
0x60BFEF: mov     eax, [ecx]
0x60BFF1: mov     edx, [eax+8]
0x60BFF4: call    edx
0x60BFF6: cmp     eax, 1
0x60BFF9: jle     short loc_60C01E
0x60BFFB: mov     eax, [esi]
0x60BFFD: mov     edx, [eax+8Ch]
0x60C003: push    1
0x60C005: mov     ecx, esi
0x60C007: call    edx
0x60C009: mov     eax, [esi+5Ch]
0x60C00C: cmp     eax, edi
0x60C00E: jz      short loc_60C013
0x60C010: mov     [eax+28h], edi
0x60C013: mov     eax, [esi+5Ch]
0x60C016: mov     [eax+2Ch], edi
0x60C019: pop     edi
0x60C01A: pop     esi
0x60C01B: retn    8
0x60C01E: mov     ecx, [esp+8+arg_0]
0x60C022: pop     edi
0x60C023: mov     byte ptr [esi+94h], 1
0x60C02A: mov     [esi+98h], ecx
0x60C030: pop     esi
0x60C031: retn    8
0x60C034: fld1
0x60C036: mov     edx, [esi+78h]
0x60C039: push    ecx
0x60C03A: fstp    [esp+0Ch+var_C]; float
0x60C03D: push    edx; int
0x60C03E: call    sub_60A230
0x60C043: mov     eax, [esp+8+arg_4]
0x60C047: mov     ecx, [esp+8+arg_0]
0x60C04B: push    eax; int
0x60C04C: push    ecx; int
0x60C04D: mov     ecx, esi; int
0x60C04F: call    MobilObject_PostLinkModifiedForm
0x60C054: mov     eax, [esi+5Ch]
0x60C057: cmp     eax, edi
0x60C059: jz      loc_60C159
0x60C05F: mov     ecx, [eax]
0x60C061: cmp     ecx, 1
0x60C064: jz      short loc_60C06E
0x60C066: cmp     ecx, edi
0x60C068: jnz     loc_60C159
0x60C06E: mov     edx, ds:0B33B00h
0x60C074: cmp     byte ptr [edx+7Ch], 20h ; ' '
0x60C078: push    ebx
0x60C079: jb      loc_60C10F
0x60C07F: movzx   ebx, word ptr [eax+2Eh]
0x60C083: push    ebp
0x60C084: movzx   ebp, word ptr [eax+2Ch]
0x60C088: mov     [eax+2Ch], edi
0x60C08B: mov     edx, [esi+5Ch]
0x60C08E: mov     eax, [edx+28h]
0x60C091: cmp     ecx, edi
0x60C093: setz    cl
0x60C096: cmp     eax, edi
0x60C098: mov     byte ptr [esp+10h+arg_0], cl
0x60C09C: jz      short loc_60C10E
0x60C09E: mov     edi, [esp+10h+arg_0]
0x60C0A2: mov     eax, [eax+3Ch]
0x60C0A5: push    1
0x60C0A7: push    edi
0x60C0A8: push    edi
0x60C0A9: push    eax
0x60C0AA: call    sub_480C50
0x60C0AF: add     esp, 10h
0x60C0B2: cmp     bx, ax
0x60C0B5: jz      short loc_60C0DB
0x60C0B7: mov     eax, [esi+5Ch]
0x60C0BA: mov     ecx, [eax+28h]
0x60C0BD: mov     eax, [ecx+0Ch]
0x60C0C0: mov     edx, [ecx]
0x60C0C2: push    eax
0x60C0C3: mov     eax, [edx+0D4h]
0x60C0C9: call    eax
0x60C0CB: push    eax; ArgList
0x60C0CC: push    offset aCollisionObj_0; "Collision object count has changed on o"...
0x60C0D1: call    PrintError
0x60C0D6: add     esp, 0Ch
0x60C0D9: jmp     short loc_60C10C
0x60C0DB: cmp     bp, 0FFFFh
0x60C0DF: jz      short loc_60C10C
0x60C0E1: mov     ecx, [esi+5Ch]
0x60C0E4: mov     edx, [ecx+28h]
0x60C0E7: mov     eax, [edx+3Ch]
0x60C0EA: push    1
0x60C0EC: push    edi
0x60C0ED: movsx   ecx, bp
0x60C0F0: push    edi
0x60C0F1: push    ecx
0x60C0F2: push    eax
0x60C0F3: call    sub_480E90
0x60C0F8: add     esp, 14h
0x60C0FB: test    eax, eax
0x60C0FD: jz      short loc_60C10C
0x60C0FF: mov     ecx, eax
0x60C101: call    sub_452A60
0x60C106: mov     edx, [esi+5Ch]
0x60C109: mov     [edx+2Ch], eax
0x60C10C: xor     edi, edi
0x60C10E: pop     ebp
0x60C10F: mov     eax, ds:0B33B00h
0x60C114: cmp     byte ptr [eax+7Ch], 20h ; ' '
0x60C118: jnb     short loc_60C14A
0x60C11A: mov     eax, [esi+5Ch]
0x60C11D: mov     ecx, [eax+28h]
0x60C120: cmp     ecx, edi
0x60C122: mov     ebx, [eax+2Ch]
0x60C125: jz      short loc_60C13C
0x60C127: mov     ecx, [ecx+3Ch]
0x60C12A: push    ebx; a2
0x60C12B: push    ecx; a1
0x60C12C: call    NiObjectNET_LookupObjectByName
0x60C131: mov     ecx, [esi+5Ch]
0x60C134: add     esp, 8
0x60C137: mov     [ecx+2Ch], eax
0x60C13A: jmp     short loc_60C13F
0x60C13C: mov     [eax+2Ch], edi
0x60C13F: push    ebx; void *
0x60C140: mov     ecx, offset FormHeap
0x60C145: call    MemoryHeap_Free_checked
0x60C14A: mov     eax, [esi+5Ch]
0x60C14D: cmp     [eax+2Ch], edi
0x60C150: pop     ebx
0x60C151: jnz     short loc_60C159
0x60C153: mov     dword ptr [eax], 3
0x60C159: mov     ecx, ds:0B33B00h
0x60C15F: push    esi
0x60C160: call    sub_4593D0
0x60C165: pop     edi
0x60C166: pop     esi
0x60C167: retn    8
