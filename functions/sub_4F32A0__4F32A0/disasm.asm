0x4F32A0: mov     eax, [esp+arg_0]
0x4F32A4: push    esi
0x4F32A5: mov     esi, [ecx+200h]
0x4F32AB: mov     edx, esi
0x4F32AD: push    edi
0x4F32AE: shl     edx, 4
0x4F32B1: mov     edi, [edx+ecx]
0x4F32B4: add     edx, ecx
0x4F32B6: mov     [eax], edi
0x4F32B8: mov     edi, [edx+4]
0x4F32BB: mov     [eax+4], edi
0x4F32BE: mov     edi, [edx+8]
0x4F32C1: mov     edx, [edx+0Ch]
0x4F32C4: mov     [eax+8], edi
0x4F32C7: add     esi, 0FFFFFFFFh
0x4F32CA: pop     edi
0x4F32CB: mov     [ecx+200h], esi
0x4F32D1: mov     [eax+0Ch], edx
0x4F32D4: pop     esi
0x4F32D5: retn    4
