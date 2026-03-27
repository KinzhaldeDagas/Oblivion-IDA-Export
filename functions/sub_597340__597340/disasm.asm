0x597340: push    ecx
0x597341: push    ebx
0x597342: push    ebp
0x597343: push    edi
0x597344: mov     edi, ecx
0x597346: mov     ecx, [edi+28h]
0x597349: call    sub_5893F0
0x59734E: mov     eax, ds:0B33A98h
0x597353: xor     ebx, ebx
0x597355: xor     ebp, ebp
0x597357: add     eax, 54h ; 'T'
0x59735A: mov     [esp+10h+var_4], eax
0x59735E: jz      loc_5973E8
0x597364: push    esi
0x597365: jmp     short loc_59736B
0x597367: mov     eax, [esp+14h+var_4]
0x59736B: mov     esi, [eax]
0x59736D: test    esi, esi
0x59736F: jz      short loc_5973BE
0x597371: mov     ecx, esi
0x597373: call    TESClass_IsPlayable
0x597378: test    al, al
0x59737A: jz      short loc_5973AF
0x59737C: mov     eax, [esi+1Ch]
0x59737F: test    eax, eax
0x597381: jnz     short loc_597388
0x597383: mov     eax, offset EmptyString
0x597388: xor     ecx, ecx
0x59738A: cmp     esi, [edi+3Ch]
0x59738D: setnz   cl
0x597390: sub     ecx, 1
0x597393: and     ecx, 2
0x597396: push    ecx
0x597397: push    ebx
0x597398: push    esi
0x597399: push    eax
0x59739A: mov     ecx, edi
0x59739C: call    sub_5971E0
0x5973A1: add     ebx, 1
0x5973A4: test    ebp, ebp
0x5973A6: jz      short loc_5973AD
0x5973A8: cmp     [edi+3Ch], esi
0x5973AB: jnz     short loc_5973AF
0x5973AD: mov     ebp, eax
0x5973AF: mov     edx, [esp+14h+var_4]
0x5973B3: mov     eax, [edx+4]
0x5973B6: test    eax, eax
0x5973B8: mov     [esp+14h+var_4], eax
0x5973BC: jnz     short loc_597367
0x5973BE: test    ebp, ebp
0x5973C0: jz      short loc_5973E7
0x5973C2: cmp     [esp+14h+arg_0], 0
0x5973C7: jz      short loc_5973E7
0x5973C9: mov     esi, [edi]
0x5973CB: push    ebp
0x5973CC: push    0FA8h
0x5973D1: mov     ecx, ebp
0x5973D3: add     esi, 0Ch
0x5973D6: call    Tile_GetFloat
0x5973DB: call    Double_To_SInt32
0x5973E0: push    eax
0x5973E1: mov     eax, [esi]
0x5973E3: mov     ecx, edi
0x5973E5: call    eax
0x5973E7: pop     esi
0x5973E8: pop     edi
0x5973E9: pop     ebp
0x5973EA: pop     ebx
0x5973EB: pop     ecx
0x5973EC: retn    4
