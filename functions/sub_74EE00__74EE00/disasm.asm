0x74EE00: mov     eax, [esp+arg_4]
0x74EE04: push    esi
0x74EE05: push    edi
0x74EE06: mov     edi, [esp+8+arg_0]
0x74EE0A: push    eax
0x74EE0B: push    edi
0x74EE0C: mov     esi, ecx
0x74EE0E: call    sub_752C40
0x74EE13: fld     dword ptr [esi+18h]
0x74EE16: fstp    dword ptr [edi+18h]
0x74EE19: fld     dword ptr [esi+1Ch]
0x74EE1C: fstp    dword ptr [edi+1Ch]
0x74EE1F: fld     dword ptr [esi+20h]
0x74EE22: fstp    dword ptr [edi+20h]
0x74EE25: fld     dword ptr [esi+24h]
0x74EE28: fstp    dword ptr [edi+24h]
0x74EE2B: fld     dword ptr [esi+28h]
0x74EE2E: fstp    dword ptr [edi+28h]
0x74EE31: fld     dword ptr [esi+2Ch]
0x74EE34: fstp    dword ptr [edi+2Ch]
0x74EE37: mov     ecx, [esi+30h]
0x74EE3A: mov     [edi+30h], ecx
0x74EE3D: mov     edx, [esi+34h]
0x74EE40: mov     [edi+34h], edx
0x74EE43: mov     eax, [esi+38h]
0x74EE46: mov     [edi+38h], eax
0x74EE49: mov     ecx, [esi+3Ch]
0x74EE4C: mov     [edi+3Ch], ecx
0x74EE4F: fld     dword ptr [esi+40h]
0x74EE52: fstp    dword ptr [edi+40h]
0x74EE55: fld     dword ptr [esi+48h]
0x74EE58: fstp    dword ptr [edi+48h]
0x74EE5B: fld     dword ptr [esi+4Ch]
0x74EE5E: fstp    dword ptr [edi+4Ch]
0x74EE61: fld     dword ptr [esi+44h]
0x74EE64: fstp    dword ptr [edi+44h]
0x74EE67: pop     edi
0x74EE68: pop     esi
0x74EE69: retn    8
