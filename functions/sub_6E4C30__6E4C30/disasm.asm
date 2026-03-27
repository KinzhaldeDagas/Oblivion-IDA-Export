0x6E4C30: sub     esp, 24h
0x6E4C33: push    ebx
0x6E4C34: mov     ebx, ecx
0x6E4C36: fld     dword ptr [ebx+8]
0x6E4C39: push    esi
0x6E4C3A: fld     [esp+2Ch+arg_0]
0x6E4C3E: push    edi
0x6E4C3F: fld     st
0x6E4C41: fucomp  st(2)
0x6E4C43: fnstsw  ax
0x6E4C45: fstp    st(1)
0x6E4C47: test    ah, 44h
0x6E4C4A: jp      short loc_6E4C73
0x6E4C4C: mov     edi, [esp+30h+arg_8]
0x6E4C50: fstp    st
0x6E4C52: lea     eax, [ebx+1Ch]
0x6E4C55: mov     esi, eax
0x6E4C57: mov     ecx, 8
0x6E4C5C: rep movsd
0x6E4C5E: mov     ecx, eax
0x6E4C60: call    sub_6CBC10
0x6E4C65: pop     edi
0x6E4C66: test    al, al
0x6E4C68: pop     esi
0x6E4C69: setz    al
0x6E4C6C: pop     ebx
0x6E4C6D: add     esp, 24h
0x6E4C70: retn    0Ch
0x6E4C73: fsub    dword ptr [ebx+0Ch]
0x6E4C76: mov     eax, [ebx+3Ch]
0x6E4C79: cmp     eax, 0FFFFh
0x6E4C7E: fld     dword ptr [ebx+10h]
0x6E4C81: fsub    dword ptr [ebx+0Ch]
0x6E4C84: fdivp   st(1), st
0x6E4C86: fstp    [esp+30h+var_24]
0x6E4C8A: jz      short loc_6E4CCD
0x6E4C8C: fld     [esp+30h+var_24]
0x6E4C90: push    eax; int
0x6E4C91: mov     eax, [ebx+18h]
0x6E4C94: push    eax; int
0x6E4C95: push    3; int
0x6E4C97: lea     ecx, [esp+3Ch+var_10]
0x6E4C9B: push    ecx; int
0x6E4C9C: push    ecx
0x6E4C9D: mov     ecx, [ebx+14h]
0x6E4CA0: fstp    [esp+44h+var_44]; float
0x6E4CA3: call    sub_6E72F0
0x6E4CA8: fld     [esp+30h+var_10]
0x6E4CAC: fstp    [esp+30h+var_20]
0x6E4CB0: lea     edx, [esp+30h+var_20]
0x6E4CB4: fld     [esp+30h+var_C]
0x6E4CB8: push    edx
0x6E4CB9: fstp    [esp+34h+var_1C]
0x6E4CBD: lea     ecx, [ebx+1Ch]
0x6E4CC0: fld     [esp+34h+var_8]
0x6E4CC4: fstp    [esp+34h+var_18]
0x6E4CC8: call    sub_471390
0x6E4CCD: mov     eax, [ebx+40h]
0x6E4CD0: cmp     eax, 0FFFFh
0x6E4CD5: jz      short loc_6E4D34
0x6E4CD7: fld     [esp+30h+var_24]
0x6E4CDB: push    eax; int
0x6E4CDC: mov     eax, [ebx+18h]
0x6E4CDF: push    eax; int
0x6E4CE0: push    4; int
0x6E4CE2: lea     ecx, [esp+3Ch+var_10]
0x6E4CE6: push    ecx; int
0x6E4CE7: push    ecx
0x6E4CE8: mov     ecx, [ebx+14h]
0x6E4CEB: fstp    [esp+44h+var_44]; float
0x6E4CEE: call    sub_6E72F0
0x6E4CF3: fld     [esp+30h+var_4]
0x6E4CF7: sub     esp, 10h
0x6E4CFA: fstp    [esp+40h+var_34]; float
0x6E4CFE: lea     ecx, [esp+40h+var_20]
0x6E4D02: fld     [esp+40h+var_8]
0x6E4D06: fstp    [esp+40h+var_38]; float
0x6E4D0A: fld     [esp+40h+var_C]
0x6E4D0E: fstp    [esp+40h+var_3C]; float
0x6E4D12: fld     [esp+40h+var_10]
0x6E4D16: fstp    [esp+40h+var_40]; float
0x6E4D19: call    sub_714C40
0x6E4D1E: lea     ecx, [esp+30h+var_20]
0x6E4D22: call    sub_72FAC0
0x6E4D27: lea     edx, [esp+30h+var_20]
0x6E4D2B: push    edx
0x6E4D2C: lea     ecx, [ebx+1Ch]
0x6E4D2F: call    sub_471430
0x6E4D34: mov     eax, [ebx+44h]
0x6E4D37: cmp     eax, 0FFFFh
0x6E4D3C: jz      short loc_6E4D6A
0x6E4D3E: fld     [esp+30h+var_24]
0x6E4D42: push    eax; int
0x6E4D43: mov     eax, [ebx+18h]
0x6E4D46: push    eax; int
0x6E4D47: push    1; int
0x6E4D49: lea     ecx, [esp+3Ch+var_10]
0x6E4D4D: push    ecx; int
0x6E4D4E: push    ecx
0x6E4D4F: mov     ecx, [ebx+14h]
0x6E4D52: fstp    [esp+44h+var_44]; float
0x6E4D55: call    sub_6E72F0
0x6E4D5A: fld     [esp+30h+var_10]
0x6E4D5E: push    ecx
0x6E4D5F: lea     ecx, [ebx+1Ch]
0x6E4D62: fstp    [esp+34h+var_34]; float
0x6E4D65: call    sub_471560
0x6E4D6A: mov     edi, [esp+30h+arg_8]
0x6E4D6E: lea     eax, [ebx+1Ch]
0x6E4D71: mov     esi, eax
0x6E4D73: mov     ecx, 8
0x6E4D78: rep movsd
0x6E4D7A: mov     ecx, eax
0x6E4D7C: call    sub_6CBC10
0x6E4D81: test    al, al
0x6E4D83: jz      short loc_6E4D90
0x6E4D85: pop     edi
0x6E4D86: pop     esi
0x6E4D87: xor     al, al
0x6E4D89: pop     ebx
0x6E4D8A: add     esp, 24h
0x6E4D8D: retn    0Ch
0x6E4D90: fld     [esp+30h+arg_0]
0x6E4D94: pop     edi
0x6E4D95: pop     esi
0x6E4D96: fstp    dword ptr [ebx+8]
0x6E4D99: mov     al, 1
0x6E4D9B: pop     ebx
0x6E4D9C: add     esp, 24h
0x6E4D9F: retn    0Ch
