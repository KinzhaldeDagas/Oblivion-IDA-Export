0x92CE60: push    ebp
0x92CE61: mov     ebp, esp
0x92CE63: and     esp, 0FFFFFFF0h
0x92CE66: sub     esp, 64h
0x92CE69: mov     eax, [ebp+arg_8]
0x92CE6C: mov     edx, [eax+8]
0x92CE6F: cmp     edx, 3
0x92CE72: mov     ecx, [eax]
0x92CE74: push    ebx
0x92CE75: push    esi
0x92CE76: push    edi
0x92CE77: mov     [esp+70h+var_44], ecx
0x92CE7B: jge     loc_92D3EE
0x92CE81: mov     esi, [ebp+arg_C]
0x92CE84: mov     edi, [esi+8]
0x92CE87: cmp     edi, 3
0x92CE8A: jge     loc_92D3EE
0x92CE90: cmp     edx, 2
0x92CE93: mov     [esp+70h+var_5C], 0
0x92CE9B: mov     [esp+70h+var_4C], 3
0x92CEA3: jnz     short loc_92CEF2
0x92CEA5: mov     eax, [eax+4]
0x92CEA8: movzx   edx, word ptr [eax+2]
0x92CEAC: movzx   edi, word ptr [eax]
0x92CEAF: movzx   ebx, word ptr [eax+edx*8]
0x92CEB3: cmp     ebx, edi
0x92CEB5: jge     short loc_92CEBD
0x92CEB7: mov     eax, edi
0x92CEB9: mov     edi, ebx
0x92CEBB: mov     ebx, eax
0x92CEBD: mov     eax, [esi+4]
0x92CEC0: movzx   edx, word ptr [eax]
0x92CEC3: cmp     dword ptr [esi+8], 2
0x92CEC7: mov     [esp+70h+var_60], edx
0x92CECB: jnz     short loc_92CF1D
0x92CECD: mov     eax, [esi+4]
0x92CED0: movzx   esi, word ptr [eax+2]
0x92CED4: movzx   eax, word ptr [eax+esi*8]
0x92CED8: cmp     eax, edx
0x92CEDA: mov     [esp+70h+var_5C], eax
0x92CEDE: jge     short loc_92CEE8
0x92CEE0: mov     [esp+70h+var_5C], edx
0x92CEE4: mov     [esp+70h+var_60], eax
0x92CEE8: mov     [esp+70h+var_4C], 4
0x92CEF0: jmp     short loc_92CF1D
0x92CEF2: cmp     edi, 2
0x92CEF5: jnz     loc_92D3CB
0x92CEFB: mov     edx, [eax+4]
0x92CEFE: mov     eax, [esi+4]
0x92CF01: movzx   edi, word ptr [edx]
0x92CF04: movzx   edx, word ptr [eax+2]
0x92CF08: movzx   ebx, word ptr [eax+edx*8]
0x92CF0C: cmp     ebx, edi
0x92CF0E: movzx   eax, word ptr [eax]
0x92CF11: mov     [esp+70h+var_60], eax
0x92CF15: jge     short loc_92CF1D
0x92CF17: mov     eax, edi
0x92CF19: mov     edi, ebx
0x92CF1B: mov     ebx, eax
0x92CF1D: mov     edx, edi
0x92CF1F: shl     edx, 4
0x92CF22: lea     esi, [edx+ecx]
0x92CF25: mov     eax, ebx
0x92CF27: shl     eax, 4
0x92CF2A: fld     dword ptr [eax+ecx]
0x92CF2D: lea     edx, [eax+ecx]
0x92CF30: fsub    dword ptr [esi]
0x92CF32: lea     eax, [esp+70h+var_50]
0x92CF36: fstp    dword ptr [esp+70h+var_30]
0x92CF3A: fld     dword ptr [edx+4]
0x92CF3D: fsub    dword ptr [esi+4]
0x92CF40: fstp    dword ptr [esp+70h+var_30+4]
0x92CF44: fld     dword ptr [edx+8]
0x92CF47: fsub    dword ptr [esi+8]
0x92CF4A: fstp    dword ptr [esp+70h+var_30+8]
0x92CF4E: fld     dword ptr [edx+0Ch]
0x92CF51: fsub    dword ptr [esi+0Ch]
0x92CF54: fstp    dword ptr [esp+70h+var_30+0Ch]
0x92CF58: movaps  xmm6, [esp+70h+var_30]
0x92CF5D: movaps  xmm0, xmm6
0x92CF60: mulps   xmm0, xmm6
0x92CF63: movaps  xmm1, xmm0
0x92CF66: shufps  xmm1, xmm0, 55h ; 'U'
0x92CF6A: addss   xmm1, xmm0
0x92CF6E: movaps  xmm2, xmm0
0x92CF71: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92CF75: addss   xmm2, xmm1
0x92CF79: movss   dword ptr [eax], xmm2
0x92CF7D: mov     eax, [esp+70h+var_60]
0x92CF81: shl     eax, 4
0x92CF84: fld     dword ptr [eax+ecx]
0x92CF87: add     eax, ecx
0x92CF89: fsub    dword ptr [edx]
0x92CF8B: lea     ecx, [esp+70h+var_58]
0x92CF8F: fstp    dword ptr [esp+70h+var_40]
0x92CF93: fld     dword ptr [eax+4]
0x92CF96: fsub    dword ptr [edx+4]
0x92CF99: fstp    dword ptr [esp+70h+var_40+4]
0x92CF9D: fld     dword ptr [eax+8]
0x92CFA0: fsub    dword ptr [edx+8]
0x92CFA3: fstp    dword ptr [esp+70h+var_40+8]
0x92CFA7: fld     dword ptr [eax+0Ch]
0x92CFAA: fsub    dword ptr [edx+0Ch]
0x92CFAD: fstp    dword ptr [esp+70h+var_40+0Ch]
0x92CFB1: movaps  xmm1, [esp+70h+var_40]
0x92CFB6: fld     dword ptr [esi]
0x92CFB8: mulps   xmm1, xmm1
0x92CFBB: fsub    dword ptr [eax]
0x92CFBD: movaps  xmm2, xmm1
0x92CFC0: shufps  xmm2, xmm1, 55h ; 'U'
0x92CFC4: addss   xmm2, xmm1
0x92CFC8: fstp    dword ptr [esp+70h+var_20]
0x92CFCC: movaps  xmm3, xmm1
0x92CFCF: fld     dword ptr [esi+4]
0x92CFD2: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x92CFD6: fsub    dword ptr [eax+4]
0x92CFD9: addss   xmm3, xmm2
0x92CFDD: movss   dword ptr [ecx], xmm3
0x92CFE1: fstp    dword ptr [esp+70h+var_20+4]
0x92CFE5: fld     dword ptr [esi+8]
0x92CFE8: fsub    dword ptr [eax+8]
0x92CFEB: fstp    dword ptr [esp+70h+var_20+8]
0x92CFEF: fld     dword ptr [esi+0Ch]
0x92CFF2: fsub    dword ptr [eax+0Ch]
0x92CFF5: lea     eax, [esp+70h+var_54]
0x92CFF9: fstp    dword ptr [esp+70h+var_20+0Ch]
0x92CFFD: movaps  xmm2, [esp+70h+var_20]
0x92D002: mulps   xmm2, xmm2
0x92D005: movaps  xmm3, xmm2
0x92D008: shufps  xmm3, xmm2, 55h ; 'U'
0x92D00C: addss   xmm3, xmm2
0x92D010: movaps  xmm4, xmm2
0x92D013: shufps  xmm4, xmm2, 0AAh ; 'ª'
0x92D017: addss   xmm4, xmm3
0x92D01B: movss   dword ptr [eax], xmm4
0x92D01F: mov     ecx, [esp+70h+var_54]
0x92D023: movaps  xmm3, xmm0
0x92D026: shufps  xmm3, xmm0, 55h ; 'U'
0x92D02A: mov     [esp+70h+var_54], ecx
0x92D02E: addss   xmm3, xmm0
0x92D032: movaps  xmm4, xmm0
0x92D035: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x92D039: movaps  xmm0, xmm4
0x92D03C: addss   xmm0, xmm3
0x92D040: movaps  [esp+70h+var_10], xmm0
0x92D045: rsqrtss xmm3, xmm0
0x92D049: movss   dword ptr [esp+70h+var_10], xmm3
0x92D04F: movaps  xmm5, [esp+70h+var_10]
0x92D054: mulss   xmm0, xmm5
0x92D058: mulss   xmm0, xmm5
0x92D05C: mov     [esp+70h+var_48], 40400000h
0x92D064: movss   xmm3, [esp+70h+var_48]
0x92D06A: mov     [esp+70h+var_48], 3F000000h
0x92D072: movss   xmm4, [esp+70h+var_48]
0x92D078: movaps  xmm7, xmm3
0x92D07B: subss   xmm7, xmm0
0x92D07F: movaps  xmm0, xmm4
0x92D082: mulss   xmm0, xmm5
0x92D086: mulss   xmm0, xmm7
0x92D08A: movaps  xmm5, xmm0
0x92D08D: shufps  xmm5, xmm0, 0
0x92D091: movaps  xmm0, xmm1
0x92D094: shufps  xmm0, xmm1, 55h ; 'U'
0x92D098: addss   xmm0, xmm1
0x92D09C: mulps   xmm5, xmm6
0x92D09F: movaps  [esp+70h+var_30], xmm5
0x92D0A4: movaps  xmm5, xmm0
0x92D0A7: movaps  xmm0, xmm1
0x92D0AA: shufps  xmm0, xmm1, 0AAh ; 'ª'
0x92D0AE: addss   xmm0, xmm5
0x92D0B2: movaps  [esp+70h+var_10], xmm0
0x92D0B7: rsqrtss xmm1, xmm0
0x92D0BB: movss   dword ptr [esp+70h+var_10], xmm1
0x92D0C1: movaps  xmm1, [esp+70h+var_10]
0x92D0C6: mulss   xmm0, xmm1
0x92D0CA: mulss   xmm0, xmm1
0x92D0CE: movaps  xmm5, xmm3
0x92D0D1: subss   xmm5, xmm0
0x92D0D5: movaps  xmm0, xmm4
0x92D0D8: mulss   xmm0, xmm1
0x92D0DC: mulss   xmm0, xmm5
0x92D0E0: movaps  xmm1, xmm0
0x92D0E3: shufps  xmm1, xmm0, 0
0x92D0E7: mulps   xmm1, [esp+70h+var_40]
0x92D0EC: movaps  [esp+70h+var_40], xmm1
0x92D0F1: fld     dword ptr [esp+70h+var_40]
0x92D0F5: fsub    dword ptr [esp+70h+var_30]
0x92D0F9: movaps  xmm0, xmm2
0x92D0FC: shufps  xmm0, xmm2, 55h ; 'U'
0x92D100: addss   xmm0, xmm2
0x92D104: movaps  xmm1, xmm0
0x92D107: movaps  xmm0, xmm2
0x92D10A: shufps  xmm0, xmm2, 0AAh ; 'ª'
0x92D10E: addss   xmm0, xmm1
0x92D112: movaps  [esp+70h+var_10], xmm0
0x92D117: rsqrtss xmm1, xmm0
0x92D11B: movss   dword ptr [esp+70h+var_10], xmm1
0x92D121: movaps  xmm1, [esp+70h+var_10]
0x92D126: fstp    dword ptr [esp+70h+var_10]
0x92D12A: fld     dword ptr [esp+70h+var_40+4]
0x92D12E: mulss   xmm0, xmm1
0x92D132: fsub    dword ptr [esp+70h+var_30+4]
0x92D136: mulss   xmm0, xmm1
0x92D13A: movaps  xmm2, xmm3
0x92D13D: subss   xmm2, xmm0
0x92D141: fstp    dword ptr [esp+70h+var_10+4]
0x92D145: movaps  xmm0, xmm4
0x92D148: fld     dword ptr [esp+70h+var_40+8]
0x92D14C: mulss   xmm0, xmm1
0x92D150: fsub    dword ptr [esp+70h+var_30+8]
0x92D154: mulss   xmm0, xmm2
0x92D158: movaps  xmm1, xmm0
0x92D15B: shufps  xmm1, xmm0, 0
0x92D15F: mulps   xmm1, [esp+70h+var_20]
0x92D164: fstp    dword ptr [esp+70h+var_10+8]
0x92D168: fld     dword ptr [esp+70h+var_40+0Ch]
0x92D16C: movaps  [esp+70h+var_20], xmm1
0x92D171: fsub    dword ptr [esp+70h+var_30+0Ch]
0x92D175: fstp    dword ptr [esp+70h+var_10+0Ch]
0x92D179: movaps  xmm0, [esp+70h+var_10]
0x92D17E: mulps   xmm0, xmm0
0x92D181: movaps  xmm1, xmm0
0x92D184: shufps  xmm1, xmm0, 55h ; 'U'
0x92D188: movaps  xmm2, xmm0
0x92D18B: lea     eax, [esp+70h+var_48]
0x92D18F: addss   xmm1, xmm0
0x92D193: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92D197: addss   xmm2, xmm1
0x92D19B: movss   dword ptr [eax], xmm2
0x92D19F: fld     [esp+70h+var_48]
0x92D1A3: fcomp   [ebp+arg_4]
0x92D1A6: fnstsw  ax
0x92D1A8: test    ah, 5
0x92D1AB: jp      loc_92D3EE
0x92D1B1: cmp     [esp+70h+var_4C], 4
0x92D1B6: jnz     loc_92D323
0x92D1BC: mov     ecx, [esp+70h+var_5C]
0x92D1C0: mov     eax, [esp+70h+var_44]
0x92D1C4: shl     ecx, 4
0x92D1C7: fld     dword ptr [ecx+eax]
0x92D1CA: add     ecx, eax
0x92D1CC: fsub    dword ptr [edx]
0x92D1CE: lea     eax, [esp+70h+var_44]
0x92D1D2: fstp    dword ptr [esp+70h+var_30]
0x92D1D6: fld     dword ptr [ecx+4]
0x92D1D9: fsub    dword ptr [edx+4]
0x92D1DC: fstp    dword ptr [esp+70h+var_30+4]
0x92D1E0: fld     dword ptr [ecx+8]
0x92D1E3: fsub    dword ptr [edx+8]
0x92D1E6: fstp    dword ptr [esp+70h+var_30+8]
0x92D1EA: fld     dword ptr [ecx+0Ch]
0x92D1ED: fsub    dword ptr [edx+0Ch]
0x92D1F0: lea     edx, [esp+70h+var_48]
0x92D1F4: fstp    dword ptr [esp+70h+var_30+0Ch]
0x92D1F8: movaps  xmm2, [esp+70h+var_30]
0x92D1FD: fld     dword ptr [esp+70h+var_40]
0x92D201: movaps  xmm0, xmm2
0x92D204: mulps   xmm0, xmm2
0x92D207: movaps  xmm1, xmm0
0x92D20A: shufps  xmm1, xmm0, 55h ; 'U'
0x92D20E: addss   xmm1, xmm0
0x92D212: movaps  xmm5, xmm0
0x92D215: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x92D219: addss   xmm5, xmm1
0x92D21D: movaps  xmm1, xmm0
0x92D220: shufps  xmm1, xmm0, 55h ; 'U'
0x92D224: addss   xmm1, xmm0
0x92D228: movss   dword ptr [edx], xmm5
0x92D22C: movaps  xmm5, xmm0
0x92D22F: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x92D233: movaps  xmm0, xmm5
0x92D236: addss   xmm0, xmm1
0x92D23A: movaps  [esp+70h+var_10], xmm0
0x92D23F: rsqrtss xmm1, xmm0
0x92D243: movss   dword ptr [esp+70h+var_10], xmm1
0x92D249: movaps  xmm1, [esp+70h+var_10]
0x92D24E: mulss   xmm0, xmm1
0x92D252: mulss   xmm0, xmm1
0x92D256: subss   xmm3, xmm0
0x92D25A: mulss   xmm4, xmm1
0x92D25E: mulss   xmm4, xmm3
0x92D262: movaps  xmm0, xmm4
0x92D265: shufps  xmm0, xmm4, 0
0x92D269: mulps   xmm0, xmm2
0x92D26C: movaps  [esp+70h+var_30], xmm0
0x92D271: fsub    dword ptr [esp+70h+var_30]
0x92D275: fstp    dword ptr [esp+70h+var_10]
0x92D279: fld     dword ptr [esp+70h+var_40+4]
0x92D27D: fsub    dword ptr [esp+70h+var_30+4]
0x92D281: fstp    dword ptr [esp+70h+var_10+4]
0x92D285: fld     dword ptr [esp+70h+var_40+8]
0x92D289: fsub    dword ptr [esp+70h+var_30+8]
0x92D28D: fstp    dword ptr [esp+70h+var_10+8]
0x92D291: fld     dword ptr [esp+70h+var_40+0Ch]
0x92D295: fsub    dword ptr [esp+70h+var_30+0Ch]
0x92D299: fstp    dword ptr [esp+70h+var_10+0Ch]
0x92D29D: movaps  xmm0, [esp+70h+var_10]
0x92D2A2: mulps   xmm0, xmm0
0x92D2A5: movaps  xmm1, xmm0
0x92D2A8: shufps  xmm1, xmm0, 55h ; 'U'
0x92D2AC: movaps  xmm2, xmm0
0x92D2AF: addss   xmm1, xmm0
0x92D2B3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92D2B7: addss   xmm2, xmm1
0x92D2BB: movss   dword ptr [eax], xmm2
0x92D2BF: fld     [esp+70h+var_44]
0x92D2C3: fcomp   [ebp+arg_4]
0x92D2C6: fnstsw  ax
0x92D2C8: test    ah, 5
0x92D2CB: jp      loc_92D3EE
0x92D2D1: fld     [esp+70h+var_48]
0x92D2D5: fcomp   [esp+70h+var_58]
0x92D2D9: fnstsw  ax
0x92D2DB: test    ah, 41h
0x92D2DE: jnz     short loc_92D323
0x92D2E0: mov     edx, [esp+70h+var_5C]
0x92D2E4: push    esi
0x92D2E5: lea     eax, [esp+74h+var_20]
0x92D2E9: mov     [esp+74h+var_60], edx
0x92D2ED: call    sub_92CA20
0x92D2F2: movaps  xmm0, [esp+74h+var_20]
0x92D2F7: mulps   xmm0, xmm0
0x92D2FA: movaps  xmm1, xmm0
0x92D2FD: shufps  xmm1, xmm0, 55h ; 'U'
0x92D301: movaps  xmm2, xmm0
0x92D304: addss   xmm1, xmm0
0x92D308: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92D30C: lea     eax, [esp+74h+var_44]
0x92D310: addss   xmm2, xmm1
0x92D314: movss   dword ptr [eax], xmm2
0x92D318: mov     ecx, [esp+74h+var_44]
0x92D31C: add     esp, 4
0x92D31F: mov     [esp+70h+var_54], ecx
0x92D323: fld     [esp+70h+var_58]
0x92D327: fcomp   [esp+70h+var_54]
0x92D32B: fnstsw  ax
0x92D32D: test    ah, 41h
0x92D330: jnz     short loc_92D338
0x92D332: fld     [esp+70h+var_58]
0x92D336: jmp     short loc_92D33C
0x92D338: fld     [esp+70h+var_54]
0x92D33C: fld     [esp+70h+var_50]
0x92D340: fcomp   st(1)
0x92D342: fnstsw  ax
0x92D344: test    ah, 41h
0x92D347: jnz     short loc_92D34F
0x92D349: fstp    st
0x92D34B: fld     [esp+70h+var_50]
0x92D34F: fld     st
0x92D351: fld     [esp+70h+var_50]
0x92D355: fucompp
0x92D357: fnstsw  ax
0x92D359: test    ah, 44h
0x92D35C: jp      short loc_92D377
0x92D35E: mov     ecx, [ebp+arg_10]
0x92D361: fstp    st
0x92D363: push    ebx
0x92D364: push    edi
0x92D365: call    sub_933870
0x92D36A: mov     eax, [ebp+arg_0]
0x92D36D: mov     byte ptr [eax], 1
0x92D370: pop     edi
0x92D371: pop     esi
0x92D372: pop     ebx
0x92D373: mov     esp, ebp
0x92D375: pop     ebp
0x92D376: retn
0x92D377: fld     st
0x92D379: fld     [esp+70h+var_58]
0x92D37D: fucompp
0x92D37F: fnstsw  ax
0x92D381: test    ah, 44h
0x92D384: jp      short loc_92D3A3
0x92D386: mov     edx, [esp+70h+var_60]
0x92D38A: fstp    st
0x92D38C: mov     ecx, [ebp+arg_10]
0x92D38F: push    edx
0x92D390: push    ebx
0x92D391: call    sub_933870
0x92D396: mov     eax, [ebp+arg_0]
0x92D399: mov     byte ptr [eax], 1
0x92D39C: pop     edi
0x92D39D: pop     esi
0x92D39E: pop     ebx
0x92D39F: mov     esp, ebp
0x92D3A1: pop     ebp
0x92D3A2: retn
0x92D3A3: fld     [esp+70h+var_54]
0x92D3A7: fucompp
0x92D3A9: fnstsw  ax
0x92D3AB: test    ah, 44h
0x92D3AE: jp      short loc_92D3E1
0x92D3B0: mov     eax, [esp+70h+var_60]
0x92D3B4: mov     ecx, [ebp+arg_10]
0x92D3B7: push    edi
0x92D3B8: push    eax
0x92D3B9: call    sub_933870
0x92D3BE: mov     eax, [ebp+arg_0]
0x92D3C1: mov     byte ptr [eax], 1
0x92D3C4: pop     edi
0x92D3C5: pop     esi
0x92D3C6: pop     ebx
0x92D3C7: mov     esp, ebp
0x92D3C9: pop     ebp
0x92D3CA: retn
0x92D3CB: mov     ecx, [esi+4]
0x92D3CE: movzx   edx, word ptr [ecx]
0x92D3D1: mov     eax, [eax+4]
0x92D3D4: movzx   ecx, word ptr [eax]
0x92D3D7: push    edx
0x92D3D8: push    ecx
0x92D3D9: mov     ecx, [ebp+arg_10]
0x92D3DC: call    sub_933870
0x92D3E1: mov     eax, [ebp+arg_0]
0x92D3E4: mov     byte ptr [eax], 1
0x92D3E7: pop     edi
0x92D3E8: pop     esi
0x92D3E9: pop     ebx
0x92D3EA: mov     esp, ebp
0x92D3EC: pop     ebp
0x92D3ED: retn
0x92D3EE: mov     eax, [ebp+arg_0]
0x92D3F1: pop     edi
0x92D3F2: pop     esi
0x92D3F3: mov     byte ptr [eax], 0
0x92D3F6: pop     ebx
0x92D3F7: mov     esp, ebp
0x92D3F9: pop     ebp
0x92D3FA: retn
