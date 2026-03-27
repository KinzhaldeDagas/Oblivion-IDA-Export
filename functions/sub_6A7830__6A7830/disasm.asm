0x6A7830: push    ebp
0x6A7831: mov     ebp, esp
0x6A7833: and     esp, 0FFFFFFF0h
0x6A7836: sub     esp, 58h
0x6A7839: mov     eax, ds:0B30AACh
0x6A783E: xor     eax, esp
0x6A7840: mov     [esp+58h+var_4], eax
0x6A7844: push    esi
0x6A7845: push    edi
0x6A7846: mov     edi, ecx
0x6A7848: mov     ecx, ds:0B333C4h
0x6A784E: mov     eax, [ecx+574h]
0x6A7854: test    eax, eax
0x6A7856: jz      loc_6A7990
0x6A785C: mov     eax, [eax+8]
0x6A785F: test    eax, eax
0x6A7861: jz      short loc_6A7868
0x6A7863: mov     esi, [eax+18h]
0x6A7866: jmp     short loc_6A786A
0x6A7868: xor     esi, esi
0x6A786A: call    sub_66A670
0x6A786F: test    esi, esi
0x6A7871: jz      loc_6A7990
0x6A7877: cmp     byte ptr [edi+4Ch], 0
0x6A787B: mov     esi, [esi+0Ch]
0x6A787E: jz      loc_6A7984
0x6A7884: mov     eax, ds:0B333C4h
0x6A7889: mov     edx, [eax+24h]
0x6A788C: mov     ecx, [eax+20h]
0x6A788F: mov     eax, [eax+28h]
0x6A7892: sub     esp, 0Ch
0x6A7895: mov     [esp+6Ch+var_4C], edx
0x6A7899: fld     [esp+6Ch+var_4C]
0x6A789D: fstp    [esp+6Ch+var_64]; float
0x6A78A1: mov     [esp+6Ch+var_50], ecx
0x6A78A5: fld     [esp+6Ch+var_50]
0x6A78A9: mov     [esp+6Ch+var_48], eax
0x6A78AD: fstp    [esp+6Ch+var_68]; float
0x6A78B1: lea     ecx, [esp+6Ch+var_44]
0x6A78B5: fld     [esp+6Ch+var_48]
0x6A78B9: fstp    [esp+6Ch+var_6C]; float
0x6A78BC: call    sub_7117C0
0x6A78C1: test    esi, esi
0x6A78C3: fld     dword ptr [edi+44h]
0x6A78C6: fadd    dword ptr ds:0B38048h
0x6A78CC: fstp    [esp+60h+var_54]
0x6A78D0: fld     [esp+60h+var_40]
0x6A78D4: fld     [esp+60h+var_54]
0x6A78D8: fld     st
0x6A78DA: fmulp   st(2), st
0x6A78DC: fxch    st(1)
0x6A78DE: fstp    [esp+60h+var_50]
0x6A78E2: fld     [esp+60h+var_34]
0x6A78E6: fmul    st, st(1)
0x6A78E8: fstp    [esp+60h+var_4C]
0x6A78EC: fmul    [esp+60h+var_28]
0x6A78F0: fstp    [esp+60h+var_48]
0x6A78F4: fld     [esp+60h+var_50]
0x6A78F8: fld     qword ptr ds:0A39088h
0x6A78FE: fmul    st(1), st
0x6A7900: fxch    st(1)
0x6A7902: fstp    dword ptr [esp+60h+var_20]
0x6A7906: fld     [esp+60h+var_4C]
0x6A790A: fmul    st, st(1)
0x6A790C: fstp    dword ptr [esp+60h+var_20+4]
0x6A7910: fmul    [esp+60h+var_48]
0x6A7914: fstp    dword ptr [esp+60h+var_20+8]
0x6A7918: jz      short loc_6A792B
0x6A791A: mov     eax, [esi+8]
0x6A791D: test    eax, eax
0x6A791F: jz      short loc_6A792B
0x6A7921: mov     ecx, [eax+50h]
0x6A7924: call    sub_89DA90
0x6A7929: jmp     short loc_6A792D
0x6A792B: fldz
0x6A792D: test    esi, esi
0x6A792F: fstp    [esp+60h+var_54]
0x6A7933: movss   xmm1, [esp+60h+var_54]
0x6A7939: xorps   xmm0, xmm0
0x6A793C: movss   xmm0, xmm1
0x6A7940: movaps  xmm1, xmm0
0x6A7943: shufps  xmm1, xmm0, 0
0x6A7947: movaps  xmm0, [esp+60h+var_20]
0x6A794C: mulps   xmm1, xmm0
0x6A794F: movaps  [esp+60h+var_20], xmm1
0x6A7954: jz      short loc_6A795B
0x6A7956: mov     esi, [esi+8]
0x6A7959: jmp     short loc_6A795D
0x6A795B: xor     esi, esi
0x6A795D: mov     ecx, esi
0x6A795F: call    sub_8A6410
0x6A7964: mov     ecx, [esi+50h]
0x6A7967: mov     edx, [ecx]
0x6A7969: mov     edx, [edx+5Ch]
0x6A796C: lea     eax, [esp+60h+var_20]
0x6A7970: push    eax
0x6A7971: call    edx
0x6A7973: pop     edi
0x6A7974: pop     esi
0x6A7975: mov     ecx, [esp+58h+var_4]
0x6A7979: xor     ecx, esp
0x6A797B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A7980: mov     esp, ebp
0x6A7982: pop     ebp
0x6A7983: retn
0x6A7984: push    offset Vector3_InitValue?
0x6A7989: mov     ecx, esi
0x6A798B: call    sub_4D9960
0x6A7990: mov     ecx, [esp+60h+var_4]
0x6A7994: pop     edi
0x6A7995: pop     esi
0x6A7996: xor     ecx, esp
0x6A7998: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A799D: mov     esp, ebp
0x6A799F: pop     ebp
0x6A79A0: retn
