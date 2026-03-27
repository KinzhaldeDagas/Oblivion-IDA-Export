0x675CC0: mov     edx, [esp+arg_0]
0x675CC4: mov     ecx, [ecx+edx*4+28h]
0x675CC8: xor     eax, eax
0x675CCA: test    ecx, ecx
0x675CCC: push    esi; ArgList
0x675CCD: jz      short loc_675CEB
0x675CCF: mov     esi, [esp+4+arg_4]
0x675CD3: mov     edx, [ecx+4]
0x675CD6: test    edx, edx
0x675CD8: jnz     short loc_675CDE
0x675CDA: cmp     [ecx], edx
0x675CDC: jz      short loc_675CEB
0x675CDE: cmp     esi, [ecx]
0x675CE0: jz      short loc_675CFB
0x675CE2: mov     ecx, edx
0x675CE4: add     eax, 1
0x675CE7: test    ecx, ecx
0x675CE9: jnz     short loc_675CD3
0x675CEB: push    offset aWhenTryingTo_3; "When trying to get a crime index, the c"...
0x675CF0: call    PrintError
0x675CF5: add     esp, 4
0x675CF8: xor     ax, ax
0x675CFB: pop     esi
0x675CFC: retn    8
