0x730150: push    0FFFFFFFFh
0x730152: push    offset SEH_8C62B0
0x730157: mov     eax, large fs:0
0x73015D: push    eax
0x73015E: push    ecx
0x73015F: push    esi
0x730160: mov     eax, ds:0B30AACh
0x730165: xor     eax, esp
0x730167: push    eax
0x730168: lea     eax, [esp+18h+var_C]
0x73016C: mov     large fs:0, eax
0x730172: push    14h; Size
0x730174: call    FormHeapAlloc
0x730179: mov     esi, eax
0x73017B: add     esp, 4
0x73017E: mov     [esp+18h+var_10], esi
0x730182: test    esi, esi
0x730184: mov     [esp+18h+var_4], 0
0x73018C: jz      short loc_7301BC
0x73018E: mov     ecx, esi
0x730190: call    sub_721350
0x730195: mov     dword ptr [esi], offset ??_7NiFloatsExtraData@@6B@; const NiFloatsExtraData::`vftable'
0x73019B: mov     dword ptr [esi+10h], 0
0x7301A2: mov     dword ptr [esi+0Ch], 0
0x7301A9: mov     eax, esi
0x7301AB: mov     ecx, [esp+18h+var_C]
0x7301AF: mov     large fs:0, ecx
0x7301B6: pop     ecx
0x7301B7: pop     esi
0x7301B8: add     esp, 10h
0x7301BB: retn
0x7301BC: xor     eax, eax
0x7301BE: mov     ecx, [esp+18h+var_C]
0x7301C2: mov     large fs:0, ecx
0x7301C9: pop     ecx
0x7301CA: pop     esi
0x7301CB: add     esp, 10h
0x7301CE: retn
