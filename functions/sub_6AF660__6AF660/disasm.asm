0x6AF660: push    esi
0x6AF661: mov     esi, ecx
0x6AF663: push    edi
0x6AF664: push    4000h; Size
0x6AF669: mov     edi, 1
0x6AF66E: mov     dword ptr [esi], 0
0x6AF674: mov     dword ptr [esi+4], 0
0x6AF67B: mov     dword ptr [esi+8], 0
0x6AF682: call    FormHeapAlloc
0x6AF687: push    80h ; '€'; Size
0x6AF68C: mov     [esi+0Ch], eax
0x6AF68F: mov     dword ptr [esi+10h], 8
0x6AF696: call    FormHeapAlloc
0x6AF69B: mov     [esi+14h], eax
0x6AF69E: mov     dword ptr [eax], 0
0x6AF6A4: add     esp, 8
0x6AF6A7: mov     eax, 4
0x6AF6AC: lea     esp, [esp+0]
0x6AF6B0: mov     ecx, [esi+14h]
0x6AF6B3: mov     edx, [ecx+eax-4]
0x6AF6B7: add     ecx, eax
0x6AF6B9: add     edx, edi
0x6AF6BB: add     eax, 4
0x6AF6BE: add     edi, edi
0x6AF6C0: cmp     eax, 80h ; '€'
0x6AF6C5: mov     [ecx], edx
0x6AF6C7: jl      short loc_6AF6B0
0x6AF6C9: pop     edi
0x6AF6CA: mov     eax, esi
0x6AF6CC: pop     esi
0x6AF6CD: retn
