0x6D7450: push    0FFFFFFFFh
0x6D7452: push    offset SEH_8C62B0
0x6D7457: mov     eax, large fs:0
0x6D745D: push    eax
0x6D745E: push    ecx
0x6D745F: push    esi
0x6D7460: mov     eax, ds:0B30AACh
0x6D7465: xor     eax, esp
0x6D7467: push    eax
0x6D7468: lea     eax, [esp+18h+var_C]
0x6D746C: mov     large fs:0, eax
0x6D7472: push    14h; Size
0x6D7474: call    FormHeapAlloc
0x6D7479: mov     esi, eax
0x6D747B: add     esp, 4
0x6D747E: mov     [esp+18h+var_10], esi
0x6D7482: test    esi, esi
0x6D7484: mov     [esp+18h+var_4], 0
0x6D748C: jz      short loc_6D74BC
0x6D748E: mov     ecx, esi
0x6D7490: call    sub_721350
0x6D7495: mov     dword ptr [esi], offset ??_7NiTextKeyExtraData@@6B@; const NiTextKeyExtraData::`vftable'
0x6D749B: mov     dword ptr [esi+0Ch], 0
0x6D74A2: mov     dword ptr [esi+10h], 0
0x6D74A9: mov     eax, esi
0x6D74AB: mov     ecx, [esp+18h+var_C]
0x6D74AF: mov     large fs:0, ecx
0x6D74B6: pop     ecx
0x6D74B7: pop     esi
0x6D74B8: add     esp, 10h
0x6D74BB: retn
0x6D74BC: xor     eax, eax
0x6D74BE: mov     ecx, [esp+18h+var_C]
0x6D74C2: mov     large fs:0, ecx
0x6D74C9: pop     ecx
0x6D74CA: pop     esi
0x6D74CB: add     esp, 10h
0x6D74CE: retn
