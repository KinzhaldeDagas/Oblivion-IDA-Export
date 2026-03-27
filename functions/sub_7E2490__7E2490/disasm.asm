0x7E2490: mov     eax, [esp+arg_4]
0x7E2494: push    esi
0x7E2495: push    edi
0x7E2496: mov     edi, [esp+8+arg_0]
0x7E249A: push    eax
0x7E249B: push    edi
0x7E249C: mov     esi, ecx
0x7E249E: call    sub_73DA70
0x7E24A3: mov     ecx, [esi+1Ch]
0x7E24A6: mov     [edi+1Ch], ecx
0x7E24A9: fld     dword ptr [esi+20h]
0x7E24AC: fstp    dword ptr [edi+20h]
0x7E24AF: mov     dword ptr [edi+24h], 0
0x7E24B6: pop     edi
0x7E24B7: pop     esi
0x7E24B8: retn    8
