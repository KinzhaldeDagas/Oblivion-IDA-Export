0x67C6E0: cmp     byte ptr [esp+arg_4], 0
0x67C6E5: push    esi
0x67C6E6: mov     esi, ecx
0x67C6E8: jnz     short loc_67C70A
0x67C6EA: mov     esi, [esp+4+arg_0]
0x67C6EE: mov     ecx, [esi+58h]
0x67C6F1: mov     eax, [ecx]
0x67C6F3: mov     edx, [eax+204h]
0x67C6F9: push    0
0x67C6FB: call    edx
0x67C6FD: push    30h ; '0'
0x67C6FF: mov     ecx, esi
0x67C701: call    sub_5E05F0
0x67C706: pop     esi
0x67C707: retn    8
0x67C70A: fldz
0x67C70C: mov     ecx, [esi+3Ch]
0x67C70F: fcomp   dword ptr [ecx+20h]
0x67C712: fnstsw  ax
0x67C714: test    ah, 5
0x67C717: jp      short loc_67C729
0x67C719: fld     dword ptr [ecx+20h]
0x67C71C: pop     esi
0x67C71D: fsub    dword ptr ds:0B33E9Ch
0x67C723: fstp    dword ptr [ecx+20h]
0x67C726: retn    8
0x67C729: push    ebx
0x67C72A: push    ebp
0x67C72B: push    0; Seed
0x67C72D: call    GetRandomLargeInteger?
0x67C732: mov     ebp, eax
0x67C734: mov     eax, [esi+3Ch]
0x67C737: mov     ebx, [eax+4]
0x67C73A: add     esp, 4
0x67C73D: test    ebx, ebx
0x67C73F: jz      loc_67C7E7
0x67C745: push    edi
0x67C746: mov     edi, [esp+10h+arg_0]
0x67C74A: mov     ecx, [edi+58h]
0x67C74D: mov     edx, [ecx]
0x67C74F: mov     eax, [edx+200h]
0x67C755: call    eax
0x67C757: test    al, al
0x67C759: jnz     short loc_67C7DA
0x67C75B: mov     eax, 51EB851Fh
0x67C760: imul    ebp
0x67C762: sar     edx, 5
0x67C765: mov     ecx, edx
0x67C767: shr     ecx, 1Fh
0x67C76A: add     ecx, edx
0x67C76C: imul    ecx, 64h ; 'd'
0x67C76F: sub     ebp, ecx
0x67C771: mov     [esp+10h+arg_4], ebp
0x67C775: fild    [esp+10h+arg_4]
0x67C779: fld     dword ptr ds:0B36900h
0x67C77F: fcompp
0x67C781: fnstsw  ax
0x67C783: test    ah, 41h
0x67C786: jnz     short loc_67C7DA
0x67C788: fldz
0x67C78A: fcomp   dword ptr [esi+50h]
0x67C78D: fnstsw  ax
0x67C78F: test    ah, 1
0x67C792: jnz     short loc_67C7DA
0x67C794: push    2
0x67C796: push    6
0x67C798: call    TESTopic__GEtTopic
0x67C79D: add     esp, 8
0x67C7A0: test    eax, eax
0x67C7A2: jz      short loc_67C7DA
0x67C7A4: mov     ecx, [edi+58h]
0x67C7A7: push    1
0x67C7A9: push    0
0x67C7AB: push    0
0x67C7AD: mov     [edi+0E4h], ebx
0x67C7B3: mov     edx, [ecx]
0x67C7B5: push    eax
0x67C7B6: mov     eax, [edx+1A4h]
0x67C7BC: push    edi
0x67C7BD: call    eax
0x67C7BF: mov     ecx, offset unk_B36920
0x67C7C4: call    GameSetting_GetSafeFloatPointer
0x67C7C9: fld     dword ptr [eax]
0x67C7CB: mov     ecx, [esi+3Ch]
0x67C7CE: fstp    dword ptr [esi+50h]
0x67C7D1: fld     dword ptr ds:0A31C80h
0x67C7D7: fstp    dword ptr [ecx+20h]
0x67C7DA: fld     dword ptr [esi+50h]
0x67C7DD: pop     edi
0x67C7DE: fsub    dword ptr ds:0B33E9Ch
0x67C7E4: fstp    dword ptr [esi+50h]
0x67C7E7: pop     ebp
0x67C7E8: pop     ebx
0x67C7E9: pop     esi
0x67C7EA: retn    8
