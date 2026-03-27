0x7957E0: push    ecx
0x7957E1: push    esi
0x7957E2: mov     esi, ecx
0x7957E4: mov     eax, [esi+4]
0x7957E7: test    eax, eax
0x7957E9: jz      short loc_795807
0x7957EB: mov     ecx, [esp+8+var_4]
0x7957EF: mov     edx, [esi+8]
0x7957F2: push    ecx
0x7957F3: push    esi
0x7957F4: push    edx
0x7957F5: push    eax
0x7957F6: call    sub_794FC0
0x7957FB: mov     eax, [esi+4]
0x7957FE: push    eax
0x7957FF: call    FormHeapFree
0x795804: add     esp, 14h
0x795807: mov     dword ptr [esi+4], 0
0x79580E: mov     dword ptr [esi+8], 0
0x795815: mov     dword ptr [esi+0Ch], 0
0x79581C: pop     esi
0x79581D: pop     ecx
0x79581E: retn
