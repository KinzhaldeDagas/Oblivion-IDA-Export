0x715F40: push    ebx
0x715F41: push    ebp
0x715F42: push    esi
0x715F43: mov     esi, [esp+0Ch+a2]
0x715F47: push    edi
0x715F48: push    esi; a2
0x715F49: mov     edi, ecx
0x715F4B: call    sub_7008A0
0x715F50: mov     ecx, esi
0x715F52: call    sub_712A20
0x715F57: mov     eax, [esi+21Ch]
0x715F5D: mov     edx, [eax+4]
0x715F60: push    1
0x715F62: lea     ecx, [esp+14h+a2]
0x715F66: push    ecx
0x715F67: push    2
0x715F69: lea     ebx, [edi+8]
0x715F6C: push    ebx
0x715F6D: push    eax
0x715F6E: mov     [esp+24h+a2], 2
0x715F76: call    edx
0x715F78: mov     eax, [esi+21Ch]
0x715F7E: push    1
0x715F80: lea     ecx, [esp+28h+a2]
0x715F84: push    ecx
0x715F85: mov     ebp, 4
0x715F8A: push    ebp
0x715F8B: lea     edx, [edi+0Ch]
0x715F8E: push    edx
0x715F8F: push    eax
0x715F90: mov     eax, [eax+4]
0x715F93: mov     [esp+38h+a2], ebp
0x715F97: call    eax
0x715F99: mov     eax, [esi+21Ch]
0x715F9F: push    1
0x715FA1: lea     ecx, [esp+3Ch+a2]
0x715FA5: push    ecx
0x715FA6: push    ebp
0x715FA7: lea     edx, [edi+10h]
0x715FAA: push    edx
0x715FAB: push    eax
0x715FAC: mov     eax, [eax+4]
0x715FAF: mov     [esp+4Ch+a2], ebp
0x715FB3: call    eax
0x715FB5: mov     eax, [esi+21Ch]
0x715FBB: push    1
0x715FBD: lea     ecx, [esp+50h+a2]
0x715FC1: push    ecx
0x715FC2: push    ebp
0x715FC3: lea     edx, [edi+14h]
0x715FC6: push    edx
0x715FC7: push    eax
0x715FC8: mov     eax, [eax+4]
0x715FCB: mov     [esp+60h+a2], ebp
0x715FCF: call    eax
0x715FD1: mov     eax, [esi+21Ch]
0x715FD7: mov     edx, [eax+4]
0x715FDA: add     esp, 50h
0x715FDD: push    1
0x715FDF: lea     ecx, [esp+14h+a2]
0x715FE3: push    ecx
0x715FE4: push    ebp
0x715FE5: add     edi, 18h
0x715FE8: push    edi
0x715FE9: push    eax
0x715FEA: mov     [esp+24h+a2], ebp
0x715FEE: call    edx
0x715FF0: add     esp, 14h
0x715FF3: mov     ecx, esi
0x715FF5: call    sub_712A20
0x715FFA: cmp     dword ptr [esi+0D8h], 0A000101h
0x716004: jnb     short loc_71601B
0x716006: movzx   eax, word ptr [ebx]
0x716009: movzx   ecx, ax
0x71600C: and     eax, 0FFF0h
0x716011: add     eax, eax
0x716013: and     ecx, 0Fh
0x716016: or      eax, ecx
0x716018: mov     [ebx], ax
0x71601B: cmp     dword ptr [esi+0D8h], 0A000103h
0x716025: jnb     short loc_716035
0x716027: mov     ax, [ebx]
0x71602A: mov     [esi+25Ah], ax
0x716031: and     word ptr [ebx], 1Fh
0x716035: cmp     dword ptr [esi+0D8h], 0A01006Dh
0x71603F: jnb     short loc_716046
0x716041: and     word ptr [ebx], 0FFDFh
0x716046: pop     edi
0x716047: pop     esi
0x716048: pop     ebp
0x716049: pop     ebx
0x71604A: retn    4
