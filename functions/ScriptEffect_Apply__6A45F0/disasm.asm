0x6A45F0: push    esi
0x6A45F1: mov     esi, ecx
0x6A45F3: mov     ecx, [esi+38h]
0x6A45F6: test    ecx, ecx
0x6A45F8: jz      short loc_6A4616
0x6A45FA: call    Script_CreateEventList
0x6A45FF: mov     ecx, [esi+20h]
0x6A4602: mov     [esi+3Ch], eax
0x6A4605: push    eax
0x6A4606: mov     eax, [ecx]
0x6A4608: mov     edx, [eax+4]
0x6A460B: call    edx
0x6A460D: mov     ecx, [esi+38h]
0x6A4610: push    eax
0x6A4611: call    sub_4F9F00
0x6A4616: pop     esi
0x6A4617: retn
