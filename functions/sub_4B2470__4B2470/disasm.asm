0x4B2470: push    0FFFFFFFFh
0x4B2472: push    offset ??1Extra@Tile@@UAE@XZ_SEH
0x4B2477: mov     eax, large fs:0
0x4B247D: push    eax
0x4B247E: push    ecx
0x4B247F: push    esi
0x4B2480: mov     eax, ds:0B30AACh
0x4B2485: xor     eax, esp
0x4B2487: push    eax
0x4B2488: lea     eax, [esp+18h+var_C]
0x4B248C: mov     large fs:0, eax
0x4B2492: mov     esi, ecx
0x4B2494: mov     [esp+18h+var_10], esi
0x4B2498: call    sub_721350
0x4B249D: push    offset off_A3CEB0; Src
0x4B24A2: mov     ecx, esi
0x4B24A4: mov     [esp+1Ch+var_4], 0
0x4B24AC: mov     dword ptr [esi], offset ??_7TESObjectExtraData@@6B@; const TESObjectExtraData::`vftable'
0x4B24B2: call    sub_721440
0x4B24B7: mov     dword ptr [esi+0Ch], 0
0x4B24BE: mov     eax, esi
0x4B24C0: mov     ecx, [esp+18h+var_C]
0x4B24C4: mov     large fs:0, ecx
0x4B24CB: pop     ecx
0x4B24CC: pop     esi
0x4B24CD: add     esp, 10h
0x4B24D0: retn
