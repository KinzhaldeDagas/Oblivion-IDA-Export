0x4FC040: push    0FFFFFFFFh
0x4FC042: push    offset SEH_864830
0x4FC047: mov     eax, large fs:0
0x4FC04D: push    eax
0x4FC04E: push    ebx
0x4FC04F: push    esi
0x4FC050: mov     eax, ds:0B30AACh
0x4FC055: xor     eax, esp
0x4FC057: push    eax
0x4FC058: lea     eax, [esp+18h+var_C]
0x4FC05C: mov     large fs:0, eax
0x4FC062: mov     ebx, [esp+18h+arg_4]
0x4FC066: test    ebx, ebx
0x4FC068: jz      short loc_4FC0BC
0x4FC06A: mov     esi, [esp+18h+arg_0]
0x4FC06E: test    esi, esi
0x4FC070: jz      short loc_4FC0BC
0x4FC072: cmp     dword ptr [esi+4], 0
0x4FC076: jnz     short loc_4FC07D
0x4FC078: cmp     dword ptr [esi], 0
0x4FC07B: jz      short loc_4FC0BC
0x4FC07D: push    10h; Size
0x4FC07F: call    FormHeapAlloc
0x4FC084: add     esp, 4
0x4FC087: mov     [esp+18h+arg_4], eax
0x4FC08B: test    eax, eax
0x4FC08D: mov     [esp+18h+var_4], 0
0x4FC095: jz      short loc_4FC0A3
0x4FC097: mov     ecx, [esi]
0x4FC099: push    ecx
0x4FC09A: mov     ecx, eax
0x4FC09C: call    sub_4FBFD0
0x4FC0A1: jmp     short loc_4FC0A5
0x4FC0A3: xor     eax, eax
0x4FC0A5: push    eax
0x4FC0A6: mov     ecx, ebx
0x4FC0A8: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4FC0B0: call    BSSimpleList_PushBack
0x4FC0B5: mov     esi, [esi+4]
0x4FC0B8: test    esi, esi
0x4FC0BA: jnz     short loc_4FC072
0x4FC0BC: mov     ecx, [esp+18h+var_C]
0x4FC0C0: mov     large fs:0, ecx
0x4FC0C7: pop     ecx
0x4FC0C8: pop     esi
0x4FC0C9: pop     ebx
0x4FC0CA: add     esp, 0Ch
0x4FC0CD: retn
