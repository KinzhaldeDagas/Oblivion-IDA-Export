0x85C110: push    0FFFFFFFFh
0x85C112: push    offset SEH_85E160
0x85C117: mov     eax, large fs:0
0x85C11D: push    eax
0x85C11E: push    ebx
0x85C11F: push    ebp
0x85C120: push    esi
0x85C121: push    edi
0x85C122: mov     eax, ds:0B30AACh
0x85C127: xor     eax, esp
0x85C129: push    eax
0x85C12A: lea     eax, [esp+20h+var_C]
0x85C12E: mov     large fs:0, eax
0x85C134: mov     ebx, ecx
0x85C136: mov     eax, [esp+20h+arg_8]
0x85C13A: mov     eax, [eax+0Ch]
0x85C13D: mov     esi, ds:0B47798h
0x85C143: push    eax
0x85C144: call    sub_848E50
0x85C149: mov     ecx, [esi+24h]
0x85C14C: mov     edi, [ecx]
0x85C14E: mov     ecx, [esp+20h+arg_C]
0x85C152: mov     edx, [ecx]
0x85C154: mov     eax, [edx+88h]
0x85C15A: push    0
0x85C15C: mov     [esp+24h+arg_8], edi
0x85C160: call    eax
0x85C162: mov     edi, [edi+4]
0x85C165: mov     ebp, eax
0x85C167: cmp     edi, ebp
0x85C169: jz      short loc_85C1A0
0x85C16B: test    edi, edi
0x85C16D: jz      short loc_85C18B
0x85C16F: lea     ecx, [edi+4]
0x85C172: push    ecx; lpAddend
0x85C173: call    dword ptr ds:0A2807Ch
0x85C179: test    eax, eax
0x85C17B: jnz     short loc_85C18B
0x85C17D: test    edi, edi
0x85C17F: jz      short loc_85C18B
0x85C181: mov     edx, [edi]
0x85C183: mov     eax, [edx]
0x85C185: push    1
0x85C187: mov     ecx, edi
0x85C189: call    eax
0x85C18B: test    ebp, ebp
0x85C18D: mov     ecx, [esp+20h+arg_8]
0x85C191: mov     [ecx+4], ebp
0x85C194: jz      short loc_85C1A0
0x85C196: add     ebp, 4
0x85C199: push    ebp; lpAddend
0x85C19A: call    dword ptr ds:0A28078h
0x85C1A0: mov     edx, [esi+24h]
0x85C1A3: mov     eax, [esp+20h+arg_C]
0x85C1A7: mov     edi, [edx+4]
0x85C1AA: push    0
0x85C1AC: push    eax
0x85C1AD: mov     ecx, ebx
0x85C1AF: mov     [esp+28h+arg_8], edi
0x85C1B3: call    sub_848FD0
0x85C1B8: mov     edi, [edi+4]
0x85C1BB: mov     ebp, eax
0x85C1BD: cmp     edi, ebp
0x85C1BF: jz      short loc_85C1F6
0x85C1C1: test    edi, edi
0x85C1C3: jz      short loc_85C1E1
0x85C1C5: lea     ecx, [edi+4]
0x85C1C8: push    ecx; lpAddend
0x85C1C9: call    dword ptr ds:0A2807Ch
0x85C1CF: test    eax, eax
0x85C1D1: jnz     short loc_85C1E1
0x85C1D3: test    edi, edi
0x85C1D5: jz      short loc_85C1E1
0x85C1D7: mov     edx, [edi]
0x85C1D9: mov     eax, [edx]
0x85C1DB: push    1
0x85C1DD: mov     ecx, edi
0x85C1DF: call    eax
0x85C1E1: test    ebp, ebp
0x85C1E3: mov     ecx, [esp+20h+arg_8]
0x85C1E7: mov     [ecx+4], ebp
0x85C1EA: jz      short loc_85C1F6
0x85C1EC: add     ebp, 4
0x85C1EF: push    ebp; lpAddend
0x85C1F0: call    dword ptr ds:0A28078h
0x85C1F6: cmp     byte ptr [esp+20h+arg_10], 0
0x85C1FB: jnz     short loc_85C238
0x85C1FD: mov     edi, 1
0x85C202: add     [esi+60h], edi
0x85C205: mov     [esp+20h+arg_10], esi
0x85C209: mov     eax, [ebx+38h]
0x85C20C: lea     edx, [esp+20h+arg_10]
0x85C210: push    edx
0x85C211: push    eax
0x85C212: lea     ecx, [ebx+40h]
0x85C215: mov     [esp+28h+var_4], 0
0x85C21D: call    sub_76CE40
0x85C222: or      eax, 0FFFFFFFFh
0x85C225: add     [esi+60h], eax
0x85C228: mov     [esp+20h+var_4], eax
0x85C22C: jnz     short loc_85C235
0x85C22E: mov     ecx, esi
0x85C230: call    sub_7604D0
0x85C235: add     [ebx+38h], edi
0x85C238: mov     ecx, dword ptr [esp+20h+var_C]
0x85C23C: mov     large fs:0, ecx
0x85C243: pop     ecx
0x85C244: pop     edi
0x85C245: pop     esi
0x85C246: pop     ebp
0x85C247: pop     ebx
0x85C248: add     esp, 0Ch
0x85C24B: retn    14h
