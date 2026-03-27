0x740680: push    0FFFFFFFFh
0x740682: push    offset SEH_8C62B0
0x740687: mov     eax, large fs:0
0x74068D: push    eax
0x74068E: push    ecx
0x74068F: push    esi
0x740690: mov     eax, ds:0B30AACh
0x740695: xor     eax, esp
0x740697: push    eax
0x740698: lea     eax, [esp+18h+var_C]
0x74069C: mov     large fs:0, eax
0x7406A2: push    0C8h ; 'È'; Size
0x7406A7: call    FormHeapAlloc
0x7406AC: mov     esi, eax
0x7406AE: add     esp, 4
0x7406B1: mov     [esp+18h+var_10], esi
0x7406B5: xor     eax, eax
0x7406B7: cmp     esi, eax
0x7406B9: mov     [esp+18h+var_4], eax
0x7406BD: jz      short loc_7406D5
0x7406BF: mov     ecx, esi
0x7406C1: call    sub_741FA0
0x7406C6: mov     dword ptr [esi], offset ??_7NiParticleMeshes@@6B@; const NiParticleMeshes::`vftable'
0x7406CC: mov     byte ptr [esi+0C4h], 1
0x7406D3: mov     eax, esi
0x7406D5: mov     ecx, [esp+18h+var_C]
0x7406D9: mov     large fs:0, ecx
0x7406E0: pop     ecx
0x7406E1: pop     esi
0x7406E2: add     esp, 10h
0x7406E5: retn
