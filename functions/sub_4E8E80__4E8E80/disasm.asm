0x4E8E80: mov     edx, [ecx+20h]
0x4E8E83: sub     esp, 0Ch
0x4E8E86: push    esi
0x4E8E87: push    edi
0x4E8E88: lea     edi, [ecx+1Ch]
0x4E8E8B: xor     eax, eax
0x4E8E8D: test    edx, edx
0x4E8E8F: jbe     short loc_4E8EA5
0x4E8E91: mov     esi, [edi+8]
0x4E8E94: mov     ecx, esi
0x4E8E96: cmp     dword ptr [ecx], 0
0x4E8E99: jnz     short loc_4E8EFC
0x4E8E9B: add     eax, 1
0x4E8E9E: add     ecx, 4
0x4E8EA1: cmp     eax, edx
0x4E8EA3: jb      short loc_4E8E96
0x4E8EA5: xor     eax, eax
0x4E8EA7: test    eax, eax
0x4E8EA9: mov     [esp+14h+var_8], eax
0x4E8EAD: jz      short loc_4E8EF6
0x4E8EAF: nop
0x4E8EB0: lea     eax, [esp+14h+var_C]
0x4E8EB4: push    eax
0x4E8EB5: lea     ecx, [esp+18h+var_4]
0x4E8EB9: push    ecx
0x4E8EBA: lea     edx, [esp+1Ch+var_8]
0x4E8EBE: push    edx
0x4E8EBF: mov     ecx, edi
0x4E8EC1: mov     [esp+20h+var_C], 0
0x4E8EC9: call    sub_452600
0x4E8ECE: mov     esi, [esp+14h+var_C]
0x4E8ED2: test    esi, esi
0x4E8ED4: jz      short loc_4E8EEF
0x4E8ED6: cmp     dword ptr [esi+4], 0
0x4E8EDA: jnz     short loc_4E8EE1
0x4E8EDC: cmp     dword ptr [esi], 0
0x4E8EDF: jz      short loc_4E8EEF
0x4E8EE1: mov     ecx, [esi]
0x4E8EE3: call    sub_67EDA0
0x4E8EE8: mov     esi, [esi+4]
0x4E8EEB: test    esi, esi
0x4E8EED: jnz     short loc_4E8ED6
0x4E8EEF: cmp     [esp+14h+var_8], 0
0x4E8EF4: jnz     short loc_4E8EB0
0x4E8EF6: pop     edi
0x4E8EF7: pop     esi
0x4E8EF8: add     esp, 0Ch
0x4E8EFB: retn
0x4E8EFC: mov     eax, [esi+eax*4]
0x4E8EFF: jmp     short loc_4E8EA7
