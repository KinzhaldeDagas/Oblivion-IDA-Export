0x47DAD0: push    ebx
0x47DAD1: mov     ebx, [esp+4+arg_0]
0x47DAD5: push    ebp
0x47DAD6: push    esi
0x47DAD7: mov     esi, ecx
0x47DAD9: mov     eax, [esi]
0x47DADB: mov     edx, [eax+4]
0x47DADE: push    edi
0x47DADF: push    ebx
0x47DAE0: call    edx
0x47DAE2: mov     ebp, eax
0x47DAE4: mov     eax, [esi+8]
0x47DAE7: mov     edi, [eax+ebp*4]
0x47DAEA: test    edi, edi
0x47DAEC: jz      short loc_47DB08
0x47DAEE: mov     edi, edi
0x47DAF0: mov     eax, [edi+4]
0x47DAF3: mov     edx, [esi]
0x47DAF5: mov     edx, [edx+8]
0x47DAF8: push    eax
0x47DAF9: push    ebx
0x47DAFA: mov     ecx, esi
0x47DAFC: call    edx
0x47DAFE: test    al, al
0x47DB00: jnz     short loc_47DB50
0x47DB02: mov     edi, [edi]
0x47DB04: test    edi, edi
0x47DB06: jnz     short loc_47DAF0
0x47DB08: mov     eax, [esi]
0x47DB0A: mov     edx, [eax+14h]
0x47DB0D: mov     ecx, esi
0x47DB0F: call    edx
0x47DB11: mov     ecx, [esp+10h+arg_4]
0x47DB15: mov     edx, [esi]
0x47DB17: mov     edx, [edx+0Ch]
0x47DB1A: sub     esp, 0Ch
0x47DB1D: mov     edi, eax
0x47DB1F: mov     eax, esp
0x47DB21: mov     [eax], ecx
0x47DB23: mov     ecx, [esp+1Ch+arg_8]
0x47DB27: mov     [eax+4], ecx
0x47DB2A: mov     ecx, [esp+1Ch+arg_C]
0x47DB2E: push    ebx
0x47DB2F: mov     [eax+8], ecx
0x47DB32: push    edi
0x47DB33: mov     ecx, esi
0x47DB35: call    edx
0x47DB37: mov     eax, [esi+8]
0x47DB3A: mov     ecx, [eax+ebp*4]
0x47DB3D: mov     [edi], ecx
0x47DB3F: mov     edx, [esi+8]
0x47DB42: mov     [edx+ebp*4], edi
0x47DB45: add     dword ptr [esi+0Ch], 1
0x47DB49: pop     edi
0x47DB4A: pop     esi
0x47DB4B: pop     ebp
0x47DB4C: pop     ebx
0x47DB4D: retn    10h
0x47DB50: mov     eax, [esi]
0x47DB52: mov     edx, [eax+10h]
0x47DB55: push    edi
0x47DB56: mov     ecx, esi
0x47DB58: call    edx
0x47DB5A: mov     ecx, [esp+10h+arg_4]
0x47DB5E: mov     edx, [esi]
0x47DB60: mov     edx, [edx+0Ch]
0x47DB63: sub     esp, 0Ch
0x47DB66: mov     eax, esp
0x47DB68: mov     [eax], ecx
0x47DB6A: mov     ecx, [esp+1Ch+arg_8]
0x47DB6E: mov     [eax+4], ecx
0x47DB71: mov     ecx, [esp+1Ch+arg_C]
0x47DB75: push    ebx
0x47DB76: mov     [eax+8], ecx
0x47DB79: push    edi
0x47DB7A: mov     ecx, esi
0x47DB7C: call    edx
0x47DB7E: pop     edi
0x47DB7F: pop     esi
0x47DB80: pop     ebp
0x47DB81: pop     ebx
0x47DB82: retn    10h
