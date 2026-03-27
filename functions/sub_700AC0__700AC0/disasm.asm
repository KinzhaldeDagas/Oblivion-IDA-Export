0x700AC0: push    ecx
0x700AC1: push    esi
0x700AC2: mov     esi, [esp+8+arg_0]
0x700AC6: push    esi
0x700AC7: call    sub_6FFCE0
0x700ACC: cmp     dword ptr [esi+0D8h], 0A000102h
0x700AD6: jnb     short loc_700B09
0x700AD8: mov     eax, [esi+21Ch]
0x700ADE: push    1
0x700AE0: lea     ecx, [esp+0Ch+var_4]
0x700AE4: push    ecx
0x700AE5: push    2
0x700AE7: lea     edx, [esp+14h+arg_0]
0x700AEB: push    edx
0x700AEC: push    eax
0x700AED: mov     eax, [eax+4]
0x700AF0: mov     [esp+1Ch+var_4], 2
0x700AF8: call    eax
0x700AFA: mov     cx, word ptr [esp+1Ch+arg_0]
0x700AFF: add     esp, 14h
0x700B02: mov     [esi+25Ch], cx
0x700B09: pop     esi
0x700B0A: pop     ecx
0x700B0B: retn    4
