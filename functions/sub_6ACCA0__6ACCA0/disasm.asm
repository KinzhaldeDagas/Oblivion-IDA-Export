0x6ACCA0: push    ecx
0x6ACCA1: push    ebx
0x6ACCA2: push    ebp
0x6ACCA3: push    esi
0x6ACCA4: push    edi
0x6ACCA5: mov     edi, dword ptr [esp+14h+ArgList]
0x6ACCA9: lea     eax, [esp+14h+var_4]
0x6ACCAD: mov     esi, ecx
0x6ACCAF: mov     ecx, [esi+300h]
0x6ACCB5: push    eax
0x6ACCB6: push    edi
0x6ACCB7: mov     [esp+1Ch+var_4], 0
0x6ACCBF: call    NiTMap_GetAt
0x6ACCC4: test    al, al
0x6ACCC6: mov     ebx, [esp+14h+a3]
0x6ACCCA: jz      short loc_6ACCF1
0x6ACCCC: mov     ebp, [esp+14h+var_4]
0x6ACCD0: cmp     ebp, ebx
0x6ACCD2: jz      short loc_6ACCFE
0x6ACCD4: push    edi; ArgList
0x6ACCD5: push    offset aAudioidCollisi; "AudioID Collision(%i)"
0x6ACCDA: call    PrintError
0x6ACCDF: add     esp, 8
0x6ACCE2: mov     ecx, ebp
0x6ACCE4: call    sub_6B6AC0
0x6ACCE9: push    edi
0x6ACCEA: mov     ecx, esi
0x6ACCEC: call    sub_6AC9F0
0x6ACCF1: mov     ecx, [esi+300h]; this
0x6ACCF7: push    ebx; a3
0x6ACCF8: push    edi; a2
0x6ACCF9: call    NiTMap_SetAt
0x6ACCFE: pop     edi
0x6ACCFF: pop     esi
0x6ACD00: pop     ebp
0x6ACD01: mov     eax, ebx
0x6ACD03: pop     ebx
0x6ACD04: pop     ecx
0x6ACD05: retn    8
