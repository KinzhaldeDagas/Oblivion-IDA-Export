0x9547B0: push    esi
0x9547B1: mov     esi, [esp+4+arg_0]
0x9547B5: mov     al, [esi+4]
0x9547B8: test    al, al
0x9547BA: push    edi
0x9547BB: mov     edi, ecx
0x9547BD: jnz     short loc_9547F1
0x9547BF: mov     ecx, [edi+0Ch]
0x9547C2: mov     edx, [esi+0ECh]
0x9547C8: mov     eax, [ecx]
0x9547CA: push    edx
0x9547CB: call    dword ptr [eax+8]
0x9547CE: mov     ecx, [edi+0Ch]
0x9547D1: mov     edx, [esi+0F0h]
0x9547D7: mov     eax, [ecx]
0x9547D9: push    edx
0x9547DA: call    dword ptr [eax+8]
0x9547DD: mov     dword ptr [esi+0ECh], 0
0x9547E7: mov     dword ptr [esi+0F0h], 0
0x9547F1: pop     edi
0x9547F2: pop     esi
0x9547F3: retn    4
