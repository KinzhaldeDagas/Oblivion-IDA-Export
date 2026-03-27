0x42BE70: mov     ecx, ArchiveList
0x42BE76: push    esi
0x42BE77: push    edi
0x42BE78: xor     edi, edi
0x42BE7A: cmp     ecx, edi
0x42BE7C: jz      short loc_42BEB8
0x42BE7E: mov     esi, ecx
0x42BE80: cmp     esi, edi
0x42BE82: jz      short loc_42BE9F
0x42BE84: mov     ecx, [esi]
0x42BE86: cmp     ecx, edi
0x42BE88: jz      short loc_42BE92
0x42BE8A: mov     eax, [ecx]
0x42BE8C: mov     edx, [eax]
0x42BE8E: push    1
0x42BE90: call    edx
0x42BE92: mov     esi, [esi+4]
0x42BE95: cmp     esi, edi
0x42BE97: jnz     short loc_42BE84
0x42BE99: mov     ecx, ArchiveList
0x42BE9F: call    BSSimpleList_Clear
0x42BEA4: mov     eax, ArchiveList
0x42BEA9: push    eax
0x42BEAA: call    FormHeapFree
0x42BEAF: add     esp, 4
0x42BEB2: mov     ArchiveList, edi
0x42BEB8: mov     ecx, ArchiveInvalidateFilenames
0x42BEBE: cmp     ecx, edi
0x42BEC0: jz      short loc_42BEF8
0x42BEC2: xor     esi, esi
0x42BEC4: cmp     [ecx+0Ah], di
0x42BEC8: jbe     short loc_42BEF0
0x42BECA: lea     ebx, [ebx+0]
0x42BED0: mov     ecx, [ecx+4]
0x42BED3: mov     edx, [ecx+esi*4]
0x42BED6: push    edx
0x42BED7: call    FormHeapFree
0x42BEDC: mov     ecx, ArchiveInvalidateFilenames
0x42BEE2: movzx   eax, word ptr [ecx+0Ah]
0x42BEE6: add     esi, 1
0x42BEE9: add     esp, 4
0x42BEEC: cmp     esi, eax
0x42BEEE: jb      short loc_42BED0
0x42BEF0: mov     edx, [ecx]
0x42BEF2: mov     eax, [edx]
0x42BEF4: push    1
0x42BEF6: call    eax
0x42BEF8: mov     ecx, ArchiveInvalidatedDirPAths
0x42BEFE: cmp     ecx, edi
0x42BF00: jz      short loc_42BF38
0x42BF02: xor     esi, esi
0x42BF04: cmp     [ecx+0Ah], di
0x42BF08: jbe     short loc_42BF30
0x42BF0A: lea     ebx, [ebx+0]
0x42BF10: mov     ecx, [ecx+4]
0x42BF13: mov     edx, [ecx+esi*4]
0x42BF16: push    edx
0x42BF17: call    FormHeapFree
0x42BF1C: mov     ecx, ArchiveInvalidatedDirPAths
0x42BF22: movzx   eax, word ptr [ecx+0Ah]
0x42BF26: add     esi, 1
0x42BF29: add     esp, 4
0x42BF2C: cmp     esi, eax
0x42BF2E: jb      short loc_42BF10
0x42BF30: mov     edx, [ecx]
0x42BF32: mov     eax, [edx]
0x42BF34: push    1
0x42BF36: call    eax
0x42BF38: mov     FirstLoadedArchiveByType, edi
0x42BF3E: mov     dword_B3390C, edi
0x42BF44: mov     dword_B338EC, edi
0x42BF4A: mov     dword_B33910, edi
0x42BF50: mov     dword_B338F0, edi
0x42BF56: mov     dword_B33914, edi
0x42BF5C: mov     dword_B338F4, edi
0x42BF62: mov     dword_B33918, edi
0x42BF68: mov     dword_B338F8, edi
0x42BF6E: mov     dword_B3391C, edi
0x42BF74: mov     dword_B338FC, edi
0x42BF7A: mov     dword_B33920, edi
0x42BF80: mov     dword_B33900, edi
0x42BF86: mov     dword_B33924, edi
0x42BF8C: mov     dword_B33904, edi
0x42BF92: mov     dword_B33928, edi
0x42BF98: mov     dword_B33908, edi
0x42BF9E: mov     dword_B3392C, edi
0x42BFA4: pop     edi
0x42BFA5: pop     esi
0x42BFA6: retn
