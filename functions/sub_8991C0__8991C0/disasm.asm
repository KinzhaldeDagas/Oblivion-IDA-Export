0x8991C0: push    ebx
0x8991C1: push    esi
0x8991C2: push    edi
0x8991C3: mov     esi, ecx
0x8991C5: mov     ecx, ds:0BA7D98h
0x8991CB: mov     eax, [ecx]
0x8991CD: push    2Ch ; ','
0x8991CF: push    40h ; '@'
0x8991D1: call    dword ptr [eax+10h]
0x8991D4: mov     ecx, eax
0x8991D6: mov     word ptr [eax+4], 40h ; '@'
0x8991DC: call    sub_8D9EC0
0x8991E1: mov     ebx, eax
0x8991E3: push    ebx
0x8991E4: push    esi
0x8991E5: call    sub_898F10
0x8991EA: push    ebx
0x8991EB: mov     edi, esi
0x8991ED: call    sub_899130
0x8991F2: call    sub_899030
0x8991F7: push    ebx
0x8991F8: push    esi
0x8991F9: call    sub_899090
0x8991FE: add     esp, 14h
0x899201: pop     edi
0x899202: pop     esi
0x899203: mov     eax, ebx
0x899205: pop     ebx
0x899206: retn
