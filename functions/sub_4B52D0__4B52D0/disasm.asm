0x4B52D0: mov     al, [ecx+89h]
0x4B52D6: cmp     al, 0FFh
0x4B52D8: jnz     short loc_4B52DE
0x4B52DA: or      eax, 0FFFFFFFFh
0x4B52DD: retn
0x4B52DE: push    eax
0x4B52DF: push    2
0x4B52E1: call    ActorValue_GetAVFromGroupOffset; mwMediumArmor: Oblivion group 2 maps skill offset to actor value by adding 0x0C. OpenMW/Morrowind skill index 2 is MediumArmor, but Oblivion offset 2 becomes actor value 0x0E (Blade). Do not pass Morrowind skill indexes directly through this helper.
0x4B52E6: add     esp, 8
0x4B52E9: retn
