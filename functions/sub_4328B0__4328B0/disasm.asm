0x4328B0: sub     esp, 0Ch
0x4328B3: push    ebx
0x4328B4: push    ebp
0x4328B5: push    edi
0x4328B6: mov     edi, ecx
0x4328B8: mov     eax, [edi]
0x4328BA: mov     ecx, [eax+14h]
0x4328BD: mov     eax, [ecx]
0x4328BF: lea     ebp, [eax+eax*2]
0x4328C2: xor     ecx, ecx
0x4328C4: mov     eax, ebp
0x4328C6: mov     edx, 4
0x4328CB: mul     edx
0x4328CD: seto    cl
0x4328D0: neg     ecx
0x4328D2: or      ecx, eax
0x4328D4: push    ecx; Size
0x4328D5: call    FormHeapAlloc
0x4328DA: mov     ecx, [edi]
0x4328DC: mov     edx, [ecx+4]
0x4328DF: mov     ebx, eax
0x4328E1: lea     eax, ds:0[ebp*4]
0x4328E8: push    eax; Size
0x4328E9: push    edx; Src
0x4328EA: push    ebx; Dst
0x4328EB: mov     [esp+28h+var_4], ebx
0x4328EF: call    _memcpy
0x4328F4: xor     ecx, ecx
0x4328F6: add     esp, 10h
0x4328F9: cmp     [edi+1Ch], ecx
0x4328FC: mov     [esp+18h+var_C], ecx
0x432900: mov     [esp+18h+var_8], ecx
0x432904: jz      short loc_43296D
0x432906: push    esi
0x432907: mov     esi, [edi+1Ch]
0x43290A: mov     eax, [esi+8]
0x43290D: mov     [edi+1Ch], eax
0x432910: xor     eax, eax
0x432912: cmp     ebp, ecx
0x432914: jbe     short loc_432922
0x432916: cmp     esi, [ebx+eax*4]
0x432919: jz      short loc_43298B
0x43291B: add     eax, 1
0x43291E: cmp     eax, ebp
0x432920: jb      short loc_432916
0x432922: mov     edx, [esi+4]
0x432925: mov     [esi+8], ecx
0x432928: mov     ecx, [edi]
0x43292A: mov     eax, [ecx]
0x43292C: mov     eax, [eax+20h]
0x43292F: push    edx
0x432930: mov     edx, [esi]
0x432932: push    edx
0x432933: call    eax
0x432935: mov     ebx, [esi+8]
0x432938: test    ebx, ebx
0x43293A: jz      short loc_432958
0x43293C: lea     ecx, [ebx+8]
0x43293F: push    ecx; lpAddend
0x432940: call    ds:InterlockedDecrement
0x432946: test    eax, eax
0x432948: jnz     short loc_432958
0x43294A: test    ebx, ebx
0x43294C: jz      short loc_432958
0x43294E: mov     edx, [ebx]
0x432950: mov     eax, [edx]
0x432952: push    1
0x432954: mov     ecx, ebx
0x432956: call    eax
0x432958: push    esi
0x432959: call    FormHeapFree
0x43295E: mov     ebx, [esp+20h+var_4]
0x432962: add     esp, 4
0x432965: xor     ecx, ecx
0x432967: cmp     [edi+1Ch], ecx
0x43296A: jnz     short loc_432907
0x43296C: pop     esi
0x43296D: push    ebx
0x43296E: call    FormHeapFree
0x432973: mov     ecx, [esp+1Ch+var_C]
0x432977: mov     edx, [esp+1Ch+var_8]
0x43297B: add     esp, 4
0x43297E: mov     [edi+1Ch], ecx
0x432981: mov     [edi+20h], edx
0x432984: pop     edi
0x432985: pop     ebp
0x432986: pop     ebx
0x432987: add     esp, 0Ch
0x43298A: retn
0x43298B: mov     edx, [esp+1Ch+var_C]
0x43298F: add     [esp+1Ch+var_8], 1
0x432994: mov     [esi+8], edx
0x432997: mov     [esp+1Ch+var_C], esi
0x43299B: jmp     short loc_432967
