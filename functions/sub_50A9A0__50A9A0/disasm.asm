0x50A9A0: cmp     byte ptr ds:0B125E8h, 0
0x50A9A7: jz      short loc_50A9C0
0x50A9A9: push    1
0x50A9AB: call    sub_55F7E0
0x50A9B0: add     esp, 4
0x50A9B3: cmp     byte ptr [eax+20h], 0
0x50A9B7: jz      short loc_50A9C0
0x50A9B9: mov     eax, 1
0x50A9BE: jmp     short loc_50A9C2
0x50A9C0: xor     eax, eax
0x50A9C2: push    ebx
0x50A9C3: test    al, al
0x50A9C5: push    1
0x50A9C7: setz    bl
0x50A9CA: call    sub_55F7E0
0x50A9CF: add     esp, 4
0x50A9D2: mov     [eax+20h], bl
0x50A9D5: cmp     byte ptr ds:0B125E8h, 0
0x50A9DC: pop     ebx
0x50A9DD: jz      short loc_50A9F4
0x50A9DF: push    1
0x50A9E1: call    sub_55F7E0
0x50A9E6: add     esp, 4
0x50A9E9: cmp     byte ptr [eax+20h], 0
0x50A9ED: mov     eax, offset aNotCulled; "NOT CULLED"
0x50A9F2: jnz     short loc_50A9F9
0x50A9F4: mov     eax, offset aCulled; "CULLED"
0x50A9F9: push    eax
0x50A9FA: push    offset aAllTreesAreNow; "All trees are now %s."
0x50A9FF: call    Interface_ConsolePrint
0x50AA04: add     esp, 8
0x50AA07: mov     al, 1
0x50AA09: retn
