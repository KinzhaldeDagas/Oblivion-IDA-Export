0x946000: sub     esp, 22Ch
0x946006: mov     eax, ds:0B30AACh
0x94600B: push    esi
0x94600C: mov     esi, ecx
0x94600E: mov     [esp+230h+var_4], eax
0x946015: mov     eax, [esi+20h]
0x946018: cmp     eax, 0FFFFFFFFh
0x94601B: jz      loc_9460EC
0x946021: lea     edx, [esp+230h+timeout]
0x946025: push    edx; timeout
0x946026: xor     ecx, ecx
0x946028: lea     edx, [esp+234h+exceptfds]
0x94602F: push    edx; exceptfds
0x946030: push    ecx; writefds
0x946031: mov     [esp+23Ch+timeout.tv_sec], ecx
0x946035: mov     [esp+23Ch+timeout.tv_usec], ecx
0x946039: lea     ecx, [esp+23Ch+readfds]
0x94603D: mov     [esp+23Ch+readfds.fd_array], eax
0x946041: mov     [esp+23Ch+exceptfds.fd_array], eax
0x946048: inc     eax
0x946049: push    ecx; readfds
0x94604A: push    eax; nfds
0x94604B: mov     [esp+244h+readfds.fd_count], 1
0x946053: mov     [esp+244h+exceptfds.fd_count], 1
0x94605E: call    select_0
0x946063: test    eax, eax
0x946065: jle     loc_9460EC
0x94606B: mov     eax, [esi+20h]
0x94606E: lea     edx, [esp+230h+readfds]
0x946072: push    edx; fd_set *
0x946073: push    eax; fd
0x946074: call    __WSAFDIsSet_0
0x946079: test    eax, eax
0x94607B: jz      short loc_9460EC
0x94607D: mov     eax, [esi+20h]
0x946080: lea     ecx, [esp+230h+addrlen]
0x946084: push    ecx; addrlen
0x946085: lea     edx, [esp+234h+addr]
0x94608C: push    edx; addr
0x94608D: push    eax; s
0x94608E: mov     [esp+23Ch+addrlen], 10h
0x946096: call    accept_0
0x94609B: mov     esi, eax
0x94609D: cmp     esi, 0FFFFFFFFh
0x9460A0: jz      short loc_9460EC
0x9460A2: push    4; optlen
0x9460A4: lea     ecx, [esp+234h+optval]
0x9460A8: push    ecx; optval
0x9460A9: push    1; optname
0x9460AB: push    6; level
0x9460AD: push    esi; s
0x9460AE: mov     dword ptr [esp+244h+optval], 1
0x9460B6: call    setsockopt_0
0x9460BB: mov     ecx, ds:0BA7D98h
0x9460C1: mov     edx, [ecx]
0x9460C3: push    12h
0x9460C5: push    24h ; '$'
0x9460C7: call    dword ptr [edx+10h]
0x9460CA: push    esi
0x9460CB: mov     ecx, eax
0x9460CD: mov     word ptr [eax+4], 24h ; '$'
0x9460D3: call    sub_945F70
0x9460D8: pop     esi
0x9460D9: mov     ecx, [esp+22Ch+var_4]
0x9460E0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9460E5: add     esp, 22Ch
0x9460EB: retn
0x9460EC: mov     ecx, [esp+230h+var_4]
0x9460F3: xor     eax, eax
0x9460F5: pop     esi
0x9460F6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9460FB: add     esp, 22Ch
0x946101: retn
