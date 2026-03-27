0x787DC0: sub     esp, 24h
0x787DC3: push    ebx
0x787DC4: fld     dword ptr ds:0A30634h
0x787DCA: mov     bl, ds:0B4297Ch
0x787DD0: fst     [esp+28h+var_24]
0x787DD4: push    ebp
0x787DD5: fstp    [esp+2Ch+var_1C]
0x787DD9: push    esi
0x787DDA: mov     esi, ecx
0x787DDC: mov     eax, [esi]
0x787DDE: movzx   eax, word ptr [eax+0C0h]
0x787DE5: xor     ecx, ecx
0x787DE7: test    bl, bl
0x787DE9: setnz   cl
0x787DEC: push    edi
0x787DED: mov     [esp+34h+var_14], eax
0x787DF1: lea     edx, [esp+34h+var_20]
0x787DF5: push    edx; int
0x787DF6: lea     edx, [esp+38h+var_24]
0x787DFA: add     cx, ax
0x787DFD: or      eax, 0FFFFFFFFh
0x787E00: mov     [esp+38h+var_18], eax
0x787E04: mov     [esp+38h+var_20], eax
0x787E08: lea     eax, [esp+38h+var_18]
0x787E0C: push    eax; int
0x787E0D: movzx   eax, byte ptr [esi+44h]
0x787E11: movzx   ebp, cx
0x787E14: lea     ecx, [esp+3Ch+var_1C]
0x787E18: push    ecx; int
0x787E19: push    edx; int
0x787E1A: mov     [esp+44h+var_10], eax
0x787E1E: sub     esp, 10h
0x787E21: fild    [esp+54h+var_10]
0x787E25: fstp    [esp+54h+var_48]; float
0x787E29: fld     dword ptr [esi+20h]
0x787E2C: fstp    [esp+54h+var_4C]; float
0x787E30: fld     dword ptr [esi+28h]
0x787E33: fstp    [esp+54h+var_50]; float
0x787E37: fld     dword ptr [esi+1Ch]
0x787E3A: fstp    [esp+54h+var_54]; float
0x787E3D: push    ebp; int
0x787E3E: fld     [esp+58h+arg_4]
0x787E42: push    ecx
0x787E43: fstp    [esp+5Ch+var_5C]; float
0x787E46: call    sub_787220
0x787E4B: fld     [esp+5Ch+var_24]
0x787E4F: mov     edi, [esp+5Ch+arg_0]
0x787E53: add     esp, 28h
0x787E56: test    bl, bl
0x787E58: mov     ebx, [esp+34h+var_18]
0x787E5C: jz      short loc_787EBC
0x787E5E: fld     dword ptr ds:0A30634h
0x787E64: movzx   eax, bp
0x787E67: movsx   ecx, bx
0x787E6A: fst     dword ptr [edi+0FCh]
0x787E70: add     eax, 0FFFFFFFFh
0x787E73: cmp     ecx, eax
0x787E75: jnz     short loc_787E81
0x787E77: fxch    st(1)
0x787E79: fst     dword ptr [edi+0FCh]
0x787E7F: jmp     short loc_787E96
0x787E81: movsx   edx, word ptr [esp+34h+var_20]
0x787E86: cmp     edx, eax
0x787E88: jnz     short loc_787E94
0x787E8A: fld     [esp+34h+var_1C]
0x787E8E: fstp    dword ptr [edi+0FCh]
0x787E94: fxch    st(1)
0x787E96: fxch    st(1)
0x787E98: fcomp   dword ptr [edi+0FCh]
0x787E9E: fnstsw  ax
0x787EA0: test    ah, 44h
0x787EA3: jnp     short loc_787EB2
0x787EA5: mov     eax, 1
0x787EAA: mov     [edi+0F0h], al
0x787EB0: jmp     short loc_787EC3
0x787EB2: xor     eax, eax
0x787EB4: mov     [edi+0F0h], al
0x787EBA: jmp     short loc_787EC3
0x787EBC: mov     byte ptr [edi+0F0h], 0
0x787EC3: fldz
0x787EC5: fcomp   [esp+34h+arg_4]
0x787EC9: fnstsw  ax
0x787ECB: test    ah, 41h
0x787ECE: jz      loc_78810D
0x787ED4: cmp     byte ptr ds:0B4297Ch, 0
0x787EDB: jz      short loc_787F09
0x787EDD: movzx   eax, bp
0x787EE0: movsx   ecx, bx
0x787EE3: lea     edx, [eax-2]
0x787EE6: cmp     ecx, edx
0x787EE8: jz      short loc_787F17
0x787EEA: add     eax, 0FFFFFFFFh
0x787EED: fstp    st
0x787EEF: cmp     ecx, eax
0x787EF1: jnz     short loc_787EFB
0x787EF3: fld     dword ptr ds:0A40098h
0x787EF9: jmp     short loc_787F17
0x787EFB: movzx   eax, byte ptr [esi+44h]
0x787EFF: mov     [esp+34h+arg_0], eax
0x787F03: fild    [esp+34h+arg_0]
0x787F07: jmp     short loc_787F17
0x787F09: movzx   ecx, byte ptr [esi+44h]
0x787F0D: fstp    st
0x787F0F: mov     [esp+34h+arg_0], ecx
0x787F13: fild    [esp+34h+arg_0]
0x787F17: fstp    dword ptr [edi+38h]
0x787F1A: mov     eax, ds:0B2B6DCh
0x787F1F: mov     edx, ds:0B2B6D8h
0x787F25: mov     ecx, ds:0B2B6E0h
0x787F2B: mov     [esp+34h+var_8], eax
0x787F2F: fld     [esp+34h+var_8]
0x787F33: mov     [esp+34h+var_C], edx
0x787F37: fld     [esp+34h+var_C]
0x787F3B: mov     [esp+34h+var_4], ecx
0x787F3F: call    sub_98598A
0x787F44: fstp    [esp+34h+arg_0]
0x787F48: fld     [esp+34h+arg_0]
0x787F4C: fmul    qword ptr ds:0A8BA48h
0x787F52: fstp    [esp+34h+arg_4]
0x787F56: fld     [esp+34h+var_4]
0x787F5A: call    __CIasin
0x787F5F: fstp    [esp+34h+arg_0]
0x787F63: fld     [esp+34h+arg_0]
0x787F67: mov     eax, [esi+18h]
0x787F6A: cmp     eax, 1
0x787F6D: fmul    qword ptr ds:0A8BA50h
0x787F73: fstp    [esp+34h+arg_0]
0x787F77: jnz     loc_788056
0x787F7D: fld     dword ptr [esi+24h]
0x787F80: mov     ecx, [esi+8]
0x787F83: sub     esp, 0Ch
0x787F86: fstp    [esp+40h+var_38]
0x787F8A: lea     ebp, [edi+78h]
0x787F8D: fld     [esp+40h+arg_0]
0x787F91: fstp    [esp+40h+var_3C]
0x787F95: fld     [esp+40h+arg_4]
0x787F99: fstp    [esp+40h+var_40]
0x787F9C: push    0
0x787F9E: push    ebp
0x787F9F: call    sub_798630
0x787FA4: cmp     bx, 0FFFFh
0x787FA8: jz      short loc_787FBD
0x787FAA: movzx   eax, word ptr [esp+34h+var_14]
0x787FAF: movsx   edx, bx
0x787FB2: cmp     edx, eax
0x787FB4: jge     short loc_787FBD
0x787FB6: mov     eax, 1
0x787FBB: jmp     short loc_787FBF
0x787FBD: xor     eax, eax
0x787FBF: test    al, al
0x787FC1: mov     [ebp+0], al
0x787FC4: jz      short loc_787FF0
0x787FC6: fld     dword ptr [esi+24h]
0x787FC9: mov     ecx, [esi+8]
0x787FCC: sub     esp, 0Ch
0x787FCF: fstp    [esp+40h+var_38]
0x787FD3: fld     [esp+40h+arg_0]
0x787FD7: fstp    [esp+40h+var_3C]
0x787FDB: fld     [esp+40h+arg_4]
0x787FDF: fstp    [esp+40h+var_40]
0x787FE2: push    ebx
0x787FE3: push    ebp
0x787FE4: call    sub_798630
0x787FE9: fld     [esp+34h+var_24]
0x787FED: fstp    dword ptr [edi+7Ch]
0x787FF0: mov     edx, [esp+34h+var_20]
0x787FF4: cmp     dx, 0FFFFh
0x787FF8: jz      short loc_78800D
0x787FFA: movzx   eax, word ptr [esp+34h+var_14]
0x787FFF: movsx   ecx, dx
0x788002: cmp     ecx, eax
0x788004: jge     short loc_78800D
0x788006: mov     ecx, 1
0x78800B: jmp     short loc_78800F
0x78800D: xor     ecx, ecx
0x78800F: test    cl, cl
0x788011: lea     eax, [edi+0B4h]
0x788017: mov     [eax], cl
0x788019: jz      loc_78810F
0x78801F: fld     dword ptr [esi+24h]
0x788022: mov     ecx, [esi+8]
0x788025: sub     esp, 0Ch
0x788028: fstp    [esp+40h+var_38]
0x78802C: fld     [esp+40h+arg_0]
0x788030: fstp    [esp+40h+var_3C]
0x788034: fld     [esp+40h+arg_4]
0x788038: fstp    [esp+40h+var_40]
0x78803B: push    edx
0x78803C: push    eax
0x78803D: call    sub_798630
0x788042: fld     [esp+34h+var_1C]
0x788046: fstp    dword ptr [edi+0B8h]
0x78804C: pop     edi
0x78804D: pop     esi
0x78804E: pop     ebp
0x78804F: pop     ebx
0x788050: add     esp, 24h
0x788053: retn    8
0x788056: cmp     eax, 3
0x788059: jnz     short loc_7880A5
0x78805B: fld     dword ptr [esi+24h]
0x78805E: mov     ecx, [esi+8]
0x788061: sub     esp, 0Ch
0x788064: fstp    [esp+40h+var_38]
0x788068: lea     ebx, [edi+78h]
0x78806B: fld     [esp+40h+arg_0]
0x78806F: fstp    [esp+40h+var_3C]
0x788073: fld     [esp+40h+arg_4]
0x788077: fstp    [esp+40h+var_40]
0x78807A: push    0
0x78807C: push    ebx
0x78807D: call    sub_798630
0x788082: mov     byte ptr [ebx], 1
0x788085: movzx   ecx, byte ptr [esi+44h]
0x788089: mov     [esp+34h+arg_0], ecx
0x78808D: mov     byte ptr [edi+0B4h], 0
0x788094: fild    [esp+34h+arg_0]
0x788098: fstp    dword ptr [edi+7Ch]
0x78809B: pop     edi
0x78809C: pop     esi
0x78809D: pop     ebp
0x78809E: pop     ebx
0x78809F: add     esp, 24h
0x7880A2: retn    8
0x7880A5: fld     dword ptr ds:0A30634h
0x7880AB: push    ecx
0x7880AC: mov     ecx, esi
0x7880AE: fstp    [esp+38h+var_38]; float
0x7880B1: call    sub_787CD0
0x7880B6: mov     edx, [esi]
0x7880B8: movzx   eax, ax
0x7880BB: cmp     ax, [edx+0C0h]
0x7880C2: jnb     short loc_7880FC
0x7880C4: fld     dword ptr [esi+24h]
0x7880C7: mov     ecx, [esi+8]
0x7880CA: sub     esp, 0Ch
0x7880CD: fstp    [esp+40h+var_38]
0x7880D1: lea     ebx, [edi+78h]
0x7880D4: fld     [esp+40h+arg_0]
0x7880D8: fstp    [esp+40h+var_3C]
0x7880DC: fld     [esp+40h+arg_4]
0x7880E0: fstp    [esp+40h+var_40]
0x7880E3: push    eax
0x7880E4: push    ebx
0x7880E5: call    sub_798630
0x7880EA: mov     byte ptr [ebx], 1
0x7880ED: movzx   eax, byte ptr [esi+44h]
0x7880F1: mov     [esp+34h+arg_0], eax
0x7880F5: fild    [esp+34h+arg_0]
0x7880F9: fstp    dword ptr [edi+7Ch]
0x7880FC: mov     byte ptr [edi+0B4h], 0
0x788103: pop     edi
0x788104: pop     esi
0x788105: pop     ebp
0x788106: pop     ebx
0x788107: add     esp, 24h
0x78810A: retn    8
0x78810D: fstp    st
0x78810F: pop     edi
0x788110: pop     esi
0x788111: pop     ebp
0x788112: pop     ebx
0x788113: add     esp, 24h
0x788116: retn    8
