0x715D80: push    ebx
0x715D81: mov     ebx, [esp+4+arg_4]
0x715D85: push    esi
0x715D86: push    edi
0x715D87: mov     edi, [esp+0Ch+arg_0]
0x715D8B: push    ebx
0x715D8C: push    edi
0x715D8D: mov     esi, ecx
0x715D8F: call    sub_700770
0x715D94: mov     ax, [esi+8]
0x715D98: mov     [edi+8], ax
0x715D9C: fld     dword ptr [esi+0Ch]
0x715D9F: fstp    dword ptr [edi+0Ch]
0x715DA2: fld     dword ptr [esi+10h]
0x715DA5: fstp    dword ptr [edi+10h]
0x715DA8: fld     dword ptr [esi+14h]
0x715DAB: fstp    dword ptr [edi+14h]
0x715DAE: fld     dword ptr [esi+18h]
0x715DB1: fstp    dword ptr [edi+18h]
0x715DB4: fld     dword ptr [esi+1Ch]
0x715DB7: fstp    dword ptr [edi+1Ch]
0x715DBA: fld     dword ptr [esi+20h]
0x715DBD: fstp    dword ptr [edi+20h]
0x715DC0: fld     dword ptr [esi+24h]
0x715DC3: fstp    dword ptr [edi+24h]
0x715DC6: mov     eax, [esi+30h]
0x715DC9: test    eax, eax
0x715DCB: jz      short loc_715E12
0x715DCD: push    ebp
0x715DCE: lea     ecx, [esp+10h+arg_0]
0x715DD2: push    ecx
0x715DD3: mov     ecx, [ebx]
0x715DD5: push    eax
0x715DD6: call    NiTMap_GetAt
0x715DDB: test    al, al
0x715DDD: jz      short loc_715E0A
0x715DDF: mov     ebp, [esp+10h+arg_0]
0x715DE3: mov     edx, [ebp+0]
0x715DE6: mov     eax, [edx+4]
0x715DE9: mov     ebx, [esi+30h]
0x715DEC: mov     ecx, ebp
0x715DEE: call    eax
0x715DF0: mov     edx, [ebx]
0x715DF2: mov     edx, [edx+4]
0x715DF5: mov     ecx, ebx
0x715DF7: mov     [esp+10h+arg_0], eax
0x715DFB: call    edx
0x715DFD: mov     ecx, [esp+10h+arg_0]
0x715E01: cmp     eax, ecx
0x715E03: jnz     short loc_715E0A
0x715E05: mov     [edi+30h], ebp
0x715E08: jmp     short loc_715E11
0x715E0A: mov     dword ptr [edi+30h], 0
0x715E11: pop     ebp
0x715E12: mov     ecx, [esi+34h]
0x715E15: test    ecx, ecx
0x715E17: jz      short loc_715E2E
0x715E19: mov     eax, [ecx]
0x715E1B: mov     edx, [esp+0Ch+arg_4]
0x715E1F: mov     eax, [eax+18h]
0x715E22: push    edx
0x715E23: call    eax
0x715E25: push    eax; a2
0x715E26: lea     ecx, [edi+34h]; this
0x715E29: call    NiSmartPointer_Set??
0x715E2E: pop     edi
0x715E2F: pop     esi
0x715E30: pop     ebx
0x715E31: retn    8
