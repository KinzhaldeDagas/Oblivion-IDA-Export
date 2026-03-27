0x4CCBC0: push    esi
0x4CCBC1: mov     esi, ecx
0x4CCBC3: push    edi
0x4CCBC4: lea     edi, [esi+28h]
0x4CCBC7: mov     ecx, edi
0x4CCBC9: call    sub_41FA30
0x4CCBCE: test    eax, eax
0x4CCBD0: jz      short loc_4CCBDB
0x4CCBD2: mov     ecx, edi
0x4CCBD4: pop     edi
0x4CCBD5: pop     esi
0x4CCBD6: jmp     sub_41FA30
0x4CCBDB: test    byte ptr [esi+24h], 1
0x4CCBDF: mov     eax, ds:0B35C0Ch
0x4CCBE4: jz      short loc_4CCBEB
0x4CCBE6: mov     eax, offset EmptyString
0x4CCBEB: pop     edi
0x4CCBEC: pop     esi
0x4CCBED: retn
