0x4CB730: push    ebp
0x4CB731: push    esi
0x4CB732: push    edi
0x4CB733: mov     edi, ecx
0x4CB735: push    edi; a2
0x4CB736: mov     ecx, offset stru_B35C80; this
0x4CB73B: call    sub_496EA0
0x4CB740: lea     esi, [edi+48h]
0x4CB743: xor     ebp, ebp
0x4CB745: test    esi, esi
0x4CB747: jz      short loc_4CB770
0x4CB749: lea     esp, [esp+0]
0x4CB750: mov     ecx, [esi]
0x4CB752: test    ecx, ecx
0x4CB754: mov     esi, [esi+4]
0x4CB757: jz      short loc_4CB76C
0x4CB759: mov     eax, [ecx]
0x4CB75B: mov     edx, [eax+170h]
0x4CB761: call    edx
0x4CB763: cmp     byte ptr [eax+4], 1Ah
0x4CB767: jnz     short loc_4CB76C
0x4CB769: add     ebp, 1
0x4CB76C: test    esi, esi
0x4CB76E: jnz     short loc_4CB750
0x4CB770: push    edi; a2
0x4CB771: mov     ecx, offset stru_B35C80; this
0x4CB776: call    sub_496F50
0x4CB77B: pop     edi
0x4CB77C: pop     esi
0x4CB77D: mov     eax, ebp
0x4CB77F: pop     ebp
0x4CB780: retn
