0x4BC4A0: push    ecx
0x4BC4A1: fld     dword ptr ds:0A32048h
0x4BC4A7: push    ebp
0x4BC4A8: push    edi
0x4BC4A9: fstp    [esp+0Ch+var_4]
0x4BC4AD: mov     edi, [esp+0Ch+arg_4]
0x4BC4B1: xor     ebp, ebp
0x4BC4B3: test    edi, edi
0x4BC4B5: jz      short loc_4BC526
0x4BC4B7: push    ebx
0x4BC4B8: mov     ebx, [esp+10h+arg_0]
0x4BC4BC: push    esi
0x4BC4BD: lea     ecx, [ecx+0]
0x4BC4C0: mov     esi, [edi]
0x4BC4C2: test    esi, esi
0x4BC4C4: jz      short loc_4BC51D
0x4BC4C6: mov     eax, [esi]
0x4BC4C8: mov     edx, [eax+170h]
0x4BC4CE: mov     ecx, esi
0x4BC4D0: call    edx
0x4BC4D2: test    eax, eax
0x4BC4D4: jz      short loc_4BC51D
0x4BC4D6: mov     eax, [esi]
0x4BC4D8: mov     edx, [eax+170h]
0x4BC4DE: mov     ecx, esi
0x4BC4E0: call    edx
0x4BC4E2: cmp     byte ptr [eax+4], 29h ; ')'
0x4BC4E6: jnz     short loc_4BC51D
0x4BC4E8: push    esi
0x4BC4E9: push    ebx
0x4BC4EA: call    sub_4BC2E0
0x4BC4EF: add     esp, 8
0x4BC4F2: test    al, al
0x4BC4F4: jz      short loc_4BC51D
0x4BC4F6: mov     eax, [esi]
0x4BC4F8: mov     edx, [eax+170h]
0x4BC4FE: mov     ecx, esi
0x4BC500: call    edx
0x4BC502: mov     ecx, eax
0x4BC504: fld     dword ptr [ecx+2Ch]
0x4BC507: fld     [esp+14h+var_4]
0x4BC50B: fcompp
0x4BC50D: fnstsw  ax
0x4BC50F: test    ah, 41h
0x4BC512: jnz     short loc_4BC51D
0x4BC514: fld     dword ptr [ecx+2Ch]
0x4BC517: mov     ebp, esi
0x4BC519: fstp    [esp+14h+var_4]
0x4BC51D: mov     edi, [edi+4]
0x4BC520: test    edi, edi
0x4BC522: jnz     short loc_4BC4C0
0x4BC524: pop     esi
0x4BC525: pop     ebx
0x4BC526: pop     edi
0x4BC527: mov     eax, ebp
0x4BC529: pop     ebp
0x4BC52A: pop     ecx
0x4BC52B: retn
