0x668CC0: push    esi
0x668CC1: mov     esi, ecx
0x668CC3: mov     ecx, [esi+58h]
0x668CC6: mov     eax, [ecx]
0x668CC8: mov     edx, [eax+320h]
0x668CCE: call    edx
0x668CD0: test    al, al
0x668CD2: jnz     short loc_668CE4
0x668CD4: call    sub_57A310
0x668CD9: test    al, al
0x668CDB: jz      short loc_668CE4
0x668CDD: mov     ecx, esi; Concurrency::details::SchedulerBase *
0x668CDF: call    sub_664E60
0x668CE4: mov     ecx, [esi+58h]
0x668CE7: mov     eax, [ecx]
0x668CE9: mov     edx, [eax+318h]
0x668CEF: push    esi
0x668CF0: call    edx
0x668CF2: pop     esi
0x668CF3: retn
