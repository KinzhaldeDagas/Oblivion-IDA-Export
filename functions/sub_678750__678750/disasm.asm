0x678750: sub     esp, 64h
0x678753: add     ecx, 68h ; 'h'; this
0x678756: call    sub_7616D0
0x67875B: mov     ecx, ds:0B333A0h
0x678761: add     ecx, 80h ; '€'
0x678767: test    eax, eax
0x678769: mov     [esp+64h+var_58], eax
0x67876D: mov     [esp+64h+var_60], ecx
0x678771: mov     [esp+64h+var_61], 0
0x678776: jz      loc_678D17
0x67877C: push    ebx
0x67877D: push    ebp
0x67877E: push    esi
0x67877F: push    edi
0x678780: mov     edi, [esp+74h+var_58]
0x678784: mov     ecx, [edi]
0x678786: test    ecx, ecx
0x678788: jz      loc_678CFF
0x67878E: mov     edx, [ecx]
0x678790: mov     eax, [edx+190h]
0x678796: call    eax
0x678798: test    al, al
0x67879A: jz      loc_678CE9
0x6787A0: mov     esi, [edi]
0x6787A2: test    esi, esi
0x6787A4: jz      loc_678CE9
0x6787AA: mov     ecx, esi
0x6787AC: call    sub_5E32D0
0x6787B1: test    al, al
0x6787B3: jz      loc_678CE9
0x6787B9: mov     edx, [esi]
0x6787BB: mov     eax, [edx+18Ch]
0x6787C1: mov     ecx, esi
0x6787C3: call    eax
0x6787C5: test    eax, eax
0x6787C7: jnz     loc_678CE9
0x6787CD: mov     ecx, [esi+58h]
0x6787D0: mov     edx, [ecx]
0x6787D2: mov     eax, [edx+8]
0x6787D5: call    eax
0x6787D7: test    eax, eax
0x6787D9: jz      short loc_6787E7
0x6787DB: mov     ecx, [edi+4]
0x6787DE: mov     [esp+74h+var_58], ecx
0x6787E2: jmp     loc_678CF4
0x6787E7: mov     edx, [esi]
0x6787E9: fld     dword ptr ds:0B3BCF0h
0x6787EF: mov     eax, [edx+368h]
0x6787F5: push    ecx
0x6787F6: mov     ecx, esi
0x6787F8: fstp    [esp+78h+var_78]
0x6787FB: call    eax
0x6787FD: mov     ecx, esi
0x6787FF: call    sub_4D8AF0
0x678804: mov     ecx, esi
0x678806: mov     [esp+74h+var_54], eax
0x67880A: xor     ebp, ebp
0x67880C: mov     [esp+74h+var_62], 0
0x678811: call    sub_5E3DC0
0x678816: mov     ecx, esi
0x678818: mov     ebx, eax
0x67881A: call    sub_5E2E00
0x67881F: mov     ecx, esi
0x678821: mov     edi, eax
0x678823: call    sub_5E0380
0x678828: test    ebx, ebx
0x67882A: mov     [esp+74h+var_4C], eax
0x67882E: mov     [esp+74h+var_50], ebp
0x678832: jz      short loc_67883F
0x678834: mov     ecx, ebx
0x678836: call    sub_5697E0
0x67883B: mov     [esp+74h+var_50], eax
0x67883F: mov     ecx, [esi+58h]
0x678842: mov     edx, [ecx]
0x678844: mov     eax, [edx+380h]
0x67884A: call    eax
0x67884C: test    edi, edi
0x67884E: mov     ebx, eax
0x678850: mov     [esp+74h+var_5C], 0FFFFFFFFh
0x678858: jz      short loc_678872
0x67885A: mov     ecx, edi
0x67885C: call    sub_4D74B0
0x678861: test    al, al
0x678863: jz      short loc_678872
0x678865: mov     ecx, edi
0x678867: call    sub_4D8AF0
0x67886C: cmp     eax, [esp+74h+var_54]
0x678870: jz      short loc_678892
0x678872: mov     edi, [esp+74h+var_50]
0x678876: test    edi, edi
0x678878: jz      short loc_6788DA
0x67887A: mov     ecx, edi
0x67887C: call    sub_4D74B0
0x678881: test    al, al
0x678883: jz      short loc_6788DA
0x678885: mov     ecx, edi
0x678887: call    sub_4D8AF0
0x67888C: cmp     eax, [esp+74h+var_54]
0x678890: jnz     short loc_6788DA
0x678892: mov     edx, [edi]
0x678894: mov     eax, [edx+170h]
0x67889A: mov     ecx, edi
0x67889C: mov     ebp, edi
0x67889E: call    eax
0x6788A0: mov     ecx, eax
0x6788A2: call    sub_4AE5A0
0x6788A7: test    al, al
0x6788A9: jz      short loc_6788B0
0x6788AB: mov     [esp+74h+var_62], 1
0x6788B0: mov     ecx, edi
0x6788B2: call    sub_4D73F0
0x6788B7: cmp     eax, 0FFFFFFFFh
0x6788BA: mov     [esp+74h+var_5C], eax
0x6788BE: jz      loc_678CE9
0x6788C4: push    ebx
0x6788C5: push    eax
0x6788C6: mov     ecx, edi
0x6788C8: call    sub_4DB9D0
0x6788CD: test    al, al
0x6788CF: jnz     loc_678AE3
0x6788D5: jmp     loc_678CE9
0x6788DA: mov     edi, [esp+74h+var_4C]
0x6788DE: test    edi, edi
0x6788E0: jz      loc_678CE9
0x6788E6: cmp     byte ptr [edi+20h], 4
0x6788EA: jnz     loc_6789E9
0x6788F0: fld     dword ptr ds:0A30634h
0x6788F6: push    ecx
0x6788F7: fstp    [esp+78h+var_78]; float
0x6788FA: push    0; char
0x6788FC: push    esi; int
0x6788FD: mov     ecx, edi
0x6788FF: call    sub_566DC0
0x678904: test    al, al
0x678906: jz      loc_6789E9
0x67890C: mov     ecx, esi
0x67890E: call    sub_5E0F30
0x678913: test    al, al
0x678915: jnz     short loc_678926
0x678917: mov     ecx, [esi+58h]
0x67891A: mov     edx, [ecx]
0x67891C: mov     eax, [edx+17Ch]
0x678922: push    1
0x678924: call    eax
0x678926: mov     eax, [esp+74h+var_60]
0x67892A: test    eax, eax
0x67892C: jz      loc_678CE9
0x678932: jmp     short loc_678938
0x678934: mov     eax, [esp+74h+var_60]
0x678938: cmp     dword ptr [eax+4], 0
0x67893C: jnz     short loc_678947
0x67893E: cmp     dword ptr [eax], 0
0x678941: jz      loc_678AE3
0x678947: test    ebp, ebp
0x678949: jnz     loc_678AEB
0x67894F: mov     edi, [eax]
0x678951: mov     ecx, edi
0x678953: call    sub_4D8AF0
0x678958: cmp     eax, [esp+74h+var_54]
0x67895C: jnz     short loc_6789B2
0x67895E: mov     ecx, edi; this
0x678960: call    TESObjectREFR_GetOwner
0x678965: test    eax, eax
0x678967: jz      short loc_678977
0x678969: push    1
0x67896B: push    esi
0x67896C: mov     ecx, edi
0x67896E: call    TESOBjectREFR_IsOwnedBy
0x678973: test    al, al
0x678975: jz      short loc_6789B2
0x678977: mov     edx, [edi]
0x678979: mov     eax, [edx+170h]
0x67897F: mov     ecx, edi
0x678981: call    eax
0x678983: mov     ecx, eax
0x678985: call    sub_4AE5A0
0x67898A: test    al, al
0x67898C: jz      short loc_6789B2
0x67898E: mov     ecx, edi
0x678990: call    sub_4D73F0
0x678995: cmp     eax, 0FFFFFFFFh
0x678998: mov     [esp+74h+var_5C], eax
0x67899C: jz      short loc_6789CD
0x67899E: push    ebx
0x67899F: push    eax
0x6789A0: mov     ecx, edi
0x6789A2: call    sub_4DB9D0
0x6789A7: test    al, al
0x6789A9: jz      short loc_6789CD
0x6789AB: mov     ebp, edi
0x6789AD: mov     [esp+74h+var_62], 1
0x6789B2: mov     edx, [esp+74h+var_60]
0x6789B6: mov     eax, [edx+4]
0x6789B9: mov     [esp+74h+var_60], eax
0x6789BD: cmp     [esp+74h+var_60], 0
0x6789C2: jnz     loc_678934
0x6789C8: jmp     loc_678AE3
0x6789CD: mov     ecx, [esp+74h+var_60]
0x6789D1: push    edi
0x6789D2: call    BSSimpleList_Remove
0x6789D7: mov     ecx, ds:0B333A0h
0x6789DD: add     ecx, 80h ; '€'
0x6789E3: mov     [esp+74h+var_60], ecx
0x6789E7: jmp     short loc_6789BD
0x6789E9: cmp     byte ptr [edi+20h], 3
0x6789ED: jnz     loc_678CE9
0x6789F3: fld     dword ptr ds:0A30634h
0x6789F9: push    ecx
0x6789FA: fstp    [esp+78h+var_78]; float
0x6789FD: push    0; char
0x6789FF: push    esi; int
0x678A00: mov     ecx, edi
0x678A02: call    sub_566DC0
0x678A07: test    al, al
0x678A09: jz      loc_678CE9
0x678A0F: mov     ecx, esi
0x678A11: call    sub_5E6FA0
0x678A16: test    al, al
0x678A18: jnz     short loc_678A38
0x678A1A: mov     ecx, [esi+58h]
0x678A1D: mov     edx, [ecx]
0x678A1F: mov     eax, [edx+188h]
0x678A25: push    1
0x678A27: push    esi
0x678A28: call    eax
0x678A2A: mov     edx, [esi]
0x678A2C: mov     eax, [edx+17Ch]
0x678A32: push    1
0x678A34: mov     ecx, esi
0x678A36: call    eax
0x678A38: cmp     [esp+74h+var_60], 0
0x678A3D: jz      loc_678CE9
0x678A43: mov     eax, [esp+74h+var_60]
0x678A47: cmp     dword ptr [eax+4], 0
0x678A4B: jnz     short loc_678A56
0x678A4D: cmp     dword ptr [eax], 0
0x678A50: jz      loc_678AE3
0x678A56: test    ebp, ebp
0x678A58: jnz     loc_678AEB
0x678A5E: mov     edi, [eax]
0x678A60: mov     ecx, edi
0x678A62: call    sub_4D8AF0
0x678A67: cmp     eax, [esp+74h+var_54]
0x678A6B: jnz     short loc_678ACD
0x678A6D: test    edi, edi
0x678A6F: jz      short loc_678ACD
0x678A71: mov     ecx, edi; this
0x678A73: call    TESObjectREFR_GetOwner
0x678A78: test    eax, eax
0x678A7A: jz      short loc_678A8A
0x678A7C: push    1
0x678A7E: push    esi
0x678A7F: mov     ecx, edi
0x678A81: call    TESOBjectREFR_IsOwnedBy
0x678A86: test    al, al
0x678A88: jz      short loc_678ACD
0x678A8A: mov     edx, [edi]
0x678A8C: mov     eax, [edx+170h]
0x678A92: mov     ecx, edi
0x678A94: call    eax
0x678A96: mov     ecx, eax
0x678A98: call    sub_4AE590
0x678A9D: test    al, al
0x678A9F: jz      short loc_678ACD
0x678AA1: mov     ecx, edi
0x678AA3: call    sub_4D73F0
0x678AA8: cmp     eax, 0FFFFFFFFh
0x678AAB: mov     [esp+74h+var_5C], eax
0x678AAF: jz      loc_678C6F
0x678AB5: push    ebx
0x678AB6: push    eax
0x678AB7: mov     ecx, edi
0x678AB9: call    sub_4DB9D0
0x678ABE: test    al, al
0x678AC0: jz      loc_678C6F
0x678AC6: mov     ebp, edi
0x678AC8: mov     [esp+74h+var_62], 0
0x678ACD: mov     edx, [esp+74h+var_60]
0x678AD1: mov     eax, [edx+4]
0x678AD4: mov     [esp+74h+var_60], eax
0x678AD8: cmp     [esp+74h+var_60], 0
0x678ADD: jnz     loc_678A43
0x678AE3: test    ebp, ebp
0x678AE5: jz      loc_678CE9
0x678AEB: mov     edx, [esi]
0x678AED: mov     eax, [edx+154h]
0x678AF3: mov     ecx, esi
0x678AF5: call    eax
0x678AF7: test    eax, eax
0x678AF9: jz      loc_678CE9
0x678AFF: mov     edx, [ebp+0]
0x678B02: mov     eax, [edx+170h]
0x678B08: mov     ecx, ebp
0x678B0A: call    eax
0x678B0C: push    1
0x678B0E: mov     ecx, esi
0x678B10: mov     edi, eax
0x678B12: call    sub_65AC20
0x678B17: movzx   eax, word ptr [ebx+0Ch]
0x678B1B: mov     [esp+60h+var_38], eax
0x678B1F: mov     edx, [esi]
0x678B21: mov     edx, [edx+1E8h]
0x678B27: fild    [esp+60h+var_38]
0x678B2B: push    ecx
0x678B2C: mov     ecx, esi
0x678B2E: fdiv    qword ptr ds:0A2FC70h
0x678B34: fstp    [esp+64h+var_38]
0x678B38: fld     [esp+64h+var_38]
0x678B3C: fstp    dword ptr [esp]
0x678B3F: call    edx
0x678B41: movzx   eax, byte ptr [ebx+0Eh]
0x678B45: mov     edx, [esi]
0x678B47: mov     [esp+60h+var_38], eax
0x678B4B: mov     eax, [edx+0ECh]
0x678B51: mov     ecx, esi
0x678B53: call    eax
0x678B55: push    ecx
0x678B56: mov     ecx, [esp+64h+var_38]
0x678B5A: fstp    dword ptr [esp]; float
0x678B5D: push    ecx; int
0x678B5E: lea     edx, [esp+68h+var_34]
0x678B62: push    edx; int
0x678B63: mov     ecx, edi
0x678B65: call    sub_4AEB40
0x678B6A: movzx   eax, word ptr [ebx+0Ch]
0x678B6E: mov     [esp+60h+var_38], eax
0x678B72: push    ecx
0x678B73: lea     ecx, [esp+64h+var_10]
0x678B77: fild    [esp+64h+var_38]
0x678B7B: fdiv    qword ptr ds:0A2FC70h
0x678B81: fstp    [esp+64h+var_38]
0x678B85: fld     [esp+64h+var_38]
0x678B89: fstp    dword ptr [esp]; float
0x678B8C: call    NiMatrix33_InitRotationTransform
0x678B91: lea     ecx, [esp+60h+var_34]
0x678B95: push    ecx
0x678B96: lea     edx, [esp+64h+var_1C]
0x678B9A: push    edx
0x678B9B: lea     ecx, [esp+68h+var_10]
0x678B9F: call    sub_7101F0
0x678BA4: mov     ecx, [eax]
0x678BA6: mov     edi, [esp+60h+var_48]
0x678BAA: mov     [esp+60h+var_34], ecx
0x678BAE: mov     edx, [eax+4]
0x678BB1: mov     ecx, [esi+58h]
0x678BB4: mov     [esp+60h+var_30], edx
0x678BB8: mov     eax, [eax+8]
0x678BBB: mov     [esp+60h+var_2C], eax
0x678BBF: push    1
0x678BC1: mov     dword ptr [ecx+4], 2
0x678BC8: push    edi
0x678BC9: mov     ecx, ebp
0x678BCB: call    sub_4D7300
0x678BD0: fld     dword ptr [ebx]
0x678BD2: fadd    [esp+60h+var_34]
0x678BD6: mov     edx, [esi]
0x678BD8: mov     edx, [edx+1CCh]
0x678BDE: lea     eax, [esp+60h+var_28]
0x678BE2: fstp    [esp+60h+var_28]
0x678BE6: push    eax
0x678BE7: fld     dword ptr [ebx+4]
0x678BEA: mov     ecx, esi
0x678BEC: fadd    [esp+64h+var_30]
0x678BF0: fstp    [esp+64h+var_24]
0x678BF4: fld     dword ptr [ebx+8]
0x678BF7: fadd    [esp+64h+var_2C]
0x678BFB: fstp    [esp+64h+var_20]
0x678BFF: call    edx
0x678C01: push    ebx; a2
0x678C02: mov     ecx, esi; this
0x678C04: call    MobileObject_GetCharProxy
0x678C09: mov     ecx, eax; this
0x678C0B: call    sub_452A10
0x678C10: movzx   eax, byte ptr [ebx+0Eh]
0x678C14: push    eax
0x678C15: mov     eax, [ebp+0]
0x678C18: mov     edx, [eax+170h]
0x678C1E: mov     ecx, ebp
0x678C20: call    edx
0x678C22: mov     ecx, eax
0x678C24: call    sub_4AEBE0
0x678C29: push    ecx
0x678C2A: mov     ecx, esi
0x678C2C: fstp    [esp+60h+var_60]; float
0x678C2F: call    sub_659B90
0x678C34: mov     ecx, [esi+58h]
0x678C37: mov     bl, byte ptr [esp+5Ch+var_4C+2]
0x678C3B: test    bl, bl
0x678C3D: mov     eax, [ecx]
0x678C3F: mov     edx, [eax+370h]
0x678C45: push    edi
0x678C46: push    ebp
0x678C47: jz      short loc_678C8E
0x678C49: push    6
0x678C4B: push    esi
0x678C4C: call    edx
0x678C4E: mov     ecx, [esi+58h]
0x678C51: mov     eax, [ecx]
0x678C53: mov     edx, [eax+17Ch]
0x678C59: push    1
0x678C5B: call    edx
0x678C5D: mov     ecx, [esi+58h]
0x678C60: mov     eax, [ecx]
0x678C62: mov     edx, [eax+80h]
0x678C68: push    0
0x678C6A: push    esi
0x678C6B: call    edx
0x678C6D: jmp     short loc_678C93
0x678C6F: mov     ecx, [esp+74h+var_60]
0x678C73: push    edi
0x678C74: call    BSSimpleList_Remove
0x678C79: mov     ecx, ds:0B333A0h
0x678C7F: add     ecx, 80h ; '€'
0x678C85: mov     [esp+74h+var_60], ecx
0x678C89: jmp     loc_678AD8
0x678C8E: push    1
0x678C90: push    esi
0x678C91: call    edx
0x678C93: mov     ecx, [esi+58h]
0x678C96: mov     eax, [ecx]
0x678C98: mov     edx, [eax+384h]
0x678C9E: push    esi
0x678C9F: call    edx
0x678CA1: test    al, al
0x678CA3: jz      short loc_678CD5
0x678CA5: test    bl, bl
0x678CA7: mov     byte ptr [esp+64h+var_54+3], 1
0x678CAC: jz      short loc_678CCF
0x678CAE: mov     ecx, esi
0x678CB0: call    sub_5E12B0
0x678CB5: test    eax, eax
0x678CB7: jz      short loc_678CC9
0x678CB9: mov     edx, [eax]
0x678CBB: push    0
0x678CBD: mov     ecx, eax
0x678CBF: mov     eax, [edx+9Ch]
0x678CC5: push    1
0x678CC7: call    eax
0x678CC9: push    edi
0x678CCA: push    ebp
0x678CCB: push    9
0x678CCD: jmp     short loc_678CDB
0x678CCF: push    edi
0x678CD0: push    ebp
0x678CD1: push    4
0x678CD3: jmp     short loc_678CDB
0x678CD5: push    7Fh
0x678CD7: push    0
0x678CD9: push    0
0x678CDB: mov     ecx, [esi+58h]
0x678CDE: mov     edx, [ecx]
0x678CE0: mov     eax, [edx+370h]
0x678CE6: push    esi
0x678CE7: call    eax
0x678CE9: mov     ecx, [esp+74h+var_58]
0x678CED: mov     edx, [ecx+4]
0x678CF0: mov     [esp+74h+var_58], edx
0x678CF4: cmp     [esp+74h+var_58], 0
0x678CF9: jnz     loc_678780
0x678CFF: cmp     [esp+74h+var_61], 0
0x678D04: pop     edi
0x678D05: pop     esi
0x678D06: pop     ebp
0x678D07: pop     ebx
0x678D08: jz      short loc_678D17
0x678D0A: mov     ecx, ds:0B33A10h
0x678D10: push    0
0x678D12: call    sub_434020
0x678D17: mov     ecx, ds:0B333A0h
0x678D1D: add     esp, 64h
0x678D20: jmp     sub_4418A0
