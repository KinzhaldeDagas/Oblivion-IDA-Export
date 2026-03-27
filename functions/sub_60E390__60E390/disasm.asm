0x60E390: push    esi
0x60E391: mov     esi, ecx
0x60E393: cmp     dword ptr [esi+58h], 0
0x60E397: jz      short loc_60E3B8
0x60E399: mov     eax, [esi]
0x60E39B: mov     edx, [eax+284h]
0x60E3A1: push    45h ; 'E'
0x60E3A3: call    edx
0x60E3A5: test    eax, eax
0x60E3A7: jz      short loc_60E3B8
0x60E3A9: mov     ecx, [esi+58h]
0x60E3AC: mov     eax, [ecx]
0x60E3AE: mov     edx, [eax+31Ch]
0x60E3B4: push    1
0x60E3B6: call    edx
0x60E3B8: mov     eax, [esp+4+arg_4]
0x60E3BC: mov     ecx, [esp+4+arg_0]
0x60E3C0: push    eax; int
0x60E3C1: push    ecx; int
0x60E3C2: mov     ecx, esi; Concurrency::details::SchedulerBase *
0x60E3C4: call    Actor_LinkModifiedForm
0x60E3C9: pop     esi
0x60E3CA: retn    8
