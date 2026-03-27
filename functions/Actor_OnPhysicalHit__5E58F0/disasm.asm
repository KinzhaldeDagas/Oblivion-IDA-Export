0x5E58F0: fld     [esp+arg_0]
0x5E58F4: push    esi
0x5E58F5: push    edi
0x5E58F6: fchs
0x5E58F8: mov     edi, [esp+8+a3]
0x5E58FC: push    edi; a3
0x5E58FD: push    ecx
0x5E58FE: fstp    [esp+10h+a2]; a2
0x5E5901: mov     esi, ecx
0x5E5903: call    Actor_AdjustDmgByDifficulty
0x5E5908: fchs
0x5E590A: test    edi, edi
0x5E590C: fstp    [esp+8+a3]
0x5E5910: jz      short loc_5E5944
0x5E5912: mov     eax, [edi]
0x5E5914: mov     edx, [eax+330h]
0x5E591A: mov     ecx, edi
0x5E591C: call    edx
0x5E591E: test    eax, eax
0x5E5920: jz      short loc_5E5944
0x5E5922: mov     eax, [edi]
0x5E5924: mov     edx, [eax+330h]
0x5E592A: push    esi
0x5E592B: mov     ecx, edi
0x5E592D: call    edx
0x5E592F: mov     ecx, eax
0x5E5931: call    sub_613640
0x5E5936: test    eax, eax
0x5E5938: jz      short loc_5E5944
0x5E593A: fld     dword ptr [eax+10h]
0x5E593D: fadd    [esp+8+a3]
0x5E5941: fstp    dword ptr [eax+10h]
0x5E5944: mov     eax, [esi]
0x5E5946: mov     edx, [eax+330h]
0x5E594C: mov     ecx, esi
0x5E594E: call    edx
0x5E5950: test    eax, eax
0x5E5952: jz      short loc_5E597E
0x5E5954: mov     eax, [esi]
0x5E5956: mov     edx, [eax+330h]
0x5E595C: push    edi
0x5E595D: mov     ecx, esi
0x5E595F: call    edx
0x5E5961: mov     ecx, eax
0x5E5963: call    sub_613640
0x5E5968: test    eax, eax
0x5E596A: jz      short loc_5E597E
0x5E596C: fld     dword ptr [eax+0Ch]
0x5E596F: fld     [esp+4+arg_C]
0x5E5973: fld     st
0x5E5975: faddp   st(2), st
0x5E5977: fxch    st(1)
0x5E5979: fstp    dword ptr [eax+0Ch]
0x5E597C: jmp     short loc_5E5982
0x5E597E: fld     [esp+4+arg_C]
0x5E5982: fldz
0x5E5984: fcomp   st(1)
0x5E5986: fnstsw  ax
0x5E5988: test    ah, 5
0x5E598B: jp      short loc_5E59A4
0x5E598D: mov     eax, [esi]
0x5E598F: fchs
0x5E5991: mov     edx, [eax+2A4h]
0x5E5997: push    edi
0x5E5998: push    ecx
0x5E5999: fstp    [esp+0Ch+var_C]
0x5E599C: push    8
0x5E599E: mov     ecx, esi
0x5E59A0: call    edx
0x5E59A2: jmp     short loc_5E59A6
0x5E59A4: fstp    st
0x5E59A6: fldz
0x5E59A8: fld     [esp+4+a3]
0x5E59AC: fcom    st(1)
0x5E59AE: fnstsw  ax
0x5E59B0: fstp    st(1)
0x5E59B2: test    ah, 41h
0x5E59B5: jnz     short loc_5E59DF
0x5E59B7: mov     eax, [esi]
0x5E59B9: fchs
0x5E59BB: mov     edx, [eax+2A4h]
0x5E59C1: push    edi
0x5E59C2: push    ecx
0x5E59C3: fstp    [esp+0Ch+var_C]
0x5E59C6: push    0Ah
0x5E59C8: mov     ecx, esi
0x5E59CA: call    edx
0x5E59CC: mov     eax, [esi]
0x5E59CE: mov     edx, [eax+198h]
0x5E59D4: push    0
0x5E59D6: mov     ecx, esi
0x5E59D8: call    edx
0x5E59DA: pop     edi
0x5E59DB: pop     esi
0x5E59DC: retn    0Ch
0x5E59DF: mov     eax, [esi]
0x5E59E1: fstp    st
0x5E59E3: mov     edx, [eax+198h]
0x5E59E9: push    0
0x5E59EB: mov     ecx, esi
0x5E59ED: call    edx
0x5E59EF: pop     edi
0x5E59F0: pop     esi
0x5E59F1: retn    0Ch
