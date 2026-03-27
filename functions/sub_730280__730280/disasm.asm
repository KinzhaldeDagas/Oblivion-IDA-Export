0x730280: push    0FFFFFFFFh
0x730282: push    offset SEH_8C8970
0x730287: mov     eax, large fs:0
0x73028D: push    eax
0x73028E: push    ecx
0x73028F: push    ebx
0x730290: push    esi
0x730291: mov     eax, ds:0B30AACh
0x730296: xor     eax, esp
0x730298: push    eax
0x730299: lea     eax, [esp+1Ch+var_C]
0x73029D: mov     large fs:0, eax
0x7302A3: mov     ebx, ecx
0x7302A5: push    14h; Size
0x7302A7: call    FormHeapAlloc
0x7302AC: mov     esi, eax
0x7302AE: add     esp, 4
0x7302B1: mov     [esp+1Ch+var_10], esi
0x7302B5: test    esi, esi
0x7302B7: mov     [esp+1Ch+var_4], 0
0x7302BF: jz      short loc_7302DE
0x7302C1: mov     ecx, esi
0x7302C3: call    sub_721350
0x7302C8: mov     dword ptr [esi], offset ??_7NiFloatsExtraData@@6B@; const NiFloatsExtraData::`vftable'
0x7302CE: mov     dword ptr [esi+10h], 0
0x7302D5: mov     dword ptr [esi+0Ch], 0
0x7302DC: jmp     short loc_7302E0
0x7302DE: xor     esi, esi
0x7302E0: mov     eax, [esp+1Ch+arg_0]
0x7302E4: push    eax
0x7302E5: push    esi
0x7302E6: mov     ecx, ebx
0x7302E8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7302F0: call    sub_7300D0
0x7302F5: mov     eax, esi
0x7302F7: mov     ecx, [esp+1Ch+var_C]
0x7302FB: mov     large fs:0, ecx
0x730302: pop     ecx
0x730303: pop     esi
0x730304: pop     ebx
0x730305: add     esp, 10h
0x730308: retn    4
