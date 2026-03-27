0x4A0510: push    0FFFFFFFFh
0x4A0512: push    offset SEH_6C6610
0x4A0517: mov     eax, large fs:0
0x4A051D: push    eax
0x4A051E: push    ecx
0x4A051F: push    ebx
0x4A0520: push    esi
0x4A0521: push    edi
0x4A0522: mov     eax, ds:0B30AACh
0x4A0527: xor     eax, esp
0x4A0529: push    eax
0x4A052A: lea     eax, [esp+20h+var_C]
0x4A052E: mov     large fs:0, eax
0x4A0534: mov     esi, ecx
0x4A0536: mov     [esp+20h+var_10], 0
0x4A053E: mov     edi, [esi+8]
0x4A0541: mov     eax, [edi+4]
0x4A0544: test    eax, eax
0x4A0546: mov     [esi+8], eax
0x4A0549: jz      short loc_4A0553
0x4A054B: mov     dword ptr [eax], 0
0x4A0551: jmp     short loc_4A055A
0x4A0553: mov     dword ptr [esi+4], 0
0x4A055A: mov     eax, [edi+8]
0x4A055D: test    eax, eax
0x4A055F: mov     ebx, [esp+20h+arg_0]
0x4A0563: mov     [ebx], eax
0x4A0565: jz      short loc_4A0571
0x4A0567: add     eax, 4
0x4A056A: push    eax; lpAddend
0x4A056B: call    dword ptr ds:0A28078h
0x4A0571: mov     eax, [esi]
0x4A0573: mov     edx, [eax+8]
0x4A0576: push    edi
0x4A0577: mov     ecx, esi
0x4A0579: mov     [esp+24h+var_4], 0
0x4A0581: mov     [esp+24h+var_10], 1
0x4A0589: call    edx
0x4A058B: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x4A058F: mov     eax, ebx
0x4A0591: mov     ecx, dword ptr [esp+20h+var_C]
0x4A0595: mov     large fs:0, ecx
0x4A059C: pop     ecx
0x4A059D: pop     edi
0x4A059E: pop     esi
0x4A059F: pop     ebx
0x4A05A0: add     esp, 10h
0x4A05A3: retn    4
