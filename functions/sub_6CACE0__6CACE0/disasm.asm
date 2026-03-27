0x6CACE0: push    0FFFFFFFFh
0x6CACE2: push    offset SEH_6CACE0
0x6CACE7: mov     eax, large fs:0
0x6CACED: push    eax
0x6CACEE: sub     esp, 24h
0x6CACF1: push    ebx
0x6CACF2: push    ebp
0x6CACF3: push    esi
0x6CACF4: push    edi
0x6CACF5: mov     eax, ds:0B30AACh
0x6CACFA: xor     eax, esp
0x6CACFC: push    eax
0x6CACFD: lea     eax, [esp+44h+var_C]
0x6CAD01: mov     large fs:0, eax
0x6CAD07: mov     edi, ecx
0x6CAD09: mov     esi, [esp+44h+arg_0]
0x6CAD0D: push    esi
0x6CAD0E: call    nullsub_returnvVoid_1arg
0x6CAD13: cmp     dword ptr [esi+0D8h], 0A010068h
0x6CAD1D: jnb     loc_6CB076
0x6CAD23: fld     dword ptr ds:0A7DEB4h
0x6CAD29: mov     ebx, [edi+0Ch]
0x6CAD2C: fstp    dword ptr [edi+2Ch]
0x6CAD2F: xor     ebp, ebp
0x6CAD31: fld     dword ptr ds:0A7DEB4h
0x6CAD37: xor     esi, esi
0x6CAD39: cmp     ebx, ebp
0x6CAD3B: fchs
0x6CAD3D: fstp    dword ptr [edi+30h]
0x6CAD40: jbe     short loc_6CAD96
0x6CAD42: mov     edx, [edi+14h]
0x6CAD45: add     edx, 4
0x6CAD48: jmp     short loc_6CAD50
0x6CAD4A: align 10h
0x6CAD50: mov     ecx, [edx]
0x6CAD52: fld     dword ptr [ecx+14h]
0x6CAD55: fstp    [esp+44h+arg_0]
0x6CAD59: fld     [esp+44h+arg_0]
0x6CAD5D: fld     dword ptr [edi+2Ch]
0x6CAD60: fcompp
0x6CAD62: fnstsw  ax
0x6CAD64: test    ah, 41h
0x6CAD67: jnz     short loc_6CAD6F
0x6CAD69: fld     dword ptr [ecx+14h]
0x6CAD6C: fstp    dword ptr [edi+2Ch]
0x6CAD6F: fld     dword ptr [ecx+18h]
0x6CAD72: fstp    [esp+44h+arg_0]
0x6CAD76: fld     [esp+44h+arg_0]
0x6CAD7A: fld     dword ptr [edi+30h]
0x6CAD7D: fcompp
0x6CAD7F: fnstsw  ax
0x6CAD81: test    ah, 5
0x6CAD84: jp      short loc_6CAD8C
0x6CAD86: fld     dword ptr [ecx+18h]
0x6CAD89: fstp    dword ptr [edi+30h]
0x6CAD8C: add     esi, 1
0x6CAD8F: add     edx, 10h
0x6CAD92: cmp     esi, ebx
0x6CAD94: jb      short loc_6CAD50
0x6CAD96: fld     dword ptr [edi+2Ch]
0x6CAD99: fld     dword ptr ds:0A7DEB4h
0x6CAD9F: fld     st
0x6CADA1: fucomp  st(2)
0x6CADA3: fnstsw  ax
0x6CADA5: fstp    st(1)
0x6CADA7: test    ah, 44h
0x6CADAA: jp      short loc_6CADC6
0x6CADAC: fld     dword ptr [edi+30h]
0x6CADAF: fxch    st(1)
0x6CADB1: fchs
0x6CADB3: fucompp
0x6CADB5: fnstsw  ax
0x6CADB7: test    ah, 44h
0x6CADBA: jp      short loc_6CADC8
0x6CADBC: fldz
0x6CADBE: fst     dword ptr [edi+30h]
0x6CADC1: fstp    dword ptr [edi+2Ch]
0x6CADC4: jmp     short loc_6CADC8
0x6CADC6: fstp    st
0x6CADC8: cmp     bx, bp
0x6CADCB: mov     [esp+44h+var_2C], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x6CADD3: mov     word ptr [esp+44h+var_24], bx
0x6CADD8: mov     [esp+44h+var_1E], 1
0x6CADDF: mov     word ptr [esp+44h+var_24+2], bp
0x6CADE4: mov     [esp+44h+var_20], bp
0x6CADE9: jbe     short loc_6CAE0F
0x6CADEB: xor     ecx, ecx
0x6CADED: movzx   eax, bx
0x6CADF0: mov     edx, 4
0x6CADF5: mul     edx
0x6CADF7: seto    cl
0x6CADFA: neg     ecx
0x6CADFC: or      ecx, eax
0x6CADFE: push    ecx; Size
0x6CADFF: call    FormHeapAlloc
0x6CAE04: mov     ebx, eax
0x6CAE06: add     esp, 4
0x6CAE09: mov     [esp+44h+var_28], ebx
0x6CAE0D: jmp     short loc_6CAE15
0x6CAE0F: mov     [esp+44h+var_28], ebp
0x6CAE13: mov     ebx, ebp
0x6CAE15: mov     eax, [edi+0Ch]
0x6CAE18: push    1
0x6CAE1A: push    eax
0x6CAE1B: lea     ecx, [esp+4Ch+var_1C]
0x6CAE1F: mov     [esp+4Ch+var_4], ebp
0x6CAE23: call    sub_6C7D90
0x6CAE28: cmp     [edi+0Ch], ebp
0x6CAE2B: mov     byte ptr [esp+44h+var_4], 1
0x6CAE30: mov     [esp+44h+arg_0], ebp
0x6CAE34: jbe     loc_6CAFCE
0x6CAE3A: mov     [esp+44h+var_30], ebp
0x6CAE3E: mov     edi, edi
0x6CAE40: mov     eax, [edi+18h]
0x6CAE43: add     eax, [esp+44h+var_30]
0x6CAE47: movzx   ecx, word ptr [eax+4]
0x6CAE4B: cmp     cx, 0FFFFh
0x6CAE50: jz      short loc_6CAE5C
0x6CAE52: mov     eax, [eax]
0x6CAE54: mov     eax, [eax+8]
0x6CAE57: movzx   ebp, cx
0x6CAE5A: add     ebp, eax
0x6CAE5C: mov     eax, ebp
0x6CAE5E: lea     edx, [eax+1]
0x6CAE61: mov     cl, [eax]
0x6CAE63: add     eax, 1
0x6CAE66: test    cl, cl
0x6CAE68: jnz     short loc_6CAE61
0x6CAE6A: sub     eax, edx
0x6CAE6C: lea     ebx, [eax+1]
0x6CAE6F: push    ebx; Size
0x6CAE70: call    FormHeapAlloc
0x6CAE75: push    ebp; Src
0x6CAE76: mov     esi, eax
0x6CAE78: push    ebx; SizeInBytes
0x6CAE79: push    esi; Dst
0x6CAE7A: call    _strcpy_s
0x6CAE7F: movzx   ecx, word ptr [esp+54h+var_24+2]
0x6CAE84: mov     ebx, [esp+54h+arg_0]
0x6CAE88: add     esp, 10h
0x6CAE8B: cmp     ebx, ecx
0x6CAE8D: jb      short loc_6CAEA3
0x6CAE8F: test    esi, esi
0x6CAE91: lea     edx, [ebx+1]
0x6CAE94: mov     word ptr [esp+44h+var_24+2], dx
0x6CAE99: jz      short loc_6CAECA
0x6CAE9B: add     [esp+44h+var_20], 1
0x6CAEA1: jmp     short loc_6CAECA
0x6CAEA3: test    esi, esi
0x6CAEA5: jz      short loc_6CAEB9
0x6CAEA7: mov     eax, [esp+44h+var_28]
0x6CAEAB: cmp     dword ptr [eax+ebx*4], 0
0x6CAEAF: jnz     short loc_6CAECA
0x6CAEB1: add     [esp+44h+var_20], 1
0x6CAEB7: jmp     short loc_6CAECA
0x6CAEB9: mov     ecx, [esp+44h+var_28]
0x6CAEBD: cmp     dword ptr [ecx+ebx*4], 0
0x6CAEC1: jz      short loc_6CAECA
0x6CAEC3: add     [esp+44h+var_20], 0FFFFh
0x6CAECA: mov     edx, [esp+44h+var_28]
0x6CAECE: mov     ebp, [esp+44h+var_30]
0x6CAED2: mov     [edx+ebx*4], esi
0x6CAED5: mov     eax, [edi+18h]
0x6CAED8: add     eax, ebp
0x6CAEDA: mov     ecx, 0FFFFh
0x6CAEDF: mov     [eax+4], cx
0x6CAEE3: mov     [eax+6], cx
0x6CAEE7: mov     [eax+8], cx
0x6CAEEB: mov     [eax+0Ah], cx
0x6CAEEF: mov     [eax+0Ch], cx
0x6CAEF3: mov     eax, [edi+14h]
0x6CAEF6: mov     esi, [eax+ebp+4]
0x6CAEFA: test    esi, esi
0x6CAEFC: mov     [esp+44h+var_30], esi
0x6CAF00: jz      short loc_6CAF0C
0x6CAF02: lea     ecx, [esi+4]
0x6CAF05: push    ecx; lpAddend
0x6CAF06: call    dword ptr ds:0A28078h
0x6CAF0C: lea     edx, [esp+44h+var_30]
0x6CAF10: push    edx
0x6CAF11: push    ebx
0x6CAF12: lea     ecx, [esp+4Ch+var_1C]
0x6CAF16: mov     byte ptr [esp+4Ch+var_4], 2
0x6CAF1B: call    sub_6C7E90
0x6CAF20: test    esi, esi
0x6CAF22: mov     byte ptr [esp+44h+var_4], 1
0x6CAF27: jz      short loc_6CAF41
0x6CAF29: lea     eax, [esi+4]
0x6CAF2C: push    eax; lpAddend
0x6CAF2D: call    dword ptr ds:0A2807Ch
0x6CAF33: test    eax, eax
0x6CAF35: jnz     short loc_6CAF41
0x6CAF37: mov     edx, [esi]
0x6CAF39: mov     eax, [edx]
0x6CAF3B: push    1
0x6CAF3D: mov     ecx, esi
0x6CAF3F: call    eax
0x6CAF41: mov     esi, [edi+14h]
0x6CAF44: mov     ebx, [esi+ebp]
0x6CAF47: add     esi, ebp
0x6CAF49: test    ebx, ebx
0x6CAF4B: jz      short loc_6CAF6F
0x6CAF4D: lea     ecx, [ebx+4]
0x6CAF50: push    ecx; lpAddend
0x6CAF51: call    dword ptr ds:0A2807Ch
0x6CAF57: test    eax, eax
0x6CAF59: jnz     short loc_6CAF69
0x6CAF5B: test    ebx, ebx
0x6CAF5D: jz      short loc_6CAF69
0x6CAF5F: mov     edx, [ebx]
0x6CAF61: mov     eax, [edx]
0x6CAF63: push    1
0x6CAF65: mov     ecx, ebx
0x6CAF67: call    eax
0x6CAF69: mov     dword ptr [esi], 0
0x6CAF6F: mov     ebx, [esi+4]
0x6CAF72: test    ebx, ebx
0x6CAF74: jz      short loc_6CAF99
0x6CAF76: lea     ecx, [ebx+4]
0x6CAF79: push    ecx; lpAddend
0x6CAF7A: call    dword ptr ds:0A2807Ch
0x6CAF80: test    eax, eax
0x6CAF82: jnz     short loc_6CAF92
0x6CAF84: test    ebx, ebx
0x6CAF86: jz      short loc_6CAF92
0x6CAF88: mov     edx, [ebx]
0x6CAF8A: mov     eax, [edx]
0x6CAF8C: push    1
0x6CAF8E: mov     ecx, ebx
0x6CAF90: call    eax
0x6CAF92: mov     dword ptr [esi+4], 0
0x6CAF99: mov     eax, [esp+44h+arg_0]
0x6CAF9D: add     ebp, 10h
0x6CAFA0: mov     dword ptr [esi+8], 0
0x6CAFA7: mov     cl, ds:0A79EFCh
0x6CAFAD: add     eax, 1
0x6CAFB0: mov     [esp+44h+var_30], ebp
0x6CAFB4: mov     [esi+0Ch], cl
0x6CAFB7: mov     byte ptr [esi+0Dh], 0FFh
0x6CAFBB: xor     ebp, ebp
0x6CAFBD: cmp     eax, [edi+0Ch]
0x6CAFC0: mov     [esp+44h+arg_0], eax
0x6CAFC4: jb      loc_6CAE40
0x6CAFCA: mov     ebx, [esp+44h+var_28]
0x6CAFCE: movzx   ebp, [esp+44h+var_12]
0x6CAFD3: xor     esi, esi
0x6CAFD5: test    ebp, ebp
0x6CAFD7: jbe     short loc_6CB01D
0x6CAFD9: test    esi, esi
0x6CAFDB: mov     edx, [esp+44h+var_18]
0x6CAFDF: mov     ecx, [edx+esi*4]
0x6CAFE2: jnz     short loc_6CB00A
0x6CAFE4: movzx   eax, byte ptr [ecx+8]
0x6CAFE8: shr     eax, 1
0x6CAFEA: and     eax, 3
0x6CAFED: cmp     eax, 2
0x6CAFF0: mov     [edi+24h], eax
0x6CAFF3: jz      short loc_6CAFFC
0x6CAFF5: test    eax, eax
0x6CAFF7: jz      short loc_6CAFFC
0x6CAFF9: mov     [edi+24h], esi
0x6CAFFC: fld     dword ptr [ecx+0Ch]
0x6CAFFF: fstp    [esp+44h+arg_0]
0x6CB003: fld     [esp+44h+arg_0]
0x6CB007: fstp    dword ptr [edi+28h]
0x6CB00A: mov     eax, [ebx+esi*4]
0x6CB00D: push    ecx; int
0x6CB00E: push    eax; Src
0x6CB00F: mov     ecx, edi
0x6CB011: call    sub_6CA8E0
0x6CB016: add     esi, 1
0x6CB019: cmp     esi, ebp
0x6CB01B: jb      short loc_6CAFD9
0x6CB01D: movzx   edi, word ptr [esp+44h+var_24+2]
0x6CB022: xor     esi, esi
0x6CB024: test    edi, edi
0x6CB026: jbe     short loc_6CB043
0x6CB028: jmp     short loc_6CB030
0x6CB02A: align 10h
0x6CB030: mov     eax, [ebx+esi*4]
0x6CB033: push    eax
0x6CB034: call    FormHeapFree
0x6CB039: add     esi, 1
0x6CB03C: add     esp, 4
0x6CB03F: cmp     esi, edi
0x6CB041: jb      short loc_6CB030
0x6CB043: mov     eax, [esp+44h+var_18]
0x6CB047: test    eax, eax
0x6CB049: mov     byte ptr [esp+44h+var_4], 0
0x6CB04E: jz      short loc_6CB06D
0x6CB050: mov     ecx, [eax-4]
0x6CB053: lea     esi, [eax-4]
0x6CB056: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6CB05B: push    ecx; int
0x6CB05C: push    4; unsigned int
0x6CB05E: push    eax; void *
0x6CB05F: call    $LN21
0x6CB064: push    esi
0x6CB065: call    FormHeapFree
0x6CB06A: add     esp, 4
0x6CB06D: push    ebx
0x6CB06E: call    FormHeapFree
0x6CB073: add     esp, 4
0x6CB076: mov     ecx, dword ptr [esp+44h+var_C]
0x6CB07A: mov     large fs:0, ecx
0x6CB081: pop     ecx
0x6CB082: pop     edi
0x6CB083: pop     esi
0x6CB084: pop     ebp
0x6CB085: pop     ebx
0x6CB086: add     esp, 30h
0x6CB089: retn    4
