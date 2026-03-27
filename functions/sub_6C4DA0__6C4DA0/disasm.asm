0x6C4DA0: sub     esp, 8
0x6C4DA3: push    ebx
0x6C4DA4: push    esi
0x6C4DA5: push    edi
0x6C4DA6: mov     edi, [esp+14h+arg_0]
0x6C4DAA: push    edi
0x6C4DAB: mov     esi, ecx
0x6C4DAD: call    sub_716050
0x6C4DB2: mov     al, [esi+6Ch]
0x6C4DB5: push    1
0x6C4DB7: lea     ecx, [esp+18h+var_4]
0x6C4DBB: push    ecx
0x6C4DBC: mov     byte ptr [esp+1Ch+arg_0], al
0x6C4DC0: mov     eax, [edi+220h]
0x6C4DC6: push    1
0x6C4DC8: lea     edx, [esp+20h+arg_0]
0x6C4DCC: push    edx
0x6C4DCD: push    eax
0x6C4DCE: mov     eax, [eax+8]
0x6C4DD1: mov     [esp+28h+var_4], 1
0x6C4DD9: call    eax
0x6C4DDB: movzx   ecx, word ptr [esi+46h]
0x6C4DDF: mov     eax, [edi+220h]
0x6C4DE5: push    1
0x6C4DE7: lea     edx, [esp+2Ch+var_4]
0x6C4DEB: push    edx
0x6C4DEC: mov     [esp+30h+var_8], ecx
0x6C4DF0: mov     edx, [eax+8]
0x6C4DF3: push    4
0x6C4DF5: lea     ecx, [esp+34h+var_8]
0x6C4DF9: push    ecx
0x6C4DFA: push    eax
0x6C4DFB: mov     [esp+3Ch+var_4], 4
0x6C4E03: call    edx
0x6C4E05: xor     ebx, ebx
0x6C4E07: add     esp, 28h
0x6C4E0A: cmp     [esp+14h+var_8], ebx
0x6C4E0E: jbe     short loc_6C4E2D
0x6C4E10: mov     eax, [esi+40h]
0x6C4E13: mov     eax, [eax+ebx*4]
0x6C4E16: test    eax, eax
0x6C4E18: jz      short loc_6C4E24
0x6C4E1A: mov     edx, [edi]
0x6C4E1C: push    eax
0x6C4E1D: mov     eax, [edx+2Ch]
0x6C4E20: mov     ecx, edi
0x6C4E22: call    eax
0x6C4E24: add     ebx, 1
0x6C4E27: cmp     ebx, [esp+14h+var_8]
0x6C4E2B: jb      short loc_6C4E10
0x6C4E2D: mov     edx, [edi]
0x6C4E2F: mov     eax, [esi+7Ch]
0x6C4E32: mov     edx, [edx+2Ch]
0x6C4E35: push    eax
0x6C4E36: mov     ecx, edi
0x6C4E38: call    edx
0x6C4E3A: pop     edi
0x6C4E3B: pop     esi
0x6C4E3C: pop     ebx
0x6C4E3D: add     esp, 8
0x6C4E40: retn    4
