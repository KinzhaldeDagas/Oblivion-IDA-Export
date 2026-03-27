0x7403B0: sub     esp, 8
0x7403B3: push    ebp
0x7403B4: push    esi
0x7403B5: push    edi
0x7403B6: mov     esi, ecx
0x7403B8: xor     ebp, ebp
0x7403BA: xor     edi, edi
0x7403BC: cmp     [esi+48h], bp
0x7403C0: jbe     loc_74044E
0x7403C6: mov     [esp+14h+var_8], ebp
0x7403CA: push    ebx
0x7403CB: jmp     short loc_7403D0
0x7403CD: align 10h
0x7403D0: mov     eax, [esi+5Ch]
0x7403D3: movzx   ecx, word ptr [eax+0B6h]
0x7403DA: cmp     ecx, edi
0x7403DC: jbe     short loc_74043A
0x7403DE: mov     edx, [eax+0B0h]
0x7403E4: mov     ebx, [edx+edi*4]
0x7403E7: test    ebx, ebx
0x7403E9: jz      short loc_74043A
0x7403EB: mov     eax, [esi+1Ch]
0x7403EE: mov     ecx, [eax+ebp]
0x7403F1: add     eax, ebp
0x7403F3: mov     [ebx+54h], ecx
0x7403F6: mov     edx, [eax+4]
0x7403F9: mov     [ebx+58h], edx
0x7403FC: mov     eax, [eax+8]
0x7403FF: mov     [ebx+5Ch], eax
0x740402: mov     eax, [esi+50h]
0x740405: test    eax, eax
0x740407: jz      short loc_740419
0x740409: mov     edx, [esp+18h+var_8]
0x74040D: lea     ecx, [ebx+30h]
0x740410: push    ecx
0x740411: lea     ecx, [edx+eax]
0x740414: call    sub_47C600
0x740419: mov     eax, [esi+4Ch]
0x74041C: fld     dword ptr [eax+edi*4]
0x74041F: mov     ecx, [esi+44h]
0x740422: fmul    dword ptr [ecx+edi*4]
0x740425: fstp    [esp+18h+var_4]
0x740429: fld     [esp+18h+var_4]
0x74042D: fabs
0x74042F: fstp    [esp+18h+var_4]
0x740433: fld     [esp+18h+var_4]
0x740437: fstp    dword ptr [ebx+60h]
0x74043A: movzx   edx, word ptr [esi+48h]
0x74043E: add     [esp+18h+var_8], 10h
0x740443: add     edi, 1
0x740446: add     ebp, 0Ch
0x740449: cmp     edi, edx
0x74044B: jb      short loc_7403D0
0x74044D: pop     ebx
0x74044E: pop     edi
0x74044F: pop     esi
0x740450: pop     ebp
0x740451: add     esp, 8
0x740454: retn
