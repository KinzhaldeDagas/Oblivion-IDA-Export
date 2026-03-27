0x6ED6D0: mov     eax, [esp+arg_4]
0x6ED6D4: mov     ecx, dword ptr [esp+ArgList]
0x6ED6D8: push    eax
0x6ED6D9: push    ecx; ArgList
0x6ED6DA: push    offset aFr2AssertViola; "FR2 ASSERT violation in %s line %i. Cod"...
0x6ED6DF: call    PrintError
0x6ED6E4: add     esp, 0Ch
0x6ED6E7: retn
