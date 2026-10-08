0x79BD20: sub     esp, 8; Oblivion st_vector<SFrondVertex>::push_back. Constructs in place when end<capacityEnd; otherwise delegates to checked insert-one at end.
0x79BD23: push    ebx
0x79BD24: push    esi
0x79BD25: mov     esi, ecx
0x79BD27: mov     ebx, [esi+4]
0x79BD2A: test    ebx, ebx
0x79BD2C: push    edi
0x79BD2D: jnz     short loc_79BD33
0x79BD2F: xor     edi, edi
0x79BD31: jmp     short loc_79BD4B
0x79BD33: mov     ecx, [esi+8]
0x79BD36: sub     ecx, ebx
0x79BD38: mov     eax, 92492493h
0x79BD3D: imul    ecx
0x79BD3F: add     edx, ecx
0x79BD41: sar     edx, 5
0x79BD44: mov     edi, edx
0x79BD46: shr     edi, 1Fh
0x79BD49: add     edi, edx
0x79BD4B: test    ebx, ebx
0x79BD4D: jz      short loc_79BD9D
0x79BD4F: mov     ecx, [esi+0Ch]
0x79BD52: sub     ecx, ebx
0x79BD54: mov     eax, 92492493h
0x79BD59: imul    ecx
0x79BD5B: add     edx, ecx
0x79BD5D: sar     edx, 5
0x79BD60: mov     eax, edx
0x79BD62: shr     eax, 1Fh
0x79BD65: add     eax, edx
0x79BD67: cmp     edi, eax
0x79BD69: jnb     short loc_79BD9D
0x79BD6B: mov     ecx, [esp+14h+value]
0x79BD6F: mov     edx, [esp+14h+value]
0x79BD73: mov     edi, [esi+8]
0x79BD76: mov     byte ptr [esp+14h+debugCookie], 0
0x79BD7B: mov     eax, dword ptr [esp+14h+debugCookie]
0x79BD7F: push    eax; debugCookie
0x79BD80: push    ecx; debugValue
0x79BD81: push    esi; debugOwner
0x79BD82: push    edx; value
0x79BD83: push    1; count
0x79BD85: push    edi; destination
0x79BD86: call    OB_SFrondVertex_UninitializedFillN_010201A0; Low-level uninitialized_fill_n for trivial 0x38-byte SFrondVertex records. Oblivion call sites pass three effective operands plus three checked-iterator/debug operands that this body does not consume.
0x79BD8B: add     esp, 18h
0x79BD8E: add     edi, 38h ; '8'
0x79BD91: mov     [esi+8], edi
0x79BD94: pop     edi
0x79BD95: pop     esi
0x79BD96: pop     ebx
0x79BD97: add     esp, 8
0x79BD9A: retn    4
0x79BD9D: mov     edi, [esi+8]
0x79BDA0: cmp     ebx, edi
0x79BDA2: jbe     short loc_79BDA9
0x79BDA4: call    __invalid_parameter_noinfo
0x79BDA9: mov     eax, [esp+14h+value]
0x79BDAD: push    eax; value
0x79BDAE: push    edi; position
0x79BDAF: push    esi; expectedOwner
0x79BDB0: lea     ecx, [esp+20h+debugCookie]
0x79BDB4: push    ecx; result
0x79BDB5: mov     ecx, esi; this
0x79BDB7: call    OB_stVector_SFrondVertex_InsertOne_010201A0; Checked insert-one wrapper for st_vector<SFrondVertex>. Preserves the pre-growth iterator index, delegates to InsertFill(count=1), then returns an 8-byte {owner,current} iterator.
0x79BDBC: pop     edi
0x79BDBD: pop     esi
0x79BDBE: pop     ebx
0x79BDBF: add     esp, 8
0x79BDC2: retn    4
