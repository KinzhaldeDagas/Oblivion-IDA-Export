0x945EB0: sub     esp, 3A0h
0x945EB6: mov     eax, ds:0B30AACh
0x945EBB: mov     [esp+3A0h+var_4], eax
0x945EC2: test    byte ptr ds:0BA94FCh, 1
0x945EC9: jnz     short loc_945EDB
0x945ECB: or      dword ptr ds:0BA94FCh, 1
0x945ED2: mov     byte ptr ds:0BA94F8h, 0
0x945ED9: jmp     short loc_945EE4
0x945EDB: mov     al, ds:0BA94F8h
0x945EE0: test    al, al
0x945EE2: jnz     short loc_945F4F
0x945EE4: lea     eax, [esp+3A0h+WSAData]
0x945EEB: push    eax; lpWSAData
0x945EEC: push    202h; wVersionRequested
0x945EF1: call    WSAStartup_0
0x945EF6: cmp     eax, 0FFFFFFFFh
0x945EF9: jnz     short loc_945F48
0x945EFB: push    ecx
0x945EFC: mov     eax, esp
0x945EFE: push    200h
0x945F03: lea     ecx, [esp+3A8h+var_394]
0x945F07: push    ecx
0x945F08: lea     ecx, [esp+3ACh+var_3A0]
0x945F0C: mov     byte ptr [eax], 1
0x945F0F: call    sub_8BBFB0
0x945F14: push    offset aWindowsWsastar; "(Windows)WSAStartup failed with error!"
0x945F19: lea     ecx, [esp+3A4h+var_3A0]
0x945F1D: call    sub_8BBDB0
0x945F22: mov     ecx, ds:0BA7FB0h
0x945F28: mov     edx, [ecx]
0x945F2A: push    41h ; 'A'
0x945F2C: push    offset a_StreamImplHkb; ".\\stream\\impl\\hkBsdSocket.cpp"
0x945F31: lea     eax, [esp+3A8h+var_394]
0x945F35: push    eax
0x945F36: push    321825F8h
0x945F3B: push    3
0x945F3D: call    dword ptr [edx+8]
0x945F40: lea     ecx, [esp+3A0h+var_3A0]
0x945F43: call    sub_8BC000
0x945F48: mov     byte ptr ds:0BA94F8h, 1
0x945F4F: mov     ecx, [esp+3A0h+var_4]
0x945F56: call    @__security_check_cookie@4; __security_check_cookie(x)
0x945F5B: add     esp, 3A0h
0x945F61: retn
