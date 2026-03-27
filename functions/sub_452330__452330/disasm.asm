0x452330: mov     ecx, ds:0B333C4h; this
0x452336: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x45233B: cmp     eax, 2
0x45233E: jz      short loc_45239A
0x452340: mov     ecx, ds:0B333C4h; this
0x452346: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x45234B: cmp     eax, 1
0x45234E: jz      short loc_45239A
0x452350: mov     ecx, ds:0B333C4h
0x452356: call    sub_65D140
0x45235B: test    al, al
0x45235D: jnz     short loc_45239A
0x45235F: call    sub_578FE0
0x452364: cmp     eax, 40Fh
0x452369: jz      short loc_45237B
0x45236B: test    eax, eax
0x45236D: jz      short loc_45237B
0x45236F: cmp     eax, 3F5h
0x452374: jz      short loc_45237B
0x452376: cmp     eax, 3
0x452379: jnz     short loc_45239A
0x45237B: call    GetOpenedMenuCode
0x452380: cmp     eax, 40Fh
0x452385: jz      short loc_452397
0x452387: test    eax, eax
0x452389: jz      short loc_452397
0x45238B: cmp     eax, 3F5h
0x452390: jz      short loc_452397
0x452392: cmp     eax, 3
0x452395: jnz     short loc_45239A
0x452397: mov     al, 1
0x452399: retn
0x45239A: xor     al, al
0x45239C: retn
