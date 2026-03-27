0x43ACE0: push    esi
0x43ACE1: mov     esi, ecx
0x43ACE3: mov     eax, [esi+0Ch]
0x43ACE6: test    eax, eax
0x43ACE8: jz      short loc_43ACF3
0x43ACEA: push    eax
0x43ACEB: call    FormHeapFree
0x43ACF0: add     esp, 4
0x43ACF3: mov     dword ptr [esi+0Ch], 0
0x43ACFA: mov     dword ptr [esi+10h], 0
0x43AD01: mov     dword ptr [esi+14h], 0
0x43AD08: pop     esi
0x43AD09: retn
