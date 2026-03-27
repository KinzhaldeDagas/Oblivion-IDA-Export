0x6FA820: push    0FFFFFFFFh
0x6FA822: push    offset BSXFlags_constr_SEH
0x6FA827: mov     eax, large fs:0
0x6FA82D: push    eax
0x6FA82E: push    ecx
0x6FA82F: push    esi
0x6FA830: mov     eax, ds:0B30AACh
0x6FA835: xor     eax, esp
0x6FA837: push    eax
0x6FA838: lea     eax, [esp+18h+var_C]
0x6FA83C: mov     large fs:0, eax
0x6FA842: mov     esi, ecx
0x6FA844: mov     [esp+18h+var_10], esi
0x6FA848: call    sub_721350
0x6FA84D: xor     eax, eax
0x6FA84F: mov     [esi+0Ch], eax
0x6FA852: push    offset dword_A7D0EC; Src
0x6FA857: mov     ecx, esi
0x6FA859: mov     [esp+1Ch+var_4], eax
0x6FA85D: mov     dword ptr [esi], offset ??_7BSXFlags@@6B@; const BSXFlags::`vftable'
0x6FA863: call    sub_721440
0x6FA868: mov     eax, esi
0x6FA86A: mov     ecx, [esp+18h+var_C]
0x6FA86E: mov     large fs:0, ecx
0x6FA875: pop     ecx
0x6FA876: pop     esi
0x6FA877: add     esp, 10h
0x6FA87A: retn
