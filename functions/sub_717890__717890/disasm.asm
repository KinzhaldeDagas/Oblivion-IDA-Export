0x717890: push    0FFFFFFFFh
0x717892: push    offset SEH_8C62B0
0x717897: mov     eax, large fs:0
0x71789D: push    eax
0x71789E: push    ecx
0x71789F: push    esi
0x7178A0: mov     eax, ds:0B30AACh
0x7178A5: xor     eax, esp
0x7178A7: push    eax
0x7178A8: lea     eax, [esp+18h+var_C]
0x7178AC: mov     large fs:0, eax
0x7178B2: push    0C0h ; 'À'; Size
0x7178B7: call    FormHeapAlloc
0x7178BC: mov     esi, eax
0x7178BE: add     esp, 4
0x7178C1: mov     [esp+18h+var_10], esi
0x7178C5: xor     eax, eax
0x7178C7: cmp     esi, eax
0x7178C9: mov     [esp+18h+var_4], eax
0x7178CD: jz      short loc_7178DE
0x7178CF: mov     ecx, esi
0x7178D1: call    NiGeometry__NiGeometry_0
0x7178D6: mov     dword ptr [esi], offset ??_7NiLines@@6B@; const NiLines::`vftable'
0x7178DC: mov     eax, esi
0x7178DE: mov     ecx, [esp+18h+var_C]
0x7178E2: mov     large fs:0, ecx
0x7178E9: pop     ecx
0x7178EA: pop     esi
0x7178EB: add     esp, 10h
0x7178EE: retn
