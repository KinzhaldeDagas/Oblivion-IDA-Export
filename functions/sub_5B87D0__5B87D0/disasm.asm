0x5B87D0: sub     esp, 84h
0x5B87D6: mov     eax, ds:0B30AACh
0x5B87DB: xor     eax, esp
0x5B87DD: mov     [esp+84h+var_4], eax
0x5B87E4: fld     [esp+84h+arg_0]
0x5B87EB: mov     eax, [esp+84h+arg_8]
0x5B87F2: push    ebx; a3
0x5B87F3: fstp    [esp+88h+var_78]; a3
0x5B87F7: fld     [esp+88h+arg_4]
0x5B87FE: push    ebp; a3
0x5B87FF: push    esi; a3
0x5B8800: fstp    [esp+90h+var_74]; a3
0x5B8804: fldz
0x5B8806: push    edi; a3
0x5B8807: mov     [esp+94h+var_54], ecx
0x5B880B: fstp    [esp+94h+var_70]; a3
0x5B880F: push    1; float
0x5B8811: lea     ecx, [esp+98h+var_78]
0x5B8815: push    ecx; int
0x5B8816: mov     edx, ecx
0x5B8818: mov     ecx, ds:0B333C4h; this
0x5B881E: push    edx; int
0x5B881F: mov     [esp+0A0h+var_7C], eax; a3
0x5B8823: call    TESObjectREFR_GetParentCell
0x5B8828: mov     ecx, eax
0x5B882A: call    sub_4CCE20
0x5B882F: mov     eax, ds:0B06A2Ch
0x5B8834: mov     ecx, ds:0B333C4h
0x5B883A: add     eax, 0FFFFFFFFh
0x5B883D: shr     eax, 1
0x5B883F: mov     [esp+94h+a3], eax
0x5B8843: mov     eax, [ecx]
0x5B8845: mov     edx, [eax+174h]
0x5B884B: call    edx
0x5B884D: mov     ecx, [eax]
0x5B884F: mov     [esp+94h+var_6C], ecx
0x5B8853: mov     edx, [eax+4]
0x5B8856: push    1; float
0x5B8858: lea     ecx, [esp+98h+var_6C]
0x5B885C: mov     [esp+98h+var_68], edx
0x5B8860: mov     eax, [eax+8]
0x5B8863: push    ecx; int
0x5B8864: mov     edx, ecx
0x5B8866: mov     ecx, ds:0B333C4h; this
0x5B886C: push    edx; int
0x5B886D: mov     [esp+0A0h+var_64], eax
0x5B8871: call    TESObjectREFR_GetParentCell
0x5B8876: mov     ecx, eax
0x5B8878: call    sub_4CCE20
0x5B887D: mov     ecx, ds:0B333C4h; this
0x5B8883: call    sub_4D8B90
0x5B8888: test    al, al
0x5B888A: jz      short loc_5B88E2
0x5B888C: fld     [esp+94h+var_6C]
0x5B8890: fistp   [esp+94h+var_84]
0x5B8894: mov     ebp, [esp+94h+var_84]
0x5B8898: add     ebp, 0FFFFF800h
0x5B889E: sar     ebp, 0Ch
0x5B88A1: fld     [esp+94h+var_68]
0x5B88A5: fistp   [esp+94h+var_84]
0x5B88A9: mov     ebx, [esp+94h+var_84]
0x5B88AD: add     ebx, 0FFFFF800h
0x5B88B3: sar     ebx, 0Ch
0x5B88B6: fld     [esp+94h+var_78]
0x5B88BA: fistp   [esp+94h+var_84]
0x5B88BE: mov     esi, [esp+94h+var_84]
0x5B88C2: add     esi, 0FFFFF800h
0x5B88C8: sar     esi, 0Ch
0x5B88CB: fld     [esp+94h+var_74]
0x5B88CF: fistp   [esp+94h+var_84]
0x5B88D3: mov     edi, [esp+94h+var_84]
0x5B88D7: add     edi, 0FFFFF800h
0x5B88DD: sar     edi, 0Ch
0x5B88E0: jmp     short loc_5B894E
0x5B88E2: fld     [esp+94h+var_6C]
0x5B88E6: fistp   [esp+94h+var_84]
0x5B88EA: mov     ebp, [esp+94h+var_84]
0x5B88EE: sar     ebp, 0Ch
0x5B88F1: fld     [esp+94h+var_68]
0x5B88F5: fistp   [esp+94h+var_84]
0x5B88F9: mov     ebx, [esp+94h+var_84]
0x5B88FD: sar     ebx, 0Ch
0x5B8900: fld     [esp+94h+var_78]
0x5B8904: fistp   [esp+94h+var_84]
0x5B8908: mov     esi, [esp+94h+var_84]
0x5B890C: sar     esi, 0Ch
0x5B890F: fld     [esp+94h+var_74]
0x5B8913: fistp   [esp+94h+var_84]
0x5B8917: mov     eax, [esp+94h+a3]
0x5B891B: mov     edi, [esp+94h+var_84]
0x5B891F: mov     ecx, ds:0B333A0h; this
0x5B8925: add     eax, 1
0x5B8928: push    eax; a3
0x5B8929: push    eax; a2
0x5B892A: sar     edi, 0Ch
0x5B892D: call    TES_GetCellFromCoords
0x5B8932: test    eax, eax
0x5B8934: mov     [esp+94h+var_84], eax; a3
0x5B8938: jz      short loc_5B894E
0x5B893A: mov     ecx, eax; this
0x5B893C: call    TESObjectCELL_GetXCoordinate
0x5B8941: mov     ecx, [esp+94h+var_84]; this
0x5B8945: mov     esi, eax
0x5B8947: call    TESObjectCELL_GetYCoordinate
0x5B894C: mov     edi, eax
0x5B894E: mov     eax, [esp+94h+a3]
0x5B8952: mov     ecx, ebp
0x5B8954: sub     ecx, eax
0x5B8956: cmp     esi, ecx
0x5B8958: mov     [esp+94h+a3], ecx
0x5B895C: jl      loc_5B8CE1
0x5B8962: add     ebp, eax
0x5B8964: cmp     esi, ebp
0x5B8966: jg      loc_5B8CE1
0x5B896C: mov     esi, ebx
0x5B896E: sub     esi, eax
0x5B8970: cmp     edi, esi
0x5B8972: jl      loc_5B8CE1
0x5B8978: add     ebx, eax
0x5B897A: cmp     edi, ebx
0x5B897C: jg      loc_5B8CE1
0x5B8982: mov     ecx, ds:0B333C4h; this
0x5B8988: call    sub_4D8B90
0x5B898D: test    al, al
0x5B898F: mov     eax, [esp+94h+a3]
0x5B8993: jz      short loc_5B89BC
0x5B8995: shl     eax, 0Ch
0x5B8998: add     eax, 800h
0x5B899D: mov     [esp+94h+a3], eax
0x5B89A1: fild    [esp+94h+a3]
0x5B89A5: shl     esi, 0Ch
0x5B89A8: add     esi, 800h
0x5B89AE: mov     [esp+94h+a3], esi
0x5B89B2: fstp    [esp+94h+var_60]
0x5B89B6: fild    [esp+94h+a3]
0x5B89BA: jmp     short loc_5B89D6
0x5B89BC: shl     eax, 0Ch
0x5B89BF: mov     [esp+94h+a3], eax
0x5B89C3: fild    [esp+94h+a3]
0x5B89C7: shl     esi, 0Ch
0x5B89CA: mov     [esp+94h+a3], esi
0x5B89CE: fstp    [esp+94h+var_60]
0x5B89D2: fild    [esp+94h+a3]
0x5B89D6: mov     eax, [esp+94h+var_60]
0x5B89DA: fstp    [esp+94h+var_5C]
0x5B89DE: mov     edi, [esp+94h+var_54]
0x5B89E2: fldz
0x5B89E4: mov     ecx, [esp+94h+var_5C]
0x5B89E8: fstp    [esp+94h+var_58]
0x5B89EC: mov     edx, [esp+94h+var_58]
0x5B89F0: mov     [esp+94h+var_50], eax
0x5B89F4: mov     eax, [edi+68h]
0x5B89F7: mov     esi, [eax+34h]
0x5B89FA: test    esi, esi
0x5B89FC: mov     [esp+94h+var_48], edx
0x5B8A00: mov     [esp+94h+var_4C], ecx
0x5B8A04: jz      short loc_5B8A31
0x5B8A06: mov     ebx, [esi+8]
0x5B8A09: lea     eax, [esi+8]
0x5B8A0C: mov     esi, [esi]
0x5B8A0E: push    0FA7h
0x5B8A13: mov     ecx, ebx
0x5B8A15: call    Tile_GetFloat
0x5B8A1A: fcomp   dword ptr ds:0A2FAA8h
0x5B8A20: fnstsw  ax
0x5B8A22: test    ah, 44h
0x5B8A25: jnp     short loc_5B8A2D
0x5B8A27: test    esi, esi
0x5B8A29: jnz     short loc_5B8A06
0x5B8A2B: jmp     short loc_5B8A31
0x5B8A2D: test    ebx, ebx
0x5B8A2F: jnz     short loc_5B8A4D
0x5B8A31: mov     ecx, [edi+68h]
0x5B8A34: push    0
0x5B8A36: push    offset aMap_local_icon; "map_local_icon"
0x5B8A3B: push    ecx
0x5B8A3C: mov     ecx, edi
0x5B8A3E: call    Menu_CreateTileFromTemplate
0x5B8A43: mov     ebx, eax
0x5B8A45: test    ebx, ebx
0x5B8A47: jz      loc_5B8CDD
0x5B8A4D: mov     ebp, [ebx+24h]
0x5B8A50: test    ebp, ebp
0x5B8A52: mov     byte ptr [ebx+6], 0
0x5B8A56: jz      short loc_5B8ACF
0x5B8A58: lea     edi, [ebp+30h]
0x5B8A5B: mov     ecx, 9
0x5B8A60: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x5B8A65: rep movsd
0x5B8A67: xor     esi, esi
0x5B8A69: cmp     [ebp+0B8h], si
0x5B8A70: mov     [esp+94h+a3], esi
0x5B8A74: jbe     short loc_5B8ACF
0x5B8A76: jmp     short loc_5B8A80
0x5B8A78: align 10h
0x5B8A80: movzx   edx, word ptr [ebp+0B6h]
0x5B8A87: cmp     edx, esi
0x5B8A89: ja      short loc_5B8A8F
0x5B8A8B: xor     eax, eax
0x5B8A8D: jmp     short loc_5B8A98
0x5B8A8F: mov     eax, [ebp+0B0h]
0x5B8A95: mov     eax, [eax+esi*4]
0x5B8A98: push    eax
0x5B8A99: push    offset dword_B3FCD4
0x5B8A9E: call    NiRTTI_Cast
0x5B8AA3: add     esp, 8
0x5B8AA6: test    eax, eax
0x5B8AA8: jz      short loc_5B8ABD
0x5B8AAA: lea     edi, [eax+30h]
0x5B8AAD: mov     ecx, 9
0x5B8AB2: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x5B8AB7: rep movsd
0x5B8AB9: mov     esi, [esp+94h+a3]
0x5B8ABD: movzx   ecx, word ptr [ebp+0B8h]
0x5B8AC4: add     esi, 1
0x5B8AC7: cmp     esi, ecx
0x5B8AC9: mov     [esp+94h+a3], esi
0x5B8ACD: jb      short loc_5B8A80
0x5B8ACF: fld     [esp+94h+var_78]
0x5B8AD3: mov     edx, ds:0B06A2Ch
0x5B8AD9: fsub    [esp+94h+var_50]
0x5B8ADD: add     edx, 0FFFFFFFFh
0x5B8AE0: test    edx, edx
0x5B8AE2: mov     [esp+94h+a3], edx
0x5B8AE6: fstp    [esp+94h+var_60]
0x5B8AEA: fld     [esp+94h+var_74]
0x5B8AEE: fsub    [esp+94h+var_4C]
0x5B8AF2: fstp    [esp+94h+var_5C]
0x5B8AF6: fld     [esp+94h+var_60]
0x5B8AFA: fld     qword ptr ds:0A46040h
0x5B8B00: fmul    st(1), st
0x5B8B02: fld     qword ptr ds:0A6CC88h
0x5B8B08: fmul    st(2), st
0x5B8B0A: fxch    st(2)
0x5B8B0C: fstp    [esp+94h+var_54]
0x5B8B10: fld     [esp+94h+var_5C]
0x5B8B14: fsubr   qword ptr ds:0A37650h
0x5B8B1A: fmulp   st(1), st
0x5B8B1C: fmul    st, st(1)
0x5B8B1E: fild    [esp+94h+a3]
0x5B8B22: jge     short loc_5B8B2A
0x5B8B24: fadd    dword ptr ds:0A2FC78h
0x5B8B2A: mov     esi, [esp+94h+var_7C]
0x5B8B2E: fmulp   st(2), st
0x5B8B30: lea     edi, [esp+94h+var_44]
0x5B8B34: xor     edx, edx
0x5B8B36: faddp   st(1), st
0x5B8B38: mov     ecx, esi
0x5B8B3A: sub     edi, esi
0x5B8B3C: fstp    [esp+94h+a3]; a3
0x5B8B40: test    esi, esi
0x5B8B42: jz      short loc_5B8B76
0x5B8B44: mov     al, [ecx]
0x5B8B46: test    al, al
0x5B8B48: jz      short loc_5B8B76
0x5B8B4A: cmp     al, 30h ; '0'
0x5B8B4C: jl      short loc_5B8B52
0x5B8B4E: cmp     al, 39h ; '9'
0x5B8B50: jle     short loc_5B8B62
0x5B8B52: cmp     al, 41h ; 'A'
0x5B8B54: jl      short loc_5B8B5A
0x5B8B56: cmp     al, 5Ah ; 'Z'
0x5B8B58: jle     short loc_5B8B62
0x5B8B5A: cmp     al, 61h ; 'a'
0x5B8B5C: jl      short loc_5B8B67
0x5B8B5E: cmp     al, 7Ah ; 'z'
0x5B8B60: jg      short loc_5B8B67
0x5B8B62: mov     [edi+ecx], al
0x5B8B65: jmp     short loc_5B8B6B
0x5B8B67: mov     byte ptr [edi+ecx], 5Fh ; '_'
0x5B8B6B: add     edx, 1
0x5B8B6E: add     ecx, 1
0x5B8B71: cmp     edx, 3Fh ; '?'
0x5B8B74: jl      short loc_5B8B40
0x5B8B76: push    0; a3
0x5B8B78: lea     eax, [esp+98h+var_44]
0x5B8B7C: push    eax; a2
0x5B8B7D: lea     ecx, [ebx+8]; this
0x5B8B80: mov     [esp+edx+9Ch+var_44], 0
0x5B8B85: call    BSStringT_Set
0x5B8B8A: fld     dword ptr ds:0A379B4h
0x5B8B90: push    ecx
0x5B8B91: fstp    [esp+98h+a2]; a3
0x5B8B94: push    0FAEh; a2
0x5B8B99: mov     ecx, ebx; this
0x5B8B9B: call    Tile_SetFloat
0x5B8BA0: fld     [esp+94h+var_54]
0x5B8BA4: push    ecx
0x5B8BA5: fstp    [esp+98h+a2]; a3
0x5B8BA8: push    0FAFh; a2
0x5B8BAD: mov     ecx, ebx; this
0x5B8BAF: call    Tile_SetFloat
0x5B8BB4: fld     [esp+94h+a3]
0x5B8BB8: push    ecx
0x5B8BB9: fstp    [esp+98h+a2]; a3
0x5B8BBC: push    0FB0h; a2
0x5B8BC1: mov     ecx, ebx; this
0x5B8BC3: call    Tile_SetFloat
0x5B8BC8: push    esi
0x5B8BC9: push    0FB2h
0x5B8BCE: mov     ecx, ebx
0x5B8BD0: call    Tile_SetString
0x5B8BD5: fild    [esp+94h+arg_C]
0x5B8BDC: push    ecx
0x5B8BDD: mov     ecx, ebx; this
0x5B8BDF: fstp    [esp+98h+a2]; a3
0x5B8BE2: push    0FB3h; a2
0x5B8BE7: call    Tile_SetFloat
0x5B8BEC: xor     ecx, ecx
0x5B8BEE: cmp     [esp+94h+arg_10], cl
0x5B8BF5: setnz   cl
0x5B8BF8: add     ecx, 1
0x5B8BFB: mov     [esp+94h+var_7C], ecx; a3
0x5B8BFF: fild    [esp+94h+var_7C]
0x5B8C03: push    ecx
0x5B8C04: mov     ecx, ebx; this
0x5B8C06: fstp    [esp+98h+a2]; a3
0x5B8C09: push    0FB4h; a2
0x5B8C0E: call    Tile_SetFloat
0x5B8C13: fild    [esp+94h+arg_14]
0x5B8C1A: push    ecx
0x5B8C1B: mov     ecx, ebx; this
0x5B8C1D: fstp    [esp+98h+a2]; a3
0x5B8C20: push    0FB5h; a2
0x5B8C25: call    Tile_SetFloat
0x5B8C2A: xor     edx, edx
0x5B8C2C: cmp     [esp+94h+arg_18], dl
0x5B8C33: push    ecx
0x5B8C34: setnz   dl
0x5B8C37: mov     ecx, ebx; this
0x5B8C39: add     edx, 1
0x5B8C3C: mov     [esp+98h+var_7C], edx
0x5B8C40: fild    [esp+98h+var_7C]
0x5B8C44: fstp    [esp+98h+a2]; a3
0x5B8C47: push    0FB6h; a2
0x5B8C4C: call    Tile_SetFloat
0x5B8C51: fild    [esp+94h+arg_1C]
0x5B8C58: push    ecx
0x5B8C59: mov     ecx, ebx; this
0x5B8C5B: fstp    [esp+98h+a2]; a3
0x5B8C5E: push    0FA7h; a2
0x5B8C63: call    Tile_SetFloat
0x5B8C68: xor     eax, eax
0x5B8C6A: cmp     [esp+94h+arg_20], al
0x5B8C71: push    ecx
0x5B8C72: setnz   al
0x5B8C75: mov     ecx, ebx; this
0x5B8C77: add     eax, 1
0x5B8C7A: mov     [esp+98h+var_7C], eax
0x5B8C7E: fild    [esp+98h+var_7C]
0x5B8C82: fstp    [esp+98h+a2]; a3
0x5B8C85: push    0FB8h; a2
0x5B8C8A: call    Tile_SetFloat
0x5B8C8F: xor     ecx, ecx
0x5B8C91: cmp     [esp+94h+arg_24], cl
0x5B8C98: setnz   cl
0x5B8C9B: add     ecx, 1
0x5B8C9E: mov     [esp+94h+var_7C], ecx
0x5B8CA2: fild    [esp+94h+var_7C]
0x5B8CA6: push    ecx
0x5B8CA7: mov     ecx, ebx; this
0x5B8CA9: fstp    [esp+98h+a2]; a3
0x5B8CAC: push    0FB9h; a2
0x5B8CB1: call    Tile_SetFloat
0x5B8CB6: xor     edx, edx
0x5B8CB8: cmp     [esp+94h+arg_28], dl
0x5B8CBF: push    ecx
0x5B8CC0: setnz   dl
0x5B8CC3: mov     ecx, ebx; this
0x5B8CC5: add     edx, 1
0x5B8CC8: mov     [esp+98h+var_7C], edx
0x5B8CCC: fild    [esp+98h+var_7C]
0x5B8CD0: fstp    [esp+98h+a2]; a3
0x5B8CD3: push    0FBAh; a2
0x5B8CD8: call    Tile_SetFloat
0x5B8CDD: mov     eax, ebx
0x5B8CDF: jmp     short loc_5B8CE3
0x5B8CE1: xor     eax, eax
0x5B8CE3: mov     ecx, [esp+94h+var_4]
0x5B8CEA: pop     edi
0x5B8CEB: pop     esi
0x5B8CEC: pop     ebp
0x5B8CED: pop     ebx
0x5B8CEE: xor     ecx, esp
0x5B8CF0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B8CF5: add     esp, 84h
0x5B8CFB: retn    2Ch ; ','
