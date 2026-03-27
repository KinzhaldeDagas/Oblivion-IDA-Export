0x689C10: push    esi
0x689C11: lea     esi, [ecx+4]
0x689C14: test    esi, esi
0x689C16: jz      short loc_689C5D
0x689C18: cmp     dword ptr [esi+4], 0
0x689C1C: jnz     short loc_689C23
0x689C1E: cmp     dword ptr [esi], 0
0x689C21: jz      short loc_689C5D
0x689C23: push    edi
0x689C24: mov     edi, [esi]
0x689C26: test    edi, edi
0x689C28: jz      short loc_689C3A
0x689C2A: mov     ecx, edi
0x689C2C: call    sub_68B1C0
0x689C31: push    edi
0x689C32: call    FormHeapFree
0x689C37: add     esp, 4
0x689C3A: mov     eax, [esi+4]
0x689C3D: test    eax, eax
0x689C3F: pop     edi
0x689C40: jz      short loc_689C57
0x689C42: mov     ecx, [eax+4]
0x689C45: mov     [esi+4], ecx
0x689C48: mov     edx, [eax]
0x689C4A: push    eax
0x689C4B: mov     [esi], edx
0x689C4D: call    FormHeapFree
0x689C52: add     esp, 4
0x689C55: pop     esi
0x689C56: retn
0x689C57: mov     dword ptr [esi], 0
0x689C5D: pop     esi
0x689C5E: retn
