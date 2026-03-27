0x8E6D10: push    ebp
0x8E6D11: mov     ebp, esp
0x8E6D13: and     esp, 0FFFFFFF0h
0x8E6D16: sub     esp, 174h
0x8E6D1C: push    ebx
0x8E6D1D: push    esi
0x8E6D1E: mov     esi, [ebp+arg_0]
0x8E6D21: movzx   eax, byte ptr [esi]
0x8E6D24: sub     eax, 2
0x8E6D27: push    edi
0x8E6D28: jz      loc_8E70A6
0x8E6D2E: sub     eax, 2
0x8E6D31: jz      short loc_8E6D5B
0x8E6D33: sub     eax, 2
0x8E6D36: jnz     loc_8E7177
0x8E6D3C: mov     edx, [ebp+arg_8]
0x8E6D3F: mov     ecx, [esi+4]
0x8E6D42: mov     eax, [ecx]
0x8E6D44: push    edx
0x8E6D45: mov     edx, [ebp+arg_4]
0x8E6D48: push    edx
0x8E6D49: mov     edx, [esi+18h]
0x8E6D4C: push    edx
0x8E6D4D: mov     edx, [esi+14h]
0x8E6D50: push    edx
0x8E6D51: call    dword ptr [eax+14h]
0x8E6D54: pop     edi
0x8E6D55: pop     esi
0x8E6D56: pop     ebx
0x8E6D57: mov     esp, ebp
0x8E6D59: pop     ebp
0x8E6D5A: retn
0x8E6D5B: mov     eax, [esi+14h]
0x8E6D5E: mov     ebx, [eax+8]
0x8E6D61: mov     edx, [esi+18h]
0x8E6D64: mov     ecx, [edx+8]
0x8E6D67: mov     edi, [ebp+arg_4]
0x8E6D6A: mov     [esp+180h+var_160], eax
0x8E6D6E: mov     eax, [esi+10h]
0x8E6D71: mov     [esp+180h+var_154], eax
0x8E6D75: mov     [esp+180h+var_15C], edx
0x8E6D79: mov     [esp+180h+var_158], edi
0x8E6D7D: fld     dword ptr [edi+18h]
0x8E6D80: movaps  xmm2, xmmword ptr [ecx+40h]
0x8E6D84: fld     st
0x8E6D86: fmul    dword ptr [ebx+5Ch]
0x8E6D89: movaps  xmm3, xmmword ptr [ecx+50h]
0x8E6D8D: fxch    st(1)
0x8E6D8F: subps   xmm3, xmm2
0x8E6D92: fmul    dword ptr [ecx+5Ch]
0x8E6D95: mov     [esp+180h+var_164], ecx
0x8E6D99: fld     st(1)
0x8E6D9B: fstp    [esp+180h+var_168]
0x8E6D9F: movss   xmm0, [esp+180h+var_168]
0x8E6DA5: fst     [esp+180h+var_168]
0x8E6DA9: movss   xmm1, [esp+180h+var_168]
0x8E6DAF: movaps  xmm2, xmm1
0x8E6DB2: shufps  xmm2, xmm1, 0
0x8E6DB6: movaps  xmm1, xmmword ptr [ebx+50h]
0x8E6DBA: mulps   xmm2, xmm3
0x8E6DBD: movaps  xmm3, xmmword ptr [ebx+40h]
0x8E6DC1: subps   xmm3, xmm1
0x8E6DC4: movaps  xmm1, xmm0
0x8E6DC7: shufps  xmm1, xmm0, 0
0x8E6DCB: mulps   xmm1, xmm3
0x8E6DCE: addps   xmm1, xmm2
0x8E6DD1: movaps  [esp+180h+var_100], xmm1
0x8E6DD9: fld     dword ptr [ecx+0A0h]
0x8E6DDF: fmul    dword ptr [ecx+9Ch]
0x8E6DE5: fmul    st, st(1)
0x8E6DE7: fld     dword ptr [ebx+0A0h]
0x8E6DED: fmul    dword ptr [ebx+9Ch]
0x8E6DF3: fmul    st, st(3)
0x8E6DF5: faddp   st(1), st
0x8E6DF7: fstp    dword ptr [esp+180h+var_100+0Ch]
0x8E6DFE: fstp    st
0x8E6E00: fstp    st
0x8E6E02: fld     dword ptr [edi+10h]
0x8E6E05: fld     dword ptr [esi+1Ch]
0x8E6E08: fucompp
0x8E6E0A: fnstsw  ax
0x8E6E0C: test    ah, 44h
0x8E6E0F: jnp     loc_8E7020
0x8E6E15: mov     edx, [edi+28h]
0x8E6E18: mov     al, [edx+10h]
0x8E6E1B: test    al, al
0x8E6E1D: jnz     short loc_8E6E74
0x8E6E1F: mov     eax, [edi+14h]
0x8E6E22: fld     dword ptr ds:0A3B888h
0x8E6E28: xorps   xmm0, xmm0
0x8E6E2B: mov     [esi+1Ch], eax
0x8E6E2E: movaps  xmmword ptr [esi+20h], xmm0
0x8E6E32: mov     dword ptr [esi+2Ch], 0FF7FFFFFh
0x8E6E39: push    ecx
0x8E6E3A: fstp    [esp+184h+var_110]
0x8E6E3E: push    ebx
0x8E6E3F: lea     ecx, [esp+188h+var_150]
0x8E6E43: call    sub_8B1FF0
0x8E6E48: movzx   ecx, byte ptr [esi+1]
0x8E6E4C: mov     eax, [ebp+arg_8]
0x8E6E4F: imul    ecx, 34h ; '4'
0x8E6E52: mov     edx, [edi]
0x8E6E54: push    eax
0x8E6E55: lea     eax, [esi+20h]
0x8E6E58: push    eax
0x8E6E59: lea     eax, [esi+30h]
0x8E6E5C: push    eax
0x8E6E5D: lea     eax, [esp+18Ch+var_160]
0x8E6E61: push    esi
0x8E6E62: push    eax
0x8E6E63: call    dword ptr [ecx+edx+16BCh]
0x8E6E6A: add     esp, 14h
0x8E6E6D: pop     edi
0x8E6E6E: pop     esi
0x8E6E6F: pop     ebx
0x8E6E70: mov     esp, ebp
0x8E6E72: pop     ebp
0x8E6E73: retn
0x8E6E74: mov     eax, large fs:2Ch
0x8E6E7A: mov     ecx, ds:0BA9DE4h
0x8E6E80: mov     ecx, [eax+ecx*4]
0x8E6E83: mov     edx, [ecx+1A4h]
0x8E6E89: cmp     edx, [ecx+1A8h]
0x8E6E8F: jnb     short loc_8E6EC4
0x8E6E91: mov     ecx, ds:0BA9DE4h
0x8E6E97: mov     eax, [eax+ecx*4]
0x8E6E9A: mov     ecx, [eax+1A4h]
0x8E6EA0: mov     [esp+180h+var_16C], eax
0x8E6EA4: mov     dword ptr [ecx], offset aTtrecalct0; "TtrecalcT0"
0x8E6EAA: rdtsc
0x8E6EAC: mov     [esp+180h+var_168], eax
0x8E6EB0: mov     edx, [esp+180h+var_168]
0x8E6EB4: mov     eax, [esp+180h+var_16C]
0x8E6EB8: mov     [ecx+4], edx
0x8E6EBB: add     ecx, 0Ch
0x8E6EBE: mov     [eax+1A4h], ecx
0x8E6EC4: mov     edx, [esp+180h+var_158]
0x8E6EC8: mov     eax, [edx+10h]
0x8E6ECB: lea     ecx, [esp+180h+var_80]
0x8E6ED2: push    ecx; int
0x8E6ED3: mov     ecx, [esp+184h+var_160]
0x8E6ED7: mov     edx, [ecx+8]
0x8E6EDA: push    eax; float
0x8E6EDB: add     edx, 40h ; '@'
0x8E6EDE: push    edx; int
0x8E6EDF: call    sub_8DD150
0x8E6EE4: mov     ecx, [esp+18Ch+var_158]
0x8E6EE8: mov     edx, [ecx+10h]
0x8E6EEB: lea     eax, [esp+18Ch+var_40]
0x8E6EF2: push    eax; int
0x8E6EF3: mov     eax, [esp+190h+var_15C]
0x8E6EF7: mov     ecx, [eax+8]
0x8E6EFA: push    edx; float
0x8E6EFB: add     ecx, 40h ; '@'
0x8E6EFE: push    ecx; int
0x8E6EFF: call    sub_8DD150
0x8E6F04: mov     ecx, [esp+198h+var_154]
0x8E6F08: mov     [esp+198h+var_E4], ecx
0x8E6F0F: lea     edx, [esp+198h+var_A0]
0x8E6F16: mov     [esp+198h+var_F0], edx
0x8E6F1D: mov     edx, [esp+198h+var_158]
0x8E6F21: mov     [esp+198h+var_E8], edx
0x8E6F28: lea     eax, [esp+198h+var_90]
0x8E6F2F: mov     [esp+198h+var_EC], eax
0x8E6F36: mov     eax, [esp+198h+var_160]
0x8E6F3A: mov     ecx, [eax+4]
0x8E6F3D: mov     edx, [eax]
0x8E6F3F: mov     [esp+198h+var_9C], ecx
0x8E6F46: mov     ecx, [esp+198h+var_15C]
0x8E6F4A: mov     [esp+198h+var_A0], edx
0x8E6F51: mov     edx, [ecx+4]
0x8E6F54: mov     [esp+198h+var_16C], edx
0x8E6F58: mov     edx, [ecx]
0x8E6F5A: mov     [esp+198h+var_90], edx
0x8E6F61: mov     edx, [esp+198h+var_16C]
0x8E6F65: mov     [esp+198h+var_84], ecx
0x8E6F6C: lea     ecx, [esp+198h+var_40]
0x8E6F73: add     esp, 18h
0x8E6F76: mov     [esp+180h+var_8C], edx
0x8E6F7D: mov     edx, ecx
0x8E6F7F: mov     [esp+180h+var_94], eax
0x8E6F86: lea     eax, [esp+180h+var_80]
0x8E6F8D: push    edx
0x8E6F8E: mov     [esp+184h+var_88], ecx
0x8E6F95: push    eax
0x8E6F96: lea     ecx, [esp+188h+var_E0]
0x8E6F9D: mov     [esp+188h+var_98], eax
0x8E6FA4: call    sub_8B1FF0
0x8E6FA9: movzx   ecx, byte ptr [esi+1]
0x8E6FAD: mov     edx, [edi]
0x8E6FAF: imul    ecx, 34h ; '4'
0x8E6FB2: lea     eax, [esi+20h]
0x8E6FB5: push    eax
0x8E6FB6: lea     eax, [esi+30h]
0x8E6FB9: push    eax
0x8E6FBA: lea     eax, [esp+188h+var_F0]
0x8E6FC1: push    eax
0x8E6FC2: call    dword ptr [ecx+edx+16B8h]
0x8E6FC9: mov     edx, ds:0BA9DE4h
0x8E6FCF: mov     ecx, large fs:2Ch
0x8E6FD6: mov     eax, [ecx+edx*4]
0x8E6FD9: mov     edx, [eax+1A4h]
0x8E6FDF: add     esp, 0Ch
0x8E6FE2: cmp     edx, [eax+1A8h]
0x8E6FE8: jnb     short loc_8E701C
0x8E6FEA: mov     eax, ds:0BA9DE4h
0x8E6FEF: mov     ecx, [ecx+eax*4]
0x8E6FF2: mov     [esp+180h+var_168], ecx
0x8E6FF6: mov     ecx, [ecx+1A4h]
0x8E6FFC: mov     dword ptr [ecx], offset aEt; "Et"
0x8E7002: rdtsc
0x8E7004: mov     [esp+180h+var_16C], eax
0x8E7008: mov     edx, [esp+180h+var_16C]
0x8E700C: mov     eax, [esp+180h+var_168]
0x8E7010: mov     [ecx+4], edx
0x8E7013: add     ecx, 0Ch
0x8E7016: mov     [eax+1A4h], ecx
0x8E701C: mov     ecx, [esp+180h+var_164]
0x8E7020: movaps  xmm1, [esp+180h+var_100]
0x8E7028: movaps  xmm2, xmmword ptr [esi+20h]
0x8E702C: mov     edx, [edi+14h]
0x8E702F: movaps  xmm0, xmm1
0x8E7032: mulps   xmm0, xmm2
0x8E7035: movaps  xmm2, xmm1
0x8E7038: shufps  xmm2, xmm1, 0FFh
0x8E703C: movaps  xmm1, xmm0
0x8E703F: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8E7043: addss   xmm1, xmm2
0x8E7047: movaps  xmm2, xmm0
0x8E704A: shufps  xmm2, xmm0, 55h ; 'U'
0x8E704E: mov     [esi+1Ch], edx
0x8E7051: fld     dword ptr [esi+2Ch]
0x8E7054: lea     eax, [esp+180h+var_16C]
0x8E7058: addss   xmm2, xmm0
0x8E705C: addps   xmm2, xmm1
0x8E705F: movss   dword ptr [eax], xmm2
0x8E7063: fsub    [esp+180h+var_16C]
0x8E7067: fcom    dword ptr [edi+8]
0x8E706A: fnstsw  ax
0x8E706C: test    ah, 1
0x8E706F: jnz     loc_8E6E39
0x8E7075: fstp    dword ptr [esi+2Ch]
0x8E7078: mov     al, [esi+2]
0x8E707B: test    al, al
0x8E707D: jz      loc_8E7177
0x8E7083: movzx   ecx, byte ptr [esi+1]
0x8E7087: mov     eax, [esi+10h]
0x8E708A: imul    ecx, 34h ; '4'
0x8E708D: mov     edx, [edi]
0x8E708F: push    eax
0x8E7090: lea     eax, [esi+30h]
0x8E7093: push    eax
0x8E7094: push    esi
0x8E7095: call    dword ptr [ecx+edx+169Ch]
0x8E709C: add     esp, 0Ch
0x8E709F: pop     edi
0x8E70A0: pop     esi
0x8E70A1: pop     ebx
0x8E70A2: mov     esp, ebp
0x8E70A4: pop     ebp
0x8E70A5: retn
0x8E70A6: mov     eax, [esi+14h]
0x8E70A9: mov     ecx, [esi+18h]
0x8E70AC: mov     edx, [esi+10h]
0x8E70AF: mov     edi, [ebp+arg_4]
0x8E70B2: mov     [esp+180h+var_15C], ecx
0x8E70B6: mov     [esp+180h+var_160], eax
0x8E70BA: mov     [esp+180h+var_154], edx
0x8E70BE: mov     [esp+180h+var_158], edi
0x8E70C2: fld     dword ptr [edi+18h]
0x8E70C5: mov     eax, [eax+8]
0x8E70C8: fld     st
0x8E70CA: fmul    dword ptr [eax+5Ch]
0x8E70CD: mov     ecx, [ecx+8]
0x8E70D0: movaps  xmm2, xmmword ptr [ecx+40h]
0x8E70D4: fxch    st(1)
0x8E70D6: fmul    dword ptr [ecx+5Ch]
0x8E70D9: movaps  xmm3, xmmword ptr [ecx+50h]
0x8E70DD: fld     st(1)
0x8E70DF: subps   xmm3, xmm2
0x8E70E2: fstp    [esp+180h+var_16C]
0x8E70E6: movss   xmm0, [esp+180h+var_16C]
0x8E70EC: push    ecx
0x8E70ED: fst     [esp+184h+var_16C]
0x8E70F1: movss   xmm1, [esp+184h+var_16C]
0x8E70F7: movaps  xmm2, xmm1
0x8E70FA: shufps  xmm2, xmm1, 0
0x8E70FE: movaps  xmm1, xmmword ptr [eax+50h]
0x8E7102: mulps   xmm2, xmm3
0x8E7105: movaps  xmm3, xmmword ptr [eax+40h]
0x8E7109: subps   xmm3, xmm1
0x8E710C: movaps  xmm1, xmm0
0x8E710F: shufps  xmm1, xmm0, 0
0x8E7113: mulps   xmm1, xmm3
0x8E7116: addps   xmm1, xmm2
0x8E7119: movaps  [esp+184h+var_100], xmm1
0x8E7121: fld     dword ptr [ecx+0A0h]
0x8E7127: fmul    dword ptr [ecx+9Ch]
0x8E712D: push    eax
0x8E712E: lea     ecx, [esp+188h+var_150]
0x8E7132: fmul    st, st(1)
0x8E7134: fld     dword ptr [eax+0A0h]
0x8E713A: fmul    dword ptr [eax+9Ch]
0x8E7140: fmul    st, st(3)
0x8E7142: faddp   st(1), st
0x8E7144: fstp    dword ptr [esp+188h+var_100+0Ch]
0x8E714B: fstp    st
0x8E714D: fstp    st
0x8E714F: call    sub_8B1FF0
0x8E7154: movzx   eax, byte ptr [esi+1]
0x8E7158: mov     edx, [ebp+arg_8]
0x8E715B: imul    eax, 34h ; '4'
0x8E715E: mov     ecx, [edi]
0x8E7160: push    edx
0x8E7161: push    0
0x8E7163: lea     edx, [esi+20h]
0x8E7166: push    edx
0x8E7167: lea     edx, [esp+18Ch+var_160]
0x8E716B: push    esi
0x8E716C: push    edx
0x8E716D: call    dword ptr [eax+ecx+16BCh]
0x8E7174: add     esp, 14h
0x8E7177: pop     edi
0x8E7178: pop     esi
0x8E7179: pop     ebx
0x8E717A: mov     esp, ebp
0x8E717C: pop     ebp
0x8E717D: retn
