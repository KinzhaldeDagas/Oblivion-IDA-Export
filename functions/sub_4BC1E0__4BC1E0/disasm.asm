0x4BC1E0: sub     esp, 10h
0x4BC1E3: push    esi
0x4BC1E4: mov     esi, ecx
0x4BC1E6: call    TESForm_InitializeFormRecord
0x4BC1EB: movzx   eax, word ptr [esi+24h]
0x4BC1EF: movzx   ecx, word ptr [esi+26h]
0x4BC1F3: movzx   edx, word ptr [esi+28h]
0x4BC1F7: mov     [esp+14h+var_10], eax
0x4BC1FB: push    0Ch; Size
0x4BC1FD: lea     eax, [esp+18h+Src]
0x4BC201: fild    [esp+18h+var_10]
0x4BC205: mov     [esp+18h+var_10], ecx
0x4BC209: push    eax; Src
0x4BC20A: push    4D414E44h; int
0x4BC20F: fstp    [esp+20h+Src]
0x4BC213: fild    [esp+20h+var_10]
0x4BC217: mov     [esp+20h+var_10], edx
0x4BC21B: fstp    [esp+20h+var_8]
0x4BC21F: fild    [esp+20h+var_10]
0x4BC223: fstp    [esp+20h+var_4]
0x4BC227: call    TESForm_PutFormRecordChunkData
0x4BC22C: add     esp, 0Ch
0x4BC22F: mov     ecx, esi; this
0x4BC231: call    TESForm_FinalizeFormRecord
0x4BC236: pop     esi
0x4BC237: add     esp, 10h
0x4BC23A: retn
