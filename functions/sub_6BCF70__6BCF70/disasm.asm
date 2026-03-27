0x6BCF70: fld     [esp+arg_4]
0x6BCF74: sub     esp, 30h
0x6BCF77: push    ebx
0x6BCF78: mov     ebx, [esp+34h+arg_10]
0x6BCF7C: cmp     ebx, 1
0x6BCF7F: jz      short loc_6BCF96
0x6BCF81: fld     st
0x6BCF83: fld     dword ptr ds:0A7DEB4h
0x6BCF89: fchs
0x6BCF8B: fucomp  st(1)
0x6BCF8D: fnstsw  ax
0x6BCF8F: test    ah, 44h
0x6BCF92: jp      short loc_6BCFC3
0x6BCF94: fstp    st
0x6BCF96: cmp     [esp+34h+arg_C], 4
0x6BCF9B: jz      short loc_6BCFCC
0x6BCF9D: mov     ecx, [esp+34h+arg_8]
0x6BCFA1: fstp    st
0x6BCFA3: mov     eax, [esp+34h+arg_0]
0x6BCFA7: mov     edx, [ecx+4]
0x6BCFAA: mov     [eax], edx
0x6BCFAC: mov     edx, [ecx+8]
0x6BCFAF: mov     [eax+4], edx
0x6BCFB2: mov     edx, [ecx+0Ch]
0x6BCFB5: mov     ecx, [ecx+10h]
0x6BCFB8: mov     [eax+8], edx
0x6BCFBB: mov     [eax+0Ch], ecx
0x6BCFBE: pop     ebx
0x6BCFBF: add     esp, 30h
0x6BCFC2: retn
0x6BCFC3: cmp     [esp+34h+arg_C], 4
0x6BCFC8: jnz     short loc_6BD010
0x6BCFCA: fstp    st
0x6BCFCC: mov     eax, [esp+34h+arg_8]
0x6BCFD0: lea     edx, [esp+34h+var_20]
0x6BCFD4: push    edx
0x6BCFD5: push    0
0x6BCFD7: push    eax
0x6BCFD8: push    ecx
0x6BCFD9: mov     ecx, [esp+44h+arg_C]
0x6BCFDD: fstp    [esp+44h+var_44]
0x6BCFE0: mov     edx, ds:0B3D028h[ecx*4]
0x6BCFE7: call    edx
0x6BCFE9: mov     eax, [esp+44h+arg_0]
0x6BCFED: mov     ecx, [esp+44h+var_20]
0x6BCFF1: mov     edx, [esp+44h+var_1C]
0x6BCFF5: mov     [eax], ecx
0x6BCFF7: mov     ecx, [esp+44h+var_18]
0x6BCFFB: mov     [eax+4], edx
0x6BCFFE: mov     edx, [esp+44h+var_14]
0x6BD002: add     esp, 10h
0x6BD005: mov     [eax+8], ecx
0x6BD008: mov     [eax+0Ch], edx
0x6BD00B: pop     ebx
0x6BD00C: add     esp, 30h
0x6BD00F: retn
0x6BD010: movzx   edx, [esp+34h+arg_18]
0x6BD015: fstp    st(1)
0x6BD017: mov     eax, [esp+34h+arg_14]
0x6BD01B: push    ebp
0x6BD01C: mov     ebp, [esp+38h+arg_8]
0x6BD020: push    esi
0x6BD021: push    edi
0x6BD022: mov     edi, [eax]
0x6BD024: mov     ecx, edx
0x6BD026: imul    ecx, edi
0x6BD029: add     ebx, 0FFFFFFFFh
0x6BD02C: mov     [esp+40h+var_24], ebx
0x6BD030: fld     dword ptr [ecx+ebp]
0x6BD033: fstp    [esp+40h+var_30]
0x6BD037: fld     [esp+40h+var_30]
0x6BD03B: fcomp   st(1)
0x6BD03D: fnstsw  ax
0x6BD03F: test    ah, 41h
0x6BD042: jnz     short loc_6BD04D
0x6BD044: fld     dword ptr [ebp+0]
0x6BD047: xor     edi, edi
0x6BD049: fstp    [esp+40h+var_30]
0x6BD04D: lea     ecx, [edi+1]
0x6BD050: mov     eax, ebx
0x6BD052: sub     eax, ecx
0x6BD054: add     eax, 1
0x6BD057: cmp     eax, 4
0x6BD05A: jl      loc_6BD160
0x6BD060: lea     eax, [ecx+3]
0x6BD063: imul    eax, edx
0x6BD066: add     eax, ebp
0x6BD068: mov     [esp+40h+var_28], eax
0x6BD06C: mov     ebx, edx
0x6BD06E: lea     eax, [ecx+2]
0x6BD071: imul    ebx, ecx
0x6BD074: imul    eax, edx
0x6BD077: add     eax, ebp
0x6BD079: add     ebx, ebp
0x6BD07B: lea     ebp, [ecx+1]
0x6BD07E: imul    ebp, edx
0x6BD081: add     ebp, [esp+40h+arg_8]
0x6BD085: lea     esi, ds:0[edx*4]
0x6BD08C: mov     [esp+40h+var_2C], eax
0x6BD090: jmp     short loc_6BD094
0x6BD092: fstp    st
0x6BD094: fld     dword ptr [ebx]
0x6BD096: fstp    [esp+40h+arg_10]
0x6BD09A: fld     [esp+40h+arg_10]
0x6BD09E: fcom    st(1)
0x6BD0A0: fnstsw  ax
0x6BD0A2: test    ah, 1
0x6BD0A5: jz      loc_6BD17C
0x6BD0AB: fstp    [esp+40h+var_30]
0x6BD0AF: fld     dword ptr [ebp+0]
0x6BD0B2: fstp    [esp+40h+arg_10]
0x6BD0B6: fld     [esp+40h+arg_10]
0x6BD0BA: fcom    st(1)
0x6BD0BC: fnstsw  ax
0x6BD0BE: test    ah, 1
0x6BD0C1: jz      loc_6BD166
0x6BD0C7: mov     eax, [esp+40h+var_2C]
0x6BD0CB: fstp    [esp+40h+var_30]
0x6BD0CF: fld     dword ptr [eax]
0x6BD0D1: fstp    [esp+40h+arg_10]
0x6BD0D5: fld     [esp+40h+arg_10]
0x6BD0D9: fcom    st(1)
0x6BD0DB: fnstsw  ax
0x6BD0DD: test    ah, 1
0x6BD0E0: jz      loc_6BD16E
0x6BD0E6: mov     eax, [esp+40h+var_28]
0x6BD0EA: fstp    [esp+40h+var_30]
0x6BD0EE: fld     dword ptr [eax]
0x6BD0F0: fstp    [esp+40h+arg_10]
0x6BD0F4: fld     [esp+40h+arg_10]
0x6BD0F8: fcom    st(1)
0x6BD0FA: fnstsw  ax
0x6BD0FC: test    ah, 1
0x6BD0FF: jz      short loc_6BD176
0x6BD101: mov     eax, [esp+40h+var_24]
0x6BD105: fst     [esp+40h+var_30]
0x6BD109: add     [esp+40h+var_2C], esi
0x6BD10D: add     [esp+40h+var_28], esi
0x6BD111: add     ecx, 4
0x6BD114: add     eax, 0FFFFFFFDh
0x6BD117: add     edi, 4
0x6BD11A: add     ebx, esi
0x6BD11C: add     ebp, esi
0x6BD11E: cmp     ecx, eax
0x6BD120: jbe     loc_6BD092
0x6BD126: mov     ebx, [esp+40h+var_24]
0x6BD12A: mov     ebp, [esp+40h+arg_8]
0x6BD12E: cmp     ecx, ebx
0x6BD130: ja      short loc_6BD180
0x6BD132: mov     esi, edx
0x6BD134: imul    esi, ecx
0x6BD137: add     esi, ebp
0x6BD139: fstp    st
0x6BD13B: fld     dword ptr [esi]
0x6BD13D: fstp    [esp+40h+arg_10]
0x6BD141: fld     [esp+40h+arg_10]
0x6BD145: fcom    st(1)
0x6BD147: fnstsw  ax
0x6BD149: test    ah, 1
0x6BD14C: jz      short loc_6BD180
0x6BD14E: add     ecx, 1
0x6BD151: fst     [esp+40h+var_30]
0x6BD155: add     edi, 1
0x6BD158: add     esi, edx
0x6BD15A: cmp     ecx, ebx
0x6BD15C: jbe     short loc_6BD139
0x6BD15E: jmp     short loc_6BD180
0x6BD160: fld     [esp+40h+arg_10]
0x6BD164: jmp     short loc_6BD12E
0x6BD166: add     ecx, 1
0x6BD169: add     edi, 1
0x6BD16C: jmp     short loc_6BD17C
0x6BD16E: add     ecx, 2
0x6BD171: add     edi, 2
0x6BD174: jmp     short loc_6BD17C
0x6BD176: add     ecx, 3
0x6BD179: add     edi, 3
0x6BD17C: mov     ebp, [esp+40h+arg_8]
0x6BD180: fld     [esp+40h+var_30]
0x6BD184: lea     eax, [esp+40h+var_10]
0x6BD188: fsub    st(2), st
0x6BD18A: push    eax
0x6BD18B: fsubp   st(1), st
0x6BD18D: mov     eax, edx
0x6BD18F: imul    edx, edi
0x6BD192: fdivp   st(1), st
0x6BD194: add     edx, ebp
0x6BD196: imul    eax, ecx
0x6BD199: fstp    [esp+44h+arg_10]
0x6BD19D: fld     [esp+44h+arg_10]
0x6BD1A1: add     eax, ebp
0x6BD1A3: push    eax
0x6BD1A4: push    edx
0x6BD1A5: push    ecx
0x6BD1A6: mov     ecx, [esp+50h+arg_C]
0x6BD1AA: mov     edx, ds:0B3D028h[ecx*4]
0x6BD1B1: fstp    [esp+50h+var_50]
0x6BD1B4: call    edx
0x6BD1B6: mov     eax, [esp+50h+arg_14]
0x6BD1BA: mov     ecx, [esp+50h+var_10]
0x6BD1BE: mov     edx, [esp+50h+var_C]
0x6BD1C2: add     esp, 10h
0x6BD1C5: mov     [eax], edi
0x6BD1C7: mov     eax, [esp+40h+arg_0]
0x6BD1CB: pop     edi
0x6BD1CC: mov     [eax], ecx
0x6BD1CE: mov     ecx, [esp+3Ch+var_8]
0x6BD1D2: mov     [eax+4], edx
0x6BD1D5: mov     edx, [esp+3Ch+var_4]
0x6BD1D9: pop     esi
0x6BD1DA: pop     ebp
0x6BD1DB: mov     [eax+8], ecx
0x6BD1DE: mov     [eax+0Ch], edx
0x6BD1E1: pop     ebx
0x6BD1E2: add     esp, 30h
0x6BD1E5: retn
