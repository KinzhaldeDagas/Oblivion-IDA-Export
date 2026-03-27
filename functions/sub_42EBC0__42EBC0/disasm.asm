0x42EBC0: push    ebx
0x42EBC1: push    ebp
0x42EBC2: mov     ebp, [esp+8+arg_0]
0x42EBC6: push    esi
0x42EBC7: push    edi
0x42EBC8: mov     edi, [esp+10h+arg_4]
0x42EBCC: mov     ebx, [edi+0Ch]
0x42EBCF: xor     ecx, ecx
0x42EBD1: shr     ebx, 1Fh
0x42EBD4: mov     eax, ecx
0x42EBD6: and     bl, 1
0x42EBD9: setnz   al
0x42EBDC: lea     edx, [ebp+eax*8+0]
0x42EBE0: add     edx, eax
0x42EBE2: mov     esi, FirstLoadedArchiveByType[edx*4]
0x42EBE9: test    esi, esi
0x42EBEB: jz      short loc_42EC5A
0x42EBED: lea     eax, [esi+1A8h]
0x42EBF3: push    eax; lpAddend
0x42EBF4: call    ds:InterlockedIncrement
0x42EBFA: mov     eax, [edi+0Ch]
0x42EBFD: shr     eax, 1Fh
0x42EC00: and     al, 1
0x42EC02: cmp     bl, al
0x42EC04: mov     byte ptr [esp+10h+arg_4], al
0x42EC08: jz      short loc_42EC38
0x42EC0A: mov     ecx, esi
0x42EC0C: call    Arcghive_CheckDelete
0x42EC11: xor     eax, eax
0x42EC13: cmp     byte ptr [esp+10h+arg_4], al
0x42EC17: setnz   al
0x42EC1A: lea     ecx, [ebp+eax*8+0]
0x42EC1E: add     ecx, eax
0x42EC20: mov     esi, FirstLoadedArchiveByType[ecx*4]
0x42EC27: test    esi, esi
0x42EC29: jz      short loc_42EC61
0x42EC2B: lea     edx, [esi+1A8h]
0x42EC31: push    edx; lpAddend
0x42EC32: call    ds:InterlockedIncrement
0x42EC38: mov     eax, dword ptr [esp+10h+ArgList]
0x42EC3C: mov     ecx, [esp+10h+arg_8]
0x42EC40: push    eax; ArgList
0x42EC41: push    ecx; int
0x42EC42: push    edi; int
0x42EC43: mov     ecx, esi; int
0x42EC45: call    Archive_GetFileByEntry
0x42EC4A: mov     ecx, esi
0x42EC4C: mov     edi, eax
0x42EC4E: call    Arcghive_CheckDelete
0x42EC53: mov     eax, edi
0x42EC55: pop     edi
0x42EC56: pop     esi
0x42EC57: pop     ebp
0x42EC58: pop     ebx
0x42EC59: retn
0x42EC5A: pop     edi
0x42EC5B: pop     esi
0x42EC5C: pop     ebp
0x42EC5D: mov     eax, ecx
0x42EC5F: pop     ebx
0x42EC60: retn
0x42EC61: pop     edi
0x42EC62: pop     esi
0x42EC63: pop     ebp
0x42EC64: xor     eax, eax
0x42EC66: pop     ebx
0x42EC67: retn
