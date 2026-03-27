0x663920: cmp     dword ptr ds:0B3B7D0h, 0
0x663927: push    edi
0x663928: mov     edi, ecx
0x66392A: jle     short loc_66396F
0x66392C: push    esi
0x66392D: mov     esi, [edi+58h]
0x663930: test    esi, esi
0x663932: jz      short loc_66396E
0x663934: mov     eax, [esi]
0x663936: mov     edx, [eax+0F4h]
0x66393C: push    1
0x66393E: mov     ecx, esi
0x663940: call    edx
0x663942: test    eax, eax
0x663944: jz      short loc_66396E
0x663946: mov     eax, [esi]
0x663948: mov     edx, [eax+0F4h]
0x66394E: push    1
0x663950: mov     ecx, esi
0x663952: call    edx
0x663954: mov     eax, [eax+8]
0x663957: test    eax, eax
0x663959: jz      short loc_66396E
0x66395B: push    1
0x66395D: push    1
0x66395F: push    edi
0x663960: push    7FFFFFFFh
0x663965: push    eax
0x663966: call    sub_607F90
0x66396B: add     esp, 14h
0x66396E: pop     esi
0x66396F: pop     edi
0x663970: retn
