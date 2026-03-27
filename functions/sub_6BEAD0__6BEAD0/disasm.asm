0x6BEAD0: push    ecx
0x6BEAD1: push    ebx
0x6BEAD2: mov     ebx, [esp+8+arg_0]
0x6BEAD6: push    ebp
0x6BEAD7: push    esi
0x6BEAD8: mov     esi, [esp+10h+arg_4]
0x6BEADC: push    edi
0x6BEADD: add     esi, 14h
0x6BEAE0: mov     [esp+14h+arg_4], 3
0x6BEAE8: mov     ebp, 4
0x6BEAED: lea     ecx, [ecx+0]
0x6BEAF0: mov     eax, [ebx+220h]
0x6BEAF6: mov     edx, [eax+8]
0x6BEAF9: push    1
0x6BEAFB: lea     ecx, [esp+18h+var_4]
0x6BEAFF: push    ecx
0x6BEB00: push    ebp
0x6BEB01: push    esi
0x6BEB02: push    eax
0x6BEB03: mov     [esp+28h+var_4], ebp
0x6BEB07: call    edx
0x6BEB09: add     esp, 14h
0x6BEB0C: cmp     dword ptr [esi], 0
0x6BEB0F: jbe     short loc_6BEB43
0x6BEB11: mov     eax, [ebx+220h]
0x6BEB17: mov     edx, [eax+8]
0x6BEB1A: push    1
0x6BEB1C: lea     ecx, [esp+18h+var_4]
0x6BEB20: push    ecx
0x6BEB21: push    ebp
0x6BEB22: lea     edi, [esi+0Ch]
0x6BEB25: push    edi
0x6BEB26: push    eax
0x6BEB27: mov     [esp+28h+var_4], ebp
0x6BEB2B: call    edx
0x6BEB2D: mov     ecx, [esi]
0x6BEB2F: mov     edx, [esi+1Ch]
0x6BEB32: mov     eax, [edi]
0x6BEB34: mov     eax, ds:0B3D5C0h[eax*4]
0x6BEB3B: push    ecx
0x6BEB3C: push    edx
0x6BEB3D: push    ebx
0x6BEB3E: call    eax ; dword_B3D5C0
0x6BEB40: add     esp, 20h
0x6BEB43: add     esi, ebp
0x6BEB45: sub     [esp+14h+arg_4], 1
0x6BEB4A: jnz     short loc_6BEAF0
0x6BEB4C: pop     edi
0x6BEB4D: pop     esi
0x6BEB4E: pop     ebp
0x6BEB4F: pop     ebx
0x6BEB50: pop     ecx
0x6BEB51: retn
