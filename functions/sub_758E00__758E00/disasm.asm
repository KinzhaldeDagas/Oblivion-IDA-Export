0x758E00: push    esi
0x758E01: push    edi
0x758E02: mov     edi, [esp+8+arg_0]
0x758E06: push    edi
0x758E07: mov     esi, ecx
0x758E09: call    sub_752E40
0x758E0E: mov     ecx, [esi+18h]
0x758E11: mov     eax, [edi]
0x758E13: mov     edx, [eax+2Ch]
0x758E16: push    ecx
0x758E17: mov     ecx, edi
0x758E19: call    edx
0x758E1B: push    edi
0x758E1C: lea     ecx, [esi+1Ch]
0x758E1F: call    sub_7094A0
0x758E24: mov     eax, [edi+220h]
0x758E2A: push    1
0x758E2C: lea     ecx, [esp+0Ch+arg_0]
0x758E30: push    ecx
0x758E31: push    4
0x758E33: lea     edx, [esi+28h]
0x758E36: push    edx
0x758E37: push    eax
0x758E38: mov     eax, [eax+8]
0x758E3B: mov     [esp+1Ch+arg_0], 4
0x758E43: call    eax
0x758E45: mov     eax, [edi+220h]
0x758E4B: push    1
0x758E4D: lea     ecx, [esp+20h+arg_0]
0x758E51: push    ecx
0x758E52: push    4
0x758E54: lea     edx, [esi+2Ch]
0x758E57: push    edx
0x758E58: push    eax
0x758E59: mov     eax, [eax+8]
0x758E5C: mov     [esp+30h+arg_0], 4
0x758E64: call    eax
0x758E66: mov     edi, [edi+220h]
0x758E6C: mov     edx, [edi+8]
0x758E6F: push    1
0x758E71: lea     ecx, [esp+34h+arg_0]
0x758E75: push    ecx
0x758E76: push    4
0x758E78: add     esi, 30h ; '0'
0x758E7B: push    esi
0x758E7C: push    edi
0x758E7D: mov     [esp+44h+arg_0], 4
0x758E85: call    edx
0x758E87: add     esp, 3Ch
0x758E8A: pop     edi
0x758E8B: pop     esi
0x758E8C: retn    4
