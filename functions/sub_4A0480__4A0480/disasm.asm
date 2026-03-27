0x4A0480: push    0FFFFFFFFh
0x4A0482: push    offset SEH_6CC6E0
0x4A0487: mov     eax, large fs:0
0x4A048D: push    eax
0x4A048E: push    ecx
0x4A048F: push    ebx
0x4A0490: push    ebp
0x4A0491: push    esi
0x4A0492: push    edi
0x4A0493: mov     eax, ds:0B30AACh
0x4A0498: xor     eax, esp
0x4A049A: push    eax
0x4A049B: lea     eax, [esp+24h+var_C]
0x4A049F: mov     large fs:0, eax
0x4A04A5: mov     esi, ecx
0x4A04A7: xor     ebp, ebp
0x4A04A9: mov     [esp+24h+var_10], ebp
0x4A04AD: mov     edi, [esi+4]
0x4A04B0: mov     eax, [edi]
0x4A04B2: cmp     eax, ebp
0x4A04B4: mov     [esi+4], eax
0x4A04B7: jz      short loc_4A04BE
0x4A04B9: mov     [eax+4], ebp
0x4A04BC: jmp     short loc_4A04C1
0x4A04BE: mov     [esi+8], ebp
0x4A04C1: mov     eax, [edi+8]
0x4A04C4: cmp     eax, ebp
0x4A04C6: mov     ebx, [esp+24h+arg_0]
0x4A04CA: mov     [ebx], eax
0x4A04CC: jz      short loc_4A04D8
0x4A04CE: add     eax, 4
0x4A04D1: push    eax; lpAddend
0x4A04D2: call    dword ptr ds:0A28078h
0x4A04D8: mov     eax, [esi]
0x4A04DA: mov     edx, [eax+8]
0x4A04DD: push    edi
0x4A04DE: mov     ecx, esi
0x4A04E0: mov     [esp+28h+var_4], ebp
0x4A04E4: mov     [esp+28h+var_10], 1
0x4A04EC: call    edx
0x4A04EE: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x4A04F2: mov     eax, ebx
0x4A04F4: mov     ecx, dword ptr [esp+24h+var_C]
0x4A04F8: mov     large fs:0, ecx
0x4A04FF: pop     ecx
0x4A0500: pop     edi
0x4A0501: pop     esi
0x4A0502: pop     ebp
0x4A0503: pop     ebx
0x4A0504: add     esp, 10h
0x4A0507: retn    4
