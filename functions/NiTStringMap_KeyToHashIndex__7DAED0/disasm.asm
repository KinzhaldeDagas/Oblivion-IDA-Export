0x7DAED0: push    esi
0x7DAED1: mov     esi, [esp+4+arg_0]
0x7DAED5: mov     dl, [esi]
0x7DAED7: xor     eax, eax
0x7DAED9: test    dl, dl
0x7DAEDB: jz      short loc_7DAEF7
0x7DAEDD: push    edi
0x7DAEDE: mov     edi, edi
0x7DAEE0: mov     edi, eax
0x7DAEE2: shl     edi, 5
0x7DAEE5: add     edi, eax
0x7DAEE7: movsx   eax, dl
0x7DAEEA: mov     dl, [esi+1]
0x7DAEED: add     esi, 1
0x7DAEF0: add     eax, edi
0x7DAEF2: test    dl, dl
0x7DAEF4: jnz     short loc_7DAEE0
0x7DAEF6: pop     edi
0x7DAEF7: xor     edx, edx
0x7DAEF9: div     dword ptr [ecx+4]
0x7DAEFC: pop     esi
0x7DAEFD: mov     eax, edx
0x7DAEFF: retn    4
