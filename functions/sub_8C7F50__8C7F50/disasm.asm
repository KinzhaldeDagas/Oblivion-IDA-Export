0x8C7F50: cmp     [esp+arg_0], 0
0x8C7F55: push    ebx
0x8C7F56: mov     ebx, ecx
0x8C7F58: jz      short loc_8C7FA8
0x8C7F5A: push    esi
0x8C7F5B: mov     esi, [ebx+0Ch]
0x8C7F5E: test    esi, esi
0x8C7F60: jz      short loc_8C7FA0
0x8C7F62: mov     eax, [esi+0Ch]
0x8C7F65: test    eax, eax
0x8C7F67: mov     dword ptr [esi+8], offset ??_7?$NiTLargeArray@VhkNiTriStripsData@@@@6B@; const NiTLargeArray<hkNiTriStripsData>::`vftable'
0x8C7F6E: jz      short loc_8C7F8F
0x8C7F70: mov     ecx, [eax-4]
0x8C7F73: push    edi
0x8C7F74: lea     edi, [eax-4]
0x8C7F77: push    offset sub_7016A0; void (__thiscall *)(void *)
0x8C7F7C: push    ecx; int
0x8C7F7D: push    8; unsigned int
0x8C7F7F: push    eax; void *
0x8C7F80: call    $LN21
0x8C7F85: push    edi
0x8C7F86: call    FormHeapFree
0x8C7F8B: add     esp, 4
0x8C7F8E: pop     edi
0x8C7F8F: movzx   edx, byte ptr [esi-1]
0x8C7F93: sub     esi, edx
0x8C7F95: push    esi; void *
0x8C7F96: mov     ecx, offset FormHeap
0x8C7F9B: call    MemoryHeap_Free_checked
0x8C7FA0: mov     dword ptr [ebx+0Ch], 0
0x8C7FA7: pop     esi
0x8C7FA8: pop     ebx
0x8C7FA9: retn    4
