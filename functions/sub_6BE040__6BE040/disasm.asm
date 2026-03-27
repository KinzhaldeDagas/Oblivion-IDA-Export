0x6BE040: sub     esp, 20h
0x6BE043: push    ebx
0x6BE044: mov     ebx, [esp+24h+arg_10]
0x6BE048: cmp     ebx, 1
0x6BE04B: jz      loc_6BE252
0x6BE051: fld     [esp+24h+arg_4]
0x6BE055: fld     dword ptr ds:0A7DEB4h
0x6BE05B: fchs
0x6BE05D: fucomp  st(1)
0x6BE05F: fnstsw  ax
0x6BE061: test    ah, 44h
0x6BE064: jnp     loc_6BE250
0x6BE06A: mov     eax, [esp+24h+arg_14]
0x6BE06E: push    ebp
0x6BE06F: mov     ebp, [esp+28h+arg_8]
0x6BE073: push    esi
0x6BE074: movzx   esi, [esp+2Ch+arg_18]
0x6BE079: push    edi
0x6BE07A: mov     edi, [eax]
0x6BE07C: mov     ecx, esi
0x6BE07E: imul    ecx, edi
0x6BE081: add     ebx, 0FFFFFFFFh
0x6BE084: mov     [esp+30h+var_14], ebx
0x6BE088: fld     dword ptr [ecx+ebp]
0x6BE08B: fstp    [esp+30h+var_20]
0x6BE08F: fld     [esp+30h+var_20]
0x6BE093: fcomp   st(1)
0x6BE095: fnstsw  ax
0x6BE097: test    ah, 41h
0x6BE09A: jnz     short loc_6BE0A5
0x6BE09C: fld     dword ptr [ebp+0]
0x6BE09F: xor     edi, edi
0x6BE0A1: fstp    [esp+30h+var_20]
0x6BE0A5: lea     ecx, [edi+1]
0x6BE0A8: mov     edx, ebx
0x6BE0AA: sub     edx, ecx
0x6BE0AC: add     edx, 1
0x6BE0AF: cmp     edx, 4
0x6BE0B2: jl      loc_6BE1B8
0x6BE0B8: lea     eax, [ecx+3]
0x6BE0BB: imul    eax, esi
0x6BE0BE: add     eax, ebp
0x6BE0C0: mov     [esp+30h+var_18], eax
0x6BE0C4: mov     ebx, esi
0x6BE0C6: lea     eax, [ecx+2]
0x6BE0C9: imul    ebx, ecx
0x6BE0CC: imul    eax, esi
0x6BE0CF: add     eax, ebp
0x6BE0D1: add     ebx, ebp
0x6BE0D3: lea     ebp, [ecx+1]
0x6BE0D6: imul    ebp, esi
0x6BE0D9: add     ebp, [esp+30h+arg_8]
0x6BE0DD: lea     edx, ds:0[esi*4]
0x6BE0E4: mov     [esp+30h+var_1C], eax
0x6BE0E8: jmp     short loc_6BE0EC
0x6BE0EA: fstp    st
0x6BE0EC: fld     dword ptr [ebx]
0x6BE0EE: fstp    [esp+30h+arg_10]
0x6BE0F2: fld     [esp+30h+arg_10]
0x6BE0F6: fcom    st(1)
0x6BE0F8: fnstsw  ax
0x6BE0FA: test    ah, 1
0x6BE0FD: jz      loc_6BE1D4
0x6BE103: fstp    [esp+30h+var_20]
0x6BE107: fld     dword ptr [ebp+0]
0x6BE10A: fstp    [esp+30h+arg_10]
0x6BE10E: fld     [esp+30h+arg_10]
0x6BE112: fcom    st(1)
0x6BE114: fnstsw  ax
0x6BE116: test    ah, 1
0x6BE119: jz      loc_6BE1BE
0x6BE11F: mov     eax, [esp+30h+var_1C]
0x6BE123: fstp    [esp+30h+var_20]
0x6BE127: fld     dword ptr [eax]
0x6BE129: fstp    [esp+30h+arg_10]
0x6BE12D: fld     [esp+30h+arg_10]
0x6BE131: fcom    st(1)
0x6BE133: fnstsw  ax
0x6BE135: test    ah, 1
0x6BE138: jz      loc_6BE1C6
0x6BE13E: mov     eax, [esp+30h+var_18]
0x6BE142: fstp    [esp+30h+var_20]
0x6BE146: fld     dword ptr [eax]
0x6BE148: fstp    [esp+30h+arg_10]
0x6BE14C: fld     [esp+30h+arg_10]
0x6BE150: fcom    st(1)
0x6BE152: fnstsw  ax
0x6BE154: test    ah, 1
0x6BE157: jz      short loc_6BE1CE
0x6BE159: mov     eax, [esp+30h+var_14]
0x6BE15D: fst     [esp+30h+var_20]
0x6BE161: add     [esp+30h+var_1C], edx
0x6BE165: add     [esp+30h+var_18], edx
0x6BE169: add     ecx, 4
0x6BE16C: add     eax, 0FFFFFFFDh
0x6BE16F: add     edi, 4
0x6BE172: add     ebx, edx
0x6BE174: add     ebp, edx
0x6BE176: cmp     ecx, eax
0x6BE178: jbe     loc_6BE0EA
0x6BE17E: mov     ebx, [esp+30h+var_14]
0x6BE182: mov     ebp, [esp+30h+arg_8]
0x6BE186: cmp     ecx, ebx
0x6BE188: ja      short loc_6BE1D8
0x6BE18A: mov     edx, esi
0x6BE18C: imul    edx, ecx
0x6BE18F: add     edx, ebp
0x6BE191: fstp    st
0x6BE193: fld     dword ptr [edx]
0x6BE195: fstp    [esp+30h+arg_10]
0x6BE199: fld     [esp+30h+arg_10]
0x6BE19D: fcom    st(1)
0x6BE19F: fnstsw  ax
0x6BE1A1: test    ah, 1
0x6BE1A4: jz      short loc_6BE1D8
0x6BE1A6: add     ecx, 1
0x6BE1A9: fst     [esp+30h+var_20]
0x6BE1AD: add     edi, 1
0x6BE1B0: add     edx, esi
0x6BE1B2: cmp     ecx, ebx
0x6BE1B4: jbe     short loc_6BE191
0x6BE1B6: jmp     short loc_6BE1D8
0x6BE1B8: fld     [esp+30h+arg_10]
0x6BE1BC: jmp     short loc_6BE186
0x6BE1BE: add     ecx, 1
0x6BE1C1: add     edi, 1
0x6BE1C4: jmp     short loc_6BE1D4
0x6BE1C6: add     ecx, 2
0x6BE1C9: add     edi, 2
0x6BE1CC: jmp     short loc_6BE1D4
0x6BE1CE: add     ecx, 3
0x6BE1D1: add     edi, 3
0x6BE1D4: mov     ebp, [esp+30h+arg_8]
0x6BE1D8: fldz
0x6BE1DA: mov     eax, esi
0x6BE1DC: imul    esi, edi
0x6BE1DF: fst     [esp+30h+var_10]
0x6BE1E3: fst     [esp+30h+var_C]
0x6BE1E7: fst     [esp+30h+var_8]
0x6BE1EB: fstp    [esp+30h+var_4]
0x6BE1EF: fld     [esp+30h+var_20]
0x6BE1F3: fsub    st(2), st
0x6BE1F5: fsubp   st(1), st
0x6BE1F7: imul    eax, ecx
0x6BE1FA: fdivp   st(1), st
0x6BE1FC: lea     edx, [esp+30h+var_10]
0x6BE200: push    edx
0x6BE201: add     eax, ebp
0x6BE203: push    eax
0x6BE204: add     esi, ebp
0x6BE206: push    esi
0x6BE207: push    ecx
0x6BE208: mov     ecx, [esp+40h+arg_C]
0x6BE20C: mov     edx, ds:0B3D040h[ecx*4]
0x6BE213: fstp    [esp+40h+arg_10]
0x6BE217: fld     [esp+40h+arg_10]
0x6BE21B: fstp    [esp+40h+var_40]
0x6BE21E: call    edx
0x6BE220: mov     eax, [esp+40h+arg_14]
0x6BE224: mov     ecx, [esp+40h+var_10]
0x6BE228: mov     edx, [esp+40h+var_C]
0x6BE22C: add     esp, 10h
0x6BE22F: mov     [eax], edi
0x6BE231: mov     eax, [esp+30h+arg_0]
0x6BE235: pop     edi
0x6BE236: mov     [eax], ecx
0x6BE238: mov     ecx, [esp+2Ch+var_8]
0x6BE23C: mov     [eax+4], edx
0x6BE23F: mov     edx, [esp+2Ch+var_4]
0x6BE243: pop     esi
0x6BE244: pop     ebp
0x6BE245: mov     [eax+8], ecx
0x6BE248: mov     [eax+0Ch], edx
0x6BE24B: pop     ebx
0x6BE24C: add     esp, 20h
0x6BE24F: retn
0x6BE250: fstp    st
0x6BE252: mov     ecx, [esp+24h+arg_8]
0x6BE256: mov     eax, [esp+24h+arg_0]
0x6BE25A: mov     edx, [ecx+4]
0x6BE25D: mov     [eax], edx
0x6BE25F: mov     edx, [ecx+8]
0x6BE262: mov     [eax+4], edx
0x6BE265: mov     edx, [ecx+0Ch]
0x6BE268: mov     ecx, [ecx+10h]
0x6BE26B: mov     [eax+8], edx
0x6BE26E: mov     [eax+0Ch], ecx
0x6BE271: pop     ebx
0x6BE272: add     esp, 20h
0x6BE275: retn
