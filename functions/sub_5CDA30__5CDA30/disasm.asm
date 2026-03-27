0x5CDA30: push    0FFFFFFFFh
0x5CDA32: push    offset SEH_5CDA30
0x5CDA37: mov     eax, large fs:0
0x5CDA3D: push    eax
0x5CDA3E: sub     esp, 10h
0x5CDA41: push    ebx
0x5CDA42: push    ebp
0x5CDA43: push    esi
0x5CDA44: push    edi
0x5CDA45: mov     eax, ds:0B30AACh
0x5CDA4A: xor     eax, esp
0x5CDA4C: push    eax
0x5CDA4D: lea     eax, [esp+30h+var_C]
0x5CDA51: mov     large fs:0, eax
0x5CDA57: mov     esi, ecx
0x5CDA59: mov     ecx, ds:0B333C4h
0x5CDA5F: mov     eax, [ecx]
0x5CDA61: mov     edx, [eax+170h]
0x5CDA67: call    edx
0x5CDA69: push    0FAEh
0x5CDA6E: sub     esp, 8
0x5CDA71: mov     ecx, esp; this
0x5CDA73: xor     ebx, ebx
0x5CDA75: mov     [esp+3Ch+var_14], esp
0x5CDA79: mov     [esp+3Ch+var_18], eax
0x5CDA7D: mov     eax, ds:0B38F78h
0x5CDA82: push    ebx; a3
0x5CDA83: push    eax; a2
0x5CDA84: mov     [ecx], ebx
0x5CDA86: mov     [ecx+4], bx
0x5CDA8A: mov     [ecx+6], bx
0x5CDA8E: call    BSStringT_Set
0x5CDA93: mov     eax, ds:0B38F78h
0x5CDA98: sub     esp, 8
0x5CDA9B: mov     ecx, esp; this
0x5CDA9D: mov     [esp+44h+var_10], esp
0x5CDAA1: push    ebx; a3
0x5CDAA2: push    eax; a2
0x5CDAA3: mov     [esp+4Ch+var_4], ebx
0x5CDAA7: mov     [ecx], ebx
0x5CDAA9: mov     [ecx+4], bx
0x5CDAAD: mov     [ecx+6], bx
0x5CDAB1: call    BSStringT_Set
0x5CDAB6: or      ebp, 0FFFFFFFFh
0x5CDAB9: mov     ecx, esi
0x5CDABB: mov     [esp+44h+var_4], ebp
0x5CDABF: call    sub_5C3440
0x5CDAC4: mov     ecx, eax
0x5CDAC6: call    Tile_GetFloat
0x5CDACB: call    Double_To_SInt32
0x5CDAD0: mov     ecx, ds:0B33A98h
0x5CDAD6: add     ecx, 44h ; 'D'
0x5CDAD9: cmp     ecx, ebx
0x5CDADB: mov     edx, ebp
0x5CDADD: mov     [esp+30h+var_19], bl
0x5CDAE1: mov     [esp+30h+var_1A], bl
0x5CDAE5: jz      short loc_5CDB0D
0x5CDAE7: cmp     edx, eax
0x5CDAE9: jz      loc_5CDC33
0x5CDAEF: cmp     ecx, ebx
0x5CDAF1: jz      short loc_5CDB02
0x5CDAF3: mov     edi, [ecx]
0x5CDAF5: cmp     edi, ebx
0x5CDAF7: jz      short loc_5CDB02
0x5CDAF9: test    byte ptr [edi+70h], 1
0x5CDAFD: jz      short loc_5CDB02
0x5CDAFF: add     edx, 1
0x5CDB02: cmp     edx, eax
0x5CDB04: jz      short loc_5CDB09
0x5CDB06: mov     ecx, [ecx+4]
0x5CDB09: cmp     ecx, ebx
0x5CDB0B: jnz     short loc_5CDAE7
0x5CDB0D: mov     edx, ds:0B38B78h
0x5CDB13: mov     eax, ds:0B38F78h
0x5CDB18: push    edx
0x5CDB19: push    0FB4h
0x5CDB1E: sub     esp, 8
0x5CDB21: mov     ecx, esp; this
0x5CDB23: mov     [esp+40h+var_10], esp
0x5CDB27: push    ebx; a3
0x5CDB28: push    eax; a2
0x5CDB29: mov     [ecx], ebx
0x5CDB2B: mov     [ecx+4], bx
0x5CDB2F: mov     [ecx+6], bx
0x5CDB33: call    BSStringT_Set
0x5CDB38: mov     eax, ds:0B38F78h
0x5CDB3D: sub     esp, 8
0x5CDB40: mov     ecx, esp; this
0x5CDB42: mov     [esp+48h+var_14], esp
0x5CDB46: push    ebx; a3
0x5CDB47: push    eax; a2
0x5CDB48: mov     [esp+50h+var_4], 5
0x5CDB50: mov     [ecx], ebx
0x5CDB52: mov     [ecx+4], bx
0x5CDB56: mov     [ecx+6], bx
0x5CDB5A: call    BSStringT_Set
0x5CDB5F: mov     ecx, esi
0x5CDB61: mov     [esp+48h+var_4], ebp
0x5CDB65: call    sub_5C3440
0x5CDB6A: mov     ecx, eax
0x5CDB6C: call    Tile_SetString
0x5CDB71: mov     eax, ds:0B38FB0h
0x5CDB76: push    offset word_A36430
0x5CDB7B: push    0FB4h
0x5CDB80: sub     esp, 8
0x5CDB83: mov     ecx, esp; this
0x5CDB85: mov     [esp+40h+var_10], esp
0x5CDB89: push    ebx; a3
0x5CDB8A: push    eax; a2
0x5CDB8B: mov     [ecx], ebx
0x5CDB8D: mov     [ecx+4], bx
0x5CDB91: mov     [ecx+6], bx
0x5CDB95: call    BSStringT_Set
0x5CDB9A: mov     [esp+40h+var_4], 6
0x5CDBA2: mov     eax, ds:0B38F78h
0x5CDBA7: sub     esp, 8
0x5CDBAA: mov     ecx, esp; this
0x5CDBAC: mov     [esp+48h+var_14], esp
0x5CDBB0: push    ebx; a3
0x5CDBB1: mov     [ecx], ebx
0x5CDBB3: mov     [ecx+4], bx
0x5CDBB7: push    eax; a2
0x5CDBB8: mov     [ecx+6], bx
0x5CDBBC: call    BSStringT_Set
0x5CDBC1: mov     ecx, esi
0x5CDBC3: mov     [esp+48h+var_4], ebp
0x5CDBC7: call    sub_5C3440
0x5CDBCC: mov     ecx, eax
0x5CDBCE: call    Tile_SetString
0x5CDBD3: push    ebx
0x5CDBD4: mov     ecx, esi
0x5CDBD6: call    sub_5C9980
0x5CDBDB: mov     ecx, esi
0x5CDBDD: call    sub_5C6EA0
0x5CDBE2: push    1
0x5CDBE4: call    sub_5C7070
0x5CDBE9: mov     al, [esp+34h+var_19]
0x5CDBED: add     esp, 4
0x5CDBF0: cmp     [esp+30h+var_1A], al
0x5CDBF4: jz      loc_5CDECA
0x5CDBFA: mov     ecx, ds:0B333C4h; this
0x5CDC00: mov     edx, [ecx+3Ch]
0x5CDC03: mov     ebp, [edx+1Ch]
0x5CDC06: push    ebx; a2
0x5CDC07: call    TESObjectREFR_Set3D
0x5CDC0C: mov     ecx, [esp+30h+var_18]
0x5CDC10: add     ecx, 0ACh ; '¬'
0x5CDC16: cmp     [esp+30h+var_1A], bl
0x5CDC1A: jz      loc_5CDE4A
0x5CDC20: mov     eax, [ecx]
0x5CDC22: mov     edx, ds:0B38B68h
0x5CDC28: mov     eax, [eax+18h]
0x5CDC2B: push    edx
0x5CDC2C: call    eax
0x5CDC2E: jmp     loc_5CDE57
0x5CDC33: cmp     ecx, ebx
0x5CDC35: jz      loc_5CDB0D
0x5CDC3B: mov     edi, [ecx]
0x5CDC3D: cmp     edi, ebx
0x5CDC3F: jz      loc_5CDE12
0x5CDC45: mov     eax, [esp+30h+var_18]
0x5CDC49: mov     ecx, [eax+0E8h]
0x5CDC4F: push    ebx
0x5CDC50: call    sub_52BDB0
0x5CDC55: test    eax, eax
0x5CDC57: mov     eax, [edi+1Ch]
0x5CDC5A: setnz   [esp+30h+var_19]
0x5CDC5F: cmp     eax, ebx
0x5CDC61: jnz     short loc_5CDC68
0x5CDC63: mov     eax, offset EmptyString
0x5CDC68: push    eax
0x5CDC69: mov     eax, ds:0B38F78h
0x5CDC6E: push    0FB4h
0x5CDC73: sub     esp, 8
0x5CDC76: mov     ecx, esp; this
0x5CDC78: mov     [esp+40h+var_10], esp
0x5CDC7C: push    ebx; a3
0x5CDC7D: push    eax; a2
0x5CDC7E: mov     [ecx], ebx
0x5CDC80: mov     [ecx+4], bx
0x5CDC84: mov     [ecx+6], bx
0x5CDC88: call    BSStringT_Set
0x5CDC8D: mov     eax, ds:0B38F70h
0x5CDC92: sub     esp, 8
0x5CDC95: mov     ecx, esp; this
0x5CDC97: mov     [esp+48h+var_14], esp
0x5CDC9B: push    ebx; a3
0x5CDC9C: push    eax; a2
0x5CDC9D: mov     [esp+50h+var_4], 1
0x5CDCA5: mov     [ecx], ebx
0x5CDCA7: mov     [ecx+4], bx
0x5CDCAB: mov     [ecx+6], bx
0x5CDCAF: call    BSStringT_Set
0x5CDCB4: mov     ecx, esi
0x5CDCB6: mov     [esp+48h+var_4], ebp
0x5CDCBA: call    sub_5C3440
0x5CDCBF: mov     ecx, eax
0x5CDCC1: call    Tile_SetString
0x5CDCC6: mov     eax, [edi+1Ch]
0x5CDCC9: cmp     eax, ebx
0x5CDCCB: jnz     short loc_5CDCD2
0x5CDCCD: mov     eax, offset EmptyString
0x5CDCD2: push    eax
0x5CDCD3: mov     eax, ds:0B38F78h
0x5CDCD8: push    0FB4h
0x5CDCDD: sub     esp, 8
0x5CDCE0: mov     ecx, esp; this
0x5CDCE2: mov     [esp+40h+var_10], esp
0x5CDCE6: push    ebx; a3
0x5CDCE7: push    eax; a2
0x5CDCE8: mov     [ecx], ebx
0x5CDCEA: mov     [ecx+4], bx
0x5CDCEE: mov     [ecx+6], bx
0x5CDCF2: call    BSStringT_Set
0x5CDCF7: mov     eax, ds:0B38F78h
0x5CDCFC: sub     esp, 8
0x5CDCFF: mov     ecx, esp; this
0x5CDD01: mov     [esp+48h+var_14], esp
0x5CDD05: push    ebx; a3
0x5CDD06: push    eax; a2
0x5CDD07: mov     [esp+50h+var_4], 2
0x5CDD0F: mov     [ecx], ebx
0x5CDD11: mov     [ecx+4], bx
0x5CDD15: mov     [ecx+6], bx
0x5CDD19: call    BSStringT_Set
0x5CDD1E: mov     ecx, esi
0x5CDD20: mov     [esp+48h+var_4], ebp
0x5CDD24: call    sub_5C3440
0x5CDD29: mov     ecx, eax
0x5CDD2B: call    Tile_SetString
0x5CDD30: mov     ecx, ds:0B333C4h
0x5CDD36: call    sub_662710
0x5CDD3B: mov     ecx, ds:0B333C4h
0x5CDD41: push    ebx
0x5CDD42: add     ecx, 68h ; 'h'
0x5CDD45: call    MagicTarget_RemoveNonPersistentEffects
0x5CDD4A: mov     ecx, ds:0B333C4h
0x5CDD50: call    sub_5E4B00
0x5CDD55: mov     ecx, [esp+30h+var_18]
0x5CDD59: mov     [ecx+0E8h], edi
0x5CDD5F: mov     edx, [edi+24h]
0x5CDD62: mov     eax, [edx+10h]
0x5CDD65: add     edi, 24h ; '$'
0x5CDD68: push    43534544h
0x5CDD6D: push    ebx
0x5CDD6E: mov     ecx, edi
0x5CDD70: call    eax
0x5CDD72: test    eax, eax
0x5CDD74: jz      short loc_5CDDE3
0x5CDD76: mov     edx, [edi]
0x5CDD78: mov     eax, [edx+10h]
0x5CDD7B: push    43534544h
0x5CDD80: push    ebx
0x5CDD81: mov     ecx, edi
0x5CDD83: call    eax
0x5CDD85: push    eax
0x5CDD86: mov     eax, ds:0B38FB0h
0x5CDD8B: push    0FB4h
0x5CDD90: sub     esp, 8
0x5CDD93: mov     ecx, esp; this
0x5CDD95: mov     [esp+40h+var_10], esp
0x5CDD99: push    ebx; a3
0x5CDD9A: push    eax; a2
0x5CDD9B: mov     [ecx], ebx
0x5CDD9D: mov     [ecx+4], bx
0x5CDDA1: mov     [ecx+6], bx
0x5CDDA5: call    BSStringT_Set
0x5CDDAA: mov     eax, ds:0B38F78h
0x5CDDAF: sub     esp, 8
0x5CDDB2: mov     ecx, esp; this
0x5CDDB4: mov     [esp+48h+var_14], esp
0x5CDDB8: push    ebx; a3
0x5CDDB9: push    eax; a2
0x5CDDBA: mov     [esp+50h+var_4], 3
0x5CDDC2: mov     [ecx], ebx
0x5CDDC4: mov     [ecx+4], bx
0x5CDDC8: mov     [ecx+6], bx
0x5CDDCC: call    BSStringT_Set
0x5CDDD1: mov     ecx, esi
0x5CDDD3: mov     [esp+48h+var_4], ebp
0x5CDDD7: call    sub_5C3440
0x5CDDDC: mov     ecx, eax
0x5CDDDE: call    Tile_SetString
0x5CDDE3: mov     ecx, [esp+30h+var_18]
0x5CDDE7: mov     ecx, [ecx+0E8h]
0x5CDDED: push    ebx
0x5CDDEE: call    sub_52BDB0
0x5CDDF3: test    eax, eax
0x5CDDF5: mov     eax, ds:0B333C4h
0x5CDDFA: mov     ecx, [eax+58h]
0x5CDDFD: mov     edx, [ecx]
0x5CDDFF: push    eax
0x5CDE00: mov     eax, [edx+384h]
0x5CDE06: setnz   [esp+34h+var_1A]
0x5CDE0B: call    eax
0x5CDE0D: jmp     loc_5CDBD3
0x5CDE12: mov     ecx, ds:0B38B78h
0x5CDE18: mov     eax, ds:0B38FB0h
0x5CDE1D: push    ecx
0x5CDE1E: push    0FB4h
0x5CDE23: sub     esp, 8
0x5CDE26: mov     ecx, esp; this
0x5CDE28: mov     [esp+40h+var_10], esp
0x5CDE2C: push    ebx; a3
0x5CDE2D: push    eax; a2
0x5CDE2E: mov     [ecx], ebx
0x5CDE30: mov     [ecx+4], bx
0x5CDE34: mov     [ecx+6], bx
0x5CDE38: call    BSStringT_Set
0x5CDE3D: mov     [esp+40h+var_4], 4
0x5CDE45: jmp     loc_5CDBA2
0x5CDE4A: mov     edx, [ecx]
0x5CDE4C: mov     eax, ds:0B38B70h
0x5CDE51: mov     edx, [edx+18h]
0x5CDE54: push    eax
0x5CDE55: call    edx
0x5CDE57: mov     ecx, ds:0B333C4h
0x5CDE5D: mov     byte ptr ds:0B33D80h, 1
0x5CDE64: call    MobileObject_GenerateNiNode
0x5CDE69: mov     edi, eax
0x5CDE6B: mov     eax, [ebp+0]
0x5CDE6E: mov     edx, [eax+84h]
0x5CDE74: push    1
0x5CDE76: push    edi
0x5CDE77: mov     ecx, ebp
0x5CDE79: call    edx
0x5CDE7B: push    offset aPlayer; "Player"
0x5CDE80: mov     ecx, edi
0x5CDE82: mov     ds:0B33D80h, bl
0x5CDE88: call    NiObjectNET_SetName
0x5CDE8D: mov     eax, [edi]
0x5CDE8F: mov     edx, [eax+58h]
0x5CDE92: push    offset aCamera01; "Camera01"
0x5CDE97: mov     ecx, edi
0x5CDE99: call    edx
0x5CDE9B: mov     ecx, ds:0B333C4h
0x5CDEA1: mov     ds:0B3BB10h, eax
0x5CDEA6: mov     eax, [ecx]
0x5CDEA8: mov     edx, [eax+148h]
0x5CDEAE: call    edx
0x5CDEB0: call    UpdatePlayerHead
0x5CDEB5: mov     eax, ds:0B333C4h
0x5CDEBA: mov     ecx, [eax+58h]
0x5CDEBD: mov     edx, [ecx]
0x5CDEBF: push    eax
0x5CDEC0: mov     eax, [edx+384h]
0x5CDEC6: call    eax
0x5CDEC8: jmp     short loc_5CDECF
0x5CDECA: call    UpdatePlayerHead
0x5CDECF: push    ebx
0x5CDED0: mov     ecx, esi
0x5CDED2: call    sub_5C7BA0
0x5CDED7: mov     ecx, [esp+30h+var_C]
0x5CDEDB: mov     large fs:0, ecx
0x5CDEE2: pop     ecx
0x5CDEE3: pop     edi
0x5CDEE4: pop     esi
0x5CDEE5: pop     ebp
0x5CDEE6: pop     ebx
0x5CDEE7: add     esp, 1Ch
0x5CDEEA: retn
