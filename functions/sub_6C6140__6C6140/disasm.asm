0x6C6140: push    esi
0x6C6141: push    edi
0x6C6142: mov     edi, [esp+8+arg_0]
0x6C6146: mov     eax, edi
0x6C6148: lea     edx, [eax+1]
0x6C614B: jmp     short loc_6C6150
0x6C614D: align 10h
0x6C6150: mov     cl, [eax]
0x6C6152: add     eax, 1
0x6C6155: test    cl, cl
0x6C6157: jnz     short loc_6C6150
0x6C6159: sub     eax, edx
0x6C615B: add     eax, 20h ; ' '
0x6C615E: push    eax; Size
0x6C615F: call    FormHeapAlloc
0x6C6164: mov     esi, eax
0x6C6166: mov     eax, [esp+0Ch+arg_4]
0x6C616A: add     esp, 4
0x6C616D: cmp     eax, 6; switch 7 cases
0x6C6170: ja      short def_6C6172
0x6C6172: jmp     ds:jpt_6C6172[eax*4]; switch jump
0x6C6179: mov     eax, offset aInactive; jumptable 006C6172 case 0
0x6C617E: jmp     short loc_6C61AE
0x6C6180: mov     eax, offset aAnimating; jumptable 006C6172 case 1
0x6C6185: jmp     short loc_6C61AE
0x6C6187: mov     eax, offset aEasein; jumptable 006C6172 case 2
0x6C618C: jmp     short loc_6C61AE
0x6C618E: mov     eax, offset aEaseout; jumptable 006C6172 case 3
0x6C6193: jmp     short loc_6C61AE
0x6C6195: mov     eax, offset aTranssource; jumptable 006C6172 case 4
0x6C619A: jmp     short loc_6C61AE
0x6C619C: mov     eax, offset aTransdest; jumptable 006C6172 case 5
0x6C61A1: jmp     short loc_6C61AE
0x6C61A3: mov     eax, offset aMorphsource; jumptable 006C6172 case 6
0x6C61A8: jmp     short loc_6C61AE
