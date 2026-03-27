0x7305F0: sub     esp, 0Ch
0x7305F3: push    esi
0x7305F4: push    edi
0x7305F5: mov     edi, [esp+14h+Size]
0x7305F9: push    edi; Size
0x7305FA: mov     esi, ecx
0x7305FC: call    sub_721610
0x730601: cmp     dword ptr [edi+0D8h], 500000Eh
0x73060B: push    edi
0x73060C: jnb     short loc_730647
0x73060E: fldz
0x730610: lea     ecx, [esp+18h+var_C]
0x730614: fst     [esp+18h+var_C]
0x730618: fst     [esp+18h+var_8]
0x73061C: fstp    [esp+18h+var_4]
0x730620: call    sub_709430
0x730625: fld     [esp+14h+var_C]
0x730629: fstp    dword ptr [esi+0Ch]
0x73062C: pop     edi
0x73062D: fld     [esp+10h+var_8]
0x730631: fstp    dword ptr [esi+10h]
0x730634: fld     [esp+10h+var_4]
0x730638: fstp    dword ptr [esi+14h]
0x73063B: fld1
0x73063D: fstp    dword ptr [esi+18h]
0x730640: pop     esi
0x730641: add     esp, 0Ch
0x730644: retn    4
0x730647: lea     ecx, [esi+0Ch]
0x73064A: call    sub_715420
0x73064F: pop     edi
0x730650: pop     esi
0x730651: add     esp, 0Ch
0x730654: retn    4
