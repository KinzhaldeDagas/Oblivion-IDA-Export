0x44A89D: push    58h ; 'X'; PlaceObjectRef generic-ref allocation branch: non-Character/non-Creature base forms allocate 0x58 bytes and call TESObjectREFR_constr.
0x44A89F: call    FormHeapAlloc
0x44A8A4: add     esp, 4
0x44A8A7: mov     [esp+arg_54], eax
0x44A8AB: test    eax, eax
0x44A8AD: mov     [esp+arg_3C], 2
0x44A8B5: jz      short loc_44A90C
0x44A8B7: mov     ecx, eax
0x44A8B9: call    TESObjectREFR_constr
0x44A8BE: jmp     short loc_44A90E
