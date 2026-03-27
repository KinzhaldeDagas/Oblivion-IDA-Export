0x8BE8E0: push    0FFFFFFFFh
0x8BE8E2: push    offset SEH_8C62B0
0x8BE8E7: mov     eax, large fs:0
0x8BE8ED: push    eax
0x8BE8EE: push    ecx
0x8BE8EF: push    esi
0x8BE8F0: mov     eax, ds:0B30AACh
0x8BE8F5: xor     eax, esp
0x8BE8F7: push    eax
0x8BE8F8: lea     eax, [esp+18h+var_C]
0x8BE8FC: mov     large fs:0, eax
0x8BE902: push    10h; Size
0x8BE904: call    FormHeapAlloc
0x8BE909: mov     esi, eax
0x8BE90B: add     esp, 4
0x8BE90E: mov     [esp+18h+var_10], esi
0x8BE912: test    esi, esi
0x8BE914: mov     [esp+18h+var_4], 0
0x8BE91C: jz      short loc_8BE968
0x8BE91E: mov     ecx, esi; this
0x8BE920: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BE925: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x8BE92B: mov     eax, 1
0x8BE930: mov     dword ptr [esi+0Ch], 0
0x8BE937: add     ds:0BA7D00h, eax
0x8BE93D: mov     dword ptr [esi], offset ??_7bhkUnaryAction@@6B@; const bhkUnaryAction::`vftable'
0x8BE943: add     ds:0BA7D0Ch, eax
0x8BE949: mov     dword ptr [esi], offset ??_7bhkMotorAction@@6B@; const bhkMotorAction::`vftable'
0x8BE94F: add     ds:0BA807Ch, eax
0x8BE955: mov     eax, esi
0x8BE957: mov     ecx, [esp+18h+var_C]
0x8BE95B: mov     large fs:0, ecx
0x8BE962: pop     ecx
0x8BE963: pop     esi
0x8BE964: add     esp, 10h
0x8BE967: retn
0x8BE968: xor     eax, eax
0x8BE96A: mov     ecx, [esp+18h+var_C]
0x8BE96E: mov     large fs:0, ecx
0x8BE975: pop     ecx
0x8BE976: pop     esi
0x8BE977: add     esp, 10h
0x8BE97A: retn
