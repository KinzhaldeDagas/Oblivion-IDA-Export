0x68F280: mov     eax, [esp+arg_0]
0x68F284: push    esi
0x68F285: push    eax
0x68F286: mov     esi, ecx
0x68F288: call    ActiveEffect_Base_Link
0x68F28D: mov     eax, [esi+38h]
0x68F290: test    eax, eax
0x68F292: jz      short loc_68F2A0
0x68F294: push    eax; a1
0x68F295: call    TESForm_LookupByFormID
0x68F29A: add     esp, 4
0x68F29D: mov     [esi+38h], eax
0x68F2A0: pop     esi
0x68F2A1: retn    4
