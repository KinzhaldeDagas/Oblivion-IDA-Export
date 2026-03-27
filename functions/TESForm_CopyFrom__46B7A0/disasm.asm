0x46B7A0: mov     ecx, [esp+arg_0]
0x46B7A4: movzx   eax, byte ptr [ecx+4]
0x46B7A8: mov     edx, [ecx]
0x46B7AA: lea     eax, [eax+eax*2]
0x46B7AD: mov     eax, ds:0B05E04h[eax*4]
0x46B7B4: push    eax
0x46B7B5: mov     eax, [edx+0D4h]
0x46B7BB: call    eax
0x46B7BD: push    eax; ArgList
0x46B7BE: push    offset aTryingToCopyFo; "Trying to copy form \"%s\".\r\nNo copy "...
0x46B7C3: call    PrintError
0x46B7C8: add     esp, 0Ch
0x46B7CB: retn    4
