0x73C5E0: push    esi
0x73C5E1: push    edi
0x73C5E2: mov     esi, ecx
0x73C5E4: xor     edi, edi
0x73C5E6: cmp     [esi+0Ch], edi
0x73C5E9: mov     dword ptr [esi], offset ??_7NiSwitchStringExtraData@@6B@; const NiSwitchStringExtraData::`vftable'
0x73C5EF: jbe     short loc_73C608
0x73C5F1: mov     eax, [esi+10h]
0x73C5F4: mov     ecx, [eax+edi*4]
0x73C5F7: push    ecx
0x73C5F8: call    FormHeapFree
0x73C5FD: add     edi, 1
0x73C600: add     esp, 4
0x73C603: cmp     edi, [esi+0Ch]
0x73C606: jb      short loc_73C5F1
0x73C608: mov     edx, [esi+10h]
0x73C60B: push    edx
0x73C60C: call    FormHeapFree
0x73C611: add     esp, 4
0x73C614: pop     edi
0x73C615: mov     dword ptr [esi+10h], 0
0x73C61C: mov     ecx, esi
0x73C61E: pop     esi
0x73C61F: jmp     NiExtraData_dtor
