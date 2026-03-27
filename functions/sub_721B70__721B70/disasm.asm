0x721B70: sub     esp, 130h
0x721B76: push    ebx
0x721B77: mov     ebx, ecx
0x721B79: mov     eax, [ebx+1Ch]
0x721B7C: test    eax, eax
0x721B7E: push    esi
0x721B7F: push    edi
0x721B80: jz      short loc_721B95
0x721B82: lea     esi, [eax+64h]
0x721B85: mov     ecx, 0Dh
0x721B8A: lea     edi, [esp+13Ch+var_68]
0x721B91: rep movsd
0x721B93: jmp     short loc_721BA1
0x721B95: lea     ecx, [esp+13Ch+var_68]
0x721B9C: call    sub_718A50
0x721BA1: push    ebp
0x721BA2: lea     eax, [ebx+30h]
0x721BA5: push    eax
0x721BA6: lea     ecx, [esp+144h+var_34]
0x721BAD: push    ecx
0x721BAE: lea     ecx, [esp+148h+var_68]
0x721BB5: call    sub_53D7A0
0x721BBA: mov     esi, eax
0x721BBC: movzx   eax, byte ptr [ebx+0DCh]
0x721BC3: lea     ebp, [ebx+64h]
0x721BC6: mov     ecx, 0Dh
0x721BCB: mov     edi, ebp
0x721BCD: rep movsd
0x721BCF: and     eax, 7
0x721BD2: cmp     eax, 5; switch 6 cases
0x721BD5: mov     ecx, 9
0x721BDA: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x721BDF: lea     edi, [esp+140h+var_F8]
0x721BE3: rep movsd
0x721BE5: ja      def_721BEB
0x721BEB: jmp     ds:jpt_721BEB[eax*4]; switch jump
0x721BF2: cmp     eax, 3; jumptable 00721BEB cases 0,3
0x721BF5: jnz     short loc_721C29
0x721BF7: lea     edx, [esp+140h+var_114]
0x721BFB: push    edx
0x721BFC: lea     eax, [esp+144h+var_108]
0x721C00: push    eax
0x721C01: mov     eax, [esp+148h+arg_0]
0x721C08: lea     ecx, [esp+148h+var_130]
0x721C0C: push    ecx
0x721C0D: lea     edx, [ebx+88h]
0x721C13: push    edx
0x721C14: push    eax
0x721C15: mov     ecx, ebx
0x721C17: call    sub_7217C0
0x721C1C: test    al, al
0x721C1E: jz      def_721BEB
0x721C24: jmp     loc_721CDB
0x721C29: mov     eax, [esp+140h+arg_0]
0x721C30: fld     dword ptr [eax+64h]
0x721C33: fstp    [esp+140h+var_130]
0x721C37: fld     dword ptr [eax+70h]
0x721C3A: fstp    [esp+140h+var_12C]
0x721C3E: fld     dword ptr [eax+7Ch]
0x721C41: fstp    [esp+140h+var_128]
0x721C45: fld     [esp+140h+var_130]
0x721C49: fchs
0x721C4B: fstp    [esp+140h+var_108]
0x721C4F: mov     ecx, [esp+140h+var_108]
0x721C53: fld     [esp+140h+var_12C]
0x721C57: mov     [esp+140h+var_130], ecx
0x721C5B: fchs
0x721C5D: fstp    [esp+140h+var_104]
0x721C61: mov     edx, [esp+140h+var_104]
0x721C65: fld     [esp+140h+var_128]
0x721C69: mov     [esp+140h+var_12C], edx
0x721C6D: fchs
0x721C6F: fstp    [esp+140h+var_100]
0x721C73: mov     ecx, [esp+140h+var_100]
0x721C77: fld     dword ptr [eax+68h]
0x721C7A: mov     [esp+140h+var_128], ecx
0x721C7E: fstp    [esp+140h+var_114]
0x721C82: mov     edx, [esp+140h+var_114]
0x721C86: fld     dword ptr [eax+74h]
0x721C89: mov     [esp+140h+var_108], edx
0x721C8D: fstp    [esp+140h+var_110]
0x721C91: mov     ecx, [esp+140h+var_110]
0x721C95: fld     dword ptr [eax+80h]
0x721C9B: mov     [esp+140h+var_104], ecx
0x721C9F: fstp    [esp+140h+var_10C]
0x721CA3: mov     edx, [esp+140h+var_10C]
0x721CA7: fld     dword ptr [eax+6Ch]
0x721CAA: mov     [esp+140h+var_100], edx
0x721CAE: fstp    [esp+140h+var_120]
0x721CB2: fld     dword ptr [eax+78h]
0x721CB5: fstp    [esp+140h+var_11C]
0x721CB9: mov     ecx, [esp+140h+var_11C]
0x721CBD: fld     dword ptr [eax+84h]
0x721CC3: mov     eax, [esp+140h+var_120]
0x721CC7: fstp    [esp+140h+var_118]
0x721CCB: mov     edx, [esp+140h+var_118]
0x721CCF: mov     [esp+140h+var_114], eax
0x721CD3: mov     [esp+140h+var_110], ecx
0x721CD7: mov     [esp+140h+var_10C], edx
0x721CDB: push    ebp
0x721CDC: lea     eax, [esp+144h+var_130]
0x721CE0: push    eax
0x721CE1: lea     ecx, [esp+148h+var_8C]
0x721CE8: push    ecx
0x721CE9: call    sub_710250
0x721CEE: mov     edx, [eax]
0x721CF0: mov     [esp+14Ch+var_130], edx
0x721CF4: mov     ecx, [eax+4]
0x721CF7: mov     [esp+14Ch+var_12C], ecx
0x721CFB: mov     edx, [eax+8]
0x721CFE: push    ebp
0x721CFF: lea     eax, [esp+150h+var_108]
0x721D03: push    eax
0x721D04: lea     ecx, [esp+154h+var_C8]
0x721D0B: push    ecx
0x721D0C: mov     [esp+158h+var_128], edx
0x721D10: call    sub_710250
0x721D15: mov     edx, [eax]
0x721D17: mov     [esp+158h+var_108], edx
0x721D1B: mov     ecx, [eax+4]
0x721D1E: mov     [esp+158h+var_104], ecx
0x721D22: mov     edx, [eax+8]
0x721D25: push    ebp
0x721D26: lea     eax, [esp+15Ch+var_114]
0x721D2A: push    eax
0x721D2B: lea     ecx, [esp+160h+var_B0]
0x721D32: push    ecx
0x721D33: mov     [esp+164h+var_100], edx
0x721D37: call    sub_710250
0x721D3C: fld     [esp+164h+var_104]
0x721D40: mov     edx, [eax]
0x721D42: mov     [esp+164h+var_114], edx
0x721D46: mov     ecx, [eax+4]
0x721D49: mov     [esp+164h+var_110], ecx
0x721D4D: fld     [esp+164h+var_110]
0x721D51: mov     edx, [eax+8]
0x721D54: fmul    st, st
0x721D56: fld     st(1)
0x721D58: add     esp, 24h
0x721D5B: fmulp   st(2), st
0x721D5D: mov     [esp+140h+var_10C], edx
0x721D61: faddp   st(1), st
0x721D63: fstp    [esp+140h+var_124]
0x721D67: fld     [esp+140h+var_124]
0x721D6B: call    __CIsqrt
0x721D70: fstp    [esp+140h+var_124]
0x721D74: fld     [esp+140h+var_124]
0x721D78: fstp    [esp+140h+var_124]
0x721D7C: fld     dword ptr ds:0A372CCh
0x721D82: fld     [esp+140h+var_124]
0x721D86: fcom    st(1)
0x721D88: fnstsw  ax
0x721D8A: fstp    st(1)
0x721D8C: test    ah, 41h
0x721D8F: jnz     loc_721E35
0x721D95: fld1
0x721D97: fdivrp  st(1), st
0x721D99: fstp    [esp+140h+var_124]
0x721D9D: fld     [esp+140h+var_124]
0x721DA1: fld     st
0x721DA3: fld     [esp+140h+var_104]
0x721DA7: fld     st
0x721DA9: fmulp   st(2), st
0x721DAB: fxch    st(1)
0x721DAD: fstp    [esp+140h+var_FC]
0x721DB1: fld     [esp+140h+var_110]
0x721DB5: fld     st
0x721DB7: fchs
0x721DB9: fmulp   st(3), st
0x721DBB: fxch    st(2)
0x721DBD: fstp    [esp+140h+var_124]
0x721DC1: fld     [esp+140h+var_108]
0x721DC5: fld     st
0x721DC7: fld     [esp+140h+var_124]
0x721DCB: fld     st
0x721DCD: fmulp   st(2), st
0x721DCF: fld     [esp+140h+var_114]
0x721DD3: fld     [esp+140h+var_FC]
0x721DD7: fld     st
0x721DD9: fmulp   st(2), st
0x721DDB: fxch    st(3)
0x721DDD: faddp   st(1), st
0x721DDF: fstp    [esp+140h+var_F8]
0x721DE3: fld     st
0x721DE5: fmul    st, st(4)
0x721DE7: fld     st(2)
0x721DE9: fmul    st, st(6)
0x721DEB: faddp   st(1), st
0x721DED: fstp    [esp+140h+var_EC]
0x721DF1: fld     [esp+140h+var_100]
0x721DF5: fmul    st, st(1)
0x721DF7: fld     [esp+140h+var_10C]
0x721DFB: fmul    st, st(3)
0x721DFD: faddp   st(1), st
0x721DFF: fstp    [esp+140h+var_E0]
0x721E03: fld     st(1)
0x721E05: fmulp   st(3), st
0x721E07: fld     [esp+140h+var_114]
0x721E0B: fmul    st, st(1)
0x721E0D: fsubp   st(3), st
0x721E0F: fxch    st(2)
0x721E11: fstp    [esp+140h+var_F4]
0x721E15: fld     st
0x721E17: fmulp   st(3), st
0x721E19: fld     st(1)
0x721E1B: fmulp   st(4), st
0x721E1D: fxch    st(2)
0x721E1F: fsubrp  st(3), st
0x721E21: fxch    st(2)
0x721E23: fstp    [esp+140h+var_E8]
0x721E27: fmul    [esp+140h+var_100]
0x721E2B: fld     [esp+140h+var_10C]
0x721E2F: fmulp   st(2), st
0x721E31: fsubrp  st(1), st
0x721E33: jmp     short loc_721E9F
0x721E35: fstp    st
0x721E37: fld     [esp+140h+var_114]
0x721E3B: fchs
0x721E3D: fstp    [esp+140h+var_120]
0x721E41: fld     [esp+140h+var_110]
0x721E45: fchs
0x721E47: fstp    [esp+140h+var_11C]
0x721E4B: fld     [esp+140h+var_10C]
0x721E4F: fchs
0x721E51: fstp    [esp+140h+var_118]
0x721E55: fld     [esp+140h+var_120]
0x721E59: fstp    [esp+140h+var_F8]
0x721E5D: fld     [esp+140h+var_11C]
0x721E61: fstp    [esp+140h+var_EC]
0x721E65: fld     [esp+140h+var_118]
0x721E69: fstp    [esp+140h+var_E0]
0x721E6D: fld     [esp+140h+var_108]
0x721E71: fchs
0x721E73: fstp    [esp+140h+var_120]
0x721E77: fld     [esp+140h+var_104]
0x721E7B: fchs
0x721E7D: fstp    [esp+140h+var_11C]
0x721E81: fld     [esp+140h+var_100]
0x721E85: fchs
0x721E87: fstp    [esp+140h+var_118]
0x721E8B: fld     [esp+140h+var_120]
0x721E8F: fstp    [esp+140h+var_F4]
0x721E93: fld     [esp+140h+var_11C]
0x721E97: fstp    [esp+140h+var_E8]
0x721E9B: fld     [esp+140h+var_118]
0x721E9F: fstp    [esp+140h+var_DC]
0x721EA3: fld     [esp+140h+var_130]
0x721EA7: fstp    [esp+140h+var_F0]
0x721EAB: fld     [esp+140h+var_12C]
0x721EAF: fstp    [esp+140h+var_E4]
0x721EB3: fld     [esp+140h+var_128]
0x721EB7: fstp    [esp+140h+var_D8]
0x721EBB: jmp     def_721BEB
0x721EC0: mov     eax, [esp+140h+arg_0]; jumptable 00721BEB case 1
0x721EC7: fld     dword ptr [eax+88h]
0x721ECD: push    ecx
0x721ECE: fsub    dword ptr [ebx+88h]
0x721ED4: lea     ecx, [esp+144h+var_120]
0x721ED8: lea     edx, [esp+144h+var_80]
0x721EDF: fstp    [esp+144h+var_120]
0x721EE3: fld     dword ptr [eax+8Ch]
0x721EE9: fsub    dword ptr [ebx+8Ch]
0x721EEF: fstp    [esp+144h+var_11C]
0x721EF3: fld     dword ptr [eax+90h]
0x721EF9: lea     eax, [esp+144h+var_130]
0x721EFD: fsub    dword ptr [ebx+90h]
0x721F03: fstp    [esp+144h+var_118]
0x721F07: fld     dword ptr [ebx+94h]
0x721F0D: fstp    [esp+144h+var_144]; float
0x721F10: push    eax; int
0x721F11: push    ebp
0x721F12: push    ecx
0x721F13: push    edx
0x721F14: call    sub_710250
0x721F19: add     esp, 0Ch
0x721F1C: mov     ecx, eax
0x721F1E: call    sub_4BF9B0
0x721F23: fld     [esp+140h+var_128]
0x721F27: fld     [esp+140h+var_130]
0x721F2B: fmul    st, st
0x721F2D: fld     st(1)
0x721F2F: fmulp   st(2), st
0x721F31: faddp   st(1), st
0x721F33: fstp    [esp+140h+var_FC]
0x721F37: fld     [esp+140h+var_FC]
0x721F3B: call    __CIsqrt
0x721F40: fstp    [esp+140h+var_FC]
0x721F44: fld     [esp+140h+var_FC]
0x721F48: fstp    [esp+140h+var_124]
0x721F4C: fld     dword ptr ds:0A7F7D8h
0x721F52: fld     [esp+140h+var_124]
0x721F56: fcom    st(1)
0x721F58: fnstsw  ax
0x721F5A: fstp    st(1)
0x721F5C: test    ah, 5
0x721F5F: jnp     loc_722290
0x721F65: fld1
0x721F67: fdivrp  st(1), st
0x721F69: fstp    [esp+140h+var_124]
0x721F6D: fld     [esp+140h+var_130]
0x721F71: fld     [esp+140h+var_124]
0x721F75: fld     st
0x721F77: fmulp   st(2), st
0x721F79: fxch    st(1)
0x721F7B: fstp    [esp+140h+var_130]
0x721F7F: fmul    [esp+140h+var_128]
0x721F83: fstp    [esp+140h+var_128]
0x721F87: fld     [esp+140h+var_128]
0x721F8B: fst     [esp+140h+var_F8]
0x721F8F: fldz
0x721F91: fst     [esp+140h+var_EC]
0x721F95: fld     [esp+140h+var_130]
0x721F99: fld     st
0x721F9B: fchs
0x721F9D: fstp    [esp+140h+var_E0]
0x721FA1: fxch    st(1)
0x721FA3: fst     [esp+140h+var_F4]
0x721FA7: fld1
0x721FA9: fstp    [esp+140h+var_E8]
0x721FAD: fst     [esp+140h+var_DC]
0x721FB1: fstp    [esp+140h+var_E4]
0x721FB5: fstp    [esp+140h+var_F0]
0x721FB9: fstp    [esp+140h+var_D8]
0x721FBD: jmp     def_721BEB
0x721FC2: cmp     eax, 4; jumptable 00721BEB cases 2,4
0x721FC5: jnz     short loc_721FF9
0x721FC7: lea     eax, [esp+140h+var_130]
0x721FCB: push    eax
0x721FCC: lea     ecx, [esp+144h+var_108]
0x721FD0: push    ecx
0x721FD1: mov     ecx, [esp+148h+arg_0]
0x721FD8: lea     edx, [esp+148h+var_114]
0x721FDC: push    edx
0x721FDD: lea     eax, [ebx+88h]
0x721FE3: push    eax
0x721FE4: push    ecx
0x721FE5: mov     ecx, ebx
0x721FE7: call    sub_7217C0
0x721FEC: test    al, al
0x721FEE: jz      def_721BEB
0x721FF4: jmp     loc_7220AB
0x721FF9: mov     eax, [esp+140h+arg_0]
0x722000: fld     dword ptr [eax+64h]
0x722003: fstp    [esp+140h+var_120]
0x722007: fld     dword ptr [eax+70h]
0x72200A: fstp    [esp+140h+var_11C]
0x72200E: fld     dword ptr [eax+7Ch]
0x722011: fstp    [esp+140h+var_118]
0x722015: fld     [esp+140h+var_120]
0x722019: fchs
0x72201B: fstp    [esp+140h+var_130]
0x72201F: mov     edx, [esp+140h+var_130]
0x722023: fld     [esp+140h+var_11C]
0x722027: mov     [esp+140h+var_114], edx
0x72202B: fchs
0x72202D: fstp    [esp+140h+var_12C]
0x722031: mov     ecx, [esp+140h+var_12C]
0x722035: fld     [esp+140h+var_118]
0x722039: mov     [esp+140h+var_110], ecx
0x72203D: fchs
0x72203F: fstp    [esp+140h+var_128]
0x722043: mov     edx, [esp+140h+var_128]
0x722047: fld     dword ptr [eax+68h]
0x72204A: mov     [esp+140h+var_10C], edx
0x72204E: fstp    [esp+140h+var_120]
0x722052: mov     ecx, [esp+140h+var_120]
0x722056: fld     dword ptr [eax+74h]
0x722059: mov     [esp+140h+var_108], ecx
0x72205D: fstp    [esp+140h+var_11C]
0x722061: mov     edx, [esp+140h+var_11C]
0x722065: fld     dword ptr [eax+80h]
0x72206B: mov     [esp+140h+var_104], edx
0x72206F: fstp    [esp+140h+var_118]
0x722073: mov     ecx, [esp+140h+var_118]
0x722077: fld     dword ptr [eax+6Ch]
0x72207A: mov     [esp+140h+var_100], ecx
0x72207E: fstp    [esp+140h+var_120]
0x722082: mov     edx, [esp+140h+var_120]
0x722086: fld     dword ptr [eax+78h]
0x722089: mov     [esp+140h+var_130], edx
0x72208D: fstp    [esp+140h+var_11C]
0x722091: fld     dword ptr [eax+84h]
0x722097: mov     eax, [esp+140h+var_11C]
0x72209B: fstp    [esp+140h+var_118]
0x72209F: mov     ecx, [esp+140h+var_118]
0x7220A3: mov     [esp+140h+var_12C], eax
0x7220A7: mov     [esp+140h+var_128], ecx
0x7220AB: push    ebp
0x7220AC: lea     edx, [esp+144h+var_114]
0x7220B0: push    edx
0x7220B1: lea     eax, [esp+148h+var_98]
0x7220B8: push    eax
0x7220B9: call    sub_710250
0x7220BE: mov     ecx, [eax]
0x7220C0: mov     [esp+14Ch+var_114], ecx
0x7220C4: mov     edx, [eax+4]
0x7220C7: mov     [esp+14Ch+var_110], edx
0x7220CB: mov     eax, [eax+8]
0x7220CE: push    ebp
0x7220CF: lea     ecx, [esp+150h+var_108]
0x7220D3: push    ecx
0x7220D4: lea     edx, [esp+154h+var_74]
0x7220DB: push    edx
0x7220DC: mov     [esp+158h+var_10C], eax
0x7220E0: call    sub_710250
0x7220E5: mov     ecx, [eax]
0x7220E7: mov     [esp+158h+var_108], ecx
0x7220EB: mov     edx, [eax+4]
0x7220EE: mov     [esp+158h+var_104], edx
0x7220F2: mov     eax, [eax+8]
0x7220F5: push    ebp
0x7220F6: lea     ecx, [esp+15Ch+var_130]
0x7220FA: push    ecx
0x7220FB: lea     edx, [esp+160h+var_BC]
0x722102: push    edx
0x722103: mov     [esp+164h+var_100], eax
0x722107: call    sub_710250
0x72210C: mov     ecx, [eax]
0x72210E: mov     [esp+164h+var_130], ecx
0x722112: fld     [esp+164h+var_130]
0x722116: mov     edx, [eax+4]
0x722119: mov     [esp+164h+var_12C], edx
0x72211D: mov     eax, [eax+8]
0x722120: fstp    [esp+164h+var_F8]
0x722124: fld     [esp+164h+var_12C]
0x722128: mov     [esp+164h+var_128], eax
0x72212C: fstp    [esp+164h+var_EC]
0x722130: add     esp, 24h
0x722133: fld     [esp+140h+var_128]
0x722137: fstp    [esp+140h+var_E0]
0x72213B: fld     [esp+140h+var_108]
0x72213F: fstp    [esp+140h+var_F4]
0x722143: fld     [esp+140h+var_104]
0x722147: fstp    [esp+140h+var_E8]
0x72214B: fld     [esp+140h+var_100]
0x72214F: fstp    [esp+140h+var_DC]
0x722153: fld     [esp+140h+var_114]
0x722157: fstp    [esp+140h+var_F0]
0x72215B: fld     [esp+140h+var_110]
0x72215F: fstp    [esp+140h+var_E4]
0x722163: fld     [esp+140h+var_10C]
0x722167: fstp    [esp+140h+var_D8]
0x72216B: jmp     def_721BEB
0x722170: fld1; jumptable 00721BEB case 5
0x722172: mov     eax, [esp+140h+arg_0]
0x722179: fst     dword ptr [ebp+0]
0x72217C: push    ecx
0x72217D: fldz
0x72217F: lea     ecx, [esp+144h+var_130]
0x722183: fst     dword ptr [ebp+0Ch]
0x722186: lea     edx, [esp+144h+var_D4]
0x72218A: fst     dword ptr [ebp+18h]
0x72218D: fst     dword ptr [ebp+4]
0x722190: fst     dword ptr [ebp+1Ch]
0x722193: fxch    st(1)
0x722195: fst     dword ptr [ebp+10h]
0x722198: fxch    st(1)
0x72219A: fst     dword ptr [ebp+8]
0x72219D: fstp    dword ptr [ebp+14h]
0x7221A0: fstp    dword ptr [ebp+20h]
0x7221A3: fld     dword ptr [eax+88h]
0x7221A9: fsub    dword ptr [ebx+88h]
0x7221AF: fstp    [esp+144h+var_D4]
0x7221B3: fld     dword ptr [eax+8Ch]
0x7221B9: fsub    dword ptr [ebx+8Ch]
0x7221BF: fstp    [esp+144h+var_D0]
0x7221C3: fld     dword ptr [eax+90h]
0x7221C9: lea     eax, [esp+144h+var_A4]
0x7221D0: fsub    dword ptr [ebx+90h]
0x7221D6: fstp    [esp+144h+var_CC]
0x7221DA: fld     dword ptr [ebx+94h]
0x7221E0: fstp    [esp+144h+var_144]; float
0x7221E3: push    ecx; int
0x7221E4: push    ebp
0x7221E5: push    edx
0x7221E6: push    eax
0x7221E7: call    sub_710250
0x7221EC: add     esp, 0Ch
0x7221EF: mov     ecx, eax
0x7221F1: call    sub_4BF9B0
0x7221F6: fld     [esp+140h+var_12C]
0x7221FA: fld     [esp+140h+var_130]
0x7221FE: fmul    st, st
0x722200: fld     st(1)
0x722202: fmulp   st(2), st
0x722204: faddp   st(1), st
0x722206: fstp    [esp+140h+var_FC]
0x72220A: fld     [esp+140h+var_FC]
0x72220E: call    __CIsqrt
0x722213: fstp    [esp+140h+var_FC]
0x722217: fld     [esp+140h+var_FC]
0x72221B: fstp    [esp+140h+var_124]
0x72221F: fld     dword ptr ds:0A7F7D8h
0x722225: fld     [esp+140h+var_124]
0x722229: fcom    st(1)
0x72222B: fnstsw  ax
0x72222D: fstp    st(1)
0x72222F: test    ah, 5
0x722232: jnp     short loc_722290
0x722234: fld1
0x722236: fdivrp  st(1), st
0x722238: fstp    [esp+140h+var_124]
0x72223C: fld     [esp+140h+var_130]
0x722240: fld     [esp+140h+var_124]
0x722244: fld     st
0x722246: fmulp   st(2), st
0x722248: fxch    st(1)
0x72224A: fstp    [esp+140h+var_130]
0x72224E: fmul    [esp+140h+var_12C]
0x722252: fstp    [esp+140h+var_12C]
0x722256: fld     [esp+140h+var_12C]
0x72225A: fld     st
0x72225C: fchs
0x72225E: fstp    [esp+140h+var_F8]
0x722262: fld     [esp+140h+var_130]
0x722266: fst     [esp+140h+var_EC]
0x72226A: fldz
0x72226C: fst     [esp+140h+var_E0]
0x722270: fst     [esp+140h+var_F4]
0x722274: fst     [esp+140h+var_E8]
0x722278: fld1
0x72227A: fstp    [esp+140h+var_DC]
0x72227E: fxch    st(1)
0x722280: fstp    [esp+140h+var_F0]
0x722284: fxch    st(1)
0x722286: fstp    [esp+140h+var_E4]
0x72228A: fstp    [esp+140h+var_D8]
0x72228E: jmp     short def_721BEB
0x722290: fstp    st
