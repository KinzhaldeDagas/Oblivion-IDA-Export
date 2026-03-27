0x55CFE0: push    ebx
0x55CFE1: push    ebp
0x55CFE2: mov     ebp, [esp+8+arg_0]
0x55CFE6: test    ebp, ebp
0x55CFE8: mov     ebx, ecx
0x55CFEA: jz      loc_55D07E
0x55CFF0: mov     eax, [esp+8+arg_4]
0x55CFF4: push    esi
0x55CFF5: push    edi
0x55CFF6: push    eax
0x55CFF7: push    ebp
0x55CFF8: call    sub_70AC60
0x55CFFD: lea     ecx, [ebx+0DCh]
0x55D003: push    ecx
0x55D004: lea     ecx, [ebp+0DCh]
0x55D00A: call    sub_55E2A0
0x55D00F: lea     esi, [ebx+0E0h]
0x55D015: lea     edi, [ebp+0E0h]
0x55D01B: mov     ecx, 9
0x55D020: rep movsd
0x55D022: movzx   edx, byte ptr [ebx+104h]
0x55D029: mov     [ebp+104h], dl
0x55D02F: movzx   eax, byte ptr [ebx+105h]
0x55D036: mov     [ebp+105h], al
0x55D03C: movzx   ecx, byte ptr [ebx+106h]
0x55D043: mov     [ebp+106h], cl
0x55D049: movzx   edx, byte ptr [ebx+107h]
0x55D050: mov     [ebp+107h], dl
0x55D056: pop     edi
0x55D057: fld     dword ptr [ebx+10Ch]
0x55D05D: pop     esi
0x55D05E: fstp    dword ptr [ebp+10Ch]
0x55D064: movzx   eax, byte ptr [ebx+110h]
0x55D06B: mov     [ebp+110h], al
0x55D071: movzx   ecx, byte ptr [ebx+111h]
0x55D078: mov     [ebp+111h], cl
0x55D07E: pop     ebp
0x55D07F: pop     ebx
0x55D080: retn    8
