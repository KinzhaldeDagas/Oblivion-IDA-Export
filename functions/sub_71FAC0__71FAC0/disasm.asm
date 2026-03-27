0x71FAC0: push    esi
0x71FAC1: push    edi
0x71FAC2: mov     edi, [esp+8+arg_0]
0x71FAC6: mov     esi, ecx
0x71FAC8: xor     ecx, ecx
0x71FACA: mov     eax, edi
0x71FACC: mov     edx, 2
0x71FAD1: mul     edx
0x71FAD3: seto    cl
0x71FAD6: neg     ecx
0x71FAD8: or      ecx, eax
0x71FADA: push    ecx; Size
0x71FADB: call    FormHeapAlloc
0x71FAE0: add     esp, 4
0x71FAE3: mov     [esi+8], edi
0x71FAE6: mov     [esi+0Ch], edi
0x71FAE9: mov     [esi], eax
0x71FAEB: mov     [esi+4], eax
0x71FAEE: pop     edi
0x71FAEF: mov     dword ptr [esi+10h], 0
0x71FAF6: mov     eax, esi
0x71FAF8: pop     esi
0x71FAF9: retn    4
