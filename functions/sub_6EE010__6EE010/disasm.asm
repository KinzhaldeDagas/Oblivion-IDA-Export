0x6EE010: push    ebp
0x6EE011: mov     ebp, esp
0x6EE013: and     esp, 0FFFFFFF8h
0x6EE016: sub     esp, 1Ch
0x6EE019: push    ebx
0x6EE01A: mov     ebx, [ebp+arg_8]
0x6EE01D: push    esi
0x6EE01E: mov     esi, [ebp+arg_4]
0x6EE021: push    edi
0x6EE022: sub     ebx, esi
0x6EE024: mov     [esp+28h+var_14], 2
0x6EE02C: mov     [esp+28h+var_18], 2
0x6EE034: mov     eax, [esi]
0x6EE036: fldz
0x6EE038: mov     edx, [esi+4]
0x6EE03B: mov     [ebx+esi], eax
0x6EE03E: imul    eax, edx
0x6EE041: lea     ecx, [ebx+esi+8]; int
0x6EE045: push    ecx
0x6EE046: mov     [ecx-4], edx
0x6EE049: fstp    [esp+2Ch+var_2C]; int
0x6EE04C: push    eax; int
0x6EE04D: call    sub_527160
0x6EE052: cmp     dword ptr [esi], 0
0x6EE055: mov     [esp+28h+var_1C], 0
0x6EE05D: jbe     loc_6EE103
0x6EE063: xor     edi, edi
0x6EE065: cmp     [esi+4], edi
0x6EE068: jbe     loc_6EE0F0
0x6EE06E: mov     edi, edi
0x6EE070: call    sub_6F6A80
0x6EE075: fmul    [ebp+arg_0]
0x6EE078: mov     eax, [esi+0Ch]
0x6EE07B: test    eax, eax
0x6EE07D: fmul    qword ptr ds:0A563D0h
0x6EE083: fstp    [esp+28h+var_8]
0x6EE087: jz      short loc_6EE093
0x6EE089: mov     ecx, [esi+10h]
0x6EE08C: sub     ecx, eax
0x6EE08E: sar     ecx, 2
0x6EE091: jnz     short loc_6EE098
0x6EE093: call    __invalid_parameter_noinfo
0x6EE098: mov     edx, [esi+4]
0x6EE09B: imul    edx, [esp+28h+var_1C]
0x6EE0A0: mov     eax, [esi+0Ch]
0x6EE0A3: add     edx, edi
0x6EE0A5: lea     ecx, [eax+edx*4]
0x6EE0A8: mov     eax, [ebx+esi+0Ch]
0x6EE0AC: test    eax, eax
0x6EE0AE: mov     [esp+28h+var_10], ecx
0x6EE0B2: jz      short loc_6EE0BF
0x6EE0B4: mov     edx, [ebx+esi+10h]
0x6EE0B8: sub     edx, eax
0x6EE0BA: sar     edx, 2
0x6EE0BD: jnz     short loc_6EE0C4
0x6EE0BF: call    __invalid_parameter_noinfo
0x6EE0C4: mov     ecx, [ebx+esi+4]
0x6EE0C8: imul    ecx, [esp+28h+var_1C]
0x6EE0CD: mov     eax, [esp+28h+var_10]
0x6EE0D1: mov     edx, [ebx+esi+0Ch]
0x6EE0D5: add     ecx, edi
0x6EE0D7: fld     dword ptr [eax]
0x6EE0D9: add     edi, 1
0x6EE0DC: fadd    [esp+28h+var_8]
0x6EE0E0: fstp    [esp+28h+var_10]
0x6EE0E4: fld     [esp+28h+var_10]
0x6EE0E8: fstp    dword ptr [edx+ecx*4]
0x6EE0EB: cmp     edi, [esi+4]
0x6EE0EE: jb      short loc_6EE070
0x6EE0F0: mov     eax, [esp+28h+var_1C]
0x6EE0F4: add     eax, 1
0x6EE0F7: cmp     eax, [esi]
0x6EE0F9: mov     [esp+28h+var_1C], eax
0x6EE0FD: jb      loc_6EE063
0x6EE103: add     esi, 18h
0x6EE106: sub     [esp+28h+var_18], 1
0x6EE10B: jnz     loc_6EE034
0x6EE111: sub     [esp+28h+var_14], 1
0x6EE116: jnz     loc_6EE02C
0x6EE11C: pop     edi
0x6EE11D: pop     esi
0x6EE11E: pop     ebx
0x6EE11F: mov     esp, ebp
0x6EE121: pop     ebp
0x6EE122: retn    0Ch
