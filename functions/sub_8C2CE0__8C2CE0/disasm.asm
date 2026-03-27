0x8C2CE0: push    esi
0x8C2CE1: mov     esi, ecx
0x8C2CE3: cmp     dword ptr [esi+0Ch], 0
0x8C2CE7: jnz     short loc_8C2D5D
0x8C2CE9: push    14h; Size
0x8C2CEB: call    FormHeapAlloc
0x8C2CF0: add     esp, 4
0x8C2CF3: test    eax, eax
0x8C2CF5: jz      short loc_8C2D1D
0x8C2CF7: lea     ecx, [eax+4]
0x8C2CFA: mov     dword ptr [ecx], 0
0x8C2D00: mov     dword ptr [eax+0Ch], 0
0x8C2D07: mov     dword ptr [eax+10h], 0
0x8C2D0E: mov     dword ptr [eax+8], 1
0x8C2D15: mov     dword ptr [eax], offset ??_7hkHingeConstraintCinfo@@6B@; const hkHingeConstraintCinfo::`vftable'
0x8C2D1B: jmp     short loc_8C2D1F
0x8C2D1D: xor     ecx, ecx
0x8C2D1F: cmp     dword ptr [esi+8], 0
0x8C2D23: mov     [esi+0Ch], ecx
0x8C2D26: jz      short loc_8C2D4F
0x8C2D28: test    ecx, ecx
0x8C2D2A: jz      short loc_8C2D45
0x8C2D2C: lea     eax, [ecx-4]
0x8C2D2F: push    eax
0x8C2D30: mov     ecx, esi
0x8C2D32: call    sub_8A07E0
0x8C2D37: mov     eax, [esp+4+arg_0]
0x8C2D3B: mov     byte ptr [eax], 1
0x8C2D3E: mov     eax, [esi+0Ch]
0x8C2D41: pop     esi
0x8C2D42: retn    4
0x8C2D45: xor     eax, eax
0x8C2D47: push    eax
0x8C2D48: mov     ecx, esi
0x8C2D4A: call    sub_8A07E0
0x8C2D4F: mov     eax, [esp+4+arg_0]
0x8C2D53: mov     byte ptr [eax], 1
0x8C2D56: mov     eax, [esi+0Ch]
0x8C2D59: pop     esi
0x8C2D5A: retn    4
0x8C2D5D: mov     ecx, [esp+4+arg_0]
0x8C2D61: mov     byte ptr [ecx], 0
0x8C2D64: mov     eax, [esi+0Ch]
0x8C2D67: pop     esi
0x8C2D68: retn    4
