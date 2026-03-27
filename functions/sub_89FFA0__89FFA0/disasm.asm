0x89FFA0: sub     esp, 8
0x89FFA3: mov     eax, [ecx]
0x89FFA5: mov     eax, [eax+74h]
0x89FFA8: push    ebx
0x89FFA9: push    esi
0x89FFAA: push    edi
0x89FFAB: lea     edx, [esp+14h+var_5]
0x89FFAF: push    edx
0x89FFB0: mov     [esp+18h+var_4], ecx
0x89FFB4: call    eax
0x89FFB6: mov     esi, eax
0x89FFB8: mov     eax, [esi+4]
0x89FFBB: test    eax, eax
0x89FFBD: jz      short loc_89FFC4
0x89FFBF: mov     eax, [eax+0Ch]
0x89FFC2: jmp     short loc_89FFC6
0x89FFC4: xor     eax, eax
0x89FFC6: mov     ecx, [esi+8]
0x89FFC9: test    ecx, ecx
0x89FFCB: jz      short loc_89FFD2
0x89FFCD: mov     edi, [ecx+0Ch]
0x89FFD0: jmp     short loc_89FFD4
0x89FFD2: xor     edi, edi
0x89FFD4: test    eax, eax
0x89FFD6: mov     ebx, [esp+14h+arg_4]
0x89FFDA: mov     dword ptr [esi+4], 0
0x89FFE1: mov     dword ptr [esi+8], 0
0x89FFE8: jz      short loc_8A0040
0x89FFEA: lea     ecx, [esp+14h+arg_4]
0x89FFEE: push    ecx
0x89FFEF: mov     ecx, [ebx]
0x89FFF1: push    eax
0x89FFF2: call    NiTMap_GetAt
0x89FFF7: test    al, al
0x89FFF9: jz      short loc_8A000D
0x89FFFB: mov     eax, [esp+14h+arg_4]
0x89FFFF: test    eax, eax
0x8A0001: jz      short loc_8A0008
0x8A0003: mov     eax, [eax+8]
0x8A0006: jmp     short loc_8A000A
0x8A0008: xor     eax, eax
0x8A000A: mov     [esi+4], eax
0x8A000D: test    edi, edi
0x8A000F: jz      short loc_8A0040
0x8A0011: mov     ecx, [ebx]
0x8A0013: lea     edx, [esp+14h+arg_4]
0x8A0017: push    edx
0x8A0018: push    edi
0x8A0019: call    NiTMap_GetAt
0x8A001E: test    al, al
0x8A0020: jz      short loc_8A0028
0x8A0022: mov     eax, [esp+14h+arg_4]
0x8A0026: jmp     short loc_8A0032
0x8A0028: mov     eax, [edi]
0x8A002A: mov     edx, [eax+18h]
0x8A002D: push    ebx
0x8A002E: mov     ecx, edi
0x8A0030: call    edx
0x8A0032: test    eax, eax
0x8A0034: jz      short loc_8A003B
0x8A0036: mov     eax, [eax+8]
0x8A0039: jmp     short loc_8A003D
0x8A003B: xor     eax, eax
0x8A003D: mov     [esi+8], eax
0x8A0040: mov     eax, [esp+14h+arg_0]
0x8A0044: mov     ecx, [esp+14h+var_4]
0x8A0048: push    ebx
0x8A0049: push    eax
0x8A004A: call    sub_89D610
0x8A004F: pop     edi
0x8A0050: pop     esi
0x8A0051: pop     ebx
0x8A0052: add     esp, 8
0x8A0055: retn    8
