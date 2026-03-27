0x51CE17: mov     edx, [esi+24h]
0x51CE1A: mov     eax, [edx+50h]
0x51CE1D: or      dword ptr [esi+28h], 100h
0x51CE24: lea     ecx, [esi+24h]
0x51CE27: push    10h
0x51CE29: call    eax
0x51CE2B: push    28h ; '('; Size
0x51CE2D: call    FormHeapAlloc
0x51CE32: add     esp, 4
0x51CE35: mov     [esp+4+arg_0], eax
0x51CE39: test    eax, eax
0x51CE3B: mov     [esp+4+arg_C], 0
0x51CE43: jz      short loc_51CE4E
0x51CE45: mov     ecx, eax
0x51CE47: call    CreatureSoundArray_constr
0x51CE4C: jmp     short loc_51CE50
0x51CE4E: xor     eax, eax
0x51CE50: mov     [esi+100h], eax
0x51CE56: mov     eax, [esi+100h]
0x51CE5C: mov     ecx, [esp+4+arg_4]
0x51CE60: mov     large fs:0, ecx
0x51CE67: pop     ecx
0x51CE68: pop     esi
0x51CE69: add     esp, 10h
0x51CE6C: retn
