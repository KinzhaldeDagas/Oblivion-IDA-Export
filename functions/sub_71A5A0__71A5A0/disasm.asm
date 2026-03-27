0x71A5A0: mov     eax, [esp+arg_4]
0x71A5A4: push    esi
0x71A5A5: push    edi
0x71A5A6: mov     edi, [esp+8+arg_0]
0x71A5AA: push    eax
0x71A5AB: push    edi
0x71A5AC: mov     esi, ecx
0x71A5AE: call    sub_708B00
0x71A5B3: fld     dword ptr [esi+0DCh]
0x71A5B9: fstp    dword ptr [edi+0DCh]
0x71A5BF: mov     ecx, [esi+0E0h]
0x71A5C5: mov     [edi+0E0h], ecx
0x71A5CB: mov     edx, [esi+0E4h]
0x71A5D1: mov     [edi+0E4h], edx
0x71A5D7: mov     eax, [esi+0E8h]
0x71A5DD: mov     [edi+0E8h], eax
0x71A5E3: mov     ecx, [esi+0ECh]
0x71A5E9: mov     [edi+0ECh], ecx
0x71A5EF: mov     edx, [esi+0F0h]
0x71A5F5: mov     [edi+0F0h], edx
0x71A5FB: mov     eax, [esi+0F4h]
0x71A601: mov     [edi+0F4h], eax
0x71A607: mov     edx, [esi+0F8h]
0x71A60D: lea     eax, [esi+0F8h]
0x71A613: lea     ecx, [edi+0F8h]
0x71A619: mov     [ecx], edx
0x71A61B: mov     edx, [eax+4]
0x71A61E: mov     [ecx+4], edx
0x71A621: mov     eax, [eax+8]
0x71A624: pop     edi
0x71A625: mov     [ecx+8], eax
0x71A628: pop     esi
0x71A629: retn    8
