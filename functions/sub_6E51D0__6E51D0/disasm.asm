0x6E51D0: sub     esp, 1Ch
0x6E51D3: push    esi
0x6E51D4: mov     esi, ecx
0x6E51D6: fld     dword ptr [esi+8]
0x6E51D9: fld     [esp+20h+arg_0]
0x6E51DD: fld     st
0x6E51DF: fucomp  st(2)
0x6E51E1: fnstsw  ax
0x6E51E3: fstp    st(1)
0x6E51E5: test    ah, 44h
0x6E51E8: jp      short loc_6E520A
0x6E51EA: mov     ecx, [esi+1Ch]
0x6E51ED: fstp    st
0x6E51EF: mov     eax, [esp+20h+arg_8]
0x6E51F3: mov     [eax], ecx
0x6E51F5: mov     edx, [esi+20h]
0x6E51F8: mov     [eax+4], edx
0x6E51FB: mov     ecx, [esi+24h]
0x6E51FE: mov     [eax+8], ecx
0x6E5201: mov     al, 1
0x6E5203: pop     esi
0x6E5204: add     esp, 1Ch
0x6E5207: retn    0Ch
0x6E520A: mov     eax, [esi+28h]
0x6E520D: cmp     eax, 0FFFFh
0x6E5212: jz      short loc_6E5270
0x6E5214: fsub    dword ptr [esi+0Ch]
0x6E5217: mov     edx, [esi+18h]
0x6E521A: fld     dword ptr [esi+10h]
0x6E521D: push    eax; int
0x6E521E: fsub    dword ptr [esi+0Ch]
0x6E5221: push    edx; int
0x6E5222: push    3; int
0x6E5224: lea     eax, [esp+2Ch+var_C]
0x6E5228: fdivp   st(1), st
0x6E522A: push    eax; int
0x6E522B: push    ecx
0x6E522C: mov     ecx, [esi+14h]
0x6E522F: fstp    [esp+34h+var_1C]
0x6E5233: fld     [esp+34h+var_1C]
0x6E5237: fstp    [esp+34h+var_34]; float
0x6E523A: call    sub_6E72F0
0x6E523F: fld     [esp+20h+var_C]
0x6E5243: fstp    [esp+20h+var_18]
0x6E5247: fld     [esp+20h+var_8]
0x6E524B: mov     ecx, [esp+20h+var_18]
0x6E524F: fstp    [esp+20h+var_14]
0x6E5253: mov     [esi+1Ch], ecx
0x6E5256: fld     [esp+20h+var_4]
0x6E525A: mov     edx, [esp+20h+var_14]
0x6E525E: fstp    [esp+20h+var_10]
0x6E5262: mov     [esi+20h], edx
0x6E5265: mov     eax, [esp+20h+var_10]
0x6E5269: fld     [esp+20h+arg_0]
0x6E526D: mov     [esi+24h], eax
0x6E5270: mov     ecx, [esi+1Ch]
0x6E5273: mov     eax, [esp+20h+arg_8]
0x6E5277: mov     [eax], ecx
0x6E5279: mov     edx, [esi+20h]
0x6E527C: mov     [eax+4], edx
0x6E527F: mov     ecx, [esi+24h]
0x6E5282: mov     [eax+8], ecx
0x6E5285: fstp    dword ptr [esi+8]
0x6E5288: mov     al, 1
0x6E528A: pop     esi
0x6E528B: add     esp, 1Ch
0x6E528E: retn    0Ch
