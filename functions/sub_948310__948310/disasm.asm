0x948310: push    esi
0x948311: mov     esi, ecx
0x948313: mov     ecx, [esi+4]
0x948316: test    ecx, ecx
0x948318: jz      short loc_94835F
0x94831A: push    21h ; '!'
0x94831C: call    sub_918440
0x948321: mov     ecx, [esi+4]
0x948324: push    8
0x948326: call    sub_9181B0
0x94832B: mov     eax, [esp+4+arg_0]
0x94832F: mov     ecx, [esi+4]
0x948332: push    eax
0x948333: call    sub_948800
0x948338: mov     ecx, [esp+4+arg_4]
0x94833C: push    ecx
0x94833D: mov     ecx, [esi+4]
0x948340: call    sub_948800
0x948345: mov     edx, [esp+4+arg_8]
0x948349: mov     ecx, [esi+4]
0x94834C: push    edx
0x94834D: call    sub_918440
0x948352: mov     eax, [esp+4+arg_C]
0x948356: mov     ecx, [esi+4]
0x948359: push    eax
0x94835A: call    sub_918440
0x94835F: mov     ecx, [esi+4]
0x948362: test    ecx, ecx
0x948364: pop     esi
0x948365: jz      short loc_94837B
0x948367: lea     edx, [esp+arg_0]
0x94836B: push    edx
0x94836C: call    sub_918060
0x948371: cmp     byte ptr [eax], 0
0x948374: jz      short loc_94837B
0x948376: xor     eax, eax
0x948378: retn    10h
0x94837B: mov     eax, 1
0x948380: retn    10h
