0x9607B0: sub     esp, 88h
0x9607B6: push    esi
0x9607B7: mov     esi, [esp+8Ch+arg_C]
0x9607BE: mov     eax, [esi]
0x9607C0: mov     [esp+8Ch+var_48], eax
0x9607C4: mov     eax, [esp+8Ch+arg_10]
0x9607CB: fld     dword ptr [eax]
0x9607CD: mov     ecx, [esi+4]
0x9607D0: fsub    dword ptr [esi]
0x9607D2: mov     [esp+8Ch+var_44], ecx
0x9607D6: mov     edx, [esi+8]
0x9607D9: mov     [esp+8Ch+var_40], edx
0x9607DD: fstp    [esp+8Ch+var_6C]
0x9607E1: push    edi
0x9607E2: fld     dword ptr [eax+4]
0x9607E5: fsub    dword ptr [esi+4]
0x9607E8: fstp    [esp+90h+var_68]
0x9607EC: mov     ecx, [esp+90h+var_68]
0x9607F0: fld     dword ptr [eax+8]
0x9607F3: mov     eax, [esp+90h+var_6C]
0x9607F7: fsub    dword ptr [esi+8]
0x9607FA: mov     [esp+90h+var_3C], eax
0x9607FE: mov     eax, [esp+90h+arg_14]
0x960805: mov     [esp+90h+var_38], ecx
0x960809: fstp    [esp+90h+var_64]
0x96080D: mov     edx, [esp+90h+var_64]
0x960811: fld     dword ptr [eax]
0x960813: mov     [esp+90h+var_34], edx
0x960817: fsub    dword ptr [esi]
0x960819: fstp    [esp+90h+var_84]
0x96081D: fld     dword ptr [eax+4]
0x960820: fsub    dword ptr [esi+4]
0x960823: fstp    [esp+90h+var_80]
0x960827: mov     ecx, [esp+90h+var_80]
0x96082B: fld     dword ptr [eax+8]
0x96082E: mov     eax, [esp+90h+var_84]
0x960832: fsub    dword ptr [esi+8]
0x960835: mov     [esp+90h+var_30], eax
0x960839: mov     eax, [esp+90h+arg_8]
0x960840: mov     [esp+90h+var_2C], ecx
0x960844: fstp    [esp+90h+var_7C]
0x960848: mov     ecx, [esp+90h+arg_18]
0x96084F: fld     dword ptr [eax]
0x960851: mov     edx, [esp+90h+var_7C]
0x960855: fsub    dword ptr [ecx]
0x960857: mov     [esp+90h+var_28], edx
0x96085B: fstp    [esp+90h+var_54]
0x96085F: fld     dword ptr [eax+4]
0x960862: fsub    dword ptr [ecx+4]
0x960865: fstp    [esp+90h+var_50]
0x960869: fld     dword ptr [eax+8]
0x96086C: fsub    dword ptr [ecx+8]
0x96086F: fstp    [esp+90h+var_4C]
0x960873: fld     [esp+90h+var_7C]
0x960877: fld     st
0x960879: fld     [esp+90h+var_68]
0x96087D: fld     st
0x96087F: fmulp   st(2), st
0x960881: fld     [esp+90h+var_80]
0x960885: fld     st
0x960887: fld     [esp+90h+var_64]
0x96088B: fld     st
0x96088D: fmulp   st(2), st
0x96088F: fxch    st(4)
0x960891: fsubrp  st(1), st
0x960893: fstp    [esp+90h+var_78]
0x960897: fld     [esp+90h+var_84]
0x96089B: fld     st
0x96089D: fmulp   st(4), st
0x96089F: fld     [esp+90h+var_6C]
0x9608A3: fld     st
0x9608A5: fmulp   st(6), st
0x9608A7: fxch    st(4)
0x9608A9: fsubrp  st(5), st
0x9608AB: fxch    st(4)
0x9608AD: fstp    [esp+90h+var_74]
0x9608B1: fmulp   st(2), st
0x9608B3: fmulp   st(2), st
0x9608B5: fsubrp  st(1), st
0x9608B7: fstp    [esp+90h+var_70]
0x9608BB: fld     [esp+90h+var_78]
0x9608BF: fchs
0x9608C1: mov     edi, [esp+90h+arg_4]
0x9608C8: fstp    [esp+90h+var_84]
0x9608CC: fld     [esp+90h+var_74]
0x9608D0: fchs
0x9608D2: fstp    [esp+90h+var_80]
0x9608D6: fld     [esp+90h+var_70]
0x9608DA: fchs
0x9608DC: fstp    [esp+90h+var_7C]
0x9608E0: fld     dword ptr [edi+8]
0x9608E3: fld     [esp+90h+var_80]
0x9608E7: fld     st
0x9608E9: fmulp   st(2), st
0x9608EB: fld     dword ptr [edi+4]
0x9608EE: fld     [esp+90h+var_84]
0x9608F2: fld     st
0x9608F4: fmulp   st(2), st
0x9608F6: fxch    st(3)
0x9608F8: faddp   st(1), st
0x9608FA: fld     dword ptr [edi+0Ch]
0x9608FD: fld     [esp+90h+var_7C]
0x960901: fld     st
0x960903: fmulp   st(2), st
0x960905: fxch    st(2)
0x960907: faddp   st(1), st
0x960909: fstp    [esp+90h+var_60]
0x96090D: fld     dword ptr [edi+1Ch]
0x960910: fld     dword ptr [edi+38h]
0x960913: fcompp
0x960915: fnstsw  ax
0x960917: test    ah, 5
0x96091A: jp      short loc_960921
0x96091C: fld     dword ptr [edi+1Ch]
0x96091F: jmp     short loc_960924
0x960921: fld     dword ptr [edi+38h]
0x960924: fstp    [esp+90h+var_58]
0x960928: fld     dword ptr [esi]
0x96092A: fmul    st, st(3)
0x96092C: fld     st(2)
0x96092E: fmul    dword ptr [esi+4]
0x960931: faddp   st(1), st
0x960933: fld     dword ptr [esi+8]
0x960936: fmul    st, st(2)
0x960938: faddp   st(1), st
0x96093A: fstp    [esp+90h+var_5C]
0x96093E: fld     [esp+90h+var_60]
0x960942: fsub    [esp+90h+var_5C]
0x960946: fstp    [esp+90h+var_88]
0x96094A: fld     [esp+90h+var_88]
0x96094E: fmul    st, st
0x960950: fld     st(3)
0x960952: fmulp   st(4), st
0x960954: fld     st(2)
0x960956: fmulp   st(3), st
0x960958: fxch    st(3)
0x96095A: faddp   st(2), st
0x96095C: fmul    st, st
0x96095E: faddp   st(1), st
0x960960: fstp    [esp+90h+var_88]
0x960964: fld     [esp+90h+var_88]
0x960968: fld     [esp+90h+var_58]
0x96096C: fld     st
0x96096E: fmulp   st(2), st
0x960970: fmulp   st(1), st
0x960972: fstp    [esp+90h+var_88]
0x960976: fld     [esp+90h+var_88]
0x96097A: fcompp
0x96097C: fnstsw  ax
0x96097E: fld     [esp+90h+arg_0]
0x960985: test    ah, 5
0x960988: fld     [esp+90h+var_4C]
0x96098C: jp      loc_960B8C
0x960992: fstp    st(1)
0x960994: lea     ecx, [esp+90h+var_84]
0x960998: fstp    st
0x96099A: call    sub_43F350
0x96099F: fstp    st
0x9609A1: fld     [esp+90h+var_60]
0x9609A5: fld     [esp+90h+var_5C]
0x9609A9: fcompp
0x9609AB: fnstsw  ax
0x9609AD: fld     [esp+90h+var_80]
0x9609B1: test    ah, 5
0x9609B4: fld     st
0x9609B6: fmul    [esp+90h+var_50]
0x9609BA: fld     [esp+90h+var_84]
0x9609BE: fld     st
0x9609C0: fmul    [esp+90h+var_54]
0x9609C4: faddp   st(2), st
0x9609C6: fld     [esp+90h+var_7C]
0x9609CA: fld     st
0x9609CC: fld     [esp+90h+var_4C]
0x9609D0: fld     st
0x9609D2: fmulp   st(2), st
0x9609D4: fxch    st(4)
0x9609D6: faddp   st(1), st
0x9609D8: jp      short loc_960A3F
0x9609DA: fstp    [esp+90h+var_88]
0x9609DE: fld     [esp+90h+var_88]
0x9609E2: fcomp   dword ptr ds:0A2FAA8h
0x9609E8: fnstsw  ax
0x9609EA: test    ah, 1
0x9609ED: jnz     short loc_960A02
0x9609EF: fstp    st(3)
0x9609F1: pop     edi
0x9609F2: fstp    st
0x9609F4: xor     al, al
0x9609F6: fstp    st(1)
0x9609F8: pop     esi
0x9609F9: fstp    st
0x9609FB: add     esp, 88h
0x960A01: retn
0x960A02: fld     st(1)
0x960A04: fld     [esp+90h+var_58]
0x960A08: fld     st
0x960A0A: fmulp   st(2), st
0x960A0C: fxch    st(1)
0x960A0E: fstp    [esp+90h+var_78]
0x960A12: fld     st(4)
0x960A14: fmul    st, st(1)
0x960A16: fstp    [esp+90h+var_74]
0x960A1A: fmul    st, st(1)
0x960A1C: fstp    [esp+90h+var_70]
0x960A20: fld     dword ptr [edi+4]
0x960A23: fsub    [esp+90h+var_78]
0x960A27: fstp    [esp+90h+var_6C]
0x960A2B: fld     dword ptr [edi+8]
0x960A2E: fsub    [esp+90h+var_74]
0x960A32: fstp    [esp+90h+var_68]
0x960A36: fld     dword ptr [edi+0Ch]
0x960A39: fsub    [esp+90h+var_70]
0x960A3D: jmp     short loc_960A8F
0x960A3F: fstp    [esp+90h+var_88]
0x960A43: fld     [esp+90h+var_88]
0x960A47: fcomp   dword ptr ds:0A2FAA8h
0x960A4D: fnstsw  ax
0x960A4F: test    ah, 41h
0x960A52: jnp     short loc_9609EF
0x960A54: fld     st(1)
0x960A56: fld     [esp+90h+var_58]
0x960A5A: fld     st
0x960A5C: fmulp   st(2), st
0x960A5E: fxch    st(1)
0x960A60: fstp    [esp+90h+var_78]
0x960A64: fld     st(4)
0x960A66: fmul    st, st(1)
0x960A68: fstp    [esp+90h+var_74]
0x960A6C: fmul    st, st(1)
0x960A6E: fstp    [esp+90h+var_70]
0x960A72: fld     dword ptr [edi+4]
0x960A75: fadd    [esp+90h+var_78]
0x960A79: fstp    [esp+90h+var_6C]
0x960A7D: fld     dword ptr [edi+8]
0x960A80: fadd    [esp+90h+var_74]
0x960A84: fstp    [esp+90h+var_68]
0x960A88: fld     dword ptr [edi+0Ch]
0x960A8B: fadd    [esp+90h+var_70]
0x960A8F: fstp    [esp+90h+var_64]
0x960A93: mov     ecx, [esp+90h+var_68]
0x960A97: fld     dword ptr [esi]
0x960A99: mov     eax, [esp+90h+var_6C]
0x960A9D: fmul    st, st(2)
0x960A9F: mov     edx, [esp+90h+var_64]
0x960AA3: fld     st(4)
0x960AA5: mov     [esp+90h+var_80], ecx
0x960AA9: fmul    dword ptr [esi+4]
0x960AAC: mov     [esp+90h+var_84], eax
0x960AB0: mov     [esp+90h+var_7C], edx
0x960AB4: faddp   st(1), st
0x960AB6: fld     dword ptr [esi+8]
0x960AB9: fmul    st, st(2)
0x960ABB: faddp   st(1), st
0x960ABD: fstp    [esp+90h+var_5C]
0x960AC1: fld     [esp+90h+var_5C]
0x960AC5: fadd    qword ptr ds:0A30E40h
0x960ACB: fld     [esp+90h+var_80]
0x960ACF: fmul    st, st(5)
0x960AD1: fld     [esp+90h+var_84]
0x960AD5: fmul    st, st(4)
0x960AD7: faddp   st(1), st
0x960AD9: fld     [esp+90h+var_7C]
0x960ADD: fmul    st, st(3)
0x960ADF: faddp   st(1), st
0x960AE1: fstp    [esp+90h+var_88]
0x960AE5: fld     [esp+90h+var_88]
0x960AE9: fcomp   st(1)
0x960AEB: fnstsw  ax
0x960AED: test    ah, 41h
0x960AF0: jnz     loc_960B7B
0x960AF6: fld     [esp+90h+var_54]
0x960AFA: fld     [esp+90h+arg_0]
0x960B01: fld     st
0x960B03: fmulp   st(2), st
0x960B05: fxch    st(1)
0x960B07: fstp    [esp+90h+var_78]
0x960B0B: fld     [esp+90h+var_50]
0x960B0F: fmul    st, st(1)
0x960B11: fstp    [esp+90h+var_74]
0x960B15: fld     st(4)
0x960B17: fmul    st, st(1)
0x960B19: fstp    [esp+90h+var_70]
0x960B1D: fld     [esp+90h+var_78]
0x960B21: fadd    [esp+90h+var_84]
0x960B25: fstp    [esp+90h+var_6C]
0x960B29: fld     [esp+90h+var_74]
0x960B2D: fadd    [esp+90h+var_80]
0x960B31: fstp    [esp+90h+var_68]
0x960B35: fld     [esp+90h+var_70]
0x960B39: fadd    [esp+90h+var_7C]
0x960B3D: fstp    [esp+90h+var_64]
0x960B41: fld     [esp+90h+var_68]
0x960B45: fmulp   st(6), st
0x960B47: fld     [esp+90h+var_6C]
0x960B4B: fmulp   st(4), st
0x960B4D: fxch    st(5)
0x960B4F: faddp   st(3), st
0x960B51: fld     [esp+90h+var_64]
0x960B55: fmulp   st(2), st
0x960B57: fxch    st(2)
0x960B59: faddp   st(1), st
0x960B5B: fstp    [esp+90h+var_88]
0x960B5F: fld     [esp+90h+var_88]
0x960B63: fcompp
0x960B65: fnstsw  ax
0x960B67: test    ah, 41h
0x960B6A: jnz     short loc_960B8C
0x960B6C: fstp    st(1)
0x960B6E: pop     edi
0x960B6F: fstp    st
0x960B71: xor     al, al
0x960B73: pop     esi
0x960B74: add     esp, 88h
0x960B7A: retn
0x960B7B: fstp    st(4)
0x960B7D: fstp    st(1)
0x960B7F: fstp    st
0x960B81: fstp    st(1)
0x960B83: fld     [esp+90h+arg_0]
0x960B8A: fxch    st(1)
0x960B8C: fld     [esp+90h+var_54]
0x960B90: fld     st
0x960B92: fld     dword ptr ds:0B3F9A8h
0x960B98: fucompp
0x960B9A: fnstsw  ax
0x960B9C: test    ah, 44h
0x960B9F: jp      short loc_960BC9
0x960BA1: fld     [esp+90h+var_50]
0x960BA5: fld     dword ptr ds:0B3F9ACh
0x960BAB: fucompp
0x960BAD: fnstsw  ax
0x960BAF: test    ah, 44h
0x960BB2: jp      short loc_960BC9
0x960BB4: fld     st(1)
0x960BB6: fld     dword ptr ds:0B3F9B0h
0x960BBC: fucompp
0x960BBE: fnstsw  ax
0x960BC0: test    ah, 44h
0x960BC3: jnp     loc_960C55
0x960BC9: mov     eax, [edi+20h]
0x960BCC: fmul    st, st(2)
0x960BCE: mov     ecx, [edi+24h]
0x960BD1: mov     edx, [edi+28h]
0x960BD4: fstp    [esp+90h+var_78]
0x960BD8: mov     [esp+90h+var_24], eax
0x960BDC: fld     [esp+90h+var_50]
0x960BE0: mov     eax, [edi+2Ch]
0x960BE3: fmul    st, st(2)
0x960BE5: mov     [esp+90h+var_20], ecx
0x960BE9: mov     ecx, [edi+30h]
0x960BEC: mov     [esp+90h+var_1C], edx
0x960BF0: mov     edx, [edi+34h]
0x960BF3: fstp    [esp+90h+var_74]
0x960BF7: mov     [esp+90h+var_18], eax
0x960BFB: mov     eax, [esp+90h+var_78]
0x960BFF: fmulp   st(1), st
0x960C01: mov     [esp+90h+var_14], ecx
0x960C05: mov     ecx, [esp+90h+var_74]
0x960C09: mov     [esp+90h+var_10], edx
0x960C10: fstp    [esp+90h+var_70]
0x960C14: mov     edx, [esp+90h+var_70]
0x960C18: mov     [esp+90h+var_C], eax
0x960C1F: mov     [esp+90h+var_8], ecx
0x960C26: lea     eax, [esp+90h+var_5C]
0x960C2A: push    eax
0x960C2B: mov     [esp+94h+var_4], edx
0x960C32: lea     ecx, [esp+94h+var_58]
0x960C36: push    ecx
0x960C37: lea     edx, [esp+98h+var_88]
0x960C3B: push    edx
0x960C3C: lea     eax, [esp+9Ch+var_60]
0x960C40: push    eax
0x960C41: lea     ecx, [esp+0A0h+var_24]
0x960C45: push    ecx
0x960C46: lea     edx, [esp+0A4h+var_48]
0x960C4A: push    edx
0x960C4B: call    sub_973BF0
0x960C50: add     esp, 18h
0x960C53: jmp     short loc_960C7B
0x960C55: lea     eax, [esp+90h+var_88]
0x960C59: fstp    st
0x960C5B: push    eax
0x960C5C: fstp    st(1)
0x960C5E: lea     ecx, [esp+94h+var_60]
0x960C62: fstp    st
0x960C64: push    ecx
0x960C65: lea     edx, [esp+98h+var_5C]
0x960C69: push    edx
0x960C6A: lea     eax, [esp+9Ch+var_48]
0x960C6E: push    eax
0x960C6F: lea     ecx, [edi+20h]
0x960C72: push    ecx
0x960C73: call    sub_9726E0
0x960C78: add     esp, 14h
0x960C7B: fstp    [esp+90h+var_60]
0x960C7F: fld     dword ptr [edi+38h]
0x960C82: fld     [esp+90h+var_60]
0x960C86: fld     st(1)
0x960C88: fmulp   st(2), st
0x960C8A: fcompp
0x960C8C: fnstsw  ax
0x960C8E: test    ah, 41h
0x960C91: jp      short loc_960CA1
0x960C93: pop     edi
0x960C94: mov     eax, 1
0x960C99: pop     esi
0x960C9A: add     esp, 88h
0x960CA0: retn
0x960CA1: pop     edi
0x960CA2: xor     eax, eax
0x960CA4: pop     esi
0x960CA5: add     esp, 88h
0x960CAB: retn
