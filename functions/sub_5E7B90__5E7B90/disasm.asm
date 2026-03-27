0x5E7B90: push    esi
0x5E7B91: lea     esi, [ecx+9Ch]
0x5E7B97: push    edi
0x5E7B98: mov     edi, esi
0x5E7B9A: test    edi, edi
0x5E7B9C: jz      short loc_5E7BB6
0x5E7B9E: mov     edi, edi
0x5E7BA0: mov     eax, [edi]
0x5E7BA2: test    eax, eax
0x5E7BA4: jz      short loc_5E7BAF
0x5E7BA6: push    eax
0x5E7BA7: call    FormHeapFree
0x5E7BAC: add     esp, 4
0x5E7BAF: mov     edi, [edi+4]
0x5E7BB2: test    edi, edi
0x5E7BB4: jnz     short loc_5E7BA0
0x5E7BB6: cmp     dword ptr [esi+4], 0
0x5E7BBA: jz      short loc_5E7BD6
0x5E7BBC: lea     esp, [esp+0]
0x5E7BC0: mov     eax, [esi+4]
0x5E7BC3: mov     edi, [eax+4]
0x5E7BC6: push    eax
0x5E7BC7: call    FormHeapFree
0x5E7BCC: add     esp, 4
0x5E7BCF: test    edi, edi
0x5E7BD1: mov     [esi+4], edi
0x5E7BD4: jnz     short loc_5E7BC0
0x5E7BD6: pop     edi
0x5E7BD7: mov     dword ptr [esi], 0
0x5E7BDD: pop     esi
0x5E7BDE: retn
