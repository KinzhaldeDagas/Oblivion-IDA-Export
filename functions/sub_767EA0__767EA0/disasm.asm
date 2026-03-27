0x767EA0: sub     esp, 4Ch
0x767EA3: mov     eax, [esp+4Ch+arg_0]
0x767EA7: push    ebx
0x767EA8: push    ebp
0x767EA9: push    esi
0x767EAA: mov     esi, ecx
0x767EAC: movzx   ecx, word ptr [eax+10h]
0x767EB0: push    edi
0x767EB1: mov     edi, [eax+1Ch]
0x767EB4: lea     eax, ds:0[ecx*4]
0x767EBB: movzx   eax, ax
0x767EBE: movzx   ebp, ax
0x767EC1: mov     [esp+5Ch+var_34], eax
0x767EC5: lea     eax, [ebp+ebp*2+0]
0x767EC9: cdq
0x767ECA: sub     eax, edx
0x767ECC: mov     dl, byte ptr [esp+5Ch+arg_4]
0x767ED0: mov     ebx, eax
0x767ED2: movzx   eax, cx
0x767ED5: add     eax, eax
0x767ED7: shr     dl, 3
0x767EDA: mov     [edi+3Ch], eax
0x767EDD: mov     [edi+40h], eax
0x767EE0: xor     eax, eax
0x767EE2: sar     ebx, 1
0x767EE4: and     dl, 1
0x767EE7: cmp     [edi+1Ch], eax
0x767EEA: mov     [esp+5Ch+var_10], edi
0x767EEE: mov     [esp+5Ch+var_1C], ecx
0x767EF2: mov     [esp+5Ch+var_18], ebp
0x767EF6: mov     [esp+5Ch+var_14], ebx
0x767EFA: mov     byte ptr [esp+5Ch+var_4C+3], dl
0x767EFE: mov     [edi+14h], ebp
0x767F01: mov     [edi+18h], ebp
0x767F04: mov     [edi+4Ch], eax
0x767F07: mov     [edi+48h], eax
0x767F0A: mov     dword ptr [edi+44h], 1
0x767F11: jbe     short loc_767F18
0x767F13: mov     ecx, [edi+24h]
0x767F16: mov     eax, [ecx]
0x767F18: test    dl, dl
0x767F1A: mov     [esp+5Ch+var_38], eax
0x767F1E: jz      loc_768016
0x767F24: mov     cx, word ptr [esp+5Ch+var_34]
0x767F29: cmp     cx, [esi+0A4Ch]
0x767F30: jbe     loc_767FE8
0x767F36: mov     edx, [esi+0A40h]
0x767F3C: push    edx
0x767F3D: call    FormHeapFree
0x767F42: mov     eax, [esi+0A44h]
0x767F48: push    eax
0x767F49: call    FormHeapFree
0x767F4E: mov     ecx, [esi+0A48h]
0x767F54: push    ecx
0x767F55: call    FormHeapFree
0x767F5A: xor     ecx, ecx
0x767F5C: mov     eax, ebp
0x767F5E: mov     edx, 8
0x767F63: mul     edx
0x767F65: seto    cl
0x767F68: neg     ecx
0x767F6A: or      ecx, eax
0x767F6C: push    ecx; Size
0x767F6D: call    FormHeapAlloc
0x767F72: mov     [esi+0A40h], eax
0x767F78: xor     ecx, ecx
0x767F7A: mov     eax, ebp
0x767F7C: mov     edx, 10h
0x767F81: mul     edx
0x767F83: seto    cl
0x767F86: neg     ecx
0x767F88: or      ecx, eax
0x767F8A: push    ecx; Size
0x767F8B: call    FormHeapAlloc
0x767F90: add     esp, 14h
0x767F93: test    eax, eax
0x767F95: mov     [esp+5Ch+var_20], eax
0x767F99: jz      short loc_767FAF
0x767F9B: push    offset sub_47EA50
0x767FA0: push    ebp
0x767FA1: push    10h
0x767FA3: push    eax
0x767FA4: call    sub_401080
0x767FA9: mov     eax, [esp+5Ch+var_20]
0x767FAD: jmp     short loc_767FB1
0x767FAF: xor     eax, eax
0x767FB1: mov     [esi+0A44h], eax
0x767FB7: xor     ecx, ecx
0x767FB9: mov     eax, ebp
0x767FBB: mov     edx, 8
0x767FC0: mul     edx
0x767FC2: seto    cl
0x767FC5: neg     ecx
0x767FC7: or      ecx, eax
0x767FC9: push    ecx; Size
0x767FCA: call    FormHeapAlloc
0x767FCF: mov     dl, byte ptr [esp+60h+var_4C+3]
0x767FD3: mov     [esi+0A48h], eax
0x767FD9: mov     ax, word ptr [esp+60h+var_34]
0x767FDE: add     esp, 4
0x767FE1: mov     [esi+0A4Ch], ax
0x767FE8: mov     eax, [esp+5Ch+var_38]
0x767FEC: test    eax, eax
0x767FEE: jz      short loc_768016
0x767FF0: cmp     dword ptr [edi+1Ch], 0
0x767FF4: mov     eax, [eax+14h]
0x767FF7: jbe     short loc_768000
0x767FF9: mov     ecx, [edi+20h]
0x767FFC: mov     ecx, [ecx]
0x767FFE: jmp     short loc_768002
0x768000: xor     ecx, ecx
0x768002: xor     edx, edx
0x768004: div     ecx
0x768006: mov     dl, byte ptr [esp+5Ch+var_4C+3]
0x76800A: cmp     ebp, eax
0x76800C: jbe     short loc_768016
0x76800E: mov     [esp+5Ch+arg_4], 0Fh
0x768016: movzx   eax, word ptr [esp+5Ch+arg_4]
0x76801B: or      eax, 0FFFFFFF7h
0x76801E: jz      loc_76833B
0x768024: mov     ecx, [esi+87Ch]
0x76802A: mov     edx, [ecx]
0x76802C: mov     eax, [edx+4Ch]
0x76802F: push    0
0x768031: call    eax
0x768033: mov     ecx, [esi+87Ch]
0x768039: mov     edx, [ecx]
0x76803B: mov     [esp+5Ch+var_30], eax
0x76803F: mov     eax, [edx+50h]
0x768042: push    0
0x768044: call    eax
0x768046: mov     ecx, [esp+5Ch+arg_0]
0x76804A: mov     edx, [ecx+14h]
0x76804D: mov     [esp+5Ch+var_2C], eax
0x768051: mov     eax, [edx+20h]
0x768054: mov     eax, [eax]
0x768056: test    eax, eax
0x768058: jz      short loc_76805F
0x76805A: mov     eax, [eax+8]
0x76805D: jmp     short loc_768061
0x76805F: xor     eax, eax
0x768061: mov     edx, [eax]
0x768063: mov     ecx, eax
0x768065: mov     eax, [edx+4Ch]
0x768068: call    eax
0x76806A: mov     ecx, [esp+5Ch+arg_0]
0x76806E: movzx   edx, ax
0x768071: mov     eax, [ecx+14h]
0x768074: mov     ecx, [eax+20h]
0x768077: mov     eax, [ecx]
0x768079: test    eax, eax
0x76807B: jz      short loc_768082
0x76807D: mov     ecx, [eax+8]
0x768080: jmp     short loc_768084
0x768082: xor     ecx, ecx
0x768084: movzx   edx, dx
0x768087: mov     [esp+5Ch+var_20], edx
0x76808B: mov     eax, [ecx]
0x76808D: mov     edx, [eax+50h]
0x768090: fild    [esp+5Ch+var_20]
0x768094: fld1
0x768096: fdivrp  st(1), st
0x768098: fstp    [esp+5Ch+var_24]
0x76809C: call    edx
0x76809E: movzx   eax, ax
0x7680A1: mov     [esp+5Ch+var_20], eax
0x7680A5: xor     eax, eax
0x7680A7: cmp     word ptr [esp+5Ch+var_1C], ax
0x7680AC: fild    [esp+5Ch+var_20]
0x7680B0: mov     [esp+5Ch+var_40], eax
0x7680B4: fld1
0x7680B6: fdivrp  st(1), st
0x7680B8: fstp    [esp+5Ch+var_20]
0x7680BC: jbe     loc_7682FD
0x7680C2: fld     [esp+5Ch+var_24]
0x7680C6: mov     [esp+5Ch+var_3C], eax
0x7680CA: fld     [esp+5Ch+var_20]
0x7680CE: fld     qword ptr ds:0A2FAA0h
0x7680D4: mov     ecx, [esp+5Ch+arg_0]
0x7680D8: mov     ecx, [ecx+8]
0x7680DB: add     ecx, [esp+5Ch+var_3C]
0x7680DF: movzx   edx, word ptr [ecx+2]
0x7680E3: test    dx, dx
0x7680E6: jge     short loc_7680F1
0x7680E8: add     edx, [esp+5Ch+var_30]
0x7680EC: test    dx, dx
0x7680EF: jl      short loc_7680E8
0x7680F1: mov     eax, [esp+5Ch+var_30]
0x7680F5: movsx   edi, dx
0x7680F8: cmp     edi, eax
0x7680FA: jl      short loc_768105
0x7680FC: sub     edx, eax
0x7680FE: movsx   edi, dx
0x768101: cmp     edi, eax
0x768103: jge     short loc_7680FC
0x768105: movzx   eax, word ptr [ecx]
0x768108: test    ax, ax
0x76810B: jge     short loc_768116
0x76810D: add     eax, [esp+5Ch+var_2C]
0x768111: test    ax, ax
0x768114: jl      short loc_76810D
0x768116: mov     edi, [esp+5Ch+var_2C]
0x76811A: movsx   ebx, ax
0x76811D: cmp     ebx, edi
0x76811F: jl      short loc_76812A
0x768121: sub     eax, edi
0x768123: movsx   ebx, ax
0x768126: cmp     ebx, edi
0x768128: jge     short loc_768121
0x76812A: movsx   edx, dx
0x76812D: mov     [esp+5Ch+var_20], edx
0x768131: movzx   edx, word ptr [ecx+4]
0x768135: fild    [esp+5Ch+var_20]
0x768139: movsx   eax, ax
0x76813C: fsub    st, st(1)
0x76813E: mov     [esp+5Ch+var_20], eax
0x768142: movzx   eax, word ptr [ecx+6]
0x768146: fstp    [esp+5Ch+var_28]
0x76814A: fild    [esp+5Ch+var_20]
0x76814E: mov     [esp+5Ch+var_20], edx
0x768152: movzx   edx, word ptr [ecx+0Ah]
0x768156: fsub    st, st(1)
0x768158: xor     ebp, ebp
0x76815A: fstp    [esp+5Ch+var_24]
0x76815E: xor     edi, edi
0x768160: fild    [esp+5Ch+var_20]
0x768164: mov     [esp+5Ch+var_20], eax
0x768168: fld     [esp+5Ch+var_28]
0x76816C: movzx   eax, word ptr [ecx+8]
0x768170: fld     st
0x768172: fadd    st, st(2)
0x768174: fstp    [esp+5Ch+var_48]
0x768178: fild    [esp+5Ch+var_20]
0x76817C: mov     [esp+5Ch+var_20], edx
0x768180: fld     [esp+5Ch+var_24]
0x768184: mov     edx, [esp+5Ch+var_40]
0x768188: fadd    st, st(1)
0x76818A: fstp    [esp+5Ch+var_C]
0x76818E: fild    [esp+5Ch+var_20]
0x768192: mov     [esp+5Ch+var_20], eax
0x768196: lea     eax, ds:0[edx*4]
0x76819D: movzx   edx, ax
0x7681A0: fmul    st, st(6)
0x7681A2: mov     [esp+5Ch+var_44], edx
0x7681A6: fstp    [esp+5Ch+var_28]
0x7681AA: fild    [esp+5Ch+var_20]
0x7681AE: fmul    st, st(5)
0x7681B0: fstp    [esp+5Ch+var_20]
0x7681B4: fld     st(5)
0x7681B6: fmulp   st(3), st
0x7681B8: fld     [esp+5Ch+var_28]
0x7681BC: fld     st
0x7681BE: faddp   st(4), st
0x7681C0: fxch    st(3)
0x7681C2: fstp    [esp+5Ch+var_8]
0x7681C6: fmul    st, st(4)
0x7681C8: fld     [esp+5Ch+var_20]
0x7681CC: mov     [esp+5Ch+var_20], edi
0x7681D0: fld     st
0x7681D2: faddp   st(2), st
0x7681D4: fxch    st(1)
0x7681D6: fstp    [esp+5Ch+var_4]
0x7681DA: fld     [esp+5Ch+var_48]
0x7681DE: jmp     short loc_7681E6
0x7681E0: fxch    st(1)
0x7681E2: fxch    st(3)
0x7681E4: fxch    st(2)
0x7681E6: mov     ax, bp
0x7681E9: shr     ax, 1
0x7681EC: mov     word ptr [esp+5Ch+var_48], ax
0x7681F1: jnz     short loc_7681FB
0x7681F3: fxch    st(2)
0x7681F5: fst     [esp+5Ch+var_28]
0x7681F9: jmp     short loc_768201
0x7681FB: fst     [esp+5Ch+var_28]
0x7681FF: fxch    st(2)
0x768201: and     edi, 80000001h
0x768207: fld     [esp+5Ch+var_28]
0x76820B: movzx   edx, word ptr [esp+5Ch+var_44]
0x768210: mov     eax, [esi+0A40h]
0x768216: fstp    dword ptr [eax+edx*8]
0x768219: jns     short loc_768220
0x76821B: dec     edi
0x76821C: or      edi, 0FFFFFFFEh
0x76821F: inc     edi
0x768220: jnz     short loc_768228
0x768222: fld     [esp+5Ch+var_24]
0x768226: jmp     short loc_76822C
0x768228: fld     [esp+5Ch+var_C]
0x76822C: mov     eax, [esi+0A40h]
0x768232: fstp    [esp+5Ch+var_28]
0x768236: fld     [esp+5Ch+var_28]
0x76823A: fstp    dword ptr [eax+edx*8+4]
0x76823E: mov     ebx, [ecx+0Ch]
0x768241: mov     eax, edx
0x768243: shl     eax, 4
0x768246: add     eax, [esi+0A44h]
0x76824C: cmp     word ptr [esp+5Ch+var_48], 0
0x768252: mov     [eax], ebx
0x768254: mov     ebx, [ecx+10h]
0x768257: mov     [eax+4], ebx
0x76825A: mov     ebx, [ecx+14h]
0x76825D: mov     [eax+8], ebx
0x768260: mov     ebx, [ecx+18h]
0x768263: mov     [eax+0Ch], ebx
0x768266: jnz     short loc_768270
0x768268: fxch    st(3)
0x76826A: fst     [esp+5Ch+var_28]
0x76826E: jmp     short loc_76827A
0x768270: fld     [esp+5Ch+var_8]
0x768274: fstp    [esp+5Ch+var_28]
0x768278: fxch    st(3)
0x76827A: test    edi, edi
0x76827C: fld     [esp+5Ch+var_28]
0x768280: mov     eax, [esi+0A48h]
0x768286: fstp    dword ptr [eax+edx*8]
0x768289: jnz     short loc_768293
0x76828B: fxch    st(1)
0x76828D: fst     [esp+5Ch+var_28]
0x768291: jmp     short loc_76829D
0x768293: fld     [esp+5Ch+var_4]
0x768297: fstp    [esp+5Ch+var_28]
0x76829B: fxch    st(1)
0x76829D: mov     edi, [esp+5Ch+var_20]
0x7682A1: fld     [esp+5Ch+var_28]
0x7682A5: mov     eax, [esi+0A48h]
0x7682AB: add     [esp+5Ch+var_44], 1
0x7682B0: fstp    dword ptr [eax+edx*8+4]
0x7682B4: add     ebp, 1
0x7682B7: add     edi, 1
0x7682BA: cmp     bp, 4
0x7682BE: mov     [esp+5Ch+var_20], edi
0x7682C2: jb      loc_7681E0
0x7682C8: mov     eax, [esp+5Ch+var_40]
0x7682CC: fstp    st(1)
0x7682CE: add     [esp+5Ch+var_3C], 1Ch
0x7682D3: fstp    st
0x7682D5: add     eax, 1
0x7682D8: fstp    st(1)
0x7682DA: cmp     ax, word ptr [esp+5Ch+var_1C]
0x7682DF: fstp    st
0x7682E1: mov     [esp+5Ch+var_40], eax
0x7682E5: jb      loc_7680D4
0x7682EB: mov     ebx, [esp+5Ch+var_14]
0x7682EF: fstp    st(2)
0x7682F1: mov     ebp, [esp+5Ch+var_18]
0x7682F5: fstp    st
0x7682F7: mov     edi, [esp+5Ch+var_10]
0x7682FB: fstp    st
0x7682FD: mov     ecx, [esp+5Ch+var_38]
0x768301: mov     edx, [esp+5Ch+arg_4]
0x768305: mov     eax, [esi+0A48h]
0x76830B: push    0
0x76830D: push    ecx
0x76830E: mov     ecx, [esi+0A44h]
0x768314: push    edx
0x768315: mov     edx, [esi+0A40h]
0x76831B: push    eax
0x76831C: mov     eax, [esp+6Ch+var_34]
0x768320: push    ecx
0x768321: mov     ecx, [esi+8B0h]
0x768327: push    edx
0x768328: push    eax
0x768329: push    edi
0x76832A: call    sub_777240
0x76832F: test    eax, eax
0x768331: jz      loc_76845F
0x768337: mov     dl, byte ptr [esp+5Ch+var_4C+3]
0x76833B: test    dl, dl
0x76833D: jz      loc_76845F
0x768343: cmp     ebx, [esi+0A54h]
0x768349: jbe     loc_768414
0x76834F: mov     ecx, [esi+0A50h]
0x768355: push    ecx
0x768356: call    FormHeapFree
0x76835B: xor     ecx, ecx
0x76835D: mov     eax, ebx
0x76835F: mov     edx, 2
0x768364: mul     edx
0x768366: seto    cl
0x768369: neg     ecx
0x76836B: or      ecx, eax
0x76836D: push    ecx; Size
0x76836E: call    FormHeapAlloc
0x768373: mov     [esi+0A50h], eax
0x768379: add     esp, 8
0x76837C: xor     eax, eax
0x76837E: xor     edx, edx
0x768380: test    ebp, ebp
0x768382: mov     [esi+0A54h], ebx
0x768388: jbe     loc_768414
0x76838E: mov     edi, edi
0x768390: mov     ebx, [esi+0A50h]
0x768396: movzx   edi, ax
0x768399: movzx   ecx, dx
0x76839C: mov     [ebx+edi*2], cx
0x7683A0: mov     ebp, [esi+0A50h]
0x7683A6: add     eax, 1
0x7683A9: movzx   ebx, ax
0x7683AC: add     eax, 1
0x7683AF: lea     edi, [ecx+1]
0x7683B2: mov     [ebp+ebx*2+0], di
0x7683B7: mov     ebp, [esi+0A50h]
0x7683BD: movzx   ebx, ax
0x7683C0: lea     edi, [ecx+2]
0x7683C3: mov     [ebp+ebx*2+0], di
0x7683C8: mov     ebp, [esi+0A50h]
0x7683CE: add     eax, 1
0x7683D1: movzx   ebx, ax
0x7683D4: mov     [ebp+ebx*2+0], di
0x7683D9: mov     ebp, [esi+0A50h]
0x7683DF: add     eax, 1
0x7683E2: movzx   ebx, ax
0x7683E5: lea     edi, [ecx+1]
0x7683E8: add     eax, 1
0x7683EB: mov     [ebp+ebx*2+0], di
0x7683F0: mov     ebx, [esi+0A50h]
0x7683F6: movzx   edi, ax
0x7683F9: add     ecx, 3
0x7683FC: add     edx, 4
0x7683FF: add     eax, 1
0x768402: cmp     edx, [esp+5Ch+var_18]
0x768406: mov     [ebx+edi*2], cx
0x76840A: jb      short loc_768390
0x76840C: mov     ebx, [esp+5Ch+var_14]
0x768410: mov     edi, [esp+5Ch+var_10]
0x768414: mov     eax, [edi+2Ch]
0x768417: mov     ebp, [edi+30h]
0x76841A: mov     edx, [esi+0A50h]
0x768420: mov     [esp+5Ch+arg_0], eax
0x768424: mov     al, [edi+10h]
0x768427: neg     al
0x768429: lea     ecx, [esp+5Ch+arg_0]
0x76842D: sbb     eax, eax
0x76842F: and     eax, 10h
0x768432: push    eax; Dst
0x768433: push    1; int
0x768435: push    ecx; int
0x768436: mov     ecx, [esi+8B4h]
0x76843C: push    ebp; int
0x76843D: push    ebx; int
0x76843E: push    ebx; Src
0x76843F: push    edx; int
0x768440: call    sub_7781F0
0x768445: mov     esi, eax
0x768447: cmp     ebp, esi
0x768449: jz      short loc_76845F
0x76844B: mov     ecx, edi
0x76844D: call    sub_777F40
0x768452: mov     eax, [esp+5Ch+arg_0]
0x768456: mov     [edi+30h], esi
0x768459: mov     [edi+28h], ebx
0x76845C: mov     [edi+2Ch], eax
0x76845F: pop     edi
0x768460: pop     esi
0x768461: pop     ebp
0x768462: pop     ebx
0x768463: add     esp, 4Ch
0x768466: retn    8
