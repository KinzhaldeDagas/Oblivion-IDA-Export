0x6FB3B0: push    ecx
0x6FB3B1: push    ebx
0x6FB3B2: push    esi
0x6FB3B3: push    edi
0x6FB3B4: mov     edi, [esp+10h+arg_0]
0x6FB3B8: push    edi
0x6FB3B9: mov     esi, ecx
0x6FB3BB: call    sub_709430
0x6FB3C0: mov     eax, [edi+21Ch]
0x6FB3C6: mov     edx, [eax+4]
0x6FB3C9: push    1
0x6FB3CB: lea     ecx, [esp+14h+var_4]
0x6FB3CF: push    ecx
0x6FB3D0: push    2
0x6FB3D2: lea     ebx, [esi+0Ch]
0x6FB3D5: push    ebx
0x6FB3D6: push    eax
0x6FB3D7: mov     [esp+24h+var_4], 2
0x6FB3DF: call    edx
0x6FB3E1: mov     eax, [edi+21Ch]
0x6FB3E7: push    1
0x6FB3E9: lea     ecx, [esp+28h+var_4]
0x6FB3ED: push    ecx
0x6FB3EE: push    1
0x6FB3F0: lea     edx, [esi+0Eh]
0x6FB3F3: push    edx
0x6FB3F4: push    eax
0x6FB3F5: mov     eax, [eax+4]
0x6FB3F8: mov     [esp+38h+var_4], 1
0x6FB400: call    eax
0x6FB402: mov     edi, [edi+21Ch]
0x6FB408: mov     eax, [edi+4]
0x6FB40B: push    1
0x6FB40D: lea     ecx, [esp+3Ch+var_4]
0x6FB411: push    ecx
0x6FB412: push    1
0x6FB414: lea     edx, [esp+44h+arg_0]
0x6FB418: push    edx
0x6FB419: push    edi
0x6FB41A: mov     [esp+4Ch+var_4], 1
0x6FB422: call    eax
0x6FB424: movzx   eax, word ptr [ebx]
0x6FB427: add     esp, 3Ch
0x6FB42A: test    ax, ax
0x6FB42D: jge     short loc_6FB453
0x6FB42F: movsx   ecx, ax
0x6FB432: mov     [esp+10h+arg_0], ecx
0x6FB436: push    ecx
0x6FB437: fild    [esp+14h+arg_0]
0x6FB43B: mov     ecx, esi
0x6FB43D: fdiv    qword ptr ds:0A2FC70h
0x6FB443: fstp    [esp+14h+arg_0]
0x6FB447: fld     [esp+14h+arg_0]
0x6FB44B: fstp    [esp+14h+var_14]; float
0x6FB44E: call    sub_6FAEE0
0x6FB453: pop     edi
0x6FB454: pop     esi
0x6FB455: pop     ebx
0x6FB456: pop     ecx
0x6FB457: retn    4
