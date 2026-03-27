0x403960: mov     edx, dword ptr [esp+scheme]
0x403964: push    ebx
0x403965: xor     eax, eax
0x403967: mov     bl, 0FFh
0x403969: push    esi
0x40396A: lea     ebx, [ebx+0]
0x403970: test    edx, edx
0x403972: jl      short loc_4039A3
0x403974: cmp     edx, 2
0x403977: jle     short loc_403995
0x403979: cmp     edx, 3
0x40397C: jnz     short loc_4039A3
0x40397E: mov     [eax+ecx+1B7Eh], bl
0x403985: mov     [eax+ecx+1B9Bh], bl
0x40398C: mov     [eax+ecx+1BB8h], bl
0x403993: jmp     short loc_4039A3
0x403995: mov     esi, edx
0x403997: imul    esi, 1Dh
0x40399A: add     esi, eax
0x40399C: mov     [esi+ecx+1B7Eh], bl
0x4039A3: add     eax, 1
0x4039A6: cmp     eax, 1Dh
0x4039A9: jl      short loc_403970
0x4039AB: test    edx, edx
0x4039AD: mov     bl, 8
0x4039AF: mov     al, 9
0x4039B1: pop     esi
0x4039B2: jz      short loc_4039BD
0x4039B4: cmp     edx, 3
0x4039B7: jnz     loc_403A7F
0x4039BD: mov     byte ptr [ecx+1B7Eh], 11h
0x4039C4: mov     byte ptr [ecx+1B7Fh], 1Fh
0x4039CB: mov     byte ptr [ecx+1B80h], 1Eh
0x4039D2: mov     byte ptr [ecx+1B81h], 20h ; ' '
0x4039D9: mov     byte ptr [ecx+1B83h], 39h ; '9'
0x4039E0: mov     byte ptr [ecx+1B84h], 38h ; '8'
0x4039E7: mov     byte ptr [ecx+1B85h], 2Eh ; '.'
0x4039EE: mov     byte ptr [ecx+1B86h], 21h ; '!'
0x4039F5: mov     byte ptr [ecx+1B87h], 1Dh
0x4039FC: mov     byte ptr [ecx+1B88h], 2Ah ; '*'
0x403A03: mov     byte ptr [ecx+1B89h], 3Ah ; ':'
0x403A0A: mov     byte ptr [ecx+1B8Ah], 10h
0x403A11: mov     byte ptr [ecx+1B8Bh], 12h
0x403A18: mov     byte ptr [ecx+1B8Ch], 13h
0x403A1F: mov     byte ptr [ecx+1B8Eh], 14h
0x403A26: mov     byte ptr [ecx+1B8Dh], 0Fh
0x403A2D: mov     byte ptr [ecx+1B8Fh], 3Bh ; ';'
0x403A34: mov     byte ptr [ecx+1B90h], 2
0x403A3B: mov     byte ptr [ecx+1B91h], 3
0x403A42: mov     byte ptr [ecx+1B92h], 4
0x403A49: mov     byte ptr [ecx+1B93h], 5
0x403A50: mov     byte ptr [ecx+1B94h], 6
0x403A57: mov     byte ptr [ecx+1B95h], 7
0x403A5E: mov     [ecx+1B96h], bl
0x403A64: mov     [ecx+1B97h], al
0x403A6A: mov     byte ptr [ecx+1B98h], 3Fh ; '?'
0x403A71: mov     byte ptr [ecx+1B99h], 43h ; 'C'
0x403A78: mov     byte ptr [ecx+1B9Ah], 2Ch ; ','
0x403A7F: cmp     edx, 1
0x403A82: jz      short loc_403A89
0x403A84: cmp     edx, 3
0x403A87: jnz     short loc_403A9E
0x403A89: mov     byte ptr [ecx+1B9Fh], 0
0x403A90: mov     byte ptr [ecx+1BA1h], 1
0x403A97: mov     byte ptr [ecx+1BA9h], 2
0x403A9E: cmp     edx, 2
0x403AA1: jz      short loc_403AAC
0x403AA3: cmp     edx, 3
0x403AA6: jnz     loc_403B3F
0x403AAC: test    byte ptr [ecx], 1
0x403AAF: jz      loc_403B3F
0x403AB5: mov     byte ptr [ecx+1BC1h], 0
0x403ABC: mov     byte ptr [ecx+1BC5h], 1
0x403AC3: mov     byte ptr [ecx+1BC0h], 2
0x403ACA: mov     byte ptr [ecx+1BBDh], 3
0x403AD1: mov     byte ptr [ecx+1BC7h], 4
0x403AD8: mov     byte ptr [ecx+1BC6h], 5
0x403ADF: mov     byte ptr [ecx+1BBFh], 6
0x403AE6: mov     byte ptr [ecx+1BD4h], 7
0x403AED: mov     [ecx+1BBEh], bl
0x403AF3: mov     [ecx+1BBCh], al
0x403AF9: mov     byte ptr [ecx+1BC8h], 0Ah
0x403B00: mov     byte ptr [ecx+1BD5h], 0Bh
0x403B07: mov     byte ptr [ecx+1BCAh], 20h ; ' '
0x403B0E: mov     byte ptr [ecx+1BCBh], 21h ; '!'
0x403B15: mov     byte ptr [ecx+1BCCh], 22h ; '"'
0x403B1C: mov     byte ptr [ecx+1BCDh], 23h ; '#'
0x403B23: mov     byte ptr [ecx+1BCEh], 24h ; '$'
0x403B2A: mov     byte ptr [ecx+1BCFh], 25h ; '%'
0x403B31: mov     byte ptr [ecx+1BD0h], 26h ; '&'
0x403B38: mov     byte ptr [ecx+1BD1h], 27h ; '''
0x403B3F: pop     ebx
0x403B40: retn    4
