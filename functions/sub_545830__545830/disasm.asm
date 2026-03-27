0x545830: sub     esp, 0A4h
0x545836: mov     eax, ds:0B3F9A8h
0x54583B: mov     edx, ds:0B3F9B0h
0x545841: push    ebx
0x545842: mov     ebx, [esp+0A8h+arg_0]
0x545849: fld     dword ptr [ebx+0D0h]
0x54584F: push    ebp
0x545850: push    esi
0x545851: fstp    dword ptr [esp+0B0h+var_A4]
0x545855: fld     [esp+0B0h+arg_4]
0x54585C: mov     ebp, ecx
0x54585E: mov     ecx, ds:0B3F9ACh
0x545864: push    edi
0x545865: push    ecx
0x545866: fstp    [esp+0B8h+var_B8]
0x545869: mov     dword ptr [esp+0B8h+var_78+4], ecx
0x54586D: push    ebx
0x54586E: mov     ecx, ebp
0x545870: mov     dword ptr [esp+0BCh+var_78], eax
0x545874: mov     [esp+0BCh+var_70], edx
0x545878: call    nullsub_returnVoid_2arg
0x54587D: mov     eax, [ebx+0DCh]
0x545883: test    eax, eax
0x545885: jnz     loc_5459E6
0x54588B: mov     eax, ds:0B333A0h
0x545890: test    eax, eax
0x545892: mov     ecx, 9
0x545897: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x54589C: lea     edi, [esp+0B4h+var_6C]
0x5458A0: rep movsd
0x5458A2: jz      short loc_5458A9
0x5458A4: mov     esi, [eax+34h]
0x5458A7: jmp     short loc_5458AB
0x5458A9: xor     esi, esi
0x5458AB: test    esi, esi
0x5458AD: jz      loc_545940
0x5458B3: mov     ecx, esi
0x5458B5: call    sub_4C9980
0x5458BA: test    eax, eax
0x5458BC: mov     dword ptr [esp+0B4h+var_A4], eax
0x5458C0: fild    dword ptr [esp+0B4h+var_A4]
0x5458C4: jge     short loc_5458CC
0x5458C6: fadd    dword ptr ds:0A2FC78h
0x5458CC: fmul    qword ptr ds:0A31C78h
0x5458D2: push    ecx
0x5458D3: lea     ecx, [esp+0B8h+var_6C]
0x5458D7: fstp    dword ptr [esp+0B8h+var_A4]
0x5458DB: fld     dword ptr [esp+0B8h+var_A4]
0x5458DF: fstp    [esp+0B8h+var_B8]; float
0x5458E2: call    NiMatrix33_InitRotationTransform
0x5458E7: mov     ecx, esi
0x5458E9: call    sub_4C99A0
0x5458EE: test    eax, eax
0x5458F0: mov     dword ptr [esp+0B4h+var_A4], eax
0x5458F4: fild    dword ptr [esp+0B4h+var_A4]
0x5458F8: jge     short loc_545900
0x5458FA: fadd    dword ptr ds:0A2FC78h
0x545900: fmul    qword ptr ds:0A31C78h
0x545906: push    ecx
0x545907: lea     ecx, [esp+0B8h+var_48]
0x54590B: fstp    dword ptr [esp+0B8h+var_A4]
0x54590F: fld     dword ptr [esp+0B8h+var_A4]
0x545913: fstp    [esp+0B8h+var_B8]; float
0x545916: call    sub_70FD80
0x54591B: lea     eax, [esp+0B4h+var_48]
0x54591F: push    eax
0x545920: lea     ecx, [esp+0B8h+var_24]
0x545927: push    ecx
0x545928: lea     ecx, [esp+0BCh+var_6C]
0x54592C: call    NiMAtrix33_Multiply
0x545931: mov     ecx, 9
0x545936: mov     esi, eax
0x545938: lea     edi, [esp+0B4h+var_6C]
0x54593C: rep movsd
0x54593E: jmp     short loc_54594E
0x545940: fld     dword ptr ds:0A57264h
0x545946: fst     [esp+0B4h+var_60]
0x54594A: fstp    [esp+0B4h+var_54]
0x54594E: mov     edi, [ebp+1Ch]
0x545951: add     edi, 30h ; '0'
0x545954: mov     ecx, 9
0x545959: lea     esi, [esp+0B4h+var_6C]
0x54595D: rep movsd
0x54595F: mov     eax, [ebp+1Ch]
0x545962: mov     edx, [ebx+60h]
0x545965: mov     [eax+0E0h], edx
0x54596B: mov     ecx, [ebx+64h]
0x54596E: mov     [eax+0E4h], ecx
0x545974: mov     edx, [ebx+68h]
0x545977: mov     [eax+0E8h], edx
0x54597D: mov     ecx, 1
0x545982: add     [eax+0B8h], ecx
0x545988: mov     eax, [ebp+1Ch]
0x54598B: mov     edx, [ebx+6Ch]
0x54598E: mov     [eax+0ECh], edx
0x545994: mov     edx, [ebx+70h]
0x545997: mov     [eax+0F0h], edx
0x54599D: mov     edx, [ebx+74h]
0x5459A0: add     [eax+0B8h], ecx
0x5459A6: mov     [eax+0F4h], edx
0x5459AC: mov     eax, [ebx+0B4h]
0x5459B2: mov     ebp, [ebp+1Ch]
0x5459B5: add     ebx, 0B4h ; '´'
0x5459BB: mov     [ebp+0F8h], eax
0x5459C1: mov     edx, [ebx+4]
0x5459C4: mov     [ebp+0FCh], edx
0x5459CA: mov     eax, [ebx+8]
0x5459CD: add     [ebp+0B8h], ecx
0x5459D3: pop     edi
0x5459D4: pop     esi
0x5459D5: mov     [ebp+100h], eax
0x5459DB: pop     ebp
0x5459DC: pop     ebx
0x5459DD: add     esp, 0A4h
0x5459E3: retn    8
0x5459E6: mov     edx, 1
0x5459EB: cmp     eax, edx
0x5459ED: jnz     loc_545B4E
0x5459F3: mov     eax, ds:0B333A0h
0x5459F8: test    eax, eax
0x5459FA: mov     ecx, 9
0x5459FF: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x545A04: lea     edi, [esp+0B4h+var_6C]
0x545A08: rep movsd
0x545A0A: jz      short loc_545A11
0x545A0C: mov     esi, [eax+34h]
0x545A0F: jmp     short loc_545A13
0x545A11: xor     esi, esi
0x545A13: test    esi, esi
0x545A15: jz      loc_545AAD
0x545A1B: mov     ecx, esi
0x545A1D: call    sub_4C9980
0x545A22: test    eax, eax
0x545A24: mov     dword ptr [esp+0B4h+var_A4], eax
0x545A28: fild    dword ptr [esp+0B4h+var_A4]
0x545A2C: jge     short loc_545A34
0x545A2E: fadd    dword ptr ds:0A2FC78h
0x545A34: fmul    qword ptr ds:0A31C78h
0x545A3A: push    ecx
0x545A3B: lea     ecx, [esp+0B8h+var_6C]
0x545A3F: fstp    dword ptr [esp+0B8h+var_A4]
0x545A43: fld     dword ptr [esp+0B8h+var_A4]
0x545A47: fstp    [esp+0B8h+var_B8]; float
0x545A4A: call    NiMatrix33_InitRotationTransform
0x545A4F: mov     ecx, esi
0x545A51: call    sub_4C99A0
0x545A56: test    eax, eax
0x545A58: mov     dword ptr [esp+0B4h+var_A4], eax
0x545A5C: fild    dword ptr [esp+0B4h+var_A4]
0x545A60: jge     short loc_545A68
0x545A62: fadd    dword ptr ds:0A2FC78h
0x545A68: fmul    qword ptr ds:0A31C78h
0x545A6E: push    ecx
0x545A6F: lea     ecx, [esp+0B8h+var_48]
0x545A73: fstp    dword ptr [esp+0B8h+var_A4]
0x545A77: fld     dword ptr [esp+0B8h+var_A4]
0x545A7B: fstp    [esp+0B8h+var_B8]; float
0x545A7E: call    sub_70FD80
0x545A83: lea     ecx, [esp+0B4h+var_48]
0x545A87: push    ecx
0x545A88: lea     edx, [esp+0B8h+var_24]
0x545A8F: push    edx
0x545A90: lea     ecx, [esp+0BCh+var_6C]
0x545A94: call    NiMAtrix33_Multiply
0x545A99: mov     ecx, 9
0x545A9E: mov     esi, eax
0x545AA0: lea     edi, [esp+0B4h+var_6C]
0x545AA4: rep movsd
0x545AA6: mov     edx, 1
0x545AAB: jmp     short loc_545ABB
0x545AAD: fld     dword ptr ds:0A57264h
0x545AB3: fst     [esp+0B4h+var_60]
0x545AB7: fstp    [esp+0B4h+var_54]
0x545ABB: mov     edi, [ebp+1Ch]
0x545ABE: add     edi, 30h ; '0'
0x545AC1: mov     ecx, 9
0x545AC6: lea     esi, [esp+0B4h+var_6C]
0x545ACA: rep movsd
0x545ACC: mov     eax, [ebp+1Ch]
0x545ACF: mov     ecx, [ebx+60h]
0x545AD2: mov     [eax+0E0h], ecx
0x545AD8: mov     ecx, [ebx+64h]
0x545ADB: mov     [eax+0E4h], ecx
0x545AE1: mov     ecx, [ebx+68h]
0x545AE4: add     [eax+0B8h], edx
0x545AEA: mov     [eax+0E8h], ecx
0x545AF0: mov     eax, [ebp+1Ch]
0x545AF3: mov     ecx, [ebx+6Ch]
0x545AF6: mov     [eax+0ECh], ecx
0x545AFC: mov     ecx, [ebx+70h]
0x545AFF: mov     [eax+0F0h], ecx
0x545B05: mov     ecx, [ebx+74h]
0x545B08: add     [eax+0B8h], edx
0x545B0E: mov     [eax+0F4h], ecx
0x545B14: mov     eax, [ebx+0B4h]
0x545B1A: mov     ebp, [ebp+1Ch]
0x545B1D: add     ebx, 0B4h ; '´'
0x545B23: mov     [ebp+0F8h], eax
0x545B29: mov     ecx, [ebx+4]
0x545B2C: mov     [ebp+0FCh], ecx
0x545B32: mov     eax, [ebx+8]
0x545B35: add     [ebp+0B8h], edx
0x545B3B: pop     edi
0x545B3C: pop     esi
0x545B3D: mov     [ebp+100h], eax
0x545B43: pop     ebp
0x545B44: pop     ebx
0x545B45: add     esp, 0A4h
0x545B4B: retn    8
0x545B4E: cmp     eax, 3
0x545B51: jz      short loc_545B5C
0x545B53: cmp     eax, 2
0x545B56: jnz     loc_546112
0x545B5C: mov     eax, [ebp+4]
0x545B5F: mov     cl, [eax+18h]
0x545B62: shr     cl, 5
0x545B65: not     cl
0x545B67: test    dl, cl
0x545B69: jz      short loc_545B71
0x545B6B: or      [eax+18h], dx
0x545B6F: jmp     short loc_545B77
0x545B71: and     word ptr [eax+18h], 0FFFEh
0x545B77: mov     ecx, ebx
0x545B79: call    sub_499140
0x545B7E: fstp    [esp+0B4h+var_8C]
0x545B82: mov     ecx, ebx
0x545B84: call    sub_499200
0x545B89: fstp    [esp+0B4h+var_94]
0x545B8D: fld     dword ptr ds:0B366C0h
0x545B93: fmul    qword ptr ds:0A2FAA0h
0x545B99: fstp    [esp+0B4h+var_9C]
0x545B9D: fld     [esp+0B4h+var_8C]
0x545BA1: fld     st
0x545BA3: fld     [esp+0B4h+var_9C]
0x545BA7: fld     st
0x545BA9: fsubp   st(2), st
0x545BAB: fxch    st(1)
0x545BAD: fstp    [esp+0B4h+var_8C]
0x545BB1: fld     st
0x545BB3: faddp   st(2), st
0x545BB5: fxch    st(1)
0x545BB7: fstp    [esp+0B4h+var_9C]
0x545BBB: fld     [esp+0B4h+var_94]
0x545BBF: fld     st
0x545BC1: fsub    st, st(2)
0x545BC3: fstp    [esp+0B4h+var_94]
0x545BC7: faddp   st(1), st
0x545BC9: fstp    [esp+0B4h+var_90]
0x545BCD: fld1
0x545BCF: fstp    [esp+0B4h+var_98]
0x545BD3: fld     [esp+0B4h+var_8C]
0x545BD7: fld     dword ptr [esp+0B4h+var_A4]
0x545BDB: fcom    st(1)
0x545BDD: fnstsw  ax
0x545BDF: fld1
0x545BE1: test    ah, 1
0x545BE4: fldz
0x545BE6: fld     [esp+0B4h+var_90]
0x545BEA: jnz     loc_545CA9
0x545BF0: fcom    st(3)
0x545BF2: fnstsw  ax
0x545BF4: test    ah, 1
0x545BF7: jnz     loc_545CA9
0x545BFD: fxch    st(4)
0x545BFF: fcom    st(3)
0x545C01: fnstsw  ax
0x545C03: test    ah, 5
0x545C06: jp      short loc_545C2B
0x545C08: fld     [esp+0B4h+var_9C]
0x545C0C: fcom    st(4)
0x545C0E: fnstsw  ax
0x545C10: test    ah, 41h
0x545C13: jnz     short loc_545C29
0x545C15: fstp    st(5)
0x545C17: fld     st
0x545C19: fsubp   st(4), st
0x545C1B: fsubp   st(4), st
0x545C1D: fxch    st(2)
0x545C1F: fdivrp  st(3), st
0x545C21: fxch    st(2)
0x545C23: fstp    [esp+0B4h+var_98]
0x545C27: jmp     short loc_545C5B
0x545C29: fstp    st(1)
0x545C2B: fstp    st
0x545C2D: fld     [esp+0B4h+var_94]
0x545C31: fcom    st(3)
0x545C33: fnstsw  ax
0x545C35: test    ah, 5
0x545C38: jp      short loc_545CB7
0x545C3A: fxch    st(3)
0x545C3C: fcom    st(4)
0x545C3E: fnstsw  ax
0x545C40: test    ah, 5
0x545C43: jp      short loc_545CBF
0x545C45: fsub    st, st(3)
0x545C47: fxch    st(4)
0x545C49: fsubrp  st(3), st
0x545C4B: fxch    st(3)
0x545C4D: fdivrp  st(2), st
0x545C4F: fld     st
0x545C51: fsubrp  st(2), st
0x545C53: fxch    st(1)
0x545C55: fstp    [esp+0B4h+var_98]
0x545C59: fxch    st(1)
0x545C5B: fld     dword ptr [ebx+0D8h]
0x545C61: mov     eax, [ebx+10h]
0x545C64: test    eax, eax
0x545C66: fstp    [esp+0B4h+var_9C]
0x545C6A: fld     [esp+0B4h+var_9C]
0x545C6E: mov     ecx, [ebx+14h]
0x545C71: fldz
0x545C73: fld     qword ptr ds:0A3F398h
0x545C79: jz      short loc_545CC7
0x545C7B: movzx   edx, byte ptr [eax+4Ch]
0x545C7F: fld     st(2)
0x545C81: fld     [esp+0B4h+var_98]
0x545C85: fld     st
0x545C87: fmulp   st(2), st
0x545C89: fxch    st(1)
0x545C8B: fstp    [esp+0B4h+var_9C]
0x545C8F: fld     [esp+0B4h+var_9C]
0x545C93: mov     [esp+0B4h+var_9C], edx
0x545C97: fsub    st, st(3)
0x545C99: fild    [esp+0B4h+var_9C]
0x545C9D: fmul    st, st(3)
0x545C9F: fmulp   st(1), st
0x545CA1: fadd    st, st(3)
0x545CA3: fstp    [esp+0B4h+var_9C]
0x545CA7: jmp     short loc_545CCF
0x545CA9: fstp    st(3)
0x545CAB: fstp    st(3)
0x545CAD: fstp    st(1)
0x545CAF: fxch    st(1)
0x545CB1: fst     [esp+0B4h+var_98]
0x545CB5: jmp     short loc_545C5B
0x545CB7: fstp    st(3)
0x545CB9: fstp    st(2)
0x545CBB: fstp    st(2)
0x545CBD: jmp     short loc_545C5B
0x545CBF: fstp    st
0x545CC1: fstp    st(2)
0x545CC3: fstp    st(2)
0x545CC5: jmp     short loc_545C5B
0x545CC7: fld     [esp+0B4h+var_98]
0x545CCB: fst     [esp+0B4h+var_9C]
0x545CCF: test    ecx, ecx
0x545CD1: jz      short loc_545CFD
0x545CD3: movzx   eax, byte ptr [ecx+4Ch]
0x545CD7: fstp    st(4)
0x545CD9: fxch    st(4)
0x545CDB: fsubrp  st(2), st
0x545CDD: fxch    st(1)
0x545CDF: fmulp   st(2), st
0x545CE1: fxch    st(1)
0x545CE3: fstp    [esp+0B4h+var_94]
0x545CE7: fld     [esp+0B4h+var_94]
0x545CEB: mov     [esp+0B4h+var_94], eax
0x545CEF: fsub    st, st(1)
0x545CF1: fild    [esp+0B4h+var_94]
0x545CF5: fmulp   st(3), st
0x545CF7: fmulp   st(2), st
0x545CF9: faddp   st(1), st
0x545CFB: jmp     short loc_545D07
0x545CFD: fstp    st(2)
0x545CFF: fstp    st(1)
0x545D01: fstp    st(1)
0x545D03: fstp    st
0x545D05: fstp    st(1)
0x545D07: mov     ecx, [ebp+10h]
0x545D0A: fstp    [esp+0B4h+var_94]
0x545D0E: fld     [esp+0B4h+var_94]
0x545D12: push    4
0x545D14: fadd    [esp+0B8h+var_9C]
0x545D18: fstp    [esp+0B8h+var_9C]
0x545D1C: call    NiNode_GetNiPropertyByID
0x545D21: test    eax, eax
0x545D23: jz      short loc_545D90
0x545D25: mov     ecx, [ebp+10h]
0x545D28: push    4
0x545D2A: call    NiNode_GetNiPropertyByID
0x545D2F: mov     edx, [eax]
0x545D31: mov     ecx, eax
0x545D33: mov     eax, [edx+54h]
0x545D36: call    eax
0x545D38: xor     ecx, ecx
0x545D3A: cmp     eax, 0Bh
0x545D3D: setz    cl
0x545D40: mov     eax, ecx
0x545D42: test    eax, eax
0x545D44: jz      short loc_545D90
0x545D46: mov     ecx, [ebp+10h]
0x545D49: push    4
0x545D4B: call    NiNode_GetNiPropertyByID
0x545D50: test    eax, eax
0x545D52: jz      short loc_545D90
0x545D54: fld     dword ptr [ebx+78h]
0x545D57: fstp    [esp+0B4h+var_88]
0x545D5B: mov     edx, [esp+0B4h+var_88]
0x545D5F: fld     dword ptr [ebx+7Ch]
0x545D62: fstp    [esp+0B4h+var_84]
0x545D66: mov     ecx, [esp+0B4h+var_84]
0x545D6A: fld     dword ptr [ebx+80h]
0x545D70: mov     [eax+6Ch], edx
0x545D73: fstp    [esp+0B4h+var_80]
0x545D77: mov     edx, [esp+0B4h+var_80]
0x545D7B: fld     [esp+0B4h+var_98]
0x545D7F: mov     [eax+70h], ecx
0x545D82: fstp    [esp+0B4h+var_7C]
0x545D86: mov     ecx, [esp+0B4h+var_7C]
0x545D8A: mov     [eax+74h], edx
0x545D8D: mov     [eax+78h], ecx
0x545D90: mov     ecx, [ebp+14h]
0x545D93: push    4
0x545D95: call    NiNode_GetNiPropertyByID
0x545D9A: test    eax, eax
0x545D9C: jz      short loc_545E09
0x545D9E: mov     ecx, [ebp+14h]
0x545DA1: push    4
0x545DA3: call    NiNode_GetNiPropertyByID
0x545DA8: mov     edx, [eax]
0x545DAA: mov     ecx, eax
0x545DAC: mov     eax, [edx+54h]
0x545DAF: call    eax
0x545DB1: xor     ecx, ecx
0x545DB3: cmp     eax, 0Bh
0x545DB6: setz    cl
0x545DB9: mov     eax, ecx
0x545DBB: test    eax, eax
0x545DBD: jz      short loc_545E09
0x545DBF: mov     ecx, [ebp+14h]
0x545DC2: push    4
0x545DC4: call    NiNode_GetNiPropertyByID
0x545DC9: test    eax, eax
0x545DCB: jz      short loc_545E09
0x545DCD: fld     dword ptr [ebx+78h]
0x545DD0: fstp    [esp+0B4h+var_88]
0x545DD4: mov     edx, [esp+0B4h+var_88]
0x545DD8: fld     dword ptr [ebx+7Ch]
0x545DDB: fstp    [esp+0B4h+var_84]
0x545DDF: mov     ecx, [esp+0B4h+var_84]
0x545DE3: fld     dword ptr [ebx+80h]
0x545DE9: mov     [eax+6Ch], edx
0x545DEC: fstp    [esp+0B4h+var_80]
0x545DF0: mov     edx, [esp+0B4h+var_80]
0x545DF4: fld     [esp+0B4h+var_9C]
0x545DF8: mov     [eax+70h], ecx
0x545DFB: fstp    [esp+0B4h+var_7C]
0x545DFF: mov     ecx, [esp+0B4h+var_7C]
0x545E03: mov     [eax+74h], edx
0x545E06: mov     [eax+78h], ecx
0x545E09: fldz
0x545E0B: mov     ecx, 9
0x545E10: fstp    [esp+0B4h+var_98]
0x545E14: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x545E19: fld     [esp+0B4h+var_8C]
0x545E1D: lea     edi, [esp+0B4h+var_6C]
0x545E21: fld     dword ptr [esp+0B4h+var_A4]
0x545E25: rep movsd
0x545E27: fcom    st(1)
0x545E29: fnstsw  ax
0x545E2B: fld     dword ptr ds:0B366C8h
0x545E31: fld     [esp+0B4h+var_90]
0x545E35: test    ah, 41h
0x545E38: jnz     short loc_545E65
0x545E3A: fcom    st(2)
0x545E3C: fnstsw  ax
0x545E3E: test    ah, 41h
0x545E41: jnz     short loc_545E65
0x545E43: fld     st(3)
0x545E45: fsubp   st(3), st
0x545E47: fsubrp  st(3), st
0x545E49: fxch    st(1)
0x545E4B: fdivrp  st(2), st
0x545E4D: fxch    st(1)
0x545E4F: fstp    dword ptr [esp+0B4h+var_A4]
0x545E53: fld     dword ptr [esp+0B4h+var_A4]
0x545E57: fadd    st, st
0x545E59: fld1
0x545E5B: fsubrp  st(1), st
0x545E5D: fmul    st, st(1)
0x545E5F: fstp    [esp+0B4h+var_98]
0x545E63: jmp     short loc_545EE1
0x545E65: fcom    st(2)
0x545E67: fnstsw  ax
0x545E69: test    ah, 41h
0x545E6C: jp      short loc_545E9A
0x545E6E: fld     st
0x545E70: fsubp   st(3), st
0x545E72: fsubrp  st(3), st
0x545E74: fld     qword ptr ds:0A2F920h
0x545E7A: fsubrp  st(3), st
0x545E7C: fxch    st(1)
0x545E7E: fdivrp  st(2), st
0x545E80: fxch    st(1)
0x545E82: fstp    dword ptr [esp+0B4h+var_A4]
0x545E86: fld     dword ptr [esp+0B4h+var_A4]
0x545E8A: fadd    st, st
0x545E8C: fsub    qword ptr ds:0A2F928h
0x545E92: fmul    st, st(1)
0x545E94: fstp    [esp+0B4h+var_98]
0x545E98: jmp     short loc_545EE1
0x545E9A: fxch    st(2)
0x545E9C: fcom    st(3)
0x545E9E: fnstsw  ax
0x545EA0: test    ah, 41h
0x545EA3: jp      short loc_545EDB
0x545EA5: fld     st(2)
0x545EA7: fld     qword ptr ds:0A2F920h
0x545EAD: fld     st
0x545EAF: fsubrp  st(2), st
0x545EB1: fxch    st(1)
0x545EB3: faddp   st(2), st
0x545EB5: fxch    st(3)
0x545EB7: fsubrp  st(4), st
0x545EB9: fxch    st(2)
0x545EBB: fsubrp  st(3), st
0x545EBD: fxch    st(1)
0x545EBF: fdivrp  st(2), st
0x545EC1: fxch    st(1)
0x545EC3: fstp    dword ptr [esp+0B4h+var_A4]
0x545EC7: fld     dword ptr [esp+0B4h+var_A4]
0x545ECB: fadd    st, st
0x545ECD: fsub    qword ptr ds:0A2F928h
0x545ED3: fmul    st, st(1)
0x545ED5: fstp    [esp+0B4h+var_98]
0x545ED9: jmp     short loc_545EE1
0x545EDB: fstp    st(2)
0x545EDD: fstp    st(1)
0x545EDF: fstp    st(1)
0x545EE1: fld     [esp+0B4h+var_98]
0x545EE5: mov     eax, [ebp+4]
0x545EE8: fld     st
0x545EEA: add     eax, 54h ; 'T'
0x545EED: fchs
0x545EEF: fstp    dword ptr [esp+0B4h+var_78]
0x545EF3: mov     ecx, dword ptr [esp+0B4h+var_78]
0x545EF7: fld     dword ptr ds:0B366D0h
0x545EFD: mov     [eax], ecx
0x545EFF: fstp    dword ptr [esp+0B4h+var_78+4]
0x545F03: mov     edx, dword ptr [esp+0B4h+var_78+4]
0x545F07: mov     [eax+4], edx
0x545F0A: fxch    st(1)
0x545F0C: fabs
0x545F0E: fstp    dword ptr [esp+0B4h+var_A4]
0x545F12: fld     dword ptr [esp+0B4h+var_A4]
0x545F16: fld     st(1)
0x545F18: fabs
0x545F1A: fstp    dword ptr [esp+0B4h+var_A4]
0x545F1E: fsub    dword ptr [esp+0B4h+var_A4]
0x545F22: fstp    [esp+0B4h+var_70]
0x545F26: mov     esi, [esp+0B4h+var_70]
0x545F2A: mov     [eax+8], esi
0x545F2D: mov     eax, [ebp+0Ch]
0x545F30: fstp    [esp+0B4h+var_6C]
0x545F34: mov     [eax+54h], ecx
0x545F37: mov     [eax+58h], edx
0x545F3A: mov     [eax+5Ch], esi
0x545F3D: fld     dword ptr ds:0B366D0h
0x545F43: mov     edi, [ebp+1Ch]
0x545F46: fstp    [esp+0B4h+var_60]
0x545F4A: fld     dword ptr ds:0B366D8h
0x545F50: add     eax, 54h ; 'T'
0x545F53: add     edi, 30h ; '0'
0x545F56: fstp    [esp+0B4h+var_54]
0x545F5A: mov     ecx, 9
0x545F5F: lea     esi, [esp+0B4h+var_6C]
0x545F63: rep movsd
0x545F65: mov     eax, [ebp+1Ch]
0x545F68: mov     edx, [ebx+60h]
0x545F6B: mov     [eax+0E0h], edx
0x545F71: mov     ecx, [ebx+64h]
0x545F74: mov     [eax+0E4h], ecx
0x545F7A: mov     edx, [ebx+68h]
0x545F7D: mov     [eax+0E8h], edx
0x545F83: mov     esi, 1
0x545F88: add     [eax+0B8h], esi
0x545F8E: mov     eax, [ebp+1Ch]
0x545F91: mov     ecx, [ebx+6Ch]
0x545F94: mov     [eax+0ECh], ecx
0x545F9A: mov     edx, [ebx+70h]
0x545F9D: mov     [eax+0F0h], edx
0x545FA3: mov     ecx, [ebx+74h]
0x545FA6: add     [eax+0B8h], esi
0x545FAC: mov     [eax+0F4h], ecx
0x545FB2: mov     eax, [ebp+1Ch]
0x545FB5: mov     edx, [ebx+0B4h]
0x545FBB: mov     [eax+0F8h], edx
0x545FC1: mov     ecx, [ebx+0B8h]
0x545FC7: mov     [eax+0FCh], ecx
0x545FCD: mov     edx, [ebx+0BCh]
0x545FD3: add     [eax+0B8h], esi
0x545FD9: mov     [eax+100h], edx
0x545FDF: mov     eax, ds:0B333A0h
0x545FE4: test    eax, eax
0x545FE6: jz      loc_5460EF
0x545FEC: cmp     dword ptr [eax+0Ch], 0
0x545FF0: jz      loc_5460EF
0x545FF6: fld     dword ptr ds:0B366B8h
0x545FFC: fmul    [esp+0B4h+arg_4]
0x546003: fstp    [esp+0B4h+var_90]
0x546007: call    InitBSShaderAccumulator
0x54600C: test    eax, eax
0x54600E: jz      short loc_54602B
0x546010: fld     dword ptr [eax+0C4h]
0x546016: fstp    dword ptr [esp+0B4h+var_A4]
0x54601A: fld1
0x54601C: fcom    dword ptr [esp+0B4h+var_A4]
0x546020: fnstsw  ax
0x546022: test    ah, 41h
0x546025: jp      short loc_54602D
0x546027: mov     al, 1
0x546029: jmp     short loc_54602F
0x54602B: fld1
0x54602D: xor     al, al
0x54602F: test    al, al
0x546031: mov     byte ptr [ebp+24h], 0
0x546035: jz      short loc_546093
0x546037: fstp    st
0x546039: mov     ecx, offset unk_B366B0
0x54603E: fld     dword ptr [ebp+20h]
0x546041: fsub    [esp+0B4h+var_90]
0x546045: fstp    [esp+0B4h+var_A4]
0x546049: call    GameSetting_GetSafeFloatPointer
0x54604E: fld     dword ptr [eax]
0x546050: fcomp   [esp+0B4h+var_A4]
0x546054: fnstsw  ax
0x546056: test    ah, 41h
0x546059: mov     eax, [ebp+0Ch]
0x54605C: jnz     short loc_546069
0x54605E: fldz
0x546060: or      [eax+18h], si
0x546064: fstp    dword ptr [ebp+20h]
0x546067: jmp     short loc_5460DD
0x546069: and     word ptr [eax+18h], 0FFFEh
0x54606F: fld     dword ptr [ebp+20h]
0x546072: fsub    [esp+0B4h+var_90]
0x546076: mov     eax, [ebp+0Ch]
0x546079: fstp    dword ptr [esp+0B4h+var_A4]
0x54607D: fld     dword ptr [esp+0B4h+var_A4]
0x546081: fst     dword ptr [ebp+20h]
0x546084: fabs
0x546086: fstp    dword ptr [esp+0B4h+var_A4]
0x54608A: fld     dword ptr [esp+0B4h+var_A4]
0x54608E: fstp    dword ptr [eax+60h]
0x546091: jmp     short loc_5460DD
0x546093: fld     dword ptr [ebp+20h]
0x546096: fadd    [esp+0B4h+var_90]
0x54609A: fld1
0x54609C: fcomp   st(1)
0x54609E: fnstsw  ax
0x5460A0: test    ah, 41h
0x5460A3: jnp     short loc_5460B8
0x5460A5: fxch    st(1)
0x5460A7: fcom    dword ptr [ebp+20h]
0x5460AA: fnstsw  ax
0x5460AC: test    ah, 41h
0x5460AF: jnp     short loc_5460BC
0x5460B1: fstp    st
0x5460B3: fstp    dword ptr [ebp+20h]
0x5460B6: jmp     short loc_5460C1
0x5460B8: fstp    st
0x5460BA: jmp     short loc_5460BE
0x5460BC: fstp    st(1)
0x5460BE: fstp    dword ptr [ebp+20h]
0x5460C1: mov     eax, [ebp+0Ch]
0x5460C4: and     word ptr [eax+18h], 0FFFEh
0x5460CA: fld     dword ptr [ebp+20h]
0x5460CD: mov     ecx, [ebp+0Ch]
0x5460D0: fabs
0x5460D2: fstp    dword ptr [esp+0B4h+var_A4]
0x5460D6: fld     dword ptr [esp+0B4h+var_A4]
0x5460DA: fstp    dword ptr [ecx+60h]
0x5460DD: mov     eax, [ebp+0Ch]
0x5460E0: mov     dl, [eax+18h]
0x5460E3: shr     dl, 5
0x5460E6: test    dl, 1
0x5460E9: jnz     short loc_5460EF
0x5460EB: or      [eax+18h], si
0x5460EF: test    byte ptr [ebx+0FCh], 4
0x5460F6: mov     ebp, [ebp+8]
0x5460F9: jbe     short loc_54610C
0x5460FB: or      [ebp+18h], si
0x5460FF: pop     edi
0x546100: pop     esi
0x546101: pop     ebp
0x546102: pop     ebx
0x546103: add     esp, 0A4h
0x546109: retn    8
0x54610C: and     word ptr [ebp+18h], 0FFFEh
0x546112: pop     edi
0x546113: pop     esi
0x546114: pop     ebp
0x546115: pop     ebx
0x546116: add     esp, 0A4h
0x54611C: retn    8
