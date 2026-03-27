0x730310: push    ebp
0x730311: mov     ebp, [esp+4+Size]
0x730315: push    esi
0x730316: push    edi
0x730317: push    ebp; Size
0x730318: mov     esi, ecx
0x73031A: call    sub_721610
0x73031F: mov     eax, [ebp+21Ch]
0x730325: mov     edx, [eax+4]
0x730328: push    1
0x73032A: lea     ecx, [esp+10h+Size]
0x73032E: push    ecx
0x73032F: push    4
0x730331: lea     edi, [esi+0Ch]
0x730334: push    edi
0x730335: push    eax
0x730336: mov     [esp+20h+Size], 4
0x73033E: call    edx
0x730340: mov     eax, [edi]
0x730342: add     esp, 14h
0x730345: test    eax, eax
0x730347: jbe     short loc_73038E
0x730349: xor     ecx, ecx
0x73034B: mov     edx, 4
0x730350: mul     edx
0x730352: seto    cl
0x730355: neg     ecx
0x730357: or      ecx, eax
0x730359: push    ecx; Size
0x73035A: call    FormHeapAlloc
0x73035F: push    1
0x730361: lea     edx, [esp+14h+Size]
0x730365: push    edx
0x730366: mov     edx, [edi]
0x730368: add     edx, edx
0x73036A: add     edx, edx
0x73036C: push    edx
0x73036D: mov     [esi+10h], eax
0x730370: mov     ecx, [ebp+21Ch]
0x730376: push    eax
0x730377: mov     eax, [ecx+4]
0x73037A: push    ecx
0x73037B: mov     [esp+24h+Size], 4
0x730383: call    eax
0x730385: add     esp, 18h
0x730388: pop     edi
0x730389: pop     esi
0x73038A: pop     ebp
0x73038B: retn    4
0x73038E: pop     edi
0x73038F: mov     dword ptr [esi+10h], 0
0x730396: pop     esi
0x730397: pop     ebp
0x730398: retn    4
