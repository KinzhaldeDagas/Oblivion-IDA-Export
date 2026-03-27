0x66D930: push    ebp
0x66D931: mov     ebp, esp
0x66D933: and     esp, 0FFFFFFF0h
0x66D936: push    0FFFFFFFFh
0x66D938: push    offset SEH_66D930
0x66D93D: mov     eax, large fs:0
0x66D943: push    eax
0x66D944: sub     esp, 318h
0x66D94A: mov     eax, ds:0B30AACh
0x66D94F: xor     eax, esp
0x66D951: mov     [esp+324h+var_14], eax
0x66D958: push    ebx
0x66D959: push    esi
0x66D95A: push    edi
0x66D95B: mov     eax, ds:0B30AACh
0x66D960: xor     eax, esp
0x66D962: push    eax
0x66D963: lea     eax, [esp+334h+var_C]
0x66D96A: mov     large fs:0, eax
0x66D970: mov     ebx, ecx
0x66D972: xor     edi, edi
0x66D974: cmp     [ebx+578h], edi
0x66D97A: jz      short loc_66D9CE
0x66D97C: mov     eax, [ebx+574h]
0x66D982: cmp     eax, edi
0x66D984: jz      short loc_66D9CE
0x66D986: mov     eax, [eax+8]
0x66D989: cmp     eax, edi
0x66D98B: jz      short loc_66D992
0x66D98D: mov     eax, [eax+18h]
0x66D990: jmp     short loc_66D994
0x66D992: xor     eax, eax
0x66D994: cmp     eax, edi
0x66D996: jz      short loc_66D9CE
0x66D998: cmp     [eax+0Ch], edi
0x66D99B: jz      short loc_66D9CE
0x66D99D: call    MobileObject_GetCharProxy
0x66D9A2: cmp     eax, edi
0x66D9A4: mov     [esp+334h+var_30C], eax
0x66D9A8: jz      short loc_66D9F9
0x66D9AA: mov     ecx, [ebx+574h]
0x66D9B0: mov     esi, [eax+3B8h]
0x66D9B6: call    sub_65DE60
0x66D9BB: cmp     esi, eax
0x66D9BD: jnz     short loc_66D9F9
0x66D9BF: mov     eax, [esp+334h+var_30C]
0x66D9C3: cmp     dword ptr [eax+3B4h], 1
0x66D9CA: jnz     short loc_66D9F9
0x66D9CC: mov     ecx, ebx
0x66D9CE: call    sub_66A670
0x66D9D3: mov     ecx, [esp+334h+var_C]
0x66D9DA: mov     large fs:0, ecx
0x66D9E1: pop     ecx
0x66D9E2: pop     edi
0x66D9E3: pop     esi
0x66D9E4: pop     ebx
0x66D9E5: mov     ecx, [esp+324h+var_14]
0x66D9EC: xor     ecx, esp
0x66D9EE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x66D9F3: mov     esp, ebp
0x66D9F5: pop     ebp
0x66D9F6: retn    4
0x66D9F9: fld     dword ptr [ebx+584h]
0x66D9FF: lea     ecx, [esp+334h+var_308]
0x66DA03: fadd    qword ptr ds:0A2FC68h
0x66DA09: push    ecx
0x66DA0A: lea     edx, [esp+338h+var_2FC]
0x66DA0E: push    edx
0x66DA0F: mov     ecx, ebx
0x66DA11: fstp    [esp+33Ch+var_314]
0x66DA15: call    sub_5F11F0
0x66DA1A: fld1
0x66DA1C: mov     eax, [ebx+574h]
0x66DA22: fstp    [esp+334h+var_1FC]
0x66DA29: cmp     eax, edi
0x66DA2B: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x66DA32: mov     [esp+334h+var_220], 0
0x66DA3A: mov     [esp+334h+var_21C], edi
0x66DA41: mov     [esp+334h+var_1F0], edi
0x66DA48: mov     [esp+334h+var_1D0], edi
0x66DA4F: mov     [esp+334h+var_1CC], edi
0x66DA56: mov     [esp+334h+var_1C8], edi
0x66DA5D: movaps  [esp+334h+var_1E0], xmm0
0x66DA65: jz      short loc_66DA73
0x66DA67: mov     eax, [eax+8]
0x66DA6A: cmp     eax, edi
0x66DA6C: jz      short loc_66DA73
0x66DA6E: mov     eax, [eax+18h]
0x66DA71: jmp     short loc_66DA75
0x66DA73: xor     eax, eax
0x66DA75: cmp     eax, edi
0x66DA77: jz      short loc_66DA82
0x66DA79: mov     eax, [eax+0Ch]
0x66DA7C: mov     [esp+334h+var_31C], eax
0x66DA80: jmp     short loc_66DA88
0x66DA82: mov     [esp+334h+var_31C], edi
0x66DA86: mov     eax, edi
0x66DA88: cmp     eax, edi
0x66DA8A: jz      short loc_66DA9F
0x66DA8C: mov     eax, [eax+8]
0x66DA8F: cmp     eax, edi
0x66DA91: jz      short loc_66DA9F
0x66DA93: add     eax, 14h
0x66DA96: cmp     eax, edi
0x66DA98: jz      short loc_66DA9F
0x66DA9A: mov     esi, [eax+1Ch]
0x66DA9D: jmp     short loc_66DAA1
0x66DA9F: xor     esi, esi
0x66DAA1: mov     ecx, ds:0B333C4h
0x66DAA7: lea     eax, [esp+334h+var_320]
0x66DAAB: push    eax
0x66DAAC: call    sub_65ABE0
0x66DAB1: movzx   eax, word ptr [eax+2]
0x66DAB5: movzx   ecx, si
0x66DAB8: shl     eax, 10h
0x66DABB: or      eax, ecx
0x66DABD: lea     ecx, [esp+334h+var_2FC]
0x66DAC1: push    ecx
0x66DAC2: lea     ecx, [esp+338h+var_240]
0x66DAC9: mov     [esp+338h+var_21C], eax
0x66DAD0: call    bhkWorldRayCastData__SetCastInputFrom
0x66DAD5: lea     edx, [esp+334h+var_2FC+0Ch]
0x66DAD9: fld     [esp+334h+var_308]
0x66DADD: push    edx
0x66DADE: fld     [esp+338h+var_314]
0x66DAE2: lea     ecx, [esp+338h+var_240]
0x66DAE9: fld     st
0x66DAEB: fmulp   st(2), st
0x66DAED: fxch    st(1)
0x66DAEF: fstp    [esp+338h+var_310]
0x66DAF3: fld     [esp+338h+var_304]
0x66DAF7: fmul    st, st(1)
0x66DAF9: fstp    [esp+338h+var_318]
0x66DAFD: fmul    [esp+338h+var_300]
0x66DB01: fstp    [esp+338h+var_320]
0x66DB05: fld     [esp+338h+var_310]
0x66DB09: fstp    dword ptr [esp+338h+var_2FC+0Ch]
0x66DB0D: fld     [esp+338h+var_318]
0x66DB11: fstp    [esp+338h+var_2EC]
0x66DB15: fld     [esp+338h+var_320]
0x66DB19: fstp    dword ptr [esp+338h+var_2E8]
0x66DB1D: call    sub_663FF0
0x66DB22: lea     ecx, [esp+334h+var_1C0]
0x66DB29: call    sub_538C00
0x66DB2E: mov     ecx, ds:0B333C4h; this
0x66DB34: lea     eax, [esp+334h+var_1C0]
0x66DB3B: mov     [esp+334h+var_4], edi
0x66DB42: mov     [esp+334h+var_1C8], eax
0x66DB49: mov     [esp+334h+var_1CC], edi
0x66DB50: call    TESObjectREFR_GetParentCell
0x66DB55: mov     esi, eax
0x66DB57: mov     ecx, esi; this
0x66DB59: call    TESObjectCELL_IsInterior
0x66DB5E: test    al, al
0x66DB60: jz      short loc_66DB6C
0x66DB62: lea     ecx, [esi+28h]
0x66DB65: call    sub_424180
0x66DB6A: jmp     short loc_66DB71
0x66DB6C: mov     eax, ds:0B35C24h
0x66DB71: mov     edx, [eax]
0x66DB73: mov     edx, [edx+88h]
0x66DB79: lea     ecx, [esp+334h+var_240]
0x66DB80: push    ecx
0x66DB81: mov     ecx, eax
0x66DB83: call    edx
0x66DB85: test    al, al
0x66DB87: jz      loc_66DC32
0x66DB8D: fld1
0x66DB8F: xor     esi, esi
0x66DB91: fstp    [esp+334h+var_310]
0x66DB95: cmp     edi, [esp+334h+var_1AC]
0x66DB9C: jge     short loc_66DBF4
0x66DB9E: mov     eax, [esp+334h+var_1B0]
0x66DBA5: fld     dword ptr [eax+esi+14h]
0x66DBA9: mov     eax, [eax+esi+20h]
0x66DBAD: push    eax
0x66DBAE: fstp    [esp+338h+var_2AC]
0x66DBB5: call    sub_4806E0
0x66DBBA: add     esp, 4
0x66DBBD: test    eax, eax
0x66DBBF: jz      short loc_66DBE1
0x66DBC1: push    eax
0x66DBC2: call    sub_4DC270
0x66DBC7: add     esp, 4
0x66DBCA: test    eax, eax
0x66DBCC: jz      short loc_66DBE1
0x66DBCE: cmp     eax, [ebx+578h]
0x66DBD4: jz      short loc_66DBE1
0x66DBD6: fld     [esp+334h+var_2AC]
0x66DBDD: fstp    [esp+334h+var_310]
0x66DBE1: fld1
0x66DBE3: add     edi, 1
0x66DBE6: fcomp   [esp+334h+var_310]
0x66DBEA: add     esi, 30h ; '0'
0x66DBED: fnstsw  ax
0x66DBEF: test    ah, 44h
0x66DBF2: jnp     short loc_66DB95
0x66DBF4: fld     [esp+334h+var_310]
0x66DBF8: fmul    [esp+334h+var_314]
0x66DBFC: fldz
0x66DBFE: fsub    st(1), st
0x66DC00: fxch    st(1)
0x66DC02: fstp    [esp+334h+var_320]
0x66DC06: fld     [esp+334h+var_320]
0x66DC0A: fcom    st(1)
0x66DC0C: fnstsw  ax
0x66DC0E: fstp    st(1)
0x66DC10: test    ah, 5
0x66DC13: jp      short loc_66DC19
0x66DC15: fstp    st
0x66DC17: fldz
0x66DC19: xor     edi, edi
0x66DC1B: fstp    [esp+334h+var_314]
0x66DC1F: cmp     dword ptr [ebx+57Ch], 3
0x66DC26: jnz     short loc_66DC32
0x66DC28: fld     [esp+334h+var_314]
0x66DC2C: fstp    dword ptr [ebx+584h]
0x66DC32: cmp     dword ptr [ebx+57Ch], 3
0x66DC39: mov     esi, [esp+334h+var_31C]
0x66DC3D: jnz     loc_66DD98
0x66DC43: cmp     esi, edi
0x66DC45: fld1
0x66DC47: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x66DC4E: fstp    [esp+334h+var_27C]
0x66DC55: mov     byte ptr [esp+334h+var_2A0], 0
0x66DC5D: mov     [esp+334h+var_29C], edi
0x66DC64: mov     [esp+334h+var_270], edi
0x66DC6B: mov     [esp+334h+var_250], edi
0x66DC72: mov     [esp+334h+var_24C], edi
0x66DC79: mov     [esp+334h+var_248], edi
0x66DC80: movaps  xmmword ptr [esp+334h+var_264+4], xmm0
0x66DC88: jz      short loc_66DC9D
0x66DC8A: mov     eax, [esi+8]
0x66DC8D: cmp     eax, edi
0x66DC8F: jz      short loc_66DC9D
0x66DC91: add     eax, 14h
0x66DC94: cmp     eax, edi
0x66DC96: jz      short loc_66DC9D
0x66DC98: mov     eax, [eax+1Ch]
0x66DC9B: jmp     short loc_66DC9F
0x66DC9D: xor     eax, eax
0x66DC9F: mov     [esp+334h+var_29C], eax
0x66DCA6: lea     eax, [esp+334h+var_2FC]
0x66DCAA: push    eax
0x66DCAB: lea     ecx, [esp+338h+var_2C0]
0x66DCAF: call    bhkWorldRayCastData__SetCastInputFrom
0x66DCB4: mov     ecx, [ebx+578h]
0x66DCBA: mov     edx, [ecx]
0x66DCBC: mov     eax, [edx+154h]
0x66DCC2: call    eax
0x66DCC4: mov     ecx, [eax+20h]
0x66DCC7: mov     edx, [eax+24h]
0x66DCCA: mov     eax, [eax+28h]
0x66DCCD: mov     dword ptr [esp+334h+var_2FC+0Ch], ecx
0x66DCD1: lea     ecx, [esp+334h+var_2FC+0Ch]
0x66DCD5: push    ecx; a2
0x66DCD6: lea     ecx, [esp+338h+var_2C0]; this
0x66DCDA: mov     [esp+338h+var_2EC], edx
0x66DCDE: mov     dword ptr [esp+338h+var_2E8], eax
0x66DCE2: call    bhkWorldRayCastData__SetCastInputTo
0x66DCE7: mov     ecx, ds:0B333C4h; this
0x66DCED: call    TESObjectREFR_GetParentCell
0x66DCF2: test    eax, eax
0x66DCF4: jz      loc_66DD8B
0x66DCFA: mov     ecx, ds:0B333C4h; this
0x66DD00: call    TESObjectREFR_GetParentCell
0x66DD05: mov     esi, eax
0x66DD07: mov     ecx, esi; this
0x66DD09: call    TESObjectCELL_IsInterior
0x66DD0E: test    al, al
0x66DD10: jz      short loc_66DD1C
0x66DD12: lea     ecx, [esi+28h]
0x66DD15: call    sub_424180
0x66DD1A: jmp     short loc_66DD21
0x66DD1C: mov     eax, ds:0B35C24h
0x66DD21: mov     edx, [eax]
0x66DD23: mov     edx, [edx+88h]
0x66DD29: lea     ecx, [esp+334h+var_2C0]
0x66DD2D: push    ecx
0x66DD2E: mov     ecx, eax
0x66DD30: call    edx
0x66DD32: test    al, al
0x66DD34: jz      short loc_66DD87
0x66DD36: lea     ecx, [esp+334h+var_2C0]
0x66DD3A: call    sub_889CB0
0x66DD3F: push    eax
0x66DD40: call    sub_4DC270
0x66DD45: add     esp, 4
0x66DD48: cmp     eax, edi
0x66DD4A: jz      short loc_66DD87
0x66DD4C: cmp     [ebx+578h], eax
0x66DD52: jz      short loc_66DD87
0x66DD54: mov     edx, [eax]
0x66DD56: mov     ecx, eax
0x66DD58: mov     eax, [edx+190h]
0x66DD5E: call    eax
0x66DD60: test    al, al
0x66DD62: jnz     short loc_66DD87
0x66DD64: mov     ecx, ebx
0x66DD66: call    sub_66A670
0x66DD6B: lea     ecx, [esp+334h+var_1C0]
0x66DD72: mov     [esp+334h+var_4], 0FFFFFFFFh
0x66DD7D: call    sub_538C80
0x66DD82: jmp     loc_66D9D3
0x66DD87: mov     esi, [esp+334h+var_31C]
0x66DD8B: cmp     dword ptr [ebx+57Ch], 3
0x66DD92: jz      loc_66DE3C
0x66DD98: mov     eax, [ebx+574h]
0x66DD9E: cmp     eax, edi
0x66DDA0: jz      short loc_66DDC6
0x66DDA2: mov     ecx, [eax+8]
0x66DDA5: cmp     ecx, edi
0x66DDA7: jz      short loc_66DDB2
0x66DDA9: movaps  xmm0, xmmword ptr [ecx+30h]
0x66DDAD: movaps  xmmword ptr [esp+334h+var_2D8+8], xmm0
0x66DDB2: cmp     eax, edi
0x66DDB4: jz      short loc_66DDC6
0x66DDB6: mov     eax, [eax+8]
0x66DDB9: cmp     eax, edi
0x66DDBB: jz      short loc_66DDC6
0x66DDBD: movaps  xmm0, xmmword ptr [eax+20h]
0x66DDC1: movaps  [esp+334h+var_2E8+8], xmm0
0x66DDC6: mov     edx, [esi]
0x66DDC8: mov     edx, [edx+0ACh]
0x66DDCE: lea     eax, [esp+334h+var_2C0]
0x66DDD2: push    eax
0x66DDD3: mov     ecx, esi
0x66DDD5: call    edx
0x66DDD7: lea     eax, [esp+334h+var_2E8+8]
0x66DDDB: push    eax
0x66DDDC: lea     ecx, [esp+338h+var_2C0]
0x66DDE0: push    ecx
0x66DDE1: lea     ecx, [esp+33Ch+var_2FC+0Ch]
0x66DDE5: call    sub_88FCC0
0x66DDEA: movaps  xmm0, [esp+334h+var_2FC+0Ch]
0x66DDEF: subps   xmm0, xmmword ptr [esp+334h+var_2D8+8]
0x66DDF4: movaps  [esp+334h+var_2FC+0Ch], xmm0
0x66DDF9: mulps   xmm0, xmm0
0x66DDFC: movaps  xmm1, xmm0
0x66DDFF: shufps  xmm1, xmm0, 55h ; 'U'
0x66DE03: addss   xmm1, xmm0
0x66DE07: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x66DE0B: addss   xmm0, xmm1
0x66DE0F: sqrtss  xmm0, xmm0
0x66DE13: movss   dword ptr [esp+334h+var_2D8+8], xmm0
0x66DE19: fld     dword ptr [esp+334h+var_2D8+8]
0x66DE1D: fmul    qword ptr ds:0A372E0h
0x66DE23: fstp    [esp+334h+var_320]
0x66DE27: fld     dword ptr ds:0A73DE0h
0x66DE2D: fcomp   [esp+334h+var_320]
0x66DE31: fnstsw  ax
0x66DE33: test    ah, 5
0x66DE36: jnp     loc_66DD64
0x66DE3C: fld     [esp+334h+var_308]
0x66DE40: mov     esi, [esp+334h+var_30C]
0x66DE44: cmp     esi, edi
0x66DE46: fld     [esp+334h+var_314]
0x66DE4A: fld     st
0x66DE4C: fmulp   st(2), st
0x66DE4E: fxch    st(1)
0x66DE50: fstp    [esp+334h+var_320]
0x66DE54: fld     [esp+334h+var_320]
0x66DE58: fst     [esp+334h+var_318]
0x66DE5C: fld     [esp+334h+var_304]
0x66DE60: fmul    st, st(2)
0x66DE62: fstp    [esp+334h+var_320]
0x66DE66: fld     [esp+334h+var_320]
0x66DE6A: fst     [esp+334h+var_31C]
0x66DE6E: fld     [esp+334h+var_300]
0x66DE72: fld     st
0x66DE74: fmulp   st(4), st
0x66DE76: fxch    st(3)
0x66DE78: fstp    [esp+334h+var_320]
0x66DE7C: fld     [esp+334h+var_320]
0x66DE80: fst     [esp+334h+var_320]
0x66DE84: fld     [esp+334h+var_318]
0x66DE88: fadd    dword ptr [esp+334h+var_2FC]
0x66DE8C: fstp    [esp+334h+var_310]
0x66DE90: fld     dword ptr [esp+334h+var_2FC+4]
0x66DE94: fadd    [esp+334h+var_31C]
0x66DE98: fstp    [esp+334h+var_31C]
0x66DE9C: fld     dword ptr [esp+334h+var_2FC+8]
0x66DEA0: fadd    [esp+334h+var_320]
0x66DEA4: fstp    [esp+334h+var_314]
0x66DEA8: fld     [esp+334h+var_310]
0x66DEAC: fstp    dword ptr [esp+334h+var_2FC+0Ch]
0x66DEB0: fld     [esp+334h+var_31C]
0x66DEB4: fstp    [esp+334h+var_2EC]
0x66DEB8: fld     [esp+334h+var_314]
0x66DEBC: fstp    dword ptr [esp+334h+var_2E8]
0x66DEC0: jz      loc_66DFA9
0x66DEC6: fxch    st(2)
0x66DEC8: fstp    [esp+334h+var_320]
0x66DECC: fstp    [esp+334h+var_318]
0x66DED0: fstp    [esp+334h+var_30C]
0x66DED4: fld     [esp+334h+var_320]
0x66DED8: fstp    dword ptr [esp+334h+var_2E8+8]
0x66DEDC: fld     [esp+334h+var_318]
0x66DEE0: fstp    dword ptr [esp+334h+var_2E8+0Ch]
0x66DEE4: fld     [esp+334h+var_30C]
0x66DEE8: fstp    dword ptr [esp+334h+var_2D8]
0x66DEEC: fldz
0x66DEEE: fcom    st(1)
0x66DEF0: fnstsw  ax
0x66DEF2: fstp    st(1)
0x66DEF4: test    ah, 41h
0x66DEF7: jnz     loc_66DFAF
0x66DEFD: lea     ecx, [esp+334h+var_2E8+8]
0x66DF01: fstp    dword ptr [esp+334h+var_2D8]
0x66DF05: call    sub_43F350
0x66DF0A: fstp    [esp+334h+var_318]
0x66DF0E: mov     ecx, esi
0x66DF10: call    sub_8913C0
0x66DF15: fstp    [esp+334h+var_320]
0x66DF19: fld     [esp+334h+var_320]
0x66DF1D: fmul    qword ptr ds:0A372E0h
0x66DF23: fstp    [esp+334h+var_320]
0x66DF27: fld     [esp+334h+var_320]
0x66DF2B: fadd    qword ptr ds:0A3F3F0h
0x66DF31: fstp    [esp+334h+var_320]
0x66DF35: fld     [esp+334h+var_318]
0x66DF39: fld     [esp+334h+var_320]
0x66DF3D: fcom    st(1)
0x66DF3F: fnstsw  ax
0x66DF41: test    ah, 41h
0x66DF44: jnz     short loc_66DFAD
0x66DF46: fsubrp  st(1), st
0x66DF48: mov     ecx, [ebx+574h]
0x66DF4E: lea     edx, [esp+334h+var_2FC+0Ch]
0x66DF52: push    edx
0x66DF53: fstp    [esp+338h+var_320]
0x66DF57: fld     dword ptr [esp+338h+var_2E8+8]
0x66DF5B: fld     [esp+338h+var_320]
0x66DF5F: fld     st
0x66DF61: fmulp   st(2), st
0x66DF63: fxch    st(1)
0x66DF65: fstp    [esp+338h+var_320]
0x66DF69: fld     dword ptr [esp+338h+var_2E8+0Ch]
0x66DF6D: fmul    st, st(1)
0x66DF6F: fstp    [esp+338h+var_318]
0x66DF73: fmul    dword ptr [esp+338h+var_2D8]
0x66DF77: fstp    [esp+338h+var_30C]
0x66DF7B: fld     [esp+338h+var_320]
0x66DF7F: fadd    [esp+338h+var_310]
0x66DF83: fstp    dword ptr [esp+338h+var_2FC+0Ch]
0x66DF87: fld     [esp+338h+var_318]
0x66DF8B: fadd    [esp+338h+var_31C]
0x66DF8F: fstp    [esp+338h+var_2EC]
0x66DF93: fld     [esp+338h+var_30C]
0x66DF97: fadd    [esp+338h+var_314]
0x66DF9B: fstp    dword ptr [esp+338h+var_2E8]
0x66DF9F: call    sub_605DC0
0x66DFA4: jmp     loc_66DD6B
0x66DFA9: fstp    st(2)
0x66DFAB: fstp    st
0x66DFAD: fstp    st(1)
0x66DFAF: mov     ecx, [ebx+574h]
0x66DFB5: fstp    st
0x66DFB7: lea     edx, [esp+334h+var_2FC+0Ch]
0x66DFBB: push    edx
0x66DFBC: call    sub_605DC0
0x66DFC1: jmp     loc_66DD6B
