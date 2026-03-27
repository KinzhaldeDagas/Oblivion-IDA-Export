0x727E30: push    esi
0x727E31: push    edi
0x727E32: mov     edi, [esp+8+arg_0]
0x727E36: push    edi
0x727E37: mov     esi, ecx
0x727E39: call    sub_726E70
0x727E3E: mov     eax, [edi+220h]
0x727E44: push    1
0x727E46: lea     ecx, [esp+0Ch+arg_0]
0x727E4A: push    ecx
0x727E4B: push    4
0x727E4D: lea     edx, [esi+2Ch]
0x727E50: push    edx
0x727E51: push    eax
0x727E52: mov     eax, [eax+8]
0x727E55: mov     [esp+1Ch+arg_0], 4
0x727E5D: call    eax
0x727E5F: mov     edi, [edi+220h]
0x727E65: mov     edx, [edi+8]
0x727E68: push    1
0x727E6A: lea     ecx, [esp+20h+arg_0]
0x727E6E: push    ecx
0x727E6F: push    4
0x727E71: add     esi, 30h ; '0'
0x727E74: push    esi
0x727E75: push    edi
0x727E76: mov     [esp+30h+arg_0], 4
0x727E7E: call    edx
0x727E80: add     esp, 28h
0x727E83: pop     edi
0x727E84: pop     esi
0x727E85: retn    4
