0x660E90: push    ebx
0x660E91: push    esi
0x660E92: mov     esi, [esp+8+arg_0]
0x660E96: mov     eax, [esi]
0x660E98: mov     edx, [eax+198h]
0x660E9E: push    0
0x660EA0: mov     ecx, esi
0x660EA2: xor     bl, bl
0x660EA4: call    edx
0x660EA6: test    al, al
0x660EA8: jnz     short loc_660F08
0x660EAA: mov     eax, [esi+8]
0x660EAD: shr     eax, 0Bh
0x660EB0: test    al, 1
0x660EB2: jnz     short loc_660F08
0x660EB4: mov     edx, [esi]
0x660EB6: mov     eax, [edx+1A0h]
0x660EBC: mov     ecx, esi
0x660EBE: call    eax
0x660EC0: test    al, al
0x660EC2: jnz     short loc_660F08
0x660EC4: mov     ecx, esi; this
0x660EC6: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x660ECB: cmp     eax, 5
0x660ECE: jz      short loc_660F08
0x660ED0: mov     ecx, esi
0x660ED2: call    sub_5E03A0
0x660ED7: test    eax, eax
0x660ED9: jz      short loc_660F08
0x660EDB: mov     al, [eax+20h]
0x660EDE: cmp     al, 1
0x660EE0: jz      short loc_660EE6
0x660EE2: cmp     al, 7
0x660EE4: jnz     short loc_660F08
0x660EE6: mov     ecx, [esi+58h]
0x660EE9: mov     edx, [ecx]
0x660EEB: mov     eax, [edx+0CCh]
0x660EF1: call    eax
0x660EF3: cmp     eax, ds:0B333C4h
0x660EF9: jnz     short loc_660F08
0x660EFB: mov     ecx, esi
0x660EFD: call    sub_5E6BC0
0x660F02: test    al, al
0x660F04: jnz     short loc_660F08
0x660F06: mov     bl, 1
0x660F08: pop     esi
0x660F09: mov     al, bl
0x660F0B: pop     ebx
0x660F0C: retn    4
