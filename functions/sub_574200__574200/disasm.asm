0x574200: push    0FFFFFFFFh
0x574202: push    offset SEH_574200
0x574207: mov     eax, large fs:0
0x57420D: push    eax
0x57420E: sub     esp, 28h
0x574211: push    ebx
0x574212: push    ebp
0x574213: push    esi
0x574214: push    edi
0x574215: mov     eax, ds:0B30AACh
0x57421A: xor     eax, esp
0x57421C: push    eax
0x57421D: lea     eax, [esp+48h+var_C]
0x574221: mov     large fs:0, eax
0x574227: mov     [esp+48h+var_1C], ecx
0x57422B: mov     esi, [esp+48h+arg_0]
0x57422F: add     esi, esi
0x574231: add     esi, esi
0x574233: xor     ecx, ecx
0x574235: mov     eax, esi
0x574237: mov     edx, 0Ch
0x57423C: mul     edx
0x57423E: seto    cl
0x574241: mov     [esp+48h+var_2C], esi
0x574245: neg     ecx
0x574247: or      ecx, eax
0x574249: push    ecx; Size
0x57424A: call    FormHeapAlloc
0x57424F: mov     [esp+4Ch+var_20], eax
0x574253: xor     ecx, ecx
0x574255: mov     eax, esi
0x574257: mov     edx, 0Ch
0x57425C: mul     edx
0x57425E: seto    cl
0x574261: neg     ecx
0x574263: or      ecx, eax
0x574265: push    ecx; Size
0x574266: call    FormHeapAlloc
0x57426B: mov     ebp, eax
0x57426D: xor     ecx, ecx
0x57426F: mov     eax, esi
0x574271: mov     edx, 8
0x574276: mul     edx
0x574278: seto    cl
0x57427B: mov     [esp+50h+var_30], ebp
0x57427F: neg     ecx
0x574281: or      ecx, eax
0x574283: push    ecx; Size
0x574284: call    FormHeapAlloc
0x574289: mov     [esp+54h+var_24], eax
0x57428D: xor     ecx, ecx
0x57428F: mov     eax, esi
0x574291: mov     edx, 10h
0x574296: mul     edx
0x574298: seto    cl
0x57429B: neg     ecx
0x57429D: or      ecx, eax
0x57429F: push    ecx; Size
0x5742A0: call    FormHeapAlloc
0x5742A5: mov     edi, eax
0x5742A7: add     esp, 10h
0x5742AA: mov     [esp+48h+var_28], edi
0x5742AE: xor     ebx, ebx
0x5742B0: cmp     edi, ebx
0x5742B2: mov     [esp+48h+var_4], ebx
0x5742B6: jz      short loc_5742C8
0x5742B8: push    offset sub_47EA50
0x5742BD: push    esi
0x5742BE: push    10h
0x5742C0: push    edi
0x5742C1: call    sub_401080
0x5742C6: jmp     short loc_5742CA
0x5742C8: xor     edi, edi
0x5742CA: cmp     esi, 4
0x5742CD: fldz
0x5742CF: mov     eax, [esp+48h+arg_4]
0x5742D3: fld     dword ptr ds:0A30634h
0x5742D9: mov     [esp+48h+var_34], edi
0x5742DD: mov     [esp+48h+var_4], 0FFFFFFFFh
0x5742E5: jl      loc_5743C1
0x5742EB: add     esi, 0FFFFFFFCh
0x5742EE: fxch    st(1)
0x5742F0: shr     esi, 2
0x5742F3: fst     [esp+48h+var_18]
0x5742F7: mov     ebx, [esp+48h+var_18]
0x5742FB: fst     [esp+48h+var_10]
0x5742FF: add     esi, 1
0x574302: fxch    st(1)
0x574304: mov     [esp+48h+arg_4], esi
0x574308: fst     [esp+48h+var_14]
0x57430C: add     esi, esi
0x57430E: add     esi, esi
0x574310: lea     ecx, [edi+20h]
0x574313: mov     edi, [esp+48h+var_14]
0x574317: mov     [esp+48h+var_28], esi
0x57431B: mov     esi, [esp+48h+var_10]
0x57431F: lea     edx, [ebp+18h]
0x574322: mov     ebp, [eax]
0x574324: mov     [ecx-20h], ebp
0x574327: mov     ebp, [eax+4]
0x57432A: mov     [ecx-1Ch], ebp
0x57432D: mov     ebp, [eax+8]
0x574330: mov     [ecx-18h], ebp
0x574333: mov     ebp, [eax+0Ch]
0x574336: mov     [ecx-14h], ebp
0x574339: mov     [edx-18h], ebx
0x57433C: mov     [edx-14h], edi
0x57433F: mov     [edx-10h], esi
0x574342: mov     ebp, [eax]
0x574344: mov     [ecx-10h], ebp
0x574347: mov     ebp, [eax+4]
0x57434A: mov     [ecx-0Ch], ebp
0x57434D: mov     ebp, [eax+8]
0x574350: mov     [ecx-8], ebp
0x574353: mov     ebp, [eax+0Ch]
0x574356: mov     [ecx-4], ebp
0x574359: mov     [edx-0Ch], ebx
0x57435C: mov     [edx-8], edi
0x57435F: mov     [edx-4], esi
0x574362: mov     ebp, [eax]
0x574364: mov     [ecx], ebp
0x574366: mov     ebp, [eax+4]
0x574369: mov     [ecx+4], ebp
0x57436C: mov     ebp, [eax+8]
0x57436F: mov     [ecx+8], ebp
0x574372: mov     ebp, [eax+0Ch]
0x574375: mov     [ecx+0Ch], ebp
0x574378: mov     [edx], ebx
0x57437A: mov     [edx+4], edi
0x57437D: mov     [edx+8], esi
0x574380: mov     ebp, [eax]
0x574382: mov     [ecx+10h], ebp
0x574385: mov     ebp, [eax+4]
0x574388: mov     [ecx+14h], ebp
0x57438B: mov     ebp, [eax+8]
0x57438E: mov     [ecx+18h], ebp
0x574391: mov     ebp, [eax+0Ch]
0x574394: mov     [ecx+1Ch], ebp
0x574397: mov     [edx+0Ch], ebx
0x57439A: mov     [edx+10h], edi
0x57439D: mov     [edx+14h], esi
0x5743A0: add     ecx, 40h ; '@'
0x5743A3: add     edx, 30h ; '0'
0x5743A6: sub     [esp+48h+arg_4], 1
0x5743AB: jnz     loc_574322
0x5743B1: mov     ebp, [esp+48h+var_30]
0x5743B5: mov     esi, [esp+48h+var_2C]
0x5743B9: mov     ebx, [esp+48h+var_28]
0x5743BD: mov     edi, [esp+48h+var_34]
0x5743C1: cmp     ebx, esi
0x5743C3: jge     short loc_57442B
0x5743C5: lea     ecx, [ebx+ebx*2]
0x5743C8: fxch    st(1)
0x5743CA: lea     edx, [ebp+ecx*4+0]
0x5743CE: fst     [esp+48h+var_18]
0x5743D2: mov     ecx, ebx
0x5743D4: fstp    [esp+48h+var_10]
0x5743D8: shl     ecx, 4
0x5743DB: add     ecx, edi
0x5743DD: fstp    [esp+48h+var_14]
0x5743E1: mov     edi, esi
0x5743E3: sub     edi, ebx
0x5743E5: mov     ebx, [esp+48h+var_10]
0x5743E9: lea     esp, [esp+0]
0x5743F0: mov     ebp, [eax]
0x5743F2: mov     [ecx], ebp
0x5743F4: mov     ebp, [eax+4]
0x5743F7: mov     [ecx+4], ebp
0x5743FA: mov     ebp, [eax+8]
0x5743FD: mov     [ecx+8], ebp
0x574400: mov     ebp, [eax+0Ch]
0x574403: mov     [ecx+0Ch], ebp
0x574406: mov     ebp, [esp+48h+var_18]
0x57440A: mov     [edx], ebp
0x57440C: mov     ebp, [esp+48h+var_14]
0x574410: mov     [edx+4], ebp
0x574413: mov     [edx+8], ebx
0x574416: add     ecx, 10h
0x574419: add     edx, 0Ch
0x57441C: sub     edi, 1
0x57441F: jnz     short loc_5743F0
0x574421: mov     edi, [esp+48h+var_34]
0x574425: mov     ebp, [esp+48h+var_30]
0x574429: jmp     short loc_57442F
0x57442B: fstp    st(1)
0x57442D: fstp    st
0x57442F: mov     ebx, [esp+48h+arg_0]
0x574433: xor     ecx, ecx
0x574435: lea     eax, [ebx+ebx*2]
0x574438: add     eax, eax
0x57443A: mov     edx, 2
0x57443F: mul     edx
0x574441: seto    cl
0x574444: neg     ecx
0x574446: or      ecx, eax
0x574448: push    ecx; Size
0x574449: call    FormHeapAlloc
0x57444E: push    0D0h ; 'Ð'; Size
0x574453: mov     [esp+50h+arg_0], eax
0x574457: call    FormHeapAlloc
0x57445C: add     esp, 8
0x57445F: mov     [esp+48h+arg_4], eax
0x574463: test    eax, eax
0x574465: mov     [esp+48h+var_4], 1
0x57446D: jz      short loc_57449C
0x57446F: mov     ecx, [esp+48h+arg_0]
0x574473: push    0
0x574475: push    0
0x574477: push    0
0x574479: push    0
0x57447B: push    ecx
0x57447C: mov     ecx, [esp+5Ch+var_24]
0x574480: lea     edx, [ebx+ebx]
0x574483: push    edx
0x574484: mov     edx, [esp+60h+var_20]
0x574488: push    0
0x57448A: push    1
0x57448C: push    ecx
0x57448D: push    edi
0x57448E: push    ebp
0x57448F: push    edx
0x574490: push    esi
0x574491: mov     ecx, eax
0x574493: call    sub_4A1780
0x574498: mov     esi, eax
0x57449A: jmp     short loc_57449E
0x57449C: xor     esi, esi
0x57449E: mov     eax, [esp+48h+var_1C]
0x5744A2: mov     ecx, [eax+0Ch]
0x5744A5: push    ecx; a2
0x5744A6: mov     ecx, esi; this
0x5744A8: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x5744B0: call    sub_405680
0x5744B5: mov     ecx, esi; this
0x5744B7: call    NiAVObject_InitializePropertyState
0x5744BC: mov     eax, esi
0x5744BE: mov     ecx, [esp+48h+var_C]
0x5744C2: mov     large fs:0, ecx
0x5744C9: pop     ecx
0x5744CA: pop     edi
0x5744CB: pop     esi
0x5744CC: pop     ebp
0x5744CD: pop     ebx
0x5744CE: add     esp, 34h
0x5744D1: retn    8
