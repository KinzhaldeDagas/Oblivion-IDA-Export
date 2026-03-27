0x983CA5: push    ebx
0x983CA6: mov     ebx, [esp+4+arg_0]
0x983CAA: push    esi
0x983CAB: push    edi; Src
0x983CAC: mov     edi, ecx
0x983CAE: mov     dword ptr [edi], offset ??_7exception@std@@6B@
0x983CB4: mov     eax, [ebx]
0x983CB6: test    eax, eax
0x983CB8: jz      short loc_983CE0
0x983CBA: push    eax; Str
0x983CBB: call    _strlen
0x983CC0: mov     esi, eax
0x983CC2: inc     esi
0x983CC3: push    esi; Size
0x983CC4: call    _malloc
0x983CC9: test    eax, eax
0x983CCB: pop     ecx
0x983CCC: pop     ecx
0x983CCD: mov     [edi+4], eax
0x983CD0: jz      short loc_983CE4
0x983CD2: push    dword ptr [ebx]; Src
0x983CD4: push    esi; SizeInBytes
0x983CD5: push    eax; Dst
0x983CD6: call    _strcpy_s
0x983CDB: add     esp, 0Ch
0x983CDE: jmp     short loc_983CE4
0x983CE0: and     dword ptr [edi+4], 0
0x983CE4: mov     dword ptr [edi+8], 1
0x983CEB: mov     eax, edi
0x983CED: pop     edi
0x983CEE: pop     esi
0x983CEF: pop     ebx
0x983CF0: retn    4
