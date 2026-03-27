0x533290: push    0FFFFFFFFh
0x533292: push    offset SEH_533290
0x533297: mov     eax, large fs:0
0x53329D: push    eax
0x53329E: sub     esp, 8
0x5332A1: push    ebx
0x5332A2: push    esi
0x5332A3: mov     eax, ds:0B30AACh
0x5332A8: xor     eax, esp
0x5332AA: push    eax
0x5332AB: lea     eax, [esp+20h+var_C]
0x5332AF: mov     large fs:0, eax
0x5332B5: mov     esi, ecx
0x5332B7: mov     [esp+20h+var_14], esi
0x5332BB: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x5332C0: mov     dword ptr [esi], offset ??_7bhkWorldObject@@6B@; const bhkWorldObject::`vftable'
0x5332C6: mov     ebx, 1
0x5332CB: mov     dword ptr [esi+0Ch], 0
0x5332D2: add     ds:0BA7D34h, ebx
0x5332D8: mov     dword ptr [esi], offset ??_7bhkEntity@@6B@; const bhkEntity::`vftable'
0x5332DE: add     ds:0BA7F8Ch, ebx
0x5332E4: push    ecx
0x5332E5: mov     eax, esp
0x5332E7: mov     dword ptr [esi], offset ??_7bhkRigidBody@@6B@; const bhkRigidBody::`vftable'
0x5332ED: lea     ecx, [esi+10h]
0x5332F0: mov     [esp+24h+var_4], 0
0x5332F8: mov     [esp+24h+var_10], esp
0x5332FC: mov     dword ptr [eax], 0
0x533302: call    sub_532DF0
0x533307: mov     eax, [esp+20h+arg_0]
0x53330B: push    eax
0x53330C: mov     ecx, esi
0x53330E: mov     byte ptr [esp+24h+var_4], bl
0x533312: mov     dword ptr [esi+18h], 0
0x533319: call    sub_8A4260
0x53331E: add     ds:0BA7D80h, ebx
0x533324: mov     eax, esi
0x533326: mov     ecx, [esp+20h+var_C]
0x53332A: mov     large fs:0, ecx
0x533331: pop     ecx
0x533332: pop     esi
0x533333: pop     ebx
0x533334: add     esp, 14h
0x533337: retn    4
