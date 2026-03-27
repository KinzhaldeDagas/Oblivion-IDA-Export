0x911F40: push    esi
0x911F41: mov     esi, ecx
0x911F43: cmp     dword ptr [esi+0Ch], 0
0x911F47: jnz     short loc_911FBD
0x911F49: push    14h; Size
0x911F4B: call    FormHeapAlloc
0x911F50: add     esp, 4
0x911F53: test    eax, eax
0x911F55: jz      short loc_911F7D
0x911F57: lea     ecx, [eax+4]
0x911F5A: mov     dword ptr [ecx], 0
0x911F60: mov     dword ptr [eax+0Ch], 0
0x911F67: mov     dword ptr [eax+10h], 0
0x911F6E: mov     dword ptr [eax+8], 1
0x911F75: mov     dword ptr [eax], offset ??_7hkGenericConstraintCinfo@@6B@; const hkGenericConstraintCinfo::`vftable'
0x911F7B: jmp     short loc_911F7F
0x911F7D: xor     ecx, ecx
0x911F7F: cmp     dword ptr [esi+8], 0
0x911F83: mov     [esi+0Ch], ecx
0x911F86: jz      short loc_911FAF
0x911F88: test    ecx, ecx
0x911F8A: jz      short loc_911FA5
0x911F8C: lea     eax, [ecx-4]
0x911F8F: push    eax
0x911F90: mov     ecx, esi
0x911F92: call    sub_8A07E0
0x911F97: mov     eax, [esp+4+arg_0]
0x911F9B: mov     byte ptr [eax], 1
0x911F9E: mov     eax, [esi+0Ch]
0x911FA1: pop     esi
0x911FA2: retn    4
0x911FA5: xor     eax, eax
0x911FA7: push    eax
0x911FA8: mov     ecx, esi
0x911FAA: call    sub_8A07E0
0x911FAF: mov     eax, [esp+4+arg_0]
0x911FB3: mov     byte ptr [eax], 1
0x911FB6: mov     eax, [esi+0Ch]
0x911FB9: pop     esi
0x911FBA: retn    4
0x911FBD: mov     ecx, [esp+4+arg_0]
0x911FC1: mov     byte ptr [ecx], 0
0x911FC4: mov     eax, [esi+0Ch]
0x911FC7: pop     esi
0x911FC8: retn    4
