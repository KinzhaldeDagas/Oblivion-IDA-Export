0x450A80: push    esi
0x450A81: mov     esi, ecx
0x450A83: mov     eax, [esi+280h]
0x450A89: add     dword ptr [esi+3D4h], 1
0x450A90: mov     ecx, [esi+10h]
0x450A93: mov     [esi+26Ch], eax
0x450A99: mov     eax, ds:0A853D0h
0x450A9E: mov     edx, [ecx]
0x450AA0: mov     edx, [edx+0Ch]
0x450AA3: push    eax
0x450AA4: mov     eax, [esi+27Ch]
0x450AAA: push    eax
0x450AAB: call    edx
0x450AAD: push    14h
0x450AAF: lea     eax, [esi+268h]
0x450AB5: push    eax
0x450AB6: mov     ecx, esi
0x450AB8: call    TESFile_WriteData
0x450ABD: pop     esi
0x450ABE: retn
