0x510480: sub     esp, 20h
0x510483: mov     ecx, [esp+20h+l]
0x510487: fldz
0x510489: mov     edx, [esp+20h+arg_10]
0x51048D: fstp    dword ptr [esp+20h+var_20]
0x510490: lea     eax, [esp+20h+var_20]
0x510493: push    eax; UInt16
0x510494: mov     eax, [esp+24h+arg_C]
0x510498: push    ecx; l
0x510499: mov     ecx, [esp+28h+a4]
0x51049D: push    edx; a6
0x51049E: mov     edx, [esp+2Ch+a3]
0x5104A2: push    eax; a5
0x5104A3: mov     eax, [esp+30h+arg_4]
0x5104A7: push    ecx; a4
0x5104A8: mov     ecx, [esp+34h+a1]
0x5104AC: push    edx; a3
0x5104AD: push    eax; a2
0x5104AE: push    ecx; a1
0x5104AF: call    Script_ExtractArgs
0x5104B4: add     esp, 20h
0x5104B7: test    al, al
0x5104B9: jnz     short loc_5104BF
0x5104BB: add     esp, 20h
0x5104BE: retn
0x5104BF: fldz
0x5104C1: push    ebx
0x5104C2: fld     dword ptr [esp+24h+var_20]
0x5104C6: xor     bl, bl
0x5104C8: fcom    st(1)
0x5104CA: fnstsw  ax
0x5104CC: fstp    st(1)
0x5104CE: test    ah, 41h
0x5104D1: jp      short loc_5104E7
0x5104D3: fstp    st
0x5104D5: mov     bl, 1
0x5104D7: fld     dword ptr ds:0A3F4F0h
0x5104DD: fstp    dword ptr [esp+24h+var_20]
0x5104E1: fld     dword ptr [esp+24h+var_20]
0x5104E5: jmp     short loc_510504
0x5104E7: fld     dword ptr ds:0A3F4F0h
0x5104ED: fcom    st(1)
0x5104EF: fnstsw  ax
0x5104F1: test    ah, 5
0x5104F4: jp      short loc_510502
0x5104F6: fstp    st(1)
0x5104F8: fstp    dword ptr [esp+24h+var_20]
0x5104FC: fld     dword ptr [esp+24h+var_20]
0x510500: jmp     short loc_510504
0x510502: fstp    st
0x510504: mov     edx, ds:0B333CCh
0x51050A: mov     edx, [edx+0DCh]
0x510510: test    edx, edx
0x510512: jz      short loc_510568
0x510514: push    esi
0x510515: fld     st
0x510517: push    edi
0x510518: lea     esi, [edx+0ECh]
0x51051E: mov     ecx, 7
0x510523: lea     edi, [esp+2Ch+a2]
0x510527: rep movsd
0x510529: fld     [esp+2Ch+var_8]
0x51052D: fucompp
0x51052F: fnstsw  ax
0x510531: test    ah, 44h
0x510534: pop     edi
0x510535: pop     esi
0x510536: jnp     short loc_510568
0x510538: fst     [esp+24h+var_8]
0x51053C: lea     eax, [esp+24h+a2]
0x510540: fdiv    [esp+24h+var_C]
0x510544: push    eax; a2
0x510545: mov     ecx, edx; this
0x510547: fstp    dword ptr [edx+10Ch]
0x51054D: call    Camera_SetFrustum
0x510552: mov     ecx, ds:0B333A0h
0x510558: mov     edx, [ecx+5Ch]
0x51055B: mov     eax, [edx+20h]
0x51055E: mov     [eax+18h], bl
0x510561: mov     al, 1
0x510563: pop     ebx
0x510564: add     esp, 20h
0x510567: retn
0x510568: fstp    st
0x51056A: mov     al, 1
0x51056C: pop     ebx
0x51056D: add     esp, 20h
0x510570: retn
