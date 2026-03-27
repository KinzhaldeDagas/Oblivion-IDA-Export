0x4F8630: fldz
0x4F8632: push    esi
0x4F8633: mov     esi, [esp+4+arg_C]
0x4F8637: fstp    qword ptr [esi]
0x4F8639: mov     ecx, ds:0B333C4h
0x4F863F: mov     eax, [ecx]
0x4F8641: mov     edx, [eax+380h]
0x4F8647: call    edx
0x4F8649: test    eax, eax
0x4F864B: jnz     short loc_4F865B
0x4F864D: mov     eax, ds:0B333C4h
0x4F8652: cmp     dword ptr [eax+1E0h], 0
0x4F8659: jz      short loc_4F865F
0x4F865B: fld1
0x4F865D: fstp    qword ptr [esi]
0x4F865F: cmp     byte ptr ds:0B361ACh, 0
0x4F8666: jz      short loc_4F8691
0x4F8668: fldz
0x4F866A: fcomp   qword ptr [esi]
0x4F866C: fnstsw  ax
0x4F866E: test    ah, 44h
0x4F8671: jnp     short loc_4F8684
0x4F8673: push    offset aThereIsALastRiddenHorse; "There is a last ridden horse "
0x4F8678: call    Interface_ConsolePrint
0x4F867D: add     esp, 4
0x4F8680: mov     al, 1
0x4F8682: pop     esi
0x4F8683: retn
0x4F8684: push    offset aThereIsNotALastRiddenHorse; "there is not a last ridden horse"
0x4F8689: call    Interface_ConsolePrint
0x4F868E: add     esp, 4
0x4F8691: mov     al, 1
0x4F8693: pop     esi
0x4F8694: retn
