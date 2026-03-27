0x6BEA00: sub     esp, 8
0x6BEA03: push    ebx
0x6BEA04: push    ebp
0x6BEA05: push    esi
0x6BEA06: push    edi
0x6BEA07: mov     edi, [esp+18h+arg_0]
0x6BEA0B: cmp     dword ptr [edi+0D8h], 0A010068h
0x6BEA15: mov     esi, ecx
0x6BEA17: mov     [esp+18h+var_4], esi
0x6BEA1B: mov     ebp, 4
0x6BEA20: jnb     short loc_6BEA42
0x6BEA22: mov     eax, [edi+21Ch]
0x6BEA28: push    1
0x6BEA2A: lea     ecx, [esp+1Ch+arg_0]
0x6BEA2E: push    ecx
0x6BEA2F: push    ebp
0x6BEA30: lea     edx, [esp+24h+var_8]
0x6BEA34: push    edx
0x6BEA35: push    eax
0x6BEA36: mov     eax, [eax+4]
0x6BEA39: mov     [esp+2Ch+arg_0], ebp
0x6BEA3D: call    eax
0x6BEA3F: add     esp, 14h
0x6BEA42: xor     ebx, ebx
0x6BEA44: add     esi, 14h
0x6BEA47: jmp     short loc_6BEA50
0x6BEA49: align 10h
0x6BEA50: mov     eax, [edi+21Ch]
0x6BEA56: mov     edx, [eax+4]
0x6BEA59: push    1
0x6BEA5B: lea     ecx, [esp+1Ch+arg_0]
0x6BEA5F: push    ecx
0x6BEA60: push    ebp
0x6BEA61: push    esi
0x6BEA62: push    eax
0x6BEA63: mov     [esp+2Ch+arg_0], ebp
0x6BEA67: call    edx
0x6BEA69: add     esp, 14h
0x6BEA6C: cmp     dword ptr [esi], 0
0x6BEA6F: jbe     short loc_6BEAB6
0x6BEA71: mov     eax, [edi+21Ch]
0x6BEA77: push    1
0x6BEA79: lea     ecx, [esp+1Ch+arg_0]
0x6BEA7D: push    ecx
0x6BEA7E: push    ebp
0x6BEA7F: lea     edx, [esp+24h+var_8]
0x6BEA83: push    edx
0x6BEA84: push    eax
0x6BEA85: mov     eax, [eax+4]
0x6BEA88: mov     [esp+2Ch+arg_0], ebp
0x6BEA8C: call    eax
0x6BEA8E: mov     eax, [esp+2Ch+var_8]
0x6BEA92: mov     edx, [esp+2Ch+var_4]
0x6BEA96: mov     [esi+0Ch], eax
0x6BEA99: mov     cl, ds:byte_B3D3E8[eax]
0x6BEA9F: mov     [ebx+edx+2Ch], cl
0x6BEAA3: mov     ecx, [esi]
0x6BEAA5: mov     eax, ds:0B3D088h[eax*4]
0x6BEAAC: push    ecx
0x6BEAAD: push    edi
0x6BEAAE: call    eax ; dword_B3D088
0x6BEAB0: add     esp, 1Ch
0x6BEAB3: mov     [esi+1Ch], eax
0x6BEAB6: add     ebx, 1
0x6BEAB9: add     esi, ebp
0x6BEABB: cmp     ebx, 3
0x6BEABE: jb      short loc_6BEA50
0x6BEAC0: pop     edi
0x6BEAC1: pop     esi
0x6BEAC2: pop     ebp
0x6BEAC3: pop     ebx
0x6BEAC4: add     esp, 8
0x6BEAC7: retn    4
