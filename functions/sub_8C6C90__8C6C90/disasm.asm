0x8C6C90: push    esi
0x8C6C91: mov     esi, ecx
0x8C6C93: mov     eax, [esi+4]
0x8C6C96: test    eax, eax
0x8C6C98: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@VhkNiTriStripsData@@@@6B@; const NiTLargeArray<hkNiTriStripsData>::`vftable'
0x8C6C9E: jz      short loc_8C6CBF
0x8C6CA0: mov     ecx, [eax-4]
0x8C6CA3: push    edi
0x8C6CA4: lea     edi, [eax-4]
0x8C6CA7: push    offset sub_7016A0; void (__thiscall *)(void *)
0x8C6CAC: push    ecx; int
0x8C6CAD: push    8; unsigned int
0x8C6CAF: push    eax; void *
0x8C6CB0: call    $LN21
0x8C6CB5: push    edi
0x8C6CB6: call    FormHeapFree
0x8C6CBB: add     esp, 4
0x8C6CBE: pop     edi
0x8C6CBF: test    [esp+4+arg_0], 1
0x8C6CC4: jz      short loc_8C6CCF
0x8C6CC6: push    esi
0x8C6CC7: call    FormHeapFree
0x8C6CCC: add     esp, 4
0x8C6CCF: mov     eax, esi
0x8C6CD1: pop     esi
0x8C6CD2: retn    4
