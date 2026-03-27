0x5E1880: push    0FFFFFFFFh
0x5E1882: push    offset SEH_5E1880
0x5E1887: mov     eax, large fs:0
0x5E188D: push    eax
0x5E188E: sub     esp, 8
0x5E1891: push    ebx
0x5E1892: push    ebp
0x5E1893: push    esi
0x5E1894: push    edi
0x5E1895: mov     eax, ds:0B30AACh
0x5E189A: xor     eax, esp
0x5E189C: push    eax
0x5E189D: lea     eax, [esp+28h+var_C]
0x5E18A1: mov     large fs:0, eax
0x5E18A7: mov     esi, ecx
0x5E18A9: mov     [esp+28h+var_14], esi
0x5E18AD: call    MobilObject_constr
0x5E18B2: lea     edi, [esi+5Ch]
0x5E18B5: xor     ebx, ebx
0x5E18B7: mov     ecx, edi
0x5E18B9: mov     [esp+28h+var_4], ebx
0x5E18BD: call    MagicCaster_constr
0x5E18C2: lea     ebp, [esi+68h]
0x5E18C5: mov     ecx, ebp
0x5E18C7: mov     byte ptr [esp+28h+var_4], 1
0x5E18CC: call    MagicTarget_constr
0x5E18D1: lea     ecx, [esi+88h]
0x5E18D7: mov     byte ptr [esp+28h+var_4], 2
0x5E18DC: mov     dword ptr [esi], offset ??_7Actor@@6BActor@@@; const Actor::`vftable'{for `Actor'}
0x5E18E2: mov     dword ptr [esi+18h], offset ??_7Actor@@6BTESChildCell@@@; const Actor::`vftable'{for `TESChildCell'}
0x5E18E9: mov     dword ptr [edi], offset ??_7Actor@@6BMagicCaster@@@; const Actor::`vftable'{for `MagicCaster'}
0x5E18EF: mov     dword ptr [ebp+0], offset ??_7Actor@@6BMagicTarget@@@; const Actor::`vftable'{for `MagicTarget'}
0x5E18F6: call    AVCollection_Constr
0x5E18FB: mov     [esi+9Ch], ebx
0x5E1901: mov     [esi+0A0h], ebx
0x5E1907: mov     [esi+0A4h], ebx
0x5E190D: mov     [esi+0A8h], ebx
0x5E1913: mov     [esi+0B4h], ebx
0x5E1919: mov     [esi+0B8h], ebx
0x5E191F: or      dword ptr [esi+8], 200000h
0x5E1926: push    90h; Size
0x5E192B: mov     byte ptr [esp+2Ch+var_4], 3
0x5E1930: call    FormHeapAlloc
0x5E1935: add     esp, 4
0x5E1938: mov     [esp+28h+var_10], eax
0x5E193C: cmp     eax, ebx
0x5E193E: mov     byte ptr [esp+28h+var_4], 4
0x5E1943: jz      short loc_5E194E
0x5E1945: mov     ecx, eax; this
0x5E1947: call    ??0LowProcess@@QAE@XZ; LowProcess::LowProcess(void)
0x5E194C: jmp     short loc_5E1950
0x5E194E: xor     eax, eax
0x5E1950: cmp     [esp+28h+arg_0], bl
0x5E1954: mov     byte ptr [esp+28h+var_4], 3
0x5E1959: mov     [esi+58h], eax
0x5E195C: jz      short loc_5E196E
0x5E195E: push    ebx
0x5E195F: push    ebx
0x5E1960: push    ebx
0x5E1961: push    3
0x5E1963: push    esi
0x5E1964: mov     ecx, offset ActorProcessManager_ptr
0x5E1969: call    sub_673A90
0x5E196E: fld     dword ptr ds:0A30634h
0x5E1974: mov     [esi+0E4h], ebx
0x5E197A: fstp    dword ptr [esi+0BCh]
0x5E1980: mov     [esi+0B0h], ebx
0x5E1986: fldz
0x5E1988: mov     [esi+0C0h], bl
0x5E198E: fst     dword ptr [esi+74h]
0x5E1991: mov     dword ptr [esi+70h], 7
0x5E1998: fst     dword ptr [esi+0ACh]
0x5E199E: mov     byte ptr [esi+78h], 1
0x5E19A2: fst     dword ptr [esi+0DCh]
0x5E19A8: mov     [esi+0C9h], bl
0x5E19AE: fst     dword ptr [esi+100h]
0x5E19B4: mov     [esi+0C8h], bl
0x5E19BA: fst     dword ptr [esi+0F4h]
0x5E19C0: mov     [esi+7Ch], ebx
0x5E19C3: mov     [esi+0D0h], ebx
0x5E19C9: mov     [esi+0D4h], ebx
0x5E19CF: mov     byte ptr [esi+0CAh], 1
0x5E19D6: mov     [esi+0CCh], ebx
0x5E19DC: mov     [esi+0D8h], bl
0x5E19E2: mov     byte ptr [esi+0E0h], 1
0x5E19E9: mov     [esi+0C4h], ebx
0x5E19EF: mov     [esi+0F8h], ebx
0x5E19F5: mov     eax, ds:0B3F9A8h
0x5E19FA: mov     [esi+0E8h], eax
0x5E1A00: mov     ecx, ds:0B3F9ACh
0x5E1A06: mov     [esi+0ECh], ecx
0x5E1A0C: mov     edx, ds:0B3F9B0h
0x5E1A12: fstp    dword ptr [esi+84h]
0x5E1A18: mov     [esi+0F0h], edx
0x5E1A1E: mov     [esi+0E4h], ebx
0x5E1A24: mov     [esi+0FCh], bl
0x5E1A2A: mov     byte ptr [esi+0FDh], 1
0x5E1A31: mov     eax, esi
0x5E1A33: mov     ecx, dword ptr [esp+28h+var_C]
0x5E1A37: mov     large fs:0, ecx
0x5E1A3E: pop     ecx
0x5E1A3F: pop     edi
0x5E1A40: pop     esi
0x5E1A41: pop     ebp
0x5E1A42: pop     ebx
0x5E1A43: add     esp, 14h
0x5E1A46: retn    4
