0x46B7D0: mov     ecx, [esp+this]
0x46B7D4: movzx   eax, byte ptr [ecx+4]
0x46B7D8: mov     edx, [ecx]
0x46B7DA: lea     eax, [eax+eax*2]
0x46B7DD: mov     eax, ds:0B05E04h[eax*4]
0x46B7E4: push    eax
0x46B7E5: mov     eax, [edx+0D4h]
0x46B7EB: call    eax
0x46B7ED: push    eax; ArgList
0x46B7EE: push    offset aTryingToCompar; "Trying to compare form \"%s\".\r\nNo co"...
0x46B7F3: call    PrintError
0x46B7F8: add     esp, 0Ch
0x46B7FB: xor     al, al
0x46B7FD: retn    4
