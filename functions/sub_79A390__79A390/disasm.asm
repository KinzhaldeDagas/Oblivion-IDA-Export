0x79A390: push    ecx
0x79A391: cmp     dword ptr [ecx], 0
0x79A394: mov     [esp+4+var_4], ecx
0x79A397: jz      loc_79A444
0x79A39D: push    ebp
0x79A39E: xor     ebp, ebp
0x79A3A0: cmp     [ecx+2Ch], ebp
0x79A3A3: jbe     loc_79A443
0x79A3A9: push    ebx
0x79A3AA: push    esi
0x79A3AB: push    edi
0x79A3AC: mov     edi, [esp+14h+arg_8]
0x79A3B0: mov     ecx, edi
0x79A3B2: call    sub_799EE0
0x79A3B7: add     eax, eax
0x79A3B9: movzx   eax, ax
0x79A3BC: mov     [esp+14h+arg_8], eax
0x79A3C0: movzx   eax, ax
0x79A3C3: xor     ecx, ecx
0x79A3C5: mov     edx, 2
0x79A3CA: mul     edx
0x79A3CC: seto    cl
0x79A3CF: neg     ecx
0x79A3D1: or      ecx, eax
0x79A3D3: push    ecx; Size
0x79A3D4: call    FormHeapAlloc
0x79A3D9: add     esp, 4
0x79A3DC: mov     ecx, edi
0x79A3DE: mov     ebx, eax
0x79A3E0: xor     esi, esi
0x79A3E2: call    sub_799EE0
0x79A3E7: add     eax, eax
0x79A3E9: jz      short loc_79A417
0x79A3EB: jmp     short loc_79A3F0
0x79A3ED: align 10h
0x79A3F0: mov     ecx, edi
0x79A3F2: call    sub_799EE0
0x79A3F7: imul    eax, ebp
0x79A3FA: mov     ecx, [esp+14h+arg_4]
0x79A3FE: lea     edx, [ecx+eax*2]
0x79A401: add     edx, esi
0x79A403: mov     [ebx+esi*2], dx
0x79A407: mov     ecx, edi
0x79A409: add     esi, 1
0x79A40C: call    sub_799EE0
0x79A411: add     eax, eax
0x79A413: cmp     esi, eax
0x79A415: jb      short loc_79A3F0
0x79A417: mov     eax, [esp+14h+arg_8]
0x79A41B: mov     ecx, [esp+14h+arg_0]
0x79A41F: mov     esi, [esp+14h+var_4]
0x79A423: push    eax
0x79A424: push    ebx
0x79A425: push    ecx
0x79A426: mov     ecx, [esi]
0x79A428: call    sub_796100
0x79A42D: mov     eax, [esi]
0x79A42F: add     word ptr [eax+26h], 1
0x79A434: add     ebp, 1
0x79A437: cmp     ebp, [esi+2Ch]
0x79A43A: jb      loc_79A3B0
0x79A440: pop     edi
0x79A441: pop     esi
0x79A442: pop     ebx
0x79A443: pop     ebp
0x79A444: pop     ecx
0x79A445: retn    0Ch
