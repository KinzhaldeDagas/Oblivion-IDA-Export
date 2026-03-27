0x4F5AE0: mov     ecx, ds:0B333C4h; this
0x4F5AE6: call    PlayerCharacter__IsSleeping?
0x4F5AEB: test    al, al
0x4F5AED: mov     eax, [esp+arg_C]
0x4F5AF1: jz      short loc_4F5AF7
0x4F5AF3: fld1
0x4F5AF5: fstp    qword ptr [eax]
0x4F5AF7: cmp     byte ptr ds:0B361ACh, 0
0x4F5AFE: jz      short loc_4F5B28
0x4F5B00: fldz
0x4F5B02: fcomp   qword ptr [eax]
0x4F5B04: fnstsw  ax
0x4F5B06: test    ah, 44h
0x4F5B09: jnp     short loc_4F5B1B
0x4F5B0B: push    offset aTimeIsPassing; "Time is passing"
0x4F5B10: call    Interface_ConsolePrint
0x4F5B15: add     esp, 4
0x4F5B18: mov     al, 1
0x4F5B1A: retn
0x4F5B1B: push    offset aTimeIsNotPassi; "Time is not passing"
0x4F5B20: call    Interface_ConsolePrint
0x4F5B25: add     esp, 4
0x4F5B28: mov     al, 1
0x4F5B2A: retn
