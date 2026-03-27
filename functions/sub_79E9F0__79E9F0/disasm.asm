0x79E9F0: push    ebx
0x79E9F1: mov     ebx, [esp+4+arg_0]
0x79E9F5: push    ebp
0x79E9F6: mov     ebp, [esp+8+arg_4]
0x79E9FA: cmp     ebx, ebp
0x79E9FC: jz      short loc_79EA6D
0x79E9FE: push    esi
0x79E9FF: lea     esi, [ebx+30h]
0x79EA02: cmp     esi, ebp
0x79EA04: jz      short loc_79EA6C
0x79EA06: push    edi
0x79EA07: lea     edi, [esi+30h]
0x79EA0A: lea     ebx, [ebx+0]
0x79EA10: fld     dword ptr [edi-0Ch]
0x79EA13: fld     dword ptr [ebx+24h]
0x79EA16: fcompp
0x79EA18: fnstsw  ax
0x79EA1A: test    ah, 5
0x79EA1D: jp      short loc_79EA30
0x79EA1F: cmp     ebx, esi
0x79EA21: jz      short loc_79EA61
0x79EA23: cmp     esi, edi
0x79EA25: jz      short loc_79EA61
0x79EA27: push    0
0x79EA29: push    0
0x79EA2B: push    edi
0x79EA2C: push    esi
0x79EA2D: push    ebx
0x79EA2E: jmp     short loc_79EA59
0x79EA30: mov     edx, esi
0x79EA32: mov     ecx, esi
0x79EA34: fld     dword ptr [edi-0Ch]
0x79EA37: sub     ecx, 30h ; '0'
0x79EA3A: fld     dword ptr [ecx+24h]
0x79EA3D: fcompp
0x79EA3F: fnstsw  ax
0x79EA41: test    ah, 5
0x79EA44: jp      short loc_79EA4A
0x79EA46: mov     edx, ecx
0x79EA48: jmp     short loc_79EA34
0x79EA4A: cmp     edx, esi
0x79EA4C: jz      short loc_79EA61
0x79EA4E: cmp     esi, edi
0x79EA50: jz      short loc_79EA61
0x79EA52: push    0
0x79EA54: push    0
0x79EA56: push    edi
0x79EA57: push    esi
0x79EA58: push    edx
0x79EA59: call    sub_79BB20
0x79EA5E: add     esp, 14h
0x79EA61: add     esi, 30h ; '0'
0x79EA64: add     edi, 30h ; '0'
0x79EA67: cmp     esi, ebp
0x79EA69: jnz     short loc_79EA10
0x79EA6B: pop     edi
0x79EA6C: pop     esi
0x79EA6D: pop     ebp
0x79EA6E: pop     ebx
0x79EA6F: retn
