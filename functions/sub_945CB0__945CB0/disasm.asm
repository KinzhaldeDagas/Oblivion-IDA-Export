0x945CB0: sub     esp, 14h
0x945CB3: mov     eax, ds:0B30AACh
0x945CB8: push    esi
0x945CB9: push    10h
0x945CBB: mov     [esp+1Ch+var_4], eax
0x945CBF: lea     eax, [esp+1Ch+name]
0x945CC3: push    0
0x945CC5: push    eax
0x945CC6: mov     esi, ecx
0x945CC8: call    sub_8B18C0
0x945CCD: mov     ecx, dword ptr [esp+24h+hostshort]
0x945CD1: add     esp, 0Ch
0x945CD4: push    ecx; hostshort
0x945CD5: mov     [esp+1Ch+name.sa_family], 2
0x945CDC: call    htons_0
0x945CE1: mov     ecx, [esp+18h+cp]
0x945CE5: mov     word ptr [esp+18h+name.sa_data], ax
0x945CEA: movsx   eax, byte ptr [ecx]
0x945CED: cmp     eax, 30h ; '0'
0x945CF0: jl      short loc_945D03
0x945CF2: cmp     eax, 39h ; '9'
0x945CF5: jg      short loc_945D03
0x945CF7: push    ecx; cp
0x945CF8: call    inet_addr_0
0x945CFD: mov     dword ptr [esp+18h+name.sa_data+2], eax
0x945D01: jmp     short loc_945D25
0x945D03: push    ecx; name
0x945D04: call    gethostbyname_0
0x945D09: test    eax, eax
0x945D0B: jz      short loc_945D6D
0x945D0D: movsx   edx, word ptr [eax+0Ah]
0x945D11: mov     eax, [eax+0Ch]
0x945D14: mov     ecx, [eax]
0x945D16: push    edx
0x945D17: push    ecx
0x945D18: lea     edx, [esp+20h+name.sa_data+2]
0x945D1C: push    edx
0x945D1D: call    sub_8B1890
0x945D22: add     esp, 0Ch
0x945D25: cmp     dword ptr [esi+20h], 0FFFFFFFFh
0x945D29: jnz     short loc_945D45
0x945D2B: mov     eax, [esi]
0x945D2D: mov     ecx, esi
0x945D2F: call    dword ptr [eax+0Ch]
0x945D32: push    0; protocol
0x945D34: push    1; type
0x945D36: push    2; af
0x945D38: call    socket_0
0x945D3D: cmp     eax, 0FFFFFFFFh
0x945D40: mov     [esi+20h], eax
0x945D43: jz      short loc_945D6D
0x945D45: mov     edx, [esi+20h]
0x945D48: push    10h; namelen
0x945D4A: lea     ecx, [esp+1Ch+name]
0x945D4E: push    ecx; name
0x945D4F: push    edx; s
0x945D50: call    connect_0
0x945D55: cmp     eax, 0FFFFFFFFh
0x945D58: jnz     short loc_945D82
0x945D5A: call    WSAGetLastError_0
0x945D5F: cmp     eax, 2733h
0x945D64: jz      short loc_945D82
0x945D66: mov     eax, [esi]
0x945D68: mov     ecx, esi
0x945D6A: call    dword ptr [eax+0Ch]
0x945D6D: mov     eax, 1
0x945D72: pop     esi
0x945D73: mov     ecx, [esp+14h+var_4]
0x945D77: call    @__security_check_cookie@4; __security_check_cookie(x)
0x945D7C: add     esp, 14h
0x945D7F: retn    8
0x945D82: mov     ecx, [esp+18h+var_4]
0x945D86: xor     eax, eax
0x945D88: pop     esi
0x945D89: call    @__security_check_cookie@4; __security_check_cookie(x)
0x945D8E: add     esp, 14h
0x945D91: retn    8
