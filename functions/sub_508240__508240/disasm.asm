0x508240: cmp     byte ptr ds:0B43077h, 0
0x508247: mov     ecx, ds:0B333A0h
0x50824D: setz    al
0x508250: mov     ds:0B43077h, al
0x508255: mov     ds:0B02D70h, al
0x50825A: call    TES__GetCurrentWorldspace
0x50825F: mov     ecx, eax
0x508261: call    sub_4EF7E0
0x508266: call    sub_4E9F40
0x50826B: test    al, al
0x50826D: jnz     short loc_508292
0x50826F: push    offset aLodLandIsNowBe; "LOD land is now being displayed."
0x508274: call    Interface_ConsolePrint
0x508279: mov     ecx, ds:0B333A0h
0x50827F: add     esp, 4
0x508282: call    TES__GetCurrentWorldspace
0x508287: mov     ecx, eax
0x508289: call    sub_4EF7E0
0x50828E: push    1
0x508290: jmp     short loc_5082B3
0x508292: push    offset aLodLandIsNowDi; "LOD land is now disabled."
0x508297: call    Interface_ConsolePrint
0x50829C: mov     ecx, ds:0B333A0h
0x5082A2: add     esp, 4
0x5082A5: call    TES__GetCurrentWorldspace
0x5082AA: mov     ecx, eax
0x5082AC: call    sub_4EF7E0
0x5082B1: push    0
0x5082B3: call    sub_4EB0E0
0x5082B8: mov     ecx, ds:0B333A0h
0x5082BE: add     esp, 4
0x5082C1: call    TES__GetCurrentWorldspace
0x5082C6: mov     ecx, eax
0x5082C8: call    sub_4EF7E0
0x5082CD: mov     ecx, ds:0B333C4h
0x5082D3: mov     eax, [ecx]
0x5082D5: mov     edx, [eax+174h]
0x5082DB: call    edx
0x5082DD: mov     edx, [eax]
0x5082DF: push    0
0x5082E1: sub     esp, 0Ch
0x5082E4: mov     ecx, esp
0x5082E6: mov     [ecx], edx
0x5082E8: mov     edx, [eax+4]
0x5082EB: mov     eax, [eax+8]
0x5082EE: mov     [ecx+4], edx
0x5082F1: mov     [ecx+8], eax
0x5082F4: call    sub_4EA6E0
0x5082F9: add     esp, 10h
0x5082FC: mov     al, 1
0x5082FE: retn
