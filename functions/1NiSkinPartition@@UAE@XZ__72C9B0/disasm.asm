0x72C9B0: push    0FFFFFFFFh
0x72C9B2: push    offset SEH_7F1810
0x72C9B7: mov     eax, large fs:0
0x72C9BD: push    eax
0x72C9BE: push    ecx
0x72C9BF: push    esi
0x72C9C0: mov     eax, ds:0B30AACh
0x72C9C5: xor     eax, esp
0x72C9C7: push    eax
0x72C9C8: lea     eax, [esp+18h+var_C]
0x72C9CC: mov     large fs:0, eax
0x72C9D2: mov     esi, ecx
0x72C9D4: mov     [esp+18h+var_10], esi
0x72C9D8: mov     dword ptr [esi], offset ??_7NiSkinPartition@@6B@; const NiSkinPartition::`vftable'
0x72C9DE: push    esi
0x72C9DF: mov     [esp+1Ch+var_4], 0
0x72C9E7: call    sub_701500
0x72C9EC: mov     ecx, [esi+0Ch]
0x72C9EF: add     esp, 4
0x72C9F2: test    ecx, ecx
0x72C9F4: jz      short loc_72CA12
0x72C9F6: cmp     dword ptr [ecx-4], 0
0x72C9FA: lea     eax, [ecx-4]
0x72C9FD: jz      short loc_72CA09
0x72C9FF: mov     eax, [ecx]
0x72CA01: mov     edx, [eax]
0x72CA03: push    3
0x72CA05: call    edx
0x72CA07: jmp     short loc_72CA12
0x72CA09: push    eax
0x72CA0A: call    FormHeapFree
0x72CA0F: add     esp, 4
0x72CA12: mov     ecx, esi
0x72CA14: mov     [esp+18h+var_4], 0FFFFFFFFh
0x72CA1C: call    NiRefObject_destr
0x72CA21: mov     ecx, [esp+18h+var_C]
0x72CA25: mov     large fs:0, ecx
0x72CA2C: pop     ecx
0x72CA2D: pop     esi
0x72CA2E: add     esp, 10h
0x72CA31: retn
