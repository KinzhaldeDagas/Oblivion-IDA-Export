0x5668E0: cmp     [esp+arg_0], 0
0x5668E5: push    esi
0x5668E6: mov     esi, ecx
0x5668E8: mov     eax, [esi+0Ch]
0x5668EB: push    eax; _DWORD
0x5668EC: jz      short loc_566916
0x5668EE: or      dword ptr [esi+1Ch], 10000h
0x5668F5: mov     ecx, ds:0B33A98h
0x5668FB: call    TESDataHandler_IsFormIDCreated?
0x566900: test    al, al
0x566902: jnz     short loc_56693A
0x566904: mov     eax, [esi]
0x566906: mov     edx, [eax+40h]
0x566909: push    8000000h
0x56690E: mov     ecx, esi
0x566910: call    edx
0x566912: pop     esi
0x566913: retn    4
0x566916: and     dword ptr [esi+1Ch], 0FFFEFFFFh
0x56691D: mov     ecx, ds:0B33A98h
0x566923: call    TESDataHandler_IsFormIDCreated?
0x566928: test    al, al
0x56692A: jnz     short loc_56693A
0x56692C: mov     eax, [esi]
0x56692E: mov     edx, [eax+44h]
0x566931: push    8000000h
0x566936: mov     ecx, esi
0x566938: call    edx
0x56693A: pop     esi
0x56693B: retn    4
