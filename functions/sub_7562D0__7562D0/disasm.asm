0x7562D0: push    esi
0x7562D1: push    edi
0x7562D2: mov     edi, ecx
0x7562D4: mov     esi, [edi+28h]
0x7562D7: test    esi, esi
0x7562D9: jz      short loc_7562F7
0x7562DB: lea     eax, [esi+4]
0x7562DE: push    eax; lpAddend
0x7562DF: call    dword ptr ds:0A2807Ch
0x7562E5: test    eax, eax
0x7562E7: jnz     short loc_7562F7
0x7562E9: test    esi, esi
0x7562EB: jz      short loc_7562F7
0x7562ED: mov     edx, [esi]
0x7562EF: mov     eax, [edx]
0x7562F1: push    1
0x7562F3: mov     ecx, esi
0x7562F5: call    eax
0x7562F7: mov     ecx, edi
0x7562F9: call    NiRefObject_destr
0x7562FE: test    [esp+8+arg_0], 1
0x756303: jz      short loc_75630E
0x756305: push    edi
0x756306: call    FormHeapFree
0x75630B: add     esp, 4
0x75630E: mov     eax, edi
0x756310: pop     edi
0x756311: pop     esi
0x756312: retn    4
