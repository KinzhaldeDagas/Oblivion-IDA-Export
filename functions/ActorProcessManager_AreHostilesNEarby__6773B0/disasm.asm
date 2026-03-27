0x6773B0: push    ecx
0x6773B1: fld     dword ptr ds:0B37B68h
0x6773B7: push    ebx
0x6773B8: xor     bl, bl
0x6773BA: fstp    [esp+8+var_4]
0x6773BE: cmp     byte ptr [esp+8+arg_0], bl
0x6773C2: push    ebp
0x6773C3: jz      short loc_6773CF
0x6773C5: fld     dword ptr ds:0B37B60h
0x6773CB: fstp    [esp+0Ch+var_4]
0x6773CF: add     ecx, 68h ; 'h'; this
0x6773D2: call    sub_7616D0
0x6773D7: mov     ebp, eax
0x6773D9: test    ebp, ebp
0x6773DB: jz      loc_6774E9
0x6773E1: push    esi
0x6773E2: push    edi
0x6773E3: cmp     dword ptr [ebp+4], 0
0x6773E7: jnz     short loc_6773F3
0x6773E9: cmp     dword ptr [ebp+0], 0
0x6773ED: jz      loc_6774E7
0x6773F3: test    bl, bl
0x6773F5: jnz     loc_6774E7
0x6773FB: mov     ecx, [ebp+0]
0x6773FE: mov     eax, [ecx]
0x677400: mov     edx, [eax+190h]
0x677406: call    edx
0x677408: test    al, al
0x67740A: jz      loc_6774DC
0x677410: mov     esi, [ebp+0]
0x677413: test    esi, esi
0x677415: jz      loc_6774DC
0x67741B: cmp     esi, ds:0B333C4h
0x677421: jz      loc_6774DC
0x677427: mov     eax, [esi]
0x677429: mov     edx, [eax+198h]
0x67742F: push    0
0x677431: mov     ecx, esi
0x677433: call    edx
0x677435: test    al, al
0x677437: jnz     loc_6774DC
0x67743D: mov     eax, [esi+8]
0x677440: shr     eax, 0Bh
0x677443: test    al, 1
0x677445: jnz     loc_6774DC
0x67744B: mov     ecx, [esi+58h]
0x67744E: test    ecx, ecx
0x677450: jz      short loc_67746F
0x677452: mov     edx, [ecx]
0x677454: mov     eax, [edx+3D0h]
0x67745A: call    eax
0x67745C: test    eax, eax
0x67745E: jz      short loc_67746F
0x677460: mov     ecx, [esi+58h]
0x677463: mov     edx, [ecx]
0x677465: mov     eax, [edx+3D0h]
0x67746B: call    eax
0x67746D: mov     esi, eax
0x67746F: mov     ecx, ds:0B333C4h
0x677475: push    0
0x677477: push    esi
0x677478: call    TesObjectREF_GetDistance
0x67747D: fstp    [esp+14h+arg_0]
0x677481: fld     [esp+14h+arg_0]
0x677485: fld     [esp+14h+var_4]
0x677489: fcompp
0x67748B: fnstsw  ax
0x67748D: test    ah, 1
0x677490: jnz     short loc_6774DC
0x677492: mov     edx, [esi]
0x677494: mov     eax, ds:0B333C4h
0x677499: mov     edx, [edx+224h]
0x67749F: push    eax
0x6774A0: mov     ecx, esi
0x6774A2: call    edx
0x6774A4: push    64h ; 'd'
0x6774A6: push    0; responsibility
0x6774A8: mov     ecx, esi; this
0x6774AA: mov     edi, eax
0x6774AC: call    Actor_IsCreature
0x6774B1: fld     [esp+18h+arg_4]
0x6774B5: push    eax; a7
0x6774B6: mov     eax, [esi]
0x6774B8: mov     edx, [eax+284h]
0x6774BE: push    0; a6
0x6774C0: push    ecx
0x6774C1: fstp    dword ptr [esp+24h+a5]; a5
0x6774C4: push    21h ; '!'; distanceToTarget
0x6774C6: mov     ecx, esi
0x6774C8: call    edx
0x6774CA: push    eax; aggressionStat
0x6774CB: push    0; friendlyFight?
0x6774CD: push    edi; disposition
0x6774CE: call    shouldActorFight
0x6774D3: add     esp, 20h
0x6774D6: test    eax, eax
0x6774D8: jle     short loc_6774DC
0x6774DA: mov     bl, 1
0x6774DC: mov     ebp, [ebp+4]
0x6774DF: test    ebp, ebp
0x6774E1: jnz     loc_6773E3
0x6774E7: pop     edi
0x6774E8: pop     esi
0x6774E9: pop     ebp
0x6774EA: mov     al, bl
0x6774EC: pop     ebx
0x6774ED: pop     ecx
0x6774EE: retn    4
