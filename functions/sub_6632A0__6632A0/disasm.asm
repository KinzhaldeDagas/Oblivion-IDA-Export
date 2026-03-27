0x6632A0: push    ecx
0x6632A1: push    esi; ArgList
0x6632A2: mov     esi, ecx
0x6632A4: cmp     dword ptr [esi+70Ch], 0
0x6632AB: jz      short loc_6632BD
0x6632AD: push    offset aPlayercharacte; " PlayerCharacter::SaveInitialState(): A"...
0x6632B2: call    PrintError
0x6632B7: add     esp, 4
0x6632BA: pop     esi
0x6632BB: pop     ecx
0x6632BC: retn
0x6632BD: mov     ecx, ds:0B33B00h
0x6632C3: push    0
0x6632C5: push    esi
0x6632C6: call    sub_4533F0
0x6632CB: mov     edx, [esi]
0x6632CD: mov     [esp+8+var_4], eax
0x6632D1: push    eax
0x6632D2: mov     eax, [edx+4Ch]
0x6632D5: mov     ecx, esi
0x6632D7: call    eax
0x6632D9: movzx   eax, ax
0x6632DC: movzx   ecx, ax
0x6632DF: add     ecx, 4
0x6632E2: push    ecx
0x6632E3: mov     ecx, ds:0B33B00h
0x6632E9: call    sub_453500
0x6632EE: push    4; a2
0x6632F0: lea     edx, [esp+0Ch+var_4]
0x6632F4: push    edx; a1
0x6632F5: mov     ecx, esi
0x6632F7: mov     [esi+70Ch], eax
0x6632FD: call    TESForm_SaveDataToCurrentSaveGame
0x663302: mov     eax, ds:0B33B00h
0x663307: mov     byte ptr [eax+7Dh], 0
0x66330B: mov     edx, [esi]
0x66330D: mov     eax, [esp+8+var_4]
0x663311: mov     edx, [edx+50h]
0x663314: push    eax
0x663315: mov     ecx, esi
0x663317: call    edx
0x663319: mov     eax, ds:0B33B00h
0x66331E: mov     byte ptr [eax+7Dh], 1
0x663322: mov     ecx, ds:0B33B00h
0x663328: mov     dword ptr [ecx+14h], 0
0x66332F: pop     esi
0x663330: pop     ecx
0x663331: retn
