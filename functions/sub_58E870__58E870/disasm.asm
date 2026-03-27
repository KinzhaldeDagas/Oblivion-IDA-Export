0x58E870: push    ebp
0x58E871: mov     ebp, esp
0x58E873: and     esp, 0FFFFFFF8h
0x58E876: push    0FFFFFFFFh
0x58E878: push    offset SEH_58E870
0x58E87D: mov     eax, large fs:0
0x58E883: push    eax
0x58E884: sub     esp, 4Ch
0x58E887: push    ebx
0x58E888: push    ebp
0x58E889: push    esi
0x58E88A: push    edi; a3
0x58E88B: mov     eax, ds:0B30AACh
0x58E890: xor     eax, esp
0x58E892: push    eax; a3
0x58E893: lea     eax, [esp+6Ch+var_C]
0x58E897: mov     large fs:0, eax
0x58E89D: mov     esi, ecx
0x58E89F: mov     ecx, [esi+2Ch]
0x58E8A2: xor     ebp, ebp
0x58E8A4: xor     al, al
0x58E8A6: cmp     ecx, ebp
0x58E8A8: mov     [esp+6Ch+var_57], al
0x58E8AC: jz      loc_58FA8D
0x58E8B2: mov     eax, [esi+24h]
0x58E8B5: cmp     eax, ebp
0x58E8B7: jz      short loc_58E906
0x58E8B9: test    ecx, 200h
0x58E8BF: jz      short loc_58E906
0x58E8C1: push    0FA4h
0x58E8C6: mov     ecx, esi
0x58E8C8: call    Tile_GetFloat
0x58E8CD: fcomp   dword ptr ds:0A379B4h
0x58E8D3: fnstsw  ax
0x58E8D5: test    ah, 44h
0x58E8D8: jp      short loc_58E8DE
0x58E8DA: mov     bl, 1
0x58E8DC: jmp     short loc_58E8E0
0x58E8DE: xor     bl, bl
0x58E8E0: mov     eax, [esi]
0x58E8E2: mov     edx, [eax+0Ch]
0x58E8E5: mov     ecx, esi
0x58E8E7: call    edx
0x58E8E9: cmp     eax, 386h
0x58E8EE: jnz     short loc_58E906
0x58E8F0: test    bl, bl
0x58E8F2: jz      short loc_58E8FC
0x58E8F4: cmp     byte ptr [esi+48h], 0
0x58E8F8: jz      short loc_58E902
0x58E8FA: jmp     short loc_58E906
0x58E8FC: cmp     byte ptr [esi+48h], 0
0x58E900: jz      short loc_58E906
0x58E902: or      dword ptr [esi+2Ch], 2
0x58E906: test    byte ptr [esi+2Ch], 2
0x58E90A: jz      short loc_58E959
0x58E90C: mov     ecx, esi
0x58E90E: call    Tile_GetParentMenu
0x58E913: test    eax, eax
0x58E915: jz      short loc_58E933
0x58E917: mov     ecx, esi
0x58E919: call    Tile_GetParentMenu
0x58E91E: mov     edx, [eax]
0x58E920: mov     ecx, eax
0x58E922: mov     eax, [edx+34h]
0x58E925: call    eax
0x58E927: cmp     eax, 3EFh
0x58E92C: jz      short loc_58E933
0x58E92E: call    sub_578E00
0x58E933: mov     ecx, esi
0x58E935: call    sub_589AA0
0x58E93A: mov     edx, [esi]
0x58E93C: mov     eax, [edx+8]
0x58E93F: mov     ecx, esi
0x58E941: call    eax
0x58E943: test    eax, eax
0x58E945: jz      short loc_58E959
0x58E947: mov     eax, [esi+2Ch]
0x58E94A: test    al, 2
0x58E94C: mov     [esp+6Ch+var_57], 1
0x58E951: jz      short loc_58E959
0x58E953: xor     eax, 2
0x58E956: mov     [esi+2Ch], eax
0x58E959: test    byte ptr [esi+2Ch], 80h
0x58E95D: jz      short loc_58E988
0x58E95F: cmp     [esi+28h], ebp
0x58E962: jz      short loc_58E988
0x58E964: mov     edi, [esi+28h]
0x58E967: cmp     edi, ebp
0x58E969: jz      short loc_58E988
0x58E96B: jmp     short loc_58E970
0x58E96D: align 10h
0x58E970: mov     ecx, edi
0x58E972: call    sub_58D960
0x58E977: test    al, al
0x58E979: jnz     short loc_58E984
0x58E97B: mov     edi, [edi+14h]
0x58E97E: cmp     edi, ebp
0x58E980: jnz     short loc_58E970
0x58E982: jmp     short loc_58E988
0x58E984: cmp     edi, ebp
0x58E986: jnz     short loc_58E964
0x58E988: test    byte ptr [esi+2Ch], 4
0x58E98C: jz      short loc_58E9F0
0x58E98E: mov     edi, [esi+24h]
0x58E991: cmp     edi, ebp
0x58E993: jz      short loc_58E9F0
0x58E995: push    0FA1h
0x58E99A: mov     ecx, esi
0x58E99C: call    Tile_GetFloat
0x58E9A1: fcomp   dword ptr ds:0A2F948h
0x58E9A7: fnstsw  ax
0x58E9A9: test    ah, 44h
0x58E9AC: jnp     short loc_58E9CB
0x58E9AE: push    0FA3h
0x58E9B3: mov     ecx, esi
0x58E9B5: call    Tile_GetFloat
0x58E9BA: fcomp   dword ptr ds:0A379B4h
0x58E9C0: fnstsw  ax
0x58E9C2: test    ah, 44h
0x58E9C5: jnp     short loc_58E9CB
0x58E9C7: xor     al, al
0x58E9C9: jmp     short loc_58E9CD
0x58E9CB: mov     al, 1
0x58E9CD: test    al, al
0x58E9CF: jz      short loc_58E9D8
0x58E9D1: or      word ptr [edi+18h], 1
0x58E9D6: jmp     short loc_58E9DE
0x58E9D8: and     word ptr [edi+18h], 0FFFEh
0x58E9DE: mov     eax, [esi+2Ch]
0x58E9E1: test    al, 4
0x58E9E3: mov     [esp+6Ch+var_57], 1
0x58E9E8: jz      short loc_58E9F0
0x58E9EA: xor     eax, 4
0x58E9ED: mov     [esi+2Ch], eax
0x58E9F0: mov     eax, [esi+24h]
0x58E9F3: cmp     eax, ebp
0x58E9F5: jz      short loc_58EA03
0x58E9F7: mov     bl, [eax+18h]
0x58E9FA: and     bl, 1
0x58E9FD: mov     [esp+6Ch+var_56], bl
0x58EA01: jmp     short loc_58EA0C
0x58EA03: mov     [esp+6Ch+var_56], 1
0x58EA08: mov     bl, [esp+6Ch+var_56]
0x58EA0C: cmp     eax, ebp
0x58EA0E: jz      short loc_58EA29
0x58EA10: test    bl, bl
0x58EA12: jnz     short loc_58EA29
0x58EA14: mov     eax, [eax+1Ch]
0x58EA17: cmp     eax, ebp
0x58EA19: jz      short loc_58EA29
0x58EA1B: mov     cl, [eax+18h]
0x58EA1E: and     cl, 1
0x58EA21: mov     [esp+6Ch+var_56], cl
0x58EA25: mov     bl, cl
0x58EA27: jmp     short loc_58EA10
0x58EA29: mov     edx, [esi]
0x58EA2B: mov     eax, [edx+0Ch]
0x58EA2E: mov     ecx, esi
0x58EA30: call    eax
0x58EA32: cmp     eax, 386h
0x58EA37: push    1; arg1
0x58EA39: push    ebp; canCreate
0x58EA3A: setz    [esp+74h+var_55]
0x58EA3F: call    InterfaceManager_GetSingleton
0x58EA44: mov     al, [eax+0B8h]
0x58EA4A: add     esp, 8
0x58EA4D: test    al, al
0x58EA4F: jz      short loc_58EA9A
0x58EA51: test    bl, bl
0x58EA53: jz      short loc_58EA9A
0x58EA55: mov     eax, [esi+24h]
0x58EA58: cmp     [eax+0B6h], bp
0x58EA5F: ja      short loc_58EA65
0x58EA61: xor     edi, edi
0x58EA63: jmp     short loc_58EA6D
0x58EA65: mov     ecx, [eax+0B0h]
0x58EA6B: mov     edi, [ecx]
0x58EA6D: mov     edx, [esi]
0x58EA6F: mov     eax, [edx+0Ch]
0x58EA72: mov     ecx, esi
0x58EA74: call    eax
0x58EA76: cmp     eax, 386h
0x58EA7B: jnz     short loc_58EA9A
0x58EA7D: cmp     edi, ebp
0x58EA7F: jz      short loc_58EA9A
0x58EA81: push    6
0x58EA83: mov     ecx, edi
0x58EA85: call    NiNode_GetNiPropertyByID
0x58EA8A: cmp     eax, ebp
0x58EA8C: jz      short loc_58EA9A
0x58EA8E: push    ebp
0x58EA8F: mov     ecx, eax
0x58EA91: call    NiTexturingProperty__SetUnk08
0x58EA96: or      dword ptr [esi+2Ch], 20h
0x58EA9A: cmp     [esp+6Ch+var_55], 0
0x58EA9F: jz      loc_58EE55
0x58EAA5: test    byte ptr [esi+2Ch], 20h
0x58EAA9: jz      loc_58EE55
0x58EAAF: mov     ecx, [esi+24h]
0x58EAB2: cmp     ecx, ebp
0x58EAB4: jz      loc_58EE55
0x58EABA: test    bl, bl
0x58EABC: jz      short loc_58EACB
0x58EABE: cmp     byte ptr ds:0B3B0A2h, 0
0x58EAC5: jz      loc_58EE55
0x58EACB: push    ebp
0x58EACC: call    sub_405790
0x58EAD1: cmp     eax, ebp
0x58EAD3: jz      loc_58EE55
0x58EAD9: push    6
0x58EADB: mov     ecx, eax
0x58EADD: call    NiNode_GetNiPropertyByID
0x58EAE2: mov     ebx, eax
0x58EAE4: cmp     ebx, ebp
0x58EAE6: jz      loc_58EE51
0x58EAEC: mov     [esp+6Ch+var_50], ebp
0x58EAF0: push    0FE6h
0x58EAF5: mov     ecx, esi
0x58EAF7: mov     [esp+70h+var_4], ebp
0x58EAFB: call    sub_588C10
0x58EB00: mov     edi, eax
0x58EB02: cmp     edi, ebp
0x58EB04: jz      loc_58EE40
0x58EB0A: push    ecx; int
0x58EB0B: lea     edx, [esi+44h]
0x58EB0E: mov     ecx, esp
0x58EB10: mov     [esp+70h+var_34], esp
0x58EB14: push    edx
0x58EB15: call    sub_4A19F0
0x58EB1A: push    0FD2h
0x58EB1F: mov     ecx, esi
0x58EB21: mov     byte ptr [esp+74h+var_4], 1
0x58EB26: call    Tile_GetFloat
0x58EB2B: mov     eax, [esi+8]
0x58EB2E: push    ecx
0x58EB2F: fstp    [esp+74h+var_74]; float
0x58EB32: lea     ebp, [esi+40h]
0x58EB35: push    ebp; int
0x58EB36: sub     esp, 8
0x58EB39: mov     ecx, esp
0x58EB3B: mov     [esp+80h+var_40], esp
0x58EB3F: push    eax
0x58EB40: call    BSStringT_constr_str
0x58EB45: lea     eax, [esp+80h+var_38]
0x58EB49: push    edi; Source
0x58EB4A: push    eax; int
0x58EB4B: mov     byte ptr [esp+88h+var_4], 0
0x58EB53: call    sub_591360
0x58EB58: add     esp, 1Ch
0x58EB5B: push    eax
0x58EB5C: lea     ecx, [esp+70h+var_50]
0x58EB60: mov     byte ptr [esp+70h+var_4], 2
0x58EB65: call    sub_55E2A0
0x58EB6A: lea     ecx, [esp+6Ch+var_38]; this
0x58EB6E: mov     byte ptr [esp+6Ch+var_4], 0
0x58EB73: call    sub_7016A0
0x58EB78: mov     edi, [esp+6Ch+var_50]
0x58EB7C: test    edi, edi
0x58EB7E: jz      loc_58EE40
0x58EB84: push    edi
0x58EB85: mov     ecx, ebx
0x58EB87: call    NiTexturingProperty__SetUnk08
0x58EB8C: push    0FCFh
0x58EB91: mov     ecx, esi
0x58EB93: call    Tile_GetFloat
0x58EB98: fcomp   dword ptr ds:0A379B4h
0x58EB9E: mov     ecx, ebx
0x58EBA0: fnstsw  ax
0x58EBA2: test    ah, 44h
0x58EBA5: jp      short loc_58EBAB
0x58EBA7: push    3
0x58EBA9: jmp     short loc_58EBAD
0x58EBAB: push    0
0x58EBAD: call    sub_405870
0x58EBB2: push    0FD2h
0x58EBB7: mov     ecx, esi
0x58EBB9: call    Tile_GetFloat
0x58EBBE: fstp    [esp+6Ch+var_54]
0x58EBC2: push    0FE6h
0x58EBC7: mov     ecx, esi
0x58EBC9: call    sub_588C10
0x58EBCE: push    eax
0x58EBCF: lea     ecx, [esp+70h+var_40]
0x58EBD3: call    BSStringT_constr_str
0x58EBD8: push    0FCFh
0x58EBDD: mov     ecx, esi
0x58EBDF: mov     byte ptr [esp+70h+var_4], 3
0x58EBE4: call    Tile_GetFloat
0x58EBE9: fcomp   dword ptr ds:0A30634h
0x58EBEF: fnstsw  ax
0x58EBF1: test    ah, 44h
0x58EBF4: jp      loc_58ECD2
0x58EBFA: cmp     [esp+6Ch+var_40], 0
0x58EBFF: jz      loc_58EC9D
0x58EC05: lea     ecx, [esp+6Ch+var_40]
0x58EC09: call    BSStringT_GetLen
0x58EC0E: test    eax, eax
0x58EC10: jz      loc_58EC9D
0x58EC16: push    offset word_A36430
0x58EC1B: lea     ecx, [esp+70h+var_40]
0x58EC1F: call    sub_5755D0
0x58EC24: test    al, al
0x58EC26: jnz     short loc_58EC9D
0x58EC28: mov     edx, [edi]
0x58EC2A: mov     eax, [edx+4Ch]
0x58EC2D: mov     ecx, edi
0x58EC2F: call    eax
0x58EC31: test    eax, eax
0x58EC33: mov     [esp+6Ch+var_34], eax
0x58EC37: fild    [esp+6Ch+var_34]
0x58EC3B: jge     short loc_58EC43
0x58EC3D: fadd    dword ptr ds:0A2FC78h
0x58EC43: fdiv    dword ptr [ebp+0]
0x58EC46: push    ecx
0x58EC47: mov     ecx, esi; this
0x58EC49: fstp    [esp+70h+var_38]
0x58EC4D: fld     [esp+70h+var_38]
0x58EC51: fstp    [esp+70h+a2]; a3
0x58EC54: push    0FE7h; a2
0x58EC59: call    Tile_SetFloat
0x58EC5E: mov     edx, [edi]
0x58EC60: mov     eax, [edx+50h]
0x58EC63: mov     ecx, edi
0x58EC65: call    eax
0x58EC67: test    eax, eax
0x58EC69: mov     [esp+6Ch+var_34], eax
0x58EC6D: fild    [esp+6Ch+var_34]
0x58EC71: jge     short loc_58EC79
0x58EC73: fadd    dword ptr ds:0A2FC78h
0x58EC79: fdiv    dword ptr [ebp+0]
0x58EC7C: push    ecx
0x58EC7D: mov     ecx, esi; this
0x58EC7F: fstp    [esp+70h+var_38]
0x58EC83: fld     [esp+70h+var_38]
0x58EC87: fstp    [esp+70h+a2]; a3
0x58EC8A: push    0FE8h; a2
0x58EC8F: call    Tile_SetFloat
0x58EC94: or      dword ptr [esi+2Ch], 10h
0x58EC98: jmp     loc_58EE20
0x58EC9D: mov     edx, [edi]
0x58EC9F: mov     eax, [edx+4Ch]
0x58ECA2: mov     ecx, edi
0x58ECA4: call    eax
0x58ECA6: push    eax
0x58ECA7: push    0FE7h
0x58ECAC: mov     ecx, esi
0x58ECAE: call    sub_57D300
0x58ECB3: mov     edx, [edi]
0x58ECB5: mov     eax, [edx+50h]
0x58ECB8: mov     ecx, edi
0x58ECBA: call    eax
0x58ECBC: push    eax
0x58ECBD: push    0FE8h
0x58ECC2: mov     ecx, esi
0x58ECC4: call    sub_57D300
0x58ECC9: or      dword ptr [esi+2Ch], 10h
0x58ECCD: jmp     loc_58EE20
0x58ECD2: fldz
0x58ECD4: fld     [esp+6Ch+var_54]
0x58ECD8: fcom    st(1)
0x58ECDA: fnstsw  ax
0x58ECDC: test    ah, 1
0x58ECDF: jnz     loc_58EE1C
0x58ECE5: fucompp
0x58ECE7: fnstsw  ax
0x58ECE9: test    ah, 44h
0x58ECEC: jp      short loc_58ECF8
0x58ECEE: fld     dword ptr ds:0A2FE7Ch
0x58ECF4: fstp    [esp+6Ch+var_54]
0x58ECF8: cmp     [esp+6Ch+var_40], 0
0x58ECFD: jz      loc_58ED9A
0x58ED03: lea     ecx, [esp+6Ch+var_40]
0x58ED07: call    BSStringT_GetLen
0x58ED0C: test    eax, eax
0x58ED0E: jz      loc_58ED9A
0x58ED14: push    offset word_A36430
0x58ED19: lea     ecx, [esp+70h+var_40]
0x58ED1D: call    sub_5755D0
0x58ED22: test    al, al
0x58ED24: jnz     short loc_58ED9A
0x58ED26: fld     [esp+6Ch+var_54]
0x58ED2A: mov     edx, [edi]
0x58ED2C: fdiv    qword ptr ds:0A309F0h
0x58ED32: mov     eax, [edx+4Ch]
0x58ED35: mov     ecx, edi
0x58ED37: fstp    [esp+6Ch+var_48]
0x58ED3B: call    eax
0x58ED3D: test    eax, eax
0x58ED3F: mov     [esp+6Ch+var_34], eax
0x58ED43: fild    [esp+6Ch+var_34]
0x58ED47: jge     short loc_58ED4F
0x58ED49: fadd    qword ptr ds:0A30E60h
0x58ED4F: fmul    [esp+6Ch+var_48]
0x58ED53: push    ecx
0x58ED54: mov     ecx, esi; this
0x58ED56: fdiv    dword ptr [ebp+0]
0x58ED59: fstp    [esp+70h+var_38]
0x58ED5D: fld     [esp+70h+var_38]
0x58ED61: fstp    [esp+70h+a2]; a3
0x58ED64: push    0FE7h; a2
0x58ED69: call    Tile_SetFloat
0x58ED6E: mov     edx, [edi]
0x58ED70: mov     eax, [edx+50h]
0x58ED73: mov     ecx, edi
0x58ED75: call    eax
0x58ED77: test    eax, eax
0x58ED79: mov     [esp+6Ch+var_34], eax
0x58ED7D: fild    [esp+6Ch+var_34]
0x58ED81: jge     short loc_58ED89
0x58ED83: fadd    qword ptr ds:0A30E60h
0x58ED89: fmul    [esp+6Ch+var_48]
0x58ED8D: fdiv    dword ptr [ebp+0]
0x58ED90: fstp    [esp+6Ch+var_38]
0x58ED94: fld     [esp+6Ch+var_38]
0x58ED98: jmp     short loc_58EE06
0x58ED9A: fld     [esp+6Ch+var_54]
0x58ED9E: mov     edx, [edi]
0x58EDA0: fdiv    qword ptr ds:0A309F0h
0x58EDA6: mov     eax, [edx+4Ch]
0x58EDA9: mov     ecx, edi
0x58EDAB: fstp    [esp+6Ch+var_48]
0x58EDAF: call    eax
0x58EDB1: test    eax, eax
0x58EDB3: mov     [esp+6Ch+var_34], eax
0x58EDB7: fild    [esp+6Ch+var_34]
0x58EDBB: jge     short loc_58EDC3
0x58EDBD: fadd    qword ptr ds:0A30E60h
0x58EDC3: fmul    [esp+6Ch+var_48]
0x58EDC7: push    ecx
0x58EDC8: mov     ecx, esi; this
0x58EDCA: fstp    [esp+70h+var_38]
0x58EDCE: fld     [esp+70h+var_38]
0x58EDD2: fstp    [esp+70h+a2]; a3
0x58EDD5: push    0FE7h; a2
0x58EDDA: call    Tile_SetFloat
0x58EDDF: mov     edx, [edi]
0x58EDE1: mov     eax, [edx+50h]
0x58EDE4: mov     ecx, edi
0x58EDE6: call    eax
0x58EDE8: test    eax, eax
0x58EDEA: mov     [esp+6Ch+var_34], eax
0x58EDEE: fild    [esp+6Ch+var_34]
0x58EDF2: jge     short loc_58EDFA
0x58EDF4: fadd    qword ptr ds:0A30E60h
0x58EDFA: fmul    [esp+6Ch+var_48]
0x58EDFE: fstp    [esp+6Ch+var_38]
0x58EE02: fld     [esp+6Ch+var_38]
0x58EE06: push    ecx
0x58EE07: fstp    [esp+70h+a2]; a3
0x58EE0A: push    0FE8h; a2
0x58EE0F: mov     ecx, esi; this
0x58EE11: call    Tile_SetFloat
0x58EE16: or      dword ptr [esi+2Ch], 10h
0x58EE1A: jmp     short loc_58EE20
0x58EE1C: fstp    st(1)
0x58EE1E: fstp    st
0x58EE20: mov     eax, [esi+2Ch]
0x58EE23: test    al, 20h
0x58EE25: mov     [esp+6Ch+var_57], 1
0x58EE2A: jz      short loc_58EE32
0x58EE2C: xor     eax, 20h
0x58EE2F: mov     [esi+2Ch], eax
0x58EE32: lea     ecx, [esp+6Ch+var_40]; void *
0x58EE36: mov     byte ptr [esp+6Ch+var_4], 0
0x58EE3B: call    BSStringT_Clear
0x58EE40: lea     ecx, [esp+6Ch+var_50]; this
0x58EE44: mov     [esp+6Ch+var_4], 0FFFFFFFFh
0x58EE4C: call    sub_7016A0
0x58EE51: mov     bl, [esp+6Ch+var_56]
0x58EE55: test    byte ptr [esi+2Ch], 10h
0x58EE59: jz      loc_58F2AD
0x58EE5F: mov     ecx, [esi+24h]
0x58EE62: test    ecx, ecx
0x58EE64: jz      loc_58F2AD
0x58EE6A: test    bl, bl
0x58EE6C: jnz     loc_58F2AD
0x58EE72: push    0
0x58EE74: call    sub_405790
0x58EE79: push    0FCBh
0x58EE7E: mov     ecx, esi
0x58EE80: mov     ebp, eax
0x58EE82: call    Tile_GetFloat
0x58EE87: fstp    [esp+6Ch+var_4C]
0x58EE8B: push    0FCAh
0x58EE90: mov     ecx, esi
0x58EE92: call    Tile_GetFloat
0x58EE97: fstp    dword ptr [esp+6Ch+var_48]
0x58EE9B: push    0FDAh
0x58EEA0: mov     ecx, esi
0x58EEA2: call    Tile_GetFloat
0x58EEA7: fstp    [esp+6Ch+var_40]
0x58EEAB: push    0FD9h
0x58EEB0: mov     ecx, esi
0x58EEB2: call    Tile_GetFloat
0x58EEB7: fstp    [esp+6Ch+var_34]
0x58EEBB: test    ebp, ebp
0x58EEBD: jz      loc_58F2AD
0x58EEC3: fldz
0x58EEC5: mov     eax, [ebp+0B4h]
0x58EECB: mov     eax, [eax+1Ch]
0x58EECE: fst     dword ptr [esp+6Ch+var_20]
0x58EED2: mov     ecx, dword ptr [esp+6Ch+var_20]
0x58EED6: fst     dword ptr [esp+6Ch+var_20+4]
0x58EEDA: mov     edx, dword ptr [esp+6Ch+var_20+4]
0x58EEDE: fst     [esp+6Ch+var_18]
0x58EEE2: fst     dword ptr [esp+6Ch+var_20]
0x58EEE6: mov     [eax], ecx
0x58EEE8: mov     ecx, [esp+6Ch+var_18]
0x58EEEC: fst     dword ptr [esp+6Ch+var_20+4]
0x58EEF0: fld     dword ptr [esp+6Ch+var_48]
0x58EEF4: mov     [eax+4], edx
0x58EEF7: mov     edx, dword ptr [esp+6Ch+var_20]
0x58EEFB: fld     st
0x58EEFD: fchs
0x58EEFF: mov     [eax+8], ecx
0x58EF02: mov     ecx, dword ptr [esp+6Ch+var_20+4]
0x58EF06: fstp    [esp+6Ch+var_38]
0x58EF0A: fld     [esp+6Ch+var_38]
0x58EF0E: mov     [eax+0Ch], edx
0x58EF11: fst     [esp+6Ch+var_18]
0x58EF15: mov     [eax+10h], ecx
0x58EF18: fld     [esp+6Ch+var_4C]
0x58EF1C: mov     edx, [esp+6Ch+var_18]
0x58EF20: fst     dword ptr [esp+6Ch+var_20]
0x58EF24: mov     [eax+14h], edx
0x58EF27: mov     ecx, dword ptr [esp+6Ch+var_20]
0x58EF2B: fxch    st(3)
0x58EF2D: fst     dword ptr [esp+6Ch+var_20+4]
0x58EF31: mov     [eax+18h], ecx
0x58EF34: mov     edx, dword ptr [esp+6Ch+var_20+4]
0x58EF38: fst     [esp+6Ch+var_18]
0x58EF3C: mov     ecx, [esp+6Ch+var_18]
0x58EF40: fxch    st(3)
0x58EF42: fst     dword ptr [esp+6Ch+var_20]
0x58EF46: mov     [eax+1Ch], edx
0x58EF49: mov     edx, dword ptr [esp+6Ch+var_20]
0x58EF4D: fxch    st(3)
0x58EF4F: fstp    dword ptr [esp+6Ch+var_20+4]
0x58EF53: mov     [eax+20h], ecx
0x58EF56: mov     ecx, dword ptr [esp+6Ch+var_20+4]
0x58EF5A: mov     [eax+24h], edx
0x58EF5D: fstp    [esp+6Ch+var_18]
0x58EF61: mov     edx, [esp+6Ch+var_18]
0x58EF65: fxch    st(1)
0x58EF67: mov     [eax+28h], ecx
0x58EF6A: fstp    [esp+6Ch+var_54]
0x58EF6E: push    6
0x58EF70: mov     ecx, ebp
0x58EF72: fstp    [esp+70h+var_50]
0x58EF76: mov     [eax+2Ch], edx
0x58EF79: call    NiNode_GetNiPropertyByID
0x58EF7E: mov     edi, eax
0x58EF80: test    edi, edi
0x58EF82: jz      loc_58F191
0x58EF88: cmp     [esp+6Ch+var_55], bl
0x58EF8C: jz      loc_58F191
0x58EF92: mov     eax, [edi+20h]
0x58EF95: mov     eax, [eax]
0x58EF97: test    eax, eax
0x58EF99: jz      loc_58F191
0x58EF9F: cmp     dword ptr [eax+8], 0
0x58EFA3: jz      loc_58F191
0x58EFA9: push    0FCFh
0x58EFAE: mov     ecx, esi
0x58EFB0: call    Tile_GetFloat
0x58EFB5: fcomp   dword ptr ds:0A379B4h
0x58EFBB: mov     ecx, edi
0x58EFBD: fnstsw  ax
0x58EFBF: test    ah, 44h
0x58EFC2: jp      short loc_58EFC8
0x58EFC4: push    3
0x58EFC6: jmp     short loc_58EFCA
0x58EFC8: push    0
0x58EFCA: call    sub_405870
0x58EFCF: push    0FD2h
0x58EFD4: mov     ecx, esi
0x58EFD6: call    Tile_GetFloat
0x58EFDB: fstp    [esp+6Ch+var_54]
0x58EFDF: push    0FCFh
0x58EFE4: mov     ecx, esi
0x58EFE6: call    Tile_GetFloat
0x58EFEB: fcomp   dword ptr ds:0A30634h
0x58EFF1: fnstsw  ax
0x58EFF3: test    ah, 44h
0x58EFF6: jnp     loc_58F181
0x58EFFC: fldz
0x58EFFE: fld     [esp+6Ch+var_54]
0x58F002: fcom    st(1)
0x58F004: fnstsw  ax
0x58F006: test    ah, 1
0x58F009: jnz     loc_58F17D
0x58F00F: fucompp
0x58F011: fnstsw  ax
0x58F013: test    ah, 44h
0x58F016: jp      short loc_58F022
0x58F018: fld     dword ptr ds:0A2FE7Ch
0x58F01E: fstp    [esp+6Ch+var_54]
0x58F022: push    0FE6h
0x58F027: mov     ecx, esi
0x58F029: call    sub_588C10
0x58F02E: push    eax
0x58F02F: lea     ecx, [esp+70h+var_20]
0x58F033: call    BSStringT_constr_str
0x58F038: cmp     dword ptr [esp+6Ch+var_20], 0
0x58F03D: mov     [esp+6Ch+var_4], 4
0x58F045: jz      loc_58F0F8
0x58F04B: lea     ecx, [esp+6Ch+var_20]
0x58F04F: call    BSStringT_GetLen
0x58F054: test    eax, eax
0x58F056: jz      loc_58F0F8
0x58F05C: push    offset word_A36430
0x58F061: lea     ecx, [esp+70h+var_20]
0x58F065: call    sub_5755D0
0x58F06A: test    al, al
0x58F06C: jnz     loc_58F0F8
0x58F072: mov     ecx, [edi+20h]
0x58F075: mov     eax, [ecx]
0x58F077: test    eax, eax
0x58F079: jz      short loc_58F080
0x58F07B: mov     ecx, [eax+8]
0x58F07E: jmp     short loc_58F082
0x58F080: xor     ecx, ecx
0x58F082: fld     dword ptr [esi+40h]
0x58F085: mov     edx, [ecx]
0x58F087: fstp    [esp+6Ch+var_38]
0x58F08B: mov     eax, [edx+4Ch]
0x58F08E: fld     [esp+6Ch+var_54]
0x58F092: fdiv    qword ptr ds:0A309F0h
0x58F098: fstp    [esp+6Ch+var_30]
0x58F09C: call    eax
0x58F09E: test    eax, eax
0x58F0A0: mov     [esp+6Ch+var_50], eax
0x58F0A4: fild    [esp+6Ch+var_50]
0x58F0A8: jge     short loc_58F0B0
0x58F0AA: fadd    qword ptr ds:0A30E60h
0x58F0B0: fmul    [esp+6Ch+var_30]
0x58F0B4: mov     ecx, [edi+20h]
0x58F0B7: mov     eax, [ecx]
0x58F0B9: test    eax, eax
0x58F0BB: fdiv    [esp+6Ch+var_38]
0x58F0BF: fstp    [esp+6Ch+var_54]
0x58F0C3: jz      short loc_58F0CA
0x58F0C5: mov     eax, [eax+8]
0x58F0C8: jmp     short loc_58F0CC
0x58F0CA: xor     eax, eax
0x58F0CC: mov     edx, [eax]
0x58F0CE: fld     dword ptr [esi+40h]
0x58F0D1: mov     ecx, eax
0x58F0D3: fstp    [esp+6Ch+var_38]
0x58F0D7: mov     eax, [edx+50h]
0x58F0DA: call    eax
0x58F0DC: test    eax, eax
0x58F0DE: mov     [esp+6Ch+var_50], eax
0x58F0E2: fild    [esp+6Ch+var_50]
0x58F0E6: jge     short loc_58F0EE
0x58F0E8: fadd    qword ptr ds:0A30E60h
0x58F0EE: fmul    [esp+6Ch+var_30]
0x58F0F2: fdiv    [esp+6Ch+var_38]
0x58F0F6: jmp     short loc_58F166
0x58F0F8: mov     ecx, [edi+20h]
0x58F0FB: mov     eax, [ecx]
0x58F0FD: test    eax, eax
0x58F0FF: jz      short loc_58F106
0x58F101: mov     ecx, [eax+8]
0x58F104: jmp     short loc_58F108
0x58F106: xor     ecx, ecx
0x58F108: fld     [esp+6Ch+var_54]
0x58F10C: mov     edx, [ecx]
0x58F10E: fdiv    qword ptr ds:0A309F0h
0x58F114: mov     eax, [edx+4Ch]
0x58F117: fstp    [esp+6Ch+var_30]
0x58F11B: call    eax
0x58F11D: test    eax, eax
0x58F11F: mov     [esp+6Ch+var_38], eax
0x58F123: fild    [esp+6Ch+var_38]
0x58F127: jge     short loc_58F12F
0x58F129: fadd    qword ptr ds:0A30E60h
0x58F12F: mov     ecx, [edi+20h]
0x58F132: fmul    [esp+6Ch+var_30]
0x58F136: mov     eax, [ecx]
0x58F138: test    eax, eax
0x58F13A: fstp    [esp+6Ch+var_54]
0x58F13E: jz      short loc_58F145
0x58F140: mov     eax, [eax+8]
0x58F143: jmp     short loc_58F147
0x58F145: xor     eax, eax
0x58F147: mov     edx, [eax]
0x58F149: mov     ecx, eax
0x58F14B: mov     eax, [edx+50h]
0x58F14E: call    eax
0x58F150: test    eax, eax
0x58F152: mov     [esp+6Ch+var_38], eax
0x58F156: fild    [esp+6Ch+var_38]
0x58F15A: jge     short loc_58F162
0x58F15C: fadd    qword ptr ds:0A30E60h
0x58F162: fmul    [esp+6Ch+var_30]
0x58F166: lea     ecx, [esp+6Ch+var_20]; void *
0x58F16A: fstp    [esp+6Ch+var_50]
0x58F16E: mov     [esp+6Ch+var_4], 0FFFFFFFFh
0x58F176: call    BSStringT_Clear
0x58F17B: jmp     short loc_58F191
0x58F17D: fstp    st
0x58F17F: fstp    st
0x58F181: fld     [esp+6Ch+var_4C]
0x58F185: fstp    [esp+6Ch+var_54]
0x58F189: fld     dword ptr [esp+6Ch+var_48]
0x58F18D: fstp    [esp+6Ch+var_50]
0x58F191: mov     ecx, [ebp+0B4h]
0x58F197: mov     eax, [ecx+28h]
0x58F19A: test    eax, eax
0x58F19C: jz      loc_58F25D
0x58F1A2: fld     [esp+6Ch+var_40]
0x58F1A6: fld     [esp+6Ch+var_54]
0x58F1AA: fld     st
0x58F1AC: fdivp   st(2), st
0x58F1AE: fxch    st(1)
0x58F1B0: fstp    [esp+6Ch+var_38]
0x58F1B4: fld     [esp+6Ch+var_34]
0x58F1B8: fld     [esp+6Ch+var_50]
0x58F1BC: fld     st
0x58F1BE: fdivp   st(2), st
0x58F1C0: fxch    st(1)
0x58F1C2: fstp    [esp+6Ch+var_34]
0x58F1C6: fld     [esp+6Ch+var_4C]
0x58F1CA: fdivrp  st(2), st
0x58F1CC: fxch    st(1)
0x58F1CE: fstp    [esp+6Ch+var_4C]
0x58F1D2: fdivr   dword ptr [esp+6Ch+var_48]
0x58F1D6: fstp    [esp+6Ch+var_40]
0x58F1DA: fld     [esp+6Ch+var_38]
0x58F1DE: fst     dword ptr [esp+6Ch+var_20]
0x58F1E2: fld     [esp+6Ch+var_34]
0x58F1E6: mov     edx, dword ptr [esp+6Ch+var_20]
0x58F1EA: fst     dword ptr [esp+6Ch+var_20+4]
0x58F1EE: fxch    st(1)
0x58F1F0: mov     [eax], edx
0x58F1F2: mov     ecx, dword ptr [esp+6Ch+var_20+4]
0x58F1F6: fst     dword ptr [esp+6Ch+var_20]
0x58F1FA: fld     [esp+6Ch+var_40]
0x58F1FE: mov     [eax+4], ecx
0x58F201: mov     edx, dword ptr [esp+6Ch+var_20]
0x58F205: fadd    st, st(2)
0x58F207: mov     [eax+8], edx
0x58F20A: fstp    [esp+6Ch+var_34]
0x58F20E: fld     [esp+6Ch+var_34]
0x58F212: fst     dword ptr [esp+6Ch+var_20+4]
0x58F216: mov     ecx, dword ptr [esp+6Ch+var_20+4]
0x58F21A: fld     [esp+6Ch+var_4C]
0x58F21E: mov     [eax+0Ch], ecx
0x58F221: faddp   st(2), st
0x58F223: fxch    st(1)
0x58F225: fstp    [esp+6Ch+var_34]
0x58F229: fld     [esp+6Ch+var_34]
0x58F22D: fst     dword ptr [esp+6Ch+var_20]
0x58F231: mov     edx, dword ptr [esp+6Ch+var_20]
0x58F235: fxch    st(2)
0x58F237: mov     [eax+10h], edx
0x58F23A: fstp    dword ptr [esp+6Ch+var_20+4]
0x58F23E: mov     ecx, dword ptr [esp+6Ch+var_20+4]
0x58F242: fxch    st(1)
0x58F244: mov     [eax+14h], ecx
0x58F247: fstp    dword ptr [esp+6Ch+var_20]
0x58F24B: mov     edx, dword ptr [esp+6Ch+var_20]
0x58F24F: mov     [eax+18h], edx
0x58F252: fstp    dword ptr [esp+6Ch+var_20+4]
0x58F256: mov     ecx, dword ptr [esp+6Ch+var_20+4]
0x58F25A: mov     [eax+1Ch], ecx
0x58F25D: mov     eax, [ebp+0B4h]
0x58F263: or      word ptr [eax+2Eh], 9
0x58F268: mov     eax, [ebp+0B4h]
0x58F26E: movzx   ecx, word ptr [eax+8]
0x58F272: mov     edx, [eax+1Ch]
0x58F275: push    edx
0x58F276: push    ecx
0x58F277: lea     ecx, [eax+0Ch]
0x58F27A: call    sub_72A0F0
0x58F27F: mov     eax, [esi+2Ch]
0x58F282: test    al, 10h
0x58F284: mov     [esp+6Ch+var_57], 1
0x58F289: jz      short loc_58F291
0x58F28B: xor     eax, 10h
0x58F28E: mov     [esi+2Ch], eax
0x58F291: mov     ebp, [ebp+0B4h]
0x58F297: test    ebp, ebp
0x58F299: jz      short loc_58F2AD
0x58F29B: mov     dx, [ebp+2Eh]
0x58F29F: and     dx, 0FFFh
0x58F2A4: or      dx, 8000h
0x58F2A9: mov     [ebp+2Eh], dx
0x58F2AD: test    byte ptr [esi+2Ch], 40h
0x58F2B1: jz      short loc_58F2E6
0x58F2B3: cmp     dword ptr [esi+24h], 0
0x58F2B7: jz      short loc_58F2E6
0x58F2B9: test    bl, bl
0x58F2BB: jnz     short loc_58F2E6
0x58F2BD: mov     eax, [esi]
0x58F2BF: mov     edx, [eax+0Ch]
0x58F2C2: mov     ecx, esi
0x58F2C4: call    edx
0x58F2C6: cmp     eax, 388h
0x58F2CB: jnz     short loc_58F2D4
0x58F2CD: mov     ecx, esi
0x58F2CF: call    sub_590970
0x58F2D4: mov     eax, [esi+2Ch]
0x58F2D7: test    al, 40h
0x58F2D9: mov     [esp+6Ch+var_57], 1
0x58F2DE: jz      short loc_58F2E6
0x58F2E0: xor     eax, 40h
0x58F2E3: mov     [esi+2Ch], eax
0x58F2E6: test    byte ptr [esi+2Ch], 1
0x58F2EA: jz      loc_58F5C2
0x58F2F0: cmp     dword ptr [esi+24h], 0
0x58F2F4: jz      loc_58F899
0x58F2FA: test    bl, bl
0x58F2FC: jnz     loc_58F5C2
0x58F302: push    0FA6h
0x58F307: mov     ecx, esi
0x58F309: call    Tile_GetFloat
0x58F30E: fcomp   dword ptr ds:0A379B4h
0x58F314: fnstsw  ax
0x58F316: test    ah, 44h
0x58F319: jnp     loc_58F452
0x58F31F: push    1; arg1
0x58F321: push    0; canCreate
0x58F323: call    InterfaceManager_GetSingleton
0x58F328: mov     ecx, [esi+10h]
0x58F32B: add     esp, 8
0x58F32E: cmp     ecx, [eax+68h]
0x58F331: jz      loc_58F452
0x58F337: push    0FABh
0x58F33C: mov     ecx, esi
0x58F33E: call    Tile_GetFloat
0x58F343: fstp    [esp+6Ch+var_34]
0x58F347: mov     eax, [esi+24h]
0x58F34A: mov     ecx, ds:0B3F9A8h
0x58F350: mov     edx, ds:0B3F9ACh
0x58F356: mov     edi, ds:0B3F9B0h
0x58F35C: add     eax, 54h ; 'T'
0x58F35F: mov     [eax], ecx
0x58F361: mov     dword ptr [esp+6Ch+var_30], ecx
0x58F365: mov     [eax+4], edx
0x58F368: push    0FADh
0x58F36D: mov     ecx, esi
0x58F36F: mov     dword ptr [esp+70h+var_30+4], edx
0x58F373: mov     [esp+70h+var_28], edi
0x58F377: mov     [eax+8], edi
0x58F37A: call    Tile_GetFloat
0x58F37F: fadd    dword ptr [esp+6Ch+var_30]
0x58F383: push    0FACh
0x58F388: mov     ecx, esi
0x58F38A: fstp    dword ptr [esp+70h+var_30]
0x58F38E: fld     [esp+70h+var_28]
0x58F392: fstp    [esp+70h+var_20]
0x58F396: call    Tile_GetFloat
0x58F39B: fsubr   [esp+6Ch+var_20]
0x58F39F: mov     edx, [esi]
0x58F3A1: mov     eax, [edx+0Ch]
0x58F3A4: mov     ecx, esi
0x58F3A6: fstp    [esp+6Ch+var_28]
0x58F3AA: fld     [esp+6Ch+var_34]
0x58F3AE: fmul    qword ptr ds:0A68FD0h
0x58F3B4: fadd    dword ptr [esp+6Ch+var_30+4]
0x58F3B8: fstp    dword ptr [esp+6Ch+var_30+4]
0x58F3BC: call    eax
0x58F3BE: cmp     eax, 388h
0x58F3C3: jnz     short loc_58F3E1
0x58F3C5: fld     dword ptr [esp+6Ch+var_30+4]
0x58F3C9: push    0FEDh
0x58F3CE: mov     ecx, esi
0x58F3D0: fstp    [esp+70h+var_20]
0x58F3D4: call    Tile_GetFloat
0x58F3D9: fsubr   [esp+6Ch+var_20]
0x58F3DD: fstp    dword ptr [esp+6Ch+var_30+4]
0x58F3E1: mov     ebp, [esi+24h]
0x58F3E4: xor     edi, edi
0x58F3E6: cmp     [ebp+0B8h], di
0x58F3ED: jbe     loc_58F5B0
0x58F3F3: mov     ebx, [esp+6Ch+var_28]
0x58F3F7: jmp     short loc_58F400
0x58F3F9: align 10h
0x58F400: movzx   ecx, word ptr [ebp+0B6h]
0x58F407: cmp     ecx, edi
0x58F409: ja      short loc_58F40F
0x58F40B: xor     eax, eax
0x58F40D: jmp     short loc_58F418
0x58F40F: mov     edx, [ebp+0B0h]
0x58F415: mov     eax, [edx+edi*4]
0x58F418: push    eax
0x58F419: push    offset dword_B3FCD4
0x58F41E: call    NiRTTI_Cast
0x58F423: add     esp, 8
0x58F426: test    eax, eax
0x58F428: jz      short loc_58F43B
0x58F42A: mov     ecx, dword ptr [esp+6Ch+var_30]
0x58F42E: mov     edx, dword ptr [esp+6Ch+var_30+4]
0x58F432: mov     [eax+54h], ecx
0x58F435: mov     [eax+58h], edx
0x58F438: mov     [eax+5Ch], ebx
0x58F43B: movzx   eax, word ptr [ebp+0B8h]
0x58F442: add     edi, 1
0x58F445: cmp     edi, eax
0x58F447: jb      short loc_58F400
0x58F449: mov     bl, [esp+6Ch+var_56]
0x58F44D: jmp     loc_58F5B0
0x58F452: mov     ecx, ds:0B3F9A8h
0x58F458: mov     edx, ds:0B3F9ACh
0x58F45E: mov     eax, ds:0B3F9B0h
0x58F463: mov     dword ptr [esp+6Ch+var_30], ecx
0x58F467: push    0FADh
0x58F46C: mov     ecx, esi
0x58F46E: mov     dword ptr [esp+70h+var_30+4], edx
0x58F472: mov     [esp+70h+var_28], eax
0x58F476: call    Tile_GetFloat
0x58F47B: fstp    dword ptr [esp+6Ch+var_30]
0x58F47F: push    0FACh
0x58F484: mov     ecx, esi
0x58F486: call    Tile_GetFloat
0x58F48B: fchs
0x58F48D: push    0FABh
0x58F492: fstp    [esp+70h+var_28]
0x58F496: mov     ecx, esi
0x58F498: call    Tile_GetFloat
0x58F49D: fmul    qword ptr ds:0A68FD0h
0x58F4A3: mov     edx, [esi]
0x58F4A5: mov     eax, [edx+0Ch]
0x58F4A8: mov     ecx, esi
0x58F4AA: fstp    dword ptr [esp+6Ch+var_30+4]
0x58F4AE: call    eax
0x58F4B0: cmp     eax, 388h
0x58F4B5: jnz     short loc_58F4D3
0x58F4B7: fld     dword ptr [esp+6Ch+var_30+4]
0x58F4BB: push    0FEDh
0x58F4C0: mov     ecx, esi
0x58F4C2: fstp    [esp+70h+var_20]
0x58F4C6: call    Tile_GetFloat
0x58F4CB: fsubr   [esp+6Ch+var_20]
0x58F4CF: fstp    dword ptr [esp+6Ch+var_30+4]
0x58F4D3: push    1; arg1
0x58F4D5: push    0; canCreate
0x58F4D7: call    InterfaceManager_GetSingleton
0x58F4DC: mov     ecx, [esi+10h]
0x58F4DF: add     esp, 8
0x58F4E2: cmp     ecx, [eax+68h]
0x58F4E5: jnz     short loc_58F522
0x58F4E7: fld     dword ptr [esp+6Ch+var_30]
0x58F4EB: fstp    [esp+6Ch+var_20]
0x58F4EF: call    sub_57D7A0
0x58F4F4: fmul    qword ptr ds:0A2FAA0h
0x58F4FA: fsubr   [esp+6Ch+var_20]
0x58F4FE: fstp    dword ptr [esp+6Ch+var_30]
0x58F502: call    sub_57D7F0
0x58F507: fadd    [esp+6Ch+var_28]
0x58F50B: fstp    [esp+6Ch+var_20]
0x58F50F: call    sub_57D7F0
0x58F514: fmul    qword ptr ds:0A2FAA0h
0x58F51A: fsubr   [esp+6Ch+var_20]
0x58F51E: fstp    [esp+6Ch+var_28]
0x58F522: mov     eax, [esi+24h]
0x58F525: mov     edx, dword ptr [esp+6Ch+var_30]
0x58F529: mov     ecx, dword ptr [esp+6Ch+var_30+4]
0x58F52D: add     eax, 54h ; 'T'
0x58F530: mov     [eax], edx
0x58F532: mov     edx, [esp+6Ch+var_28]
0x58F536: mov     [eax+4], ecx
0x58F539: mov     [eax+8], edx
0x58F53C: mov     ebp, [esi+24h]
0x58F53F: xor     edi, edi
0x58F541: cmp     [ebp+0B8h], di
0x58F548: jbe     short loc_58F5A9
0x58F54A: lea     ebx, [ebx+0]
0x58F550: movzx   eax, word ptr [ebp+0B6h]
0x58F557: cmp     eax, edi
0x58F559: ja      short loc_58F55F
0x58F55B: xor     eax, eax
0x58F55D: jmp     short loc_58F568
0x58F55F: mov     ecx, [ebp+0B0h]
0x58F565: mov     eax, [ecx+edi*4]
0x58F568: push    eax
0x58F569: push    offset dword_B3FCD4
0x58F56E: call    NiRTTI_Cast
0x58F573: add     esp, 8
0x58F576: test    eax, eax
0x58F578: jz      short loc_58F59B
0x58F57A: cmp     byte ptr [esi+6], 0
0x58F57E: jnz     short loc_58F59B
0x58F580: mov     edx, ds:0B3F9A8h
0x58F586: mov     [eax+54h], edx
0x58F589: mov     ecx, ds:0B3F9ACh
0x58F58F: mov     [eax+58h], ecx
0x58F592: mov     edx, ds:0B3F9B0h
0x58F598: mov     [eax+5Ch], edx
0x58F59B: movzx   eax, word ptr [ebp+0B8h]
0x58F5A2: add     edi, 1
0x58F5A5: cmp     edi, eax
0x58F5A7: jb      short loc_58F550
0x58F5A9: mov     ecx, esi
0x58F5AB: call    sub_589430
0x58F5B0: mov     eax, [esi+2Ch]
0x58F5B3: test    al, 1
0x58F5B5: mov     [esp+6Ch+var_57], 1
0x58F5BA: jz      short loc_58F5C2
0x58F5BC: xor     eax, 1
0x58F5BF: mov     [esi+2Ch], eax
0x58F5C2: cmp     dword ptr [esi+24h], 0
0x58F5C6: jz      loc_58F899
0x58F5CC: test    dword ptr [esi+2Ch], 100h
0x58F5D3: jz      loc_58F6B6
0x58F5D9: fild    dword ptr ds:0B06C4Ch
0x58F5DF: fstp    [esp+6Ch+var_34]
0x58F5E3: fld     [esp+6Ch+var_34]
0x58F5E7: fstp    [esp+6Ch+var_20]
0x58F5EB: call    sub_57D7A0
0x58F5F0: fdivr   [esp+6Ch+var_20]
0x58F5F4: fstp    [esp+6Ch+var_40]
0x58F5F8: fild    dword ptr ds:0B06C50h
0x58F5FE: fstp    [esp+6Ch+var_34]
0x58F602: fld     [esp+6Ch+var_34]
0x58F606: fstp    [esp+6Ch+var_20]
0x58F60A: call    sub_57D7F0
0x58F60F: fdivr   [esp+6Ch+var_20]
0x58F613: mov     ecx, esi
0x58F615: fstp    [esp+6Ch+var_4C]
0x58F619: call    sub_588C50
0x58F61E: fstp    [esp+6Ch+var_38]
0x58F622: mov     ecx, esi
0x58F624: call    sub_588CF0
0x58F629: fstp    dword ptr [esp+6Ch+var_48]
0x58F62D: push    0FCAh
0x58F632: mov     ecx, esi
0x58F634: call    Tile_GetFloat
0x58F639: fadd    dword ptr [esp+6Ch+var_48]
0x58F63D: push    ecx
0x58F63E: mov     ecx, esi
0x58F640: fmul    [esp+70h+var_4C]
0x58F644: fstp    [esp+70h+var_34]
0x58F648: fld     [esp+70h+var_34]
0x58F64C: fstp    [esp+70h+a2]; float
0x58F64F: push    0FCBh
0x58F654: call    Tile_GetFloat
0x58F659: fld     [esp+70h+var_38]
0x58F65D: fld     st
0x58F65F: sub     esp, 0Ch
0x58F662: faddp   st(2), st
0x58F664: mov     ecx, esi
0x58F666: fld     [esp+7Ch+var_40]
0x58F66A: fld     st
0x58F66C: fmulp   st(3), st
0x58F66E: fxch    st(2)
0x58F670: fstp    [esp+7Ch+var_34]
0x58F674: fld     [esp+7Ch+var_34]
0x58F678: fstp    [esp+7Ch+var_74]; float
0x58F67C: fld     dword ptr [esp+7Ch+var_48]
0x58F680: fmul    [esp+7Ch+var_4C]
0x58F684: fstp    [esp+7Ch+var_34]
0x58F688: fld     [esp+7Ch+var_34]
0x58F68C: fstp    [esp+7Ch+var_78]; float
0x58F690: fmulp   st(1), st
0x58F692: fstp    [esp+7Ch+var_34]
0x58F696: fld     [esp+7Ch+var_34]
0x58F69A: fstp    [esp+7Ch+var_7C]; float
0x58F69D: call    sub_58B670
0x58F6A2: mov     eax, [esi+2Ch]
0x58F6A5: test    al, 1
0x58F6A7: mov     [esp+6Ch+var_57], 1
0x58F6AC: jz      short loc_58F6B6
0x58F6AE: xor     eax, 100h
0x58F6B3: mov     [esi+2Ch], eax
0x58F6B6: cmp     dword ptr [esi+24h], 0
0x58F6BA: jz      loc_58F899
0x58F6C0: test    dword ptr [esi+2Ch], 200h
0x58F6C7: jz      loc_58F899
0x58F6CD: mov     edi, [esi+10h]
0x58F6D0: test    edi, edi
0x58F6D2: jz      loc_58F882
0x58F6D8: fld     dword ptr ds:0A379B4h
0x58F6DE: mov     eax, [edi+18h]
0x58F6E1: test    eax, eax
0x58F6E3: jz      short loc_58F712
0x58F6E5: mov     edx, [eax+8]
0x58F6E8: lea     ecx, [eax+8]
0x58F6EB: movzx   ecx, word ptr [edx+18h]
0x58F6EF: cmp     cx, 0FA4h
0x58F6F4: mov     eax, [eax]
0x58F6F6: jz      short loc_58F700
0x58F6F8: ja      short loc_58F712
0x58F6FA: test    eax, eax
0x58F6FC: jnz     short loc_58F6E5
0x58F6FE: jmp     short loc_58F712
0x58F700: fld     dword ptr [edx+4]
0x58F703: fstp    [esp+6Ch+var_34]
0x58F707: fcom    [esp+6Ch+var_34]
0x58F70B: fnstsw  ax
0x58F70D: test    ah, 44h
0x58F710: jnp     short loc_58F720
0x58F712: mov     edi, [edi+10h]
0x58F715: test    edi, edi
0x58F717: jnz     short loc_58F6DE
0x58F719: fstp    st
0x58F71B: jmp     loc_58F882
0x58F720: fstp    st
0x58F722: fild    dword ptr ds:0B06C4Ch
0x58F728: fstp    [esp+6Ch+var_34]
0x58F72C: fld     [esp+6Ch+var_34]
0x58F730: fstp    [esp+6Ch+var_20]
0x58F734: call    sub_57D7A0
0x58F739: fdivr   [esp+6Ch+var_20]
0x58F73D: fstp    [esp+6Ch+var_4C]
0x58F741: fild    dword ptr ds:0B06C50h
0x58F747: fstp    [esp+6Ch+var_34]
0x58F74B: fld     [esp+6Ch+var_34]
0x58F74F: fstp    [esp+6Ch+var_20]
0x58F753: call    sub_57D7F0
0x58F758: fdivr   [esp+6Ch+var_20]
0x58F75C: mov     ecx, edi
0x58F75E: fstp    [esp+6Ch+var_34]
0x58F762: call    sub_588C50
0x58F767: fstp    [esp+6Ch+var_50]
0x58F76B: mov     ecx, edi
0x58F76D: call    sub_588CF0
0x58F772: fstp    dword ptr [esp+6Ch+var_48]
0x58F776: push    0FCBh
0x58F77B: mov     ecx, edi
0x58F77D: call    Tile_GetFloat
0x58F782: fadd    [esp+6Ch+var_50]
0x58F786: push    0FCAh
0x58F78B: mov     ecx, edi
0x58F78D: fmul    [esp+70h+var_4C]
0x58F791: fstp    [esp+70h+var_38]
0x58F795: call    Tile_GetFloat
0x58F79A: fld     dword ptr [esp+6Ch+var_48]
0x58F79E: mov     eax, [esi+24h]
0x58F7A1: fld     st
0x58F7A3: lea     edi, [eax+0ACh]
0x58F7A9: faddp   st(2), st
0x58F7AB: mov     ecx, edi
0x58F7AD: fld     [esp+6Ch+var_34]
0x58F7B1: xor     ebp, ebp
0x58F7B3: fld     st
0x58F7B5: fmulp   st(3), st
0x58F7B7: fxch    st(2)
0x58F7B9: fstp    [esp+6Ch+var_34]
0x58F7BD: fld     [esp+6Ch+var_50]
0x58F7C1: fmul    [esp+6Ch+var_4C]
0x58F7C5: fstp    [esp+6Ch+var_50]
0x58F7C9: fmulp   st(1), st
0x58F7CB: fstp    dword ptr [esp+6Ch+var_48]
0x58F7CF: call    sub_4784A0
0x58F7D4: mov     ecx, edi
0x58F7D6: call    sub_477F90
0x58F7DB: mov     ecx, [esi+24h]
0x58F7DE: cmp     [ecx+0B8h], bp
0x58F7E5: jbe     loc_58F882
0x58F7EB: jmp     short loc_58F7F0
0x58F7ED: align 10h
0x58F7F0: mov     eax, [esi+24h]
0x58F7F3: movzx   edx, word ptr [eax+0B6h]
0x58F7FA: cmp     edx, ebp
0x58F7FC: jbe     short loc_58F86D
0x58F7FE: mov     eax, [eax+0B0h]
0x58F804: mov     edi, [eax+ebp*4]
0x58F807: test    edi, edi
0x58F809: jz      short loc_58F86D
0x58F80B: mov     edx, [edi]
0x58F80D: mov     eax, [edx+4]
0x58F810: mov     ecx, edi
0x58F812: call    eax
0x58F814: test    eax, eax
0x58F816: jz      short loc_58F832
0x58F818: jmp     short loc_58F820
0x58F81A: align 10h
0x58F820: cmp     eax, offset unk_B352A4
0x58F825: jz      loc_58F8D2
0x58F82B: mov     eax, [eax+4]
0x58F82E: test    eax, eax
0x58F830: jnz     short loc_58F820
0x58F832: xor     al, al
0x58F834: neg     al
0x58F836: sbb     eax, eax
0x58F838: and     eax, edi
0x58F83A: mov     edi, eax
0x58F83C: jz      short loc_58F86D
0x58F83E: fld     [esp+6Ch+var_34]
0x58F842: call    Double_To_SInt32
0x58F847: fld     [esp+6Ch+var_38]
0x58F84B: push    eax
0x58F84C: call    Double_To_SInt32
0x58F851: fld     dword ptr [esp+70h+var_48]
0x58F855: push    eax
0x58F856: call    Double_To_SInt32
0x58F85B: fld     [esp+74h+var_50]
0x58F85F: push    eax
0x58F860: call    Double_To_SInt32
0x58F865: push    eax
0x58F866: mov     ecx, edi
0x58F868: call    sub_4A17F0
0x58F86D: mov     ecx, [esi+24h]
0x58F870: movzx   edx, word ptr [ecx+0B8h]
0x58F877: add     ebp, 1
0x58F87A: cmp     ebp, edx
0x58F87C: jb      loc_58F7F0
0x58F882: mov     eax, [esi+2Ch]
0x58F885: test    eax, 200h
0x58F88A: mov     [esp+6Ch+var_57], 1
0x58F88F: jz      short loc_58F899
0x58F891: xor     eax, 200h
0x58F896: mov     [esi+2Ch], eax
0x58F899: test    byte ptr [esi+2Ch], 8
0x58F89D: jz      loc_58FA89
0x58F8A3: test    bl, bl
0x58F8A5: jnz     loc_58FA89
0x58F8AB: mov     eax, [esi+24h]
0x58F8AE: test    eax, eax
0x58F8B0: mov     [esp+6Ch+var_54], eax
0x58F8B4: jz      loc_58FA89
0x58F8BA: cmp     word ptr [eax+0B8h], 0
0x58F8C2: mov     [esp+6Ch+var_50], 0
0x58F8CA: jbe     loc_58FA89
0x58F8D0: jmp     short loc_58F8E2
0x58F8D2: mov     al, 1
0x58F8D4: jmp     loc_58F834
0x58F8D9: align 10h
0x58F8E0: mov     eax, ecx
0x58F8E2: movzx   eax, word ptr [eax+0B6h]
0x58F8E9: cmp     eax, [esp+6Ch+var_50]
0x58F8ED: jbe     loc_58FA6B
0x58F8F3: mov     ecx, [esp+6Ch+var_54]
0x58F8F7: mov     edx, [ecx+0B0h]
0x58F8FD: mov     eax, [esp+6Ch+var_50]
0x58F901: mov     ebx, [edx+eax*4]
0x58F904: test    ebx, ebx
0x58F906: jz      loc_58FA6B
0x58F90C: push    2
0x58F90E: mov     ecx, ebx
0x58F910: call    NiNode_GetNiPropertyByID
0x58F915: mov     ecx, [esp+6Ch+var_54]
0x58F919: push    ecx
0x58F91A: mov     edi, eax
0x58F91C: call    sub_588E60
0x58F921: add     esp, 4
0x58F924: mov     ebp, eax
0x58F926: push    0FA7h
0x58F92B: mov     ecx, ebp
0x58F92D: call    Tile_GetFloat
0x58F932: fdiv    qword ptr ds:0A3DDD8h
0x58F938: push    0FCCh
0x58F93D: mov     ecx, ebp
0x58F93F: fstp    dword ptr [esp+70h+var_48]
0x58F943: call    Tile_GetFloat
0x58F948: fdiv    qword ptr ds:0A3DDD8h
0x58F94E: push    0FCDh
0x58F953: mov     ecx, ebp
0x58F955: fstp    [esp+70h+var_4C]
0x58F959: call    Tile_GetFloat
0x58F95E: fdiv    qword ptr ds:0A3DDD8h
0x58F964: push    0FCEh
0x58F969: mov     ecx, ebp
0x58F96B: fstp    [esp+70h+var_40]
0x58F96F: call    Tile_GetFloat
0x58F974: fdiv    qword ptr ds:0A3DDD8h
0x58F97A: push    ebx
0x58F97B: push    offset dword_B3FCD4
0x58F980: fstp    [esp+74h+var_38]
0x58F984: call    NiRTTI_Cast
0x58F989: add     esp, 8
0x58F98C: test    edi, edi
0x58F98E: mov     ebx, eax
0x58F990: jz      short loc_58F9CF
0x58F992: fld     dword ptr [esp+6Ch+var_48]
0x58F996: add     dword ptr [edi+54h], 2
0x58F99A: fstp    dword ptr [edi+50h]
0x58F99D: fld     [esp+6Ch+var_4C]
0x58F9A1: fstp    dword ptr [esp+6Ch+var_20]
0x58F9A5: mov     edx, dword ptr [esp+6Ch+var_20]
0x58F9A9: fld     [esp+6Ch+var_40]
0x58F9AD: mov     [edi+40h], edx
0x58F9B0: fstp    dword ptr [esp+6Ch+var_20+4]
0x58F9B4: mov     eax, dword ptr [esp+6Ch+var_20+4]
0x58F9B8: fld     [esp+6Ch+var_38]
0x58F9BC: mov     [edi+44h], eax
0x58F9BF: fstp    [esp+6Ch+var_18]
0x58F9C3: mov     ecx, [esp+6Ch+var_18]
0x58F9C7: mov     [edi+48h], ecx
0x58F9CA: jmp     loc_58FA59
0x58F9CF: test    ebx, ebx
0x58F9D1: jz      loc_58FA6B
0x58F9D7: mov     edx, [ebx+0B4h]
0x58F9DD: mov     edi, [edx+24h]
0x58F9E0: test    edi, edi
0x58F9E2: jz      loc_58FA6B
0x58F9E8: mov     eax, [ebp+0]
0x58F9EB: mov     edx, [eax+0Ch]
0x58F9EE: mov     ecx, ebp
0x58F9F0: call    edx
0x58F9F2: cmp     eax, 387h
0x58F9F7: jnz     short loc_58F9FF
0x58F9F9: cmp     byte ptr [ebp+50h], 0
0x58F9FD: jnz     short loc_58FA59
0x58F9FF: mov     eax, [ebx+0B4h]
0x58FA05: movzx   ecx, word ptr [eax+8]
0x58FA09: test    ecx, ecx
0x58FA0B: jle     short loc_58FA4E
0x58FA0D: fld     dword ptr [esp+6Ch+var_48]
0x58FA11: lea     eax, [edi+4]
0x58FA14: fld     [esp+6Ch+var_4C]
0x58FA18: fld     [esp+6Ch+var_40]
0x58FA1C: fld     [esp+6Ch+var_38]
0x58FA20: jmp     short loc_58FA2A
0x58FA22: fxch    st(2)
0x58FA24: fxch    st(3)
0x58FA26: fxch    st(1)
0x58FA28: fxch    st(2)
0x58FA2A: fxch    st(3)
0x58FA2C: add     eax, 10h
0x58FA2F: sub     ecx, 1
0x58FA32: fst     dword ptr [eax-8]
0x58FA35: fxch    st(2)
0x58FA37: fst     dword ptr [eax-14h]
0x58FA3A: fxch    st(1)
0x58FA3C: fst     dword ptr [eax-10h]
0x58FA3F: fxch    st(3)
0x58FA41: fst     dword ptr [eax-0Ch]
0x58FA44: jnz     short loc_58FA22
0x58FA46: fstp    st(2)
0x58FA48: fstp    st
0x58FA4A: fstp    st(1)
0x58FA4C: fstp    st
0x58FA4E: mov     ebx, [ebx+0B4h]
0x58FA54: or      word ptr [ebx+2Eh], 4
0x58FA59: mov     eax, [esi+2Ch]
0x58FA5C: test    al, 8
0x58FA5E: mov     [esp+6Ch+var_57], 1
0x58FA63: jz      short loc_58FA6B
0x58FA65: xor     eax, 8
0x58FA68: mov     [esi+2Ch], eax
0x58FA6B: mov     ecx, [esp+6Ch+var_54]
0x58FA6F: mov     eax, [esp+6Ch+var_50]
0x58FA73: movzx   edx, word ptr [ecx+0B8h]
0x58FA7A: add     eax, 1
0x58FA7D: cmp     eax, edx
0x58FA7F: mov     [esp+6Ch+var_50], eax
0x58FA83: jb      loc_58F8E0
0x58FA89: mov     al, [esp+6Ch+var_57]
0x58FA8D: mov     ecx, [esp+6Ch+var_C]
0x58FA91: mov     large fs:0, ecx
0x58FA98: pop     ecx
0x58FA99: pop     edi
0x58FA9A: pop     esi
0x58FA9B: pop     ebp
0x58FA9C: pop     ebx
0x58FA9D: mov     esp, ebp
0x58FA9F: pop     ebp
0x58FAA0: retn
