0x925610: push    ecx
0x925611: mov     eax, [esp+4+arg_0]
0x925615: mov     ecx, [eax+0Ch]
0x925618: push    ebx
0x925619: mov     ebx, [eax+4]
0x92561C: push    ebp
0x92561D: mov     ebp, [eax]
0x92561F: push    esi
0x925620: push    edi
0x925621: mov     edi, [eax+8]
0x925624: mov     edx, [edi]
0x925626: mov     [esp+14h+var_4], ecx
0x92562A: mov     ecx, [ebp+0]
0x92562D: mov     eax, [ecx]
0x92562F: mov     [esp+14h+arg_0], edx
0x925633: call    dword ptr [eax+8]
0x925636: mov     ecx, [ebx]
0x925638: mov     edx, [ecx]
0x92563A: mov     esi, eax
0x92563C: call    dword ptr [edx+8]
0x92563F: mov     cl, [edi+0Ch]
0x925642: test    cl, cl
0x925644: mov     ecx, [esp+14h+arg_0]
0x925648: jz      short loc_925652
0x92564A: add     ecx, 590h
0x925650: jmp     short loc_925658
0x925652: add     ecx, 190h
0x925658: mov     edx, [esp+14h+var_4]
0x92565C: shl     esi, 5
0x92565F: add     esi, ecx
0x925661: movzx   eax, byte ptr [esi+eax]
0x925665: mov     ecx, [esp+14h+arg_0]
0x925669: push    edx
0x92566A: push    edi
0x92566B: lea     eax, [eax+eax*4]
0x92566E: mov     eax, [ecx+eax*4+990h]
0x925675: push    ebx
0x925676: push    ebp
0x925677: call    eax
0x925679: mov     ecx, [esp+24h+arg_4]
0x92567D: add     esp, 10h
0x925680: pop     edi
0x925681: pop     esi
0x925682: pop     ebp
0x925683: mov     [ecx+4], eax
0x925686: mov     eax, [esp+8+arg_8]
0x92568A: mov     byte ptr [ecx], 6
0x92568D: pop     ebx
0x92568E: pop     ecx
0x92568F: retn
