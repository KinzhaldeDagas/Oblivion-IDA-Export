0x6DF0D0: push    0FFFFFFFFh
0x6DF0D2: push    offset ??1NiLookAtInterpolator@@UAE@XZ_SEH
0x6DF0D7: mov     eax, large fs:0
0x6DF0DD: push    eax
0x6DF0DE: push    ecx
0x6DF0DF: push    esi
0x6DF0E0: mov     eax, ds:0B30AACh
0x6DF0E5: xor     eax, esp
0x6DF0E7: push    eax
0x6DF0E8: lea     eax, [esp+18h+var_C]
0x6DF0EC: mov     large fs:0, eax
0x6DF0F2: mov     esi, ecx
0x6DF0F4: mov     [esp+18h+var_10], esi
0x6DF0F8: mov     dword ptr [esi], offset ??_7NiLookAtInterpolator@@6B@; const NiLookAtInterpolator::`vftable'
0x6DF0FE: mov     [esp+18h+var_4], 0
0x6DF106: mov     eax, [esi+14h]
0x6DF109: push    eax
0x6DF10A: call    FormHeapFree
0x6DF10F: add     esp, 4
0x6DF112: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6DF117: push    3; int
0x6DF119: push    4; unsigned int
0x6DF11B: lea     eax, [esi+38h]
0x6DF11E: push    eax; void *
0x6DF11F: mov     dword ptr [esi+14h], 0
0x6DF126: mov     byte ptr [esp+28h+var_4], 0
0x6DF12B: call    $LN21
0x6DF130: mov     ecx, esi
0x6DF132: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6DF13A: call    sub_6EBA30
0x6DF13F: mov     ecx, [esp+18h+var_C]
0x6DF143: mov     large fs:0, ecx
0x6DF14A: pop     ecx
0x6DF14B: pop     esi
0x6DF14C: add     esp, 10h
0x6DF14F: retn
