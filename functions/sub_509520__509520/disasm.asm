0x509520: sub     esp, 10h
0x509523: mov     eax, ds:0B33398h
0x509528: push    ebx
0x509529: mov     dword ptr [esp+14h+var_10], 0
0x509531: mov     ebx, [eax+24h]
0x509534: test    ebx, ebx
0x509536: jz      loc_5095FD
0x50953C: mov     edx, [esp+14h+l]
0x509540: mov     eax, [esp+14h+arg_10]
0x509544: push    edi
0x509545: mov     edi, [esp+18h+a4]
0x509549: lea     ecx, [esp+18h+var_10]
0x50954D: push    ecx; UInt16
0x50954E: mov     ecx, [esp+1Ch+arg_C]
0x509552: push    edx; l
0x509553: mov     edx, [esp+20h+a3]
0x509557: push    eax; a6
0x509558: mov     eax, [esp+24h+arg_4]
0x50955C: push    ecx; a5
0x50955D: mov     ecx, [esp+28h+a1]
0x509561: push    edi; a4
0x509562: push    edx; a3
0x509563: push    eax; a2
0x509564: push    ecx; a1
0x509565: call    Script_ExtractArgs
0x50956A: add     esp, 20h
0x50956D: test    al, al
0x50956F: jz      loc_5095FC
0x509575: mov     edx, dword ptr [esp+18h+var_10]
0x509579: mov     eax, [edx+0Ch]
0x50957C: push    esi
0x50957D: push    0
0x50957F: push    102h
0x509584: push    eax
0x509585: mov     ecx, ebx
0x509587: call    OSGLobals_PlaySound
0x50958C: mov     esi, eax
0x50958E: test    esi, esi
0x509590: jz      short loc_5095FB
0x509592: test    edi, edi
0x509594: jz      short loc_5095FB
0x509596: mov     eax, [edi]
0x509598: mov     edx, [eax+174h]
0x50959E: mov     ecx, edi
0x5095A0: call    edx
0x5095A2: mov     ecx, [eax]
0x5095A4: mov     edx, [eax+4]
0x5095A7: mov     eax, [eax+8]
0x5095AA: sub     esp, 0Ch
0x5095AD: mov     [esp+28h+var_4], eax
0x5095B1: fld     [esp+28h+var_4]
0x5095B5: fstp    [esp+28h+var_20]; float
0x5095B9: mov     [esp+28h+var_8], edx
0x5095BD: fld     [esp+28h+var_8]
0x5095C1: mov     [esp+28h+var_C], ecx
0x5095C5: fstp    [esp+28h+var_24]; float
0x5095C9: mov     ecx, esi
0x5095CB: fld     [esp+28h+var_C]
0x5095CF: fstp    [esp+28h+var_28]; float
0x5095D2: call    sub_6B7360
0x5095D7: mov     ecx, [esi]
0x5095D9: push    edi
0x5095DA: push    ecx
0x5095DB: mov     ecx, ebx
0x5095DD: call    sub_6AC3E0
0x5095E2: push    0
0x5095E4: mov     ecx, esi
0x5095E6: call    sub_6B7190
0x5095EB: mov     ecx, esi; this
0x5095ED: call    sub_6B73E0
0x5095F2: push    esi
0x5095F3: call    FormHeapFree
0x5095F8: add     esp, 4
0x5095FB: pop     esi
0x5095FC: pop     edi
0x5095FD: mov     al, 1
0x5095FF: pop     ebx
0x509600: add     esp, 10h
0x509603: retn
