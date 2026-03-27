0x95F720: push    esi
0x95F721: push    20h ; ' '; Size
0x95F723: call    FormHeapAlloc
0x95F728: add     esp, 4
0x95F72B: test    eax, eax
0x95F72D: jz      short loc_95F753
0x95F72F: push    offset dword_B258DC
0x95F734: push    offset Vector3_InitValue?
0x95F739: mov     ecx, eax
0x95F73B: call    sub_95F620
0x95F740: mov     ecx, [esp+4+arg_0]
0x95F744: mov     esi, eax
0x95F746: mov     eax, [esi]
0x95F748: mov     edx, [eax]
0x95F74A: push    ecx
0x95F74B: mov     ecx, esi
0x95F74D: call    edx
0x95F74F: mov     eax, esi
0x95F751: pop     esi
0x95F752: retn
0x95F753: mov     ecx, [esp+4+arg_0]
0x95F757: xor     esi, esi
0x95F759: mov     eax, [esi]
0x95F75B: mov     edx, [eax]
0x95F75D: push    ecx
0x95F75E: mov     ecx, esi
0x95F760: call    edx
0x95F762: mov     eax, esi
0x95F764: pop     esi
0x95F765: retn
