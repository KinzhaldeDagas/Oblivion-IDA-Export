0x945DD0: sub     esp, 18h
0x945DD3: mov     eax, ds:0B30AACh
0x945DD8: push    esi
0x945DD9: mov     esi, ecx
0x945DDB: mov     [esp+1Ch+var_4], eax
0x945DDF: mov     eax, [esi]
0x945DE1: call    dword ptr [eax+0Ch]
0x945DE4: push    0; protocol
0x945DE6: push    1; type
0x945DE8: push    2; af
0x945DEA: call    socket_0
0x945DEF: cmp     eax, 0FFFFFFFFh
0x945DF2: mov     [esi+20h], eax
0x945DF5: jz      loc_945E80
0x945DFB: mov     ecx, dword ptr [esp+1Ch+hostshort]
0x945DFF: push    ecx; hostshort
0x945E00: mov     [esp+20h+name.sa_family], 2
0x945E07: mov     dword ptr [esp+20h+name.sa_data+2], 0
0x945E0F: call    htons_0
0x945E14: push    4; optlen
0x945E16: lea     edx, [esp+20h+optval]
0x945E1A: push    edx; optval
0x945E1B: push    4; optname
0x945E1D: mov     word ptr [esp+28h+name.sa_data], ax
0x945E22: mov     eax, [esi+20h]
0x945E25: push    0FFFFh; level
0x945E2A: push    eax; s
0x945E2B: mov     dword ptr [esp+30h+optval], 1
0x945E33: call    setsockopt_0
0x945E38: mov     edx, [esi+20h]
0x945E3B: push    10h; namelen
0x945E3D: lea     ecx, [esp+20h+name]
0x945E41: push    ecx; name
0x945E42: push    edx; s
0x945E43: call    bind_0
0x945E48: cmp     eax, 0FFFFFFFFh
0x945E4B: jnz     short loc_945E69
0x945E4D: mov     eax, [esi]
0x945E4F: mov     ecx, esi
0x945E51: call    dword ptr [eax+0Ch]
0x945E54: mov     eax, 1
0x945E59: pop     esi
0x945E5A: mov     ecx, [esp+18h+var_4]
0x945E5E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x945E63: add     esp, 18h
0x945E66: retn    4
0x945E69: mov     ecx, [esi+20h]
0x945E6C: push    2; backlog
0x945E6E: push    ecx; s
0x945E6F: call    listen_0
0x945E74: cmp     eax, 0FFFFFFFFh
0x945E77: jnz     short loc_945E95
0x945E79: mov     edx, [esi]
0x945E7B: mov     ecx, esi
0x945E7D: call    dword ptr [edx+0Ch]
0x945E80: mov     eax, 1
0x945E85: pop     esi
0x945E86: mov     ecx, [esp+18h+var_4]
0x945E8A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x945E8F: add     esp, 18h
0x945E92: retn    4
0x945E95: mov     ecx, [esp+1Ch+var_4]
0x945E99: xor     eax, eax
0x945E9B: pop     esi
0x945E9C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x945EA1: add     esp, 18h
0x945EA4: retn    4
