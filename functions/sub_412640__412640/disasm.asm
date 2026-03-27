0x412640: sub     esp, 10h
0x412643: push    ebx
0x412644: mov     ebx, [esp+14h+arg_8]
0x412648: push    ebp
0x412649: mov     ebp, [esp+18h+arg_0]
0x41264D: push    esi
0x41264E: mov     esi, ecx
0x412650: movsx   eax, byte ptr [esi+24h]
0x412654: movsx   ecx, byte ptr [esi+25h]
0x412658: shl     eax, 0Ch
0x41265B: add     eax, 800h
0x412660: mov     [esp+1Ch+var_10], eax
0x412664: shl     ecx, 0Ch
0x412667: add     ecx, 800h
0x41266D: fild    [esp+1Ch+var_10]
0x412671: push    edi
0x412672: mov     edi, [esp+20h+arg_4]
0x412676: mov     [esp+20h+var_10], ecx
0x41267A: fstp    [esp+20h+var_C]
0x41267E: push    ebx
0x41267F: lea     edx, [esp+24h+var_C]
0x412683: fild    [esp+24h+var_10]
0x412687: push    edx
0x412688: push    ebp
0x412689: mov     ecx, esi
0x41268B: fstp    [esp+2Ch+var_8]
0x41268F: fld     dword ptr [edi+8]
0x412692: fstp    [esp+2Ch+var_4]
0x412696: call    sub_412500
0x41269B: cmp     dword ptr [esi+28h], 0
0x41269F: jz      short loc_4126AE
0x4126A1: mov     ecx, [esi+28h]
0x4126A4: mov     eax, [ecx]
0x4126A6: mov     edx, [eax+4]
0x4126A9: push    ebx
0x4126AA: push    edi
0x4126AB: push    ebp
0x4126AC: call    edx
0x4126AE: pop     edi
0x4126AF: pop     esi
0x4126B0: pop     ebp
0x4126B1: pop     ebx
0x4126B2: add     esp, 10h
0x4126B5: retn    0Ch
