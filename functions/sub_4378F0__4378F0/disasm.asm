0x4378F0: push    ecx
0x4378F1: push    esi
0x4378F2: mov     esi, ecx
0x4378F4: mov     eax, [esi+28h]
0x4378F7: test    eax, eax
0x4378F9: push    edi
0x4378FA: lea     edi, [esi+28h]
0x4378FD: jz      short loc_437953
0x4378FF: test    byte ptr [esi+2Ch], 1
0x437903: jnz     short loc_437953
0x437905: mov     ecx, ModelLoaderPtr
0x43790B: mov     edx, [esi+20h]
0x43790E: mov     ecx, [ecx+4]
0x437911: push    ebx
0x437912: mov     ebx, [ecx]
0x437914: push    0
0x437916: push    eax
0x437917: push    edx
0x437918: mov     edx, [ebx+0Ch]
0x43791B: call    edx
0x43791D: test    al, al
0x43791F: jnz     short loc_437952
0x437921: mov     ecx, ModelLoaderPtr
0x437927: mov     eax, [esi+20h]
0x43792A: mov     ecx, [ecx+4]
0x43792D: lea     ebx, [esp+10h+var_4]
0x437931: mov     [esp+10h+var_4], 0
0x437939: mov     edx, [ecx]
0x43793B: push    ebx
0x43793C: push    eax
0x43793D: mov     eax, [edx+4]
0x437940: call    eax
0x437942: neg     al
0x437944: mov     ecx, edi
0x437946: sbb     eax, eax
0x437948: and     eax, [esp+10h+var_4]
0x43794C: push    eax
0x43794D: call    sub_435B10
0x437952: pop     ebx
0x437953: mov     edx, [esi]
0x437955: mov     eax, [edx+28h]
0x437958: pop     edi
0x437959: mov     ecx, esi
0x43795B: pop     esi
0x43795C: add     esp, 4
0x43795F: jmp     eax
