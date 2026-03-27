0x6DD490: fldz
0x6DD492: sub     esp, 8
0x6DD495: push    edi
0x6DD496: mov     edi, ecx
0x6DD498: fcomp   dword ptr [edi+54h]
0x6DD49B: fnstsw  ax
0x6DD49D: test    ah, 41h
0x6DD4A0: jnz     loc_6DD52E
0x6DD4A6: mov     eax, [edi+48h]
0x6DD4A9: push    ebx
0x6DD4AA: push    ebp
0x6DD4AB: push    esi
0x6DD4AC: xor     esi, esi
0x6DD4AE: cmp     eax, esi
0x6DD4B0: jz      short loc_6DD4BB
0x6DD4B2: mov     ebx, [eax+8]
0x6DD4B5: mov     [esp+18h+var_8], ebx
0x6DD4B9: jmp     short loc_6DD4C1
0x6DD4BB: mov     [esp+18h+var_8], esi
0x6DD4BF: mov     ebx, esi
0x6DD4C1: mov     eax, [edi+50h]
0x6DD4C4: push    eax
0x6DD4C5: call    FormHeapFree
0x6DD4CA: xor     ecx, ecx
0x6DD4CC: mov     eax, ebx
0x6DD4CE: mov     edx, 4
0x6DD4D3: mul     edx
0x6DD4D5: seto    cl
0x6DD4D8: neg     ecx
0x6DD4DA: or      ecx, eax
0x6DD4DC: push    ecx; Size
0x6DD4DD: call    FormHeapAlloc
0x6DD4E2: fldz
0x6DD4E4: lea     ebp, [ebx-1]
0x6DD4E7: add     esp, 8
0x6DD4EA: cmp     ebp, esi
0x6DD4EC: mov     [edi+50h], eax
0x6DD4EF: fstp    dword ptr [eax]
0x6DD4F1: jbe     short loc_6DD521
0x6DD4F3: fld1
0x6DD4F5: push    ecx
0x6DD4F6: fstp    [esp+1Ch+var_1C]; float
0x6DD4F9: lea     ebx, [esi+1]
0x6DD4FC: push    ebx; int
0x6DD4FD: push    esi; int
0x6DD4FE: mov     ecx, edi
0x6DD500: call    sub_6DD180
0x6DD505: fstp    [esp+18h+var_4]
0x6DD509: mov     eax, [edi+50h]
0x6DD50C: fld     dword ptr [eax+esi*4]
0x6DD50F: fadd    [esp+18h+var_4]
0x6DD513: fstp    dword ptr [eax+esi*4+4]
0x6DD517: mov     esi, ebx
0x6DD519: cmp     esi, ebp
0x6DD51B: jb      short loc_6DD4F3
0x6DD51D: mov     ebx, [esp+18h+var_8]
0x6DD521: mov     eax, [edi+50h]
0x6DD524: fld     dword ptr [eax+ebx*4-4]
0x6DD528: pop     esi
0x6DD529: pop     ebp
0x6DD52A: fstp    dword ptr [edi+54h]
0x6DD52D: pop     ebx
0x6DD52E: fld     dword ptr [edi+54h]
0x6DD531: pop     edi
0x6DD532: add     esp, 8
0x6DD535: retn
