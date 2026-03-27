0x8C5640: push    0FFFFFFFFh
0x8C5642: push    offset SEH_8B97A0
0x8C5647: mov     eax, large fs:0
0x8C564D: push    eax
0x8C564E: push    ecx
0x8C564F: push    esi
0x8C5650: mov     eax, ds:0B30AACh
0x8C5655: xor     eax, esp
0x8C5657: push    eax
0x8C5658: lea     eax, [esp+18h+var_C]
0x8C565C: mov     large fs:0, eax
0x8C5662: mov     esi, ecx
0x8C5664: cmp     dword ptr [esi+0Ch], 0
0x8C5668: jnz     short loc_8C56BE
0x8C566A: push    1
0x8C566C: push    30h ; '0'
0x8C566E: mov     ecx, offset FormHeap
0x8C5673: call    j_MemoryHeap_Alloc
0x8C5678: mov     dl, al
0x8C567A: and     dl, 0Fh
0x8C567D: mov     cl, 10h
0x8C567F: sub     cl, dl
0x8C5681: movzx   edx, cl
0x8C5684: add     eax, edx
0x8C5686: mov     [eax-1], cl
0x8C5689: mov     [esp+18h+var_10], eax
0x8C568D: mov     ecx, eax
0x8C568F: mov     [esp+18h+var_4], 0
0x8C5697: call    sub_8C5580
0x8C569C: cmp     dword ptr [esi+8], 0
0x8C56A0: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C56A8: mov     [esi+0Ch], eax
0x8C56AB: jz      short loc_8C56B5
0x8C56AD: push    eax
0x8C56AE: mov     ecx, esi
0x8C56B0: call    sub_8C5110
0x8C56B5: mov     eax, [esp+18h+arg_0]
0x8C56B9: mov     byte ptr [eax], 1
0x8C56BC: jmp     short loc_8C56C5
0x8C56BE: mov     ecx, [esp+18h+arg_0]
0x8C56C2: mov     byte ptr [ecx], 0
0x8C56C5: mov     eax, [esi+0Ch]
0x8C56C8: mov     ecx, [esp+18h+var_C]
0x8C56CC: mov     large fs:0, ecx
0x8C56D3: pop     ecx
0x8C56D4: pop     esi
0x8C56D5: add     esp, 10h
0x8C56D8: retn    4
