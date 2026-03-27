0x8B71B0: push    0FFFFFFFFh
0x8B71B2: push    offset SEH_8C62B0
0x8B71B7: mov     eax, large fs:0
0x8B71BD: push    eax
0x8B71BE: push    ecx
0x8B71BF: push    esi
0x8B71C0: mov     eax, ds:0B30AACh
0x8B71C5: xor     eax, esp
0x8B71C7: push    eax
0x8B71C8: lea     eax, [esp+18h+var_C]
0x8B71CC: mov     large fs:0, eax
0x8B71D2: push    14h; Size
0x8B71D4: call    FormHeapAlloc
0x8B71D9: mov     esi, eax
0x8B71DB: add     esp, 4
0x8B71DE: mov     [esp+18h+var_10], esi
0x8B71E2: xor     eax, eax
0x8B71E4: cmp     esi, eax
0x8B71E6: mov     [esp+18h+var_4], eax
0x8B71EA: jz      short loc_8B71FB
0x8B71EC: mov     ecx, esi
0x8B71EE: call    sub_897600
0x8B71F3: mov     dword ptr [esi], offset ??_7bhkSPCollisionObject@@6B@; const bhkSPCollisionObject::`vftable'
0x8B71F9: mov     eax, esi
0x8B71FB: mov     ecx, [esp+18h+var_C]
0x8B71FF: mov     large fs:0, ecx
0x8B7206: pop     ecx
0x8B7207: pop     esi
0x8B7208: add     esp, 10h
0x8B720B: retn
