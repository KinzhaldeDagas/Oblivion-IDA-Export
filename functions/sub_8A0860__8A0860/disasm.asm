0x8A0860: sub     esp, 8
0x8A0863: mov     eax, [ecx]
0x8A0865: mov     eax, [eax+74h]
0x8A0868: push    ebx
0x8A0869: push    esi
0x8A086A: push    edi
0x8A086B: lea     edx, [esp+14h+var_5]
0x8A086F: push    edx
0x8A0870: mov     [esp+18h+var_4], ecx
0x8A0874: call    eax
0x8A0876: test    eax, eax
0x8A0878: jz      short loc_8A087F
0x8A087A: lea     esi, [eax-4]
0x8A087D: jmp     short loc_8A0881
0x8A087F: xor     esi, esi
0x8A0881: fld1
0x8A0883: mov     ebx, [esp+14h+arg_4]
0x8A0887: fcomp   dword ptr [ebx+10h]
0x8A088A: fnstsw  ax
0x8A088C: test    ah, 44h
0x8A088F: jnp     short loc_8A089C
0x8A0891: mov     edx, [esi]
0x8A0893: mov     eax, [edx]
0x8A0895: push    ebx
0x8A0896: push    0
0x8A0898: mov     ecx, esi
0x8A089A: call    eax
0x8A089C: mov     eax, [esi+0Ch]
0x8A089F: test    eax, eax
0x8A08A1: jz      short loc_8A08A8
0x8A08A3: mov     ecx, [eax+0Ch]
0x8A08A6: jmp     short loc_8A08AA
0x8A08A8: xor     ecx, ecx
0x8A08AA: mov     eax, [esi+10h]
0x8A08AD: test    eax, eax
0x8A08AF: jz      short loc_8A08B6
0x8A08B1: mov     edi, [eax+0Ch]
0x8A08B4: jmp     short loc_8A08B8
0x8A08B6: xor     edi, edi
0x8A08B8: test    ecx, ecx
0x8A08BA: mov     dword ptr [esi+0Ch], 0
0x8A08C1: mov     dword ptr [esi+10h], 0
0x8A08C8: jz      short loc_8A0920
0x8A08CA: lea     edx, [esp+14h+arg_4]
0x8A08CE: push    edx
0x8A08CF: push    ecx
0x8A08D0: mov     ecx, [ebx]
0x8A08D2: call    NiTMap_GetAt
0x8A08D7: test    al, al
0x8A08D9: jz      short loc_8A08ED
0x8A08DB: mov     eax, [esp+14h+arg_4]
0x8A08DF: test    eax, eax
0x8A08E1: jz      short loc_8A08E8
0x8A08E3: mov     eax, [eax+8]
0x8A08E6: jmp     short loc_8A08EA
0x8A08E8: xor     eax, eax
0x8A08EA: mov     [esi+0Ch], eax
0x8A08ED: test    edi, edi
0x8A08EF: jz      short loc_8A0920
0x8A08F1: mov     ecx, [ebx]
0x8A08F3: lea     eax, [esp+14h+arg_4]
0x8A08F7: push    eax
0x8A08F8: push    edi
0x8A08F9: call    NiTMap_GetAt
0x8A08FE: test    al, al
0x8A0900: jz      short loc_8A0908
0x8A0902: mov     eax, [esp+14h+arg_4]
0x8A0906: jmp     short loc_8A0912
0x8A0908: mov     edx, [edi]
0x8A090A: mov     eax, [edx+18h]
0x8A090D: push    ebx
0x8A090E: mov     ecx, edi
0x8A0910: call    eax
0x8A0912: test    eax, eax
0x8A0914: jz      short loc_8A091B
0x8A0916: mov     eax, [eax+8]
0x8A0919: jmp     short loc_8A091D
0x8A091B: xor     eax, eax
0x8A091D: mov     [esi+10h], eax
0x8A0920: mov     ecx, [esp+14h+arg_0]
0x8A0924: push    ebx
0x8A0925: push    ecx
0x8A0926: mov     ecx, [esp+1Ch+var_4]
0x8A092A: call    sub_89D610
0x8A092F: pop     edi
0x8A0930: pop     esi
0x8A0931: pop     ebx
0x8A0932: add     esp, 8
0x8A0935: retn    8
