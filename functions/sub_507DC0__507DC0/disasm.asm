0x507DC0: cmp     byte ptr ds:0B125E8h, 0
0x507DC7: jz      short loc_507DF0
0x507DC9: push    1
0x507DCB: call    sub_55F7E0
0x507DD0: add     esp, 4
0x507DD3: cmp     byte ptr [eax+20h], 0
0x507DD7: jz      short loc_507DF0
0x507DD9: push    1
0x507DDB: call    sub_55F7E0
0x507DE0: add     esp, 4
0x507DE3: cmp     byte ptr [eax+21h], 0
0x507DE7: jz      short loc_507DF0
0x507DE9: mov     eax, 1
0x507DEE: jmp     short loc_507DF2
0x507DF0: xor     eax, eax
0x507DF2: push    ebx
0x507DF3: test    al, al
0x507DF5: push    1
0x507DF7: setz    bl
0x507DFA: call    sub_55F7E0
0x507DFF: add     esp, 4
0x507E02: mov     [eax+21h], bl
0x507E05: cmp     byte ptr ds:0B361ACh, 0
0x507E0C: pop     ebx
0x507E0D: jz      short loc_507E50
0x507E0F: cmp     byte ptr ds:0B125E8h, 0
0x507E16: jz      short loc_507E3D
0x507E18: push    1
0x507E1A: call    sub_55F7E0
0x507E1F: add     esp, 4
0x507E22: cmp     byte ptr [eax+20h], 0
0x507E26: jz      short loc_507E3D
0x507E28: push    1
0x507E2A: call    sub_55F7E0
0x507E2F: add     esp, 4
0x507E32: cmp     byte ptr [eax+21h], 0
0x507E36: mov     eax, offset aOn_0
0x507E3B: jnz     short loc_507E42
0x507E3D: mov     eax, offset aOff
0x507E42: push    eax
0x507E43: push    offset aLeavesS; "Leaves -> %s"
0x507E48: call    Interface_ConsolePrint
0x507E4D: add     esp, 8
0x507E50: mov     al, 1
0x507E52: retn
