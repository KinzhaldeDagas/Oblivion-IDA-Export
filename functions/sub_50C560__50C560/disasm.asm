0x50C560: push    ecx
0x50C561: mov     ecx, [esp+4+l]
0x50C565: mov     edx, [esp+4+arg_10]
0x50C569: push    esi
0x50C56A: mov     esi, [esp+8+a4]
0x50C56E: lea     eax, [esp+8+var_4]
0x50C572: push    eax; UInt16
0x50C573: mov     eax, [esp+0Ch+arg_C]
0x50C577: push    ecx; l
0x50C578: mov     ecx, [esp+10h+a3]
0x50C57C: push    edx; a6
0x50C57D: mov     edx, [esp+14h+arg_4]
0x50C581: push    eax; a5
0x50C582: mov     eax, [esp+18h+a1]
0x50C586: push    esi; a4
0x50C587: push    ecx; a3
0x50C588: push    edx; a2
0x50C589: push    eax; a1
0x50C58A: mov     dword ptr [esp+28h+var_4], 0
0x50C592: call    Script_ExtractArgs
0x50C597: add     esp, 20h
0x50C59A: test    al, al
0x50C59C: jnz     short loc_50C5A1
0x50C59E: pop     esi
0x50C59F: pop     ecx
0x50C5A0: retn
0x50C5A1: test    esi, esi
0x50C5A3: jz      short loc_50C60D
0x50C5A5: cmp     dword ptr [esp+8+var_4], 0
0x50C5AA: mov     ecx, esi
0x50C5AC: jz      short loc_50C5E0
0x50C5AE: call    sub_4DE660
0x50C5B3: cmp     eax, 2
0x50C5B6: jle     short loc_50C5C7
0x50C5B8: push    1
0x50C5BA: push    0
0x50C5BC: push    0
0x50C5BE: push    0
0x50C5C0: mov     ecx, esi
0x50C5C2: call    ActivateRef
0x50C5C7: push    offset aOpen; "Open"
0x50C5CC: mov     ecx, esi
0x50C5CE: call    sub_4D90D0
0x50C5D3: lea     ecx, [esi+44h]
0x50C5D6: call    sub_4212F0
0x50C5DB: mov     al, 1
0x50C5DD: pop     esi
0x50C5DE: pop     ecx
0x50C5DF: retn
0x50C5E0: call    sub_4DE660
0x50C5E5: cmp     eax, 3
0x50C5E8: jge     short loc_50C5F9
0x50C5EA: push    1
0x50C5EC: push    0
0x50C5EE: push    0
0x50C5F0: push    0
0x50C5F2: mov     ecx, esi
0x50C5F4: call    ActivateRef
0x50C5F9: push    offset aClose; "Close"
0x50C5FE: mov     ecx, esi
0x50C600: call    sub_4D90D0
0x50C605: lea     ecx, [esi+44h]
0x50C608: call    sub_4212F0
0x50C60D: mov     al, 1
0x50C60F: pop     esi
0x50C610: pop     ecx
0x50C611: retn
