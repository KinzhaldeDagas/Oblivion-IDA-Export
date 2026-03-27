0x6EC320: sub     esp, 8
0x6EC323: fld     dword ptr ds:0A7DEB4h
0x6EC329: push    ebx
0x6EC32A: mov     ebx, [esp+0Ch+arg_4]
0x6EC32E: push    esi
0x6EC32F: push    edi
0x6EC330: mov     edi, [esp+14h+arg_0]
0x6EC334: fstp    dword ptr [edi]
0x6EC336: mov     esi, ecx
0x6EC338: fld     dword ptr ds:0A7DEB4h
0x6EC33E: mov     eax, [esi]
0x6EC340: mov     edx, [eax+98h]
0x6EC346: fchs
0x6EC348: fstp    dword ptr [ebx]
0x6EC34A: mov     [esp+14h+var_4], 0
0x6EC352: call    edx
0x6EC354: test    ax, ax
0x6EC357: jbe     loc_6EC41A
0x6EC35D: push    ebp
0x6EC35E: mov     edi, edi
0x6EC360: movzx   edi, word ptr [esp+18h+var_4]
0x6EC365: mov     eax, [esi]
0x6EC367: mov     edx, [eax+0ACh]
0x6EC36D: push    edi
0x6EC36E: mov     ecx, esi
0x6EC370: call    edx
0x6EC372: mov     eax, [esi]
0x6EC374: mov     edx, [eax+0A8h]
0x6EC37A: push    edi
0x6EC37B: mov     ecx, esi
0x6EC37D: call    edx
0x6EC37F: mov     ebx, eax
0x6EC381: mov     eax, [esi]
0x6EC383: mov     edx, [eax+9Ch]
0x6EC389: push    edi
0x6EC38A: mov     ecx, esi
0x6EC38C: call    edx
0x6EC38E: mov     ebp, eax
0x6EC390: mov     eax, [esi]
0x6EC392: mov     edx, [eax+0ACh]
0x6EC398: push    edi
0x6EC399: mov     ecx, esi
0x6EC39B: sub     ebp, 1
0x6EC39E: call    edx
0x6EC3A0: mov     [esp+18h+var_8], al
0x6EC3A4: mov     eax, [esi]
0x6EC3A6: mov     edx, [eax+0A8h]
0x6EC3AC: push    edi
0x6EC3AD: mov     ecx, esi
0x6EC3AF: call    edx
0x6EC3B1: mov     ecx, eax
0x6EC3B3: movzx   eax, [esp+18h+var_8]
0x6EC3B8: imul    eax, ebp
0x6EC3BB: add     ecx, eax
0x6EC3BD: test    ebx, ebx
0x6EC3BF: jz      short loc_6EC3EF
0x6EC3C1: test    ecx, ecx
0x6EC3C3: jz      short loc_6EC3EF
0x6EC3C5: fld     dword ptr [ebx]
0x6EC3C7: mov     edx, [esp+18h+arg_0]
0x6EC3CB: fld     dword ptr [edx]
0x6EC3CD: fcompp
0x6EC3CF: fnstsw  ax
0x6EC3D1: test    ah, 41h
0x6EC3D4: jnz     short loc_6EC3DA
0x6EC3D6: fld     dword ptr [ebx]
0x6EC3D8: fstp    dword ptr [edx]
0x6EC3DA: fld     dword ptr [ecx]
0x6EC3DC: mov     edx, [esp+18h+arg_4]
0x6EC3E0: fld     dword ptr [edx]
0x6EC3E2: fcompp
0x6EC3E4: fnstsw  ax
0x6EC3E6: test    ah, 5
0x6EC3E9: jp      short loc_6EC3EF
0x6EC3EB: fld     dword ptr [ecx]
0x6EC3ED: fstp    dword ptr [edx]
0x6EC3EF: mov     edi, [esp+18h+var_4]
0x6EC3F3: mov     edx, [esi]
0x6EC3F5: mov     eax, [edx+98h]
0x6EC3FB: add     edi, 1
0x6EC3FE: mov     ecx, esi
0x6EC400: mov     [esp+18h+var_4], edi
0x6EC404: call    eax
0x6EC406: movzx   ecx, ax
0x6EC409: cmp     edi, ecx
0x6EC40B: jb      loc_6EC360
0x6EC411: mov     ebx, [esp+18h+arg_4]
0x6EC415: mov     edi, [esp+18h+arg_0]
0x6EC419: pop     ebp
0x6EC41A: fld     dword ptr [edi]
0x6EC41C: fld     dword ptr ds:0A7DEB4h
0x6EC422: fld     st
0x6EC424: fucomp  st(2)
0x6EC426: fnstsw  ax
0x6EC428: fstp    st(1)
0x6EC42A: test    ah, 44h
0x6EC42D: jp      short loc_6EC44D
0x6EC42F: fld     dword ptr [ebx]
0x6EC431: fxch    st(1)
0x6EC433: fchs
0x6EC435: fucompp
0x6EC437: fnstsw  ax
0x6EC439: test    ah, 44h
0x6EC43C: jp      short loc_6EC44F
0x6EC43E: fldz
0x6EC440: fst     dword ptr [edi]
0x6EC442: pop     edi
0x6EC443: fstp    dword ptr [ebx]
0x6EC445: pop     esi
0x6EC446: pop     ebx
0x6EC447: add     esp, 8
0x6EC44A: retn    8
0x6EC44D: fstp    st
0x6EC44F: pop     edi
0x6EC450: pop     esi
0x6EC451: pop     ebx
0x6EC452: add     esp, 8
0x6EC455: retn    8
