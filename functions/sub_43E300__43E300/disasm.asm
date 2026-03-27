0x43E300: push    esi
0x43E301: mov     esi, [esp+4+arg_0]
0x43E305: mov     dl, [esi]
0x43E307: xor     eax, eax
0x43E309: test    dl, dl
0x43E30B: jz      short loc_43E327
0x43E30D: push    edi
0x43E30E: mov     edi, edi
0x43E310: mov     edi, eax
0x43E312: shl     edi, 5
0x43E315: add     edi, eax
0x43E317: movsx   eax, dl
0x43E31A: mov     dl, [esi+1]
0x43E31D: add     esi, 1
0x43E320: add     eax, edi
0x43E322: test    dl, dl
0x43E324: jnz     short loc_43E310
0x43E326: pop     edi
0x43E327: xor     edx, edx
0x43E329: div     dword ptr [ecx+8]
0x43E32C: pop     esi
0x43E32D: mov     eax, edx
0x43E32F: retn    4
