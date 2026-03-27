0x4876C0: sub     esp, 8
0x4876C3: push    ebp
0x4876C4: mov     ebp, [ecx]
0x4876C6: test    ebp, ebp
0x4876C8: mov     [esp+0Ch+var_4], ecx
0x4876CC: jz      short loc_487719
0x4876CE: push    ebx
0x4876CF: push    esi
0x4876D0: push    edi
0x4876D1: cmp     dword ptr [ebp+4], 0
0x4876D5: jnz     short loc_4876DD
0x4876D7: cmp     dword ptr [ebp+0], 0
0x4876DB: jz      short loc_487716
0x4876DD: mov     ebx, [ebp+0]
0x4876E0: test    ebx, ebx
0x4876E2: jz      short loc_48770F
0x4876E4: cmp     dword ptr [ebx+4], 0
0x4876E8: jle     short loc_48770F
0x4876EA: mov     edi, [ebx]
0x4876EC: test    edi, edi
0x4876EE: mov     eax, [ebx+8]
0x4876F1: mov     [esp+18h+var_8], eax
0x4876F5: jz      short loc_48770F
0x4876F7: mov     esi, [edi]
0x4876F9: test    esi, esi
0x4876FB: jz      short loc_48770F
0x4876FD: mov     ecx, esi
0x4876FF: call    sub_41DF50
0x487704: test    al, al
0x487706: jnz     short loc_487720
0x487708: mov     edi, [edi+4]
0x48770B: test    edi, edi
0x48770D: jnz     short loc_4876F7
0x48770F: mov     ebp, [ebp+4]
0x487712: test    ebp, ebp
0x487714: jnz     short loc_4876D1
0x487716: pop     edi
0x487717: pop     esi
0x487718: pop     ebx
0x487719: pop     ebp
0x48771A: add     esp, 8
0x48771D: retn    4
0x487720: push    0
0x487722: mov     ecx, esi
0x487724: call    sub_41F370
0x487729: mov     eax, [ebx+4]
0x48772C: mov     ecx, [esp+18h+arg_0]
0x487730: mov     edx, [ecx]
0x487732: mov     edx, [edx+100h]
0x487738: push    0
0x48773A: push    1
0x48773C: push    0
0x48773E: push    0
0x487740: push    0
0x487742: push    0
0x487744: push    0
0x487746: push    eax
0x487747: mov     eax, [esp+38h+var_8]
0x48774B: push    esi
0x48774C: push    eax
0x48774D: call    edx
0x48774F: mov     eax, [esp+18h+var_4]
0x487753: mov     ebp, [eax]
0x487755: jmp     short loc_487712
