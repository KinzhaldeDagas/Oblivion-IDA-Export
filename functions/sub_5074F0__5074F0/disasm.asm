0x5074F0: sub     esp, 0Ch
0x5074F3: mov     edx, [esp+0Ch+l]
0x5074F7: push    esi
0x5074F8: mov     esi, [esp+10h+a4]
0x5074FC: lea     eax, [esp+10h+var_C]
0x507500: push    eax
0x507501: mov     eax, [esp+14h+arg_10]
0x507505: lea     ecx, [esp+14h+var_4]
0x507509: push    ecx; UInt16
0x50750A: mov     ecx, [esp+18h+arg_C]
0x50750E: push    edx; l
0x50750F: mov     edx, [esp+1Ch+a3]
0x507513: push    eax; a6
0x507514: mov     eax, [esp+20h+arg_4]
0x507518: push    ecx; a5
0x507519: mov     ecx, [esp+24h+a1]
0x50751D: push    esi; a4
0x50751E: push    edx; a3
0x50751F: push    eax; a2
0x507520: push    ecx; a1
0x507521: mov     dword ptr [esp+34h+var_4], 0
0x507529: mov     [esp+34h+var_C], 0
0x507531: call    Script_ExtractArgs
0x507536: add     esp, 24h
0x507539: test    al, al
0x50753B: jnz     short loc_507542
0x50753D: pop     esi
0x50753E: add     esp, 0Ch
0x507541: retn
0x507542: cmp     [esp+10h+var_C], 0
0x507547: mov     byte ptr [esp+10h+var_8], 0
0x50754C: jz      short loc_507553
0x50754E: mov     byte ptr [esp+10h+var_8], 1
0x507553: test    esi, esi
0x507555: jz      short loc_50758B
0x507557: lea     ecx, [esi+44h]; this
0x50755A: test    ecx, ecx
0x50755C: jz      short loc_50758B
0x50755E: call    ExtraDataList_GetContainerChanges
0x507563: test    eax, eax
0x507565: jz      short loc_50758B
0x507567: mov     edx, [esp+10h+var_8]
0x50756B: mov     ecx, dword ptr [esp+10h+var_4]
0x50756F: push    0
0x507571: push    edx
0x507572: push    0
0x507574: push    ecx
0x507575: push    esi
0x507576: mov     ecx, eax
0x507578: call    sub_492E70
0x50757D: fstp    st
0x50757F: mov     ecx, ds:0B333C4h
0x507585: push    esi
0x507586: call    sub_665260
0x50758B: mov     al, 1
0x50758D: pop     esi
0x50758E: add     esp, 0Ch
0x507591: retn
