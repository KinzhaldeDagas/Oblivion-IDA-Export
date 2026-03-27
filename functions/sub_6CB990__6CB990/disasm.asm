0x6CB990: push    ecx
0x6CB991: push    ebx
0x6CB992: push    esi
0x6CB993: mov     esi, [esp+0Ch+arg_0]
0x6CB997: push    edi
0x6CB998: push    esi
0x6CB999: mov     edi, ecx
0x6CB99B: call    sub_709430
0x6CB9A0: push    esi
0x6CB9A1: lea     ecx, [edi+0Ch]
0x6CB9A4: call    sub_715420
0x6CB9A9: mov     eax, [esi+21Ch]
0x6CB9AF: mov     edx, [eax+4]
0x6CB9B2: push    1
0x6CB9B4: lea     ecx, [esp+14h+arg_0]
0x6CB9B8: push    ecx
0x6CB9B9: push    4
0x6CB9BB: lea     ebx, [edi+1Ch]
0x6CB9BE: push    ebx
0x6CB9BF: push    eax
0x6CB9C0: mov     [esp+24h+arg_0], 4
0x6CB9C8: call    edx
0x6CB9CA: add     esp, 14h
0x6CB9CD: cmp     dword ptr [esi+0D8h], 0A01006Eh
0x6CB9D7: jnb     loc_6CBA80
0x6CB9DD: mov     eax, [esi+21Ch]
0x6CB9E3: push    1
0x6CB9E5: lea     ecx, [esp+14h+var_4]
0x6CB9E9: push    ecx
0x6CB9EA: push    1
0x6CB9EC: lea     edx, [esp+1Ch+arg_0]
0x6CB9F0: push    edx
0x6CB9F1: push    eax
0x6CB9F2: mov     eax, [eax+4]
0x6CB9F5: mov     [esp+24h+var_4], 1
0x6CB9FD: call    eax
0x6CB9FF: add     esp, 14h
0x6CBA02: cmp     byte ptr [esp+10h+arg_0], 0
0x6CBA07: jnz     short loc_6CBA13
0x6CBA09: fld     dword ptr ds:0A7DEB4h
0x6CBA0F: fchs
0x6CBA11: fstp    dword ptr [edi]
0x6CBA13: mov     eax, [esi+21Ch]
0x6CBA19: push    1
0x6CBA1B: lea     ecx, [esp+14h+var_4]
0x6CBA1F: push    ecx
0x6CBA20: push    1
0x6CBA22: lea     edx, [esp+1Ch+arg_0]
0x6CBA26: push    edx
0x6CBA27: push    eax
0x6CBA28: mov     eax, [eax+4]
0x6CBA2B: mov     [esp+24h+var_4], 1
0x6CBA33: call    eax
0x6CBA35: add     esp, 14h
0x6CBA38: cmp     byte ptr [esp+10h+arg_0], 0
0x6CBA3D: jnz     short loc_6CBA4A
0x6CBA3F: fld     dword ptr ds:0A7DEB4h
0x6CBA45: fchs
0x6CBA47: fstp    dword ptr [edi+10h]
0x6CBA4A: mov     esi, [esi+21Ch]
0x6CBA50: mov     eax, [esi+4]
0x6CBA53: push    1
0x6CBA55: lea     ecx, [esp+14h+var_4]
0x6CBA59: push    ecx
0x6CBA5A: push    1
0x6CBA5C: lea     edx, [esp+1Ch+arg_0]
0x6CBA60: push    edx
0x6CBA61: push    esi
0x6CBA62: mov     [esp+24h+var_4], 1
0x6CBA6A: call    eax
0x6CBA6C: add     esp, 14h
0x6CBA6F: cmp     byte ptr [esp+10h+arg_0], 0
0x6CBA74: jnz     short loc_6CBA80
0x6CBA76: fld     dword ptr ds:0A7DEB4h
0x6CBA7C: fchs
0x6CBA7E: fstp    dword ptr [ebx]
0x6CBA80: pop     edi
0x6CBA81: pop     esi
0x6CBA82: pop     ebx
0x6CBA83: pop     ecx
0x6CBA84: retn    4
