0x8AC3C0: push    ebp
0x8AC3C1: mov     ebp, esp
0x8AC3C3: and     esp, 0FFFFFFF0h
0x8AC3C6: sub     esp, 18h
0x8AC3C9: push    ebx
0x8AC3CA: mov     ebx, [ebp+arg_4]
0x8AC3CD: movaps  xmm1, xmmword ptr [ebx]
0x8AC3D0: push    esi
0x8AC3D1: mov     esi, eax
0x8AC3D3: mov     eax, [edi]
0x8AC3D5: shl     esi, 6
0x8AC3D8: movaps  xmm0, xmmword ptr [eax+esi]
0x8AC3DC: mulps   xmm0, xmm1
0x8AC3DF: movaps  xmm1, xmm0
0x8AC3E2: shufps  xmm1, xmm0, 55h ; 'U'
0x8AC3E6: movaps  xmm2, xmm0
0x8AC3E9: addss   xmm1, xmm0
0x8AC3ED: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8AC3F1: lea     ecx, [esp+20h+var_14]
0x8AC3F5: addss   xmm2, xmm1
0x8AC3F9: movss   dword ptr [ecx], xmm2
0x8AC3FD: fld     [esp+20h+var_14]
0x8AC401: fcomp   dword ptr ds:0A34BA0h
0x8AC407: fnstsw  ax
0x8AC409: test    ah, 41h
0x8AC40C: jnz     loc_8AC51D
0x8AC412: fld     [esp+20h+var_14]
0x8AC416: fcomp   [ebp+arg_0]
0x8AC419: fnstsw  ax
0x8AC41B: test    ah, 5
0x8AC41E: jp      loc_8AC51D
0x8AC424: mov     edx, [edi+8]
0x8AC427: mov     eax, [edi+4]
0x8AC42A: and     edx, 3FFFFFFFh
0x8AC430: cmp     eax, edx
0x8AC432: jnz     short loc_8AC43F
0x8AC434: push    40h ; '@'
0x8AC436: push    edi
0x8AC437: call    sub_8A6EE0
0x8AC43C: add     esp, 8
0x8AC43F: mov     ecx, [edi]
0x8AC441: fld     [esp+20h+var_14]
0x8AC445: mov     edx, [edi+4]
0x8AC448: fchs
0x8AC44A: mov     eax, edx
0x8AC44C: fstp    [esp+20h+var_14]
0x8AC450: shl     eax, 6
0x8AC453: add     eax, ecx
0x8AC455: inc     edx
0x8AC456: mov     [edi+4], edx
0x8AC459: movaps  xmm0, xmmword ptr [ecx+esi]
0x8AC45D: movaps  xmmword ptr [eax], xmm0
0x8AC460: movaps  xmm0, xmmword ptr [ecx+esi+10h]
0x8AC465: movaps  xmmword ptr [eax+10h], xmm0
0x8AC469: mov     edx, [ecx+esi+20h]
0x8AC46D: movss   xmm0, [esp+20h+var_14]
0x8AC473: mov     [eax+20h], edx
0x8AC476: mov     edx, [ecx+esi+24h]
0x8AC47A: mov     [eax+24h], edx
0x8AC47D: mov     edx, [ecx+esi+28h]
0x8AC481: mov     [eax+28h], edx
0x8AC484: mov     edx, [ecx+esi+2Ch]
0x8AC488: movaps  xmm2, xmm0
0x8AC48B: shufps  xmm2, xmm0, 0
0x8AC48F: mov     [eax+2Ch], edx
0x8AC492: mov     ecx, [ecx+esi+30h]
0x8AC496: mov     [eax+30h], ecx
0x8AC499: movaps  xmm1, xmmword ptr [ebx]
0x8AC49C: mulps   xmm2, xmm1
0x8AC49F: movaps  xmm1, xmmword ptr [eax]
0x8AC4A2: addps   xmm1, xmm2
0x8AC4A5: movaps  xmm0, xmm1
0x8AC4A8: mulps   xmm0, xmm1
0x8AC4AB: movaps  xmm2, xmm0
0x8AC4AE: shufps  xmm2, xmm0, 55h ; 'U'
0x8AC4B2: addss   xmm2, xmm0
0x8AC4B6: movaps  xmm3, xmm0
0x8AC4B9: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8AC4BD: movaps  xmm0, xmm3
0x8AC4C0: addss   xmm0, xmm2
0x8AC4C4: movaps  [esp+20h+var_10], xmm0
0x8AC4C9: rsqrtss xmm2, xmm0
0x8AC4CD: movss   dword ptr [esp+20h+var_10], xmm2
0x8AC4D3: movaps  xmm2, [esp+20h+var_10]
0x8AC4D8: mulss   xmm0, xmm2
0x8AC4DC: mulss   xmm0, xmm2
0x8AC4E0: mov     [esp+20h+var_14], 40400000h
0x8AC4E8: movss   xmm3, [esp+20h+var_14]
0x8AC4EE: subss   xmm3, xmm0
0x8AC4F2: mov     [esp+20h+var_14], 3F000000h
0x8AC4FA: movss   xmm0, [esp+20h+var_14]
0x8AC500: mulss   xmm0, xmm2
0x8AC504: mulss   xmm0, xmm3
0x8AC508: movaps  xmm2, xmm0
0x8AC50B: shufps  xmm2, xmm0, 0
0x8AC50F: mulps   xmm2, xmm1
0x8AC512: movaps  xmmword ptr [eax], xmm2
0x8AC515: mov     al, 1
0x8AC517: pop     esi
0x8AC518: pop     ebx
0x8AC519: mov     esp, ebp
0x8AC51B: pop     ebp
0x8AC51C: retn
0x8AC51D: pop     esi
0x8AC51E: xor     al, al
0x8AC520: pop     ebx
0x8AC521: mov     esp, ebp
0x8AC523: pop     ebp
0x8AC524: retn
