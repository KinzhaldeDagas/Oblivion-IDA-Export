0x472720: mov     eax, [esp+arg_8]
0x472724: test    eax, eax
0x472726: jz      short loc_47272C
0x472728: fldz
0x47272A: fstp    dword ptr [eax]
0x47272C: mov     eax, [esp+MaxCount]
0x472730: mov     eax, [ecx+eax*4+0A0h]
0x472737: test    eax, eax
0x472739: push    ebp
0x47273A: jz      loc_4727CB
0x472740: mov     ebp, [esp+4+Str2]
0x472744: test    ebp, ebp
0x472746: jz      loc_4727CB
0x47274C: mov     eax, [eax+20h]
0x47274F: push    ebx
0x472750: mov     ebx, [eax+0Ch]
0x472753: push    edi
0x472754: mov     edi, [eax+10h]
0x472757: mov     eax, ebp
0x472759: mov     [esp+0Ch+Str2], edi
0x47275D: lea     edx, [eax+1]
0x472760: mov     cl, [eax]
0x472762: add     eax, 1
0x472765: test    cl, cl
0x472767: jnz     short loc_472760
0x472769: sub     eax, edx
0x47276B: mov     [esp+0Ch+MaxCount], eax
0x47276F: jnz     short loc_47277A
0x472771: pop     edi
0x472772: pop     ebx
0x472773: or      eax, 0FFFFFFFFh
0x472776: pop     ebp
0x472777: retn    0Ch
0x47277A: push    esi
0x47277B: xor     esi, esi
0x47277D: test    ebx, ebx
0x47277F: jbe     short loc_4727A7
0x472781: add     edi, 4
0x472784: mov     eax, [edi]
0x472786: test    eax, eax
0x472788: jz      short loc_47279D
0x47278A: mov     ecx, [esp+10h+MaxCount]
0x47278E: push    ecx; MaxCount
0x47278F: push    ebp; Str2
0x472790: push    eax; Str1
0x472791: call    __strnicmp
0x472796: add     esp, 0Ch
0x472799: test    eax, eax
0x47279B: jz      short loc_4727B1
0x47279D: add     esi, 1
0x4727A0: add     edi, 8
0x4727A3: cmp     esi, ebx
0x4727A5: jb      short loc_472784
0x4727A7: pop     esi
0x4727A8: pop     edi
0x4727A9: pop     ebx
0x4727AA: or      eax, 0FFFFFFFFh
0x4727AD: pop     ebp
0x4727AE: retn    0Ch
0x4727B1: mov     eax, [esp+10h+arg_8]
0x4727B5: test    eax, eax
0x4727B7: jz      short loc_4727C2
0x4727B9: mov     edx, [esp+10h+Str2]
0x4727BD: fld     dword ptr [edx+esi*8]
0x4727C0: fstp    dword ptr [eax]
0x4727C2: mov     eax, esi
0x4727C4: pop     esi
0x4727C5: pop     edi
0x4727C6: pop     ebx
0x4727C7: pop     ebp
0x4727C8: retn    0Ch
0x4727CB: or      eax, 0FFFFFFFFh
0x4727CE: pop     ebp
0x4727CF: retn    0Ch
