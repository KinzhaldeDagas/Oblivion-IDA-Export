0x985544: jmp     ds:jpt_985544[ecx*4]; switch 8 cases
0x98554B: align 4
0x98554C: dd offset unknown_libname_22
0x985550: dd offset unknown_libname_23
0x985554: dd offset unknown_libname_24
0x985558: and     edx, ecx
0x98555A: mov     al, [esi]
0x98555C: mov     [edi], al
0x98555E: mov     al, [esi+1]
0x985561: mov     [edi+1], al
0x985564: mov     al, [esi+2]
0x985567: shr     ecx, 2
0x98556A: mov     [edi+2], al
0x98556D: add     esi, 3
0x985570: add     edi, 3
0x985573: cmp     ecx, 8
0x985576: jb      short unknown_libname_16___unknown_libname_21
0x985578: rep movsd
0x98557A: jmp     ds:funcs_9855A0[edx*4]
0x985581: align 4
0x985584: and     edx, ecx
0x985586: mov     al, [esi]
0x985588: mov     [edi], al
0x98558A: mov     al, [esi+1]
0x98558D: shr     ecx, 2
0x985590: mov     [edi+1], al
0x985593: add     esi, 2
0x985596: add     edi, 2
0x985599: cmp     ecx, 8
0x98559C: jb      short unknown_libname_16___unknown_libname_21
0x98559E: rep movsd
0x9855A0: jmp     ds:funcs_9855A0[edx*4]
0x9855A7: align 4
0x9855A8: and     edx, ecx
0x9855AA: mov     al, [esi]
0x9855AC: mov     [edi], al
0x9855AE: add     esi, 1
0x9855B1: shr     ecx, 2
0x9855B4: add     edi, 1
0x9855B7: cmp     ecx, 8
0x9855BA: jb      short unknown_libname_16___unknown_libname_21
0x9855BC: rep movsd
0x9855BE: jmp     ds:funcs_9855A0[edx*4]
0x9855C5: align 4
0x9855C8: dd offset UnwindUp0_0; jump table for switch statement
0x9855E8: mov     eax, [esi+ecx*4-1Ch]; jumptable 00985544 case 7
0x9855EC: mov     [edi+ecx*4-1Ch], eax
0x9855F0: mov     eax, [esi+ecx*4-18h]; jumptable 00985544 case 6
0x9855F4: mov     [edi+ecx*4-18h], eax
0x9855F8: mov     eax, [esi+ecx*4-14h]; jumptable 00985544 case 5
0x9855FC: mov     [edi+ecx*4-14h], eax
0x985600: mov     eax, [esi+ecx*4-10h]; jumptable 00985544 case 4
0x985604: mov     [edi+ecx*4-10h], eax
0x985608: mov     eax, [esi+ecx*4-0Ch]; jumptable 00985544 case 3
0x98560C: mov     [edi+ecx*4-0Ch], eax
0x985610: mov     eax, [esi+ecx*4-8]; jumptable 00985544 case 2
0x985614: mov     [edi+ecx*4-8], eax
0x985618: mov     eax, [esi+ecx*4-4]; jumptable 00985544 case 1
0x98561C: mov     [edi+ecx*4-4], eax
0x985620: lea     eax, ds:0[ecx*4]
0x985627: add     esi, eax
0x985629: add     edi, eax
0x98562B: jmp     ds:funcs_9855A0[edx*4]; jumptable 00985544 case 0
