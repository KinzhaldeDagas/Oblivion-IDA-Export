0x696AA0: push    0FFFFFFFFh
0x696AA2: push    offset SEH_696AA0
0x696AA7: mov     eax, large fs:0
0x696AAD: push    eax
0x696AAE: push    ecx
0x696AAF: push    ebx
0x696AB0: push    ebp
0x696AB1: push    esi
0x696AB2: push    edi
0x696AB3: mov     eax, ds:0B30AACh
0x696AB8: xor     eax, esp
0x696ABA: push    eax
0x696ABB: lea     eax, [esp+24h+var_C]
0x696ABF: mov     large fs:0, eax
0x696AC5: mov     esi, ecx
0x696AC7: mov     [esp+24h+var_10], esi
0x696ACB: call    MagicProjectile__MagicProjectile
0x696AD0: xor     edi, edi
0x696AD2: mov     dword ptr [esi], offset ??_7MagicBoltProjectile@@6BMagicBoltProjectile@@@; const MagicBoltProjectile::`vftable'{for `MagicBoltProjectile'}
0x696AD8: mov     dword ptr [esi+18h], offset ??_7MagicBoltProjectile@@6BTESChildCell@@@; const MagicBoltProjectile::`vftable'{for `TESChildCell'}
0x696ADF: mov     [esp+24h+var_4], edi
0x696AE3: mov     [esi+7Ch], edi
0x696AE6: mov     [esi+88h], edi
0x696AEC: mov     [esi+8Ch], edi
0x696AF2: mov     [esi+90h], edi
0x696AF8: mov     [esi+94h], edi
0x696AFE: fld     dword ptr ds:0A3765Ch
0x696B04: mov     ebp, ds:0A2807Ch
0x696B0A: fstp    dword ptr [esi+5Ch]
0x696B0D: mov     [esi+80h], edi
0x696B13: mov     [esi+84h], edi
0x696B19: mov     [esi+98h], edi
0x696B1F: mov     [esi+9Ch], edi
0x696B25: mov     ebx, [esi+7Ch]
0x696B28: cmp     ebx, edi
0x696B2A: mov     byte ptr [esp+24h+var_4], 5
0x696B2F: jz      short loc_696B4C
0x696B31: lea     eax, [ebx+4]
0x696B34: push    eax; lpAddend
0x696B35: call    ebp ; InterlockedDecrement
0x696B37: test    eax, eax
0x696B39: jnz     short loc_696B49
0x696B3B: cmp     ebx, edi
0x696B3D: jz      short loc_696B49
0x696B3F: mov     edx, [ebx]
0x696B41: mov     eax, [edx]
0x696B43: push    1
0x696B45: mov     ecx, ebx
0x696B47: call    eax
0x696B49: mov     [esi+7Ch], edi
0x696B4C: mov     ebx, [esi+88h]
0x696B52: cmp     ebx, edi
0x696B54: jz      short loc_696B74
0x696B56: lea     ecx, [ebx+4]
0x696B59: push    ecx; lpAddend
0x696B5A: call    ebp ; InterlockedDecrement
0x696B5C: test    eax, eax
0x696B5E: jnz     short loc_696B6E
0x696B60: cmp     ebx, edi
0x696B62: jz      short loc_696B6E
0x696B64: mov     edx, [ebx]
0x696B66: mov     eax, [edx]
0x696B68: push    1
0x696B6A: mov     ecx, ebx
0x696B6C: call    eax
0x696B6E: mov     [esi+88h], edi
0x696B74: mov     ebx, [esi+8Ch]
0x696B7A: cmp     ebx, edi
0x696B7C: jz      short loc_696B9C
0x696B7E: lea     ecx, [ebx+4]
0x696B81: push    ecx; lpAddend
0x696B82: call    ebp ; InterlockedDecrement
0x696B84: test    eax, eax
0x696B86: jnz     short loc_696B96
0x696B88: cmp     ebx, edi
0x696B8A: jz      short loc_696B96
0x696B8C: mov     edx, [ebx]
0x696B8E: mov     eax, [edx]
0x696B90: push    1
0x696B92: mov     ecx, ebx
0x696B94: call    eax
0x696B96: mov     [esi+8Ch], edi
0x696B9C: mov     ebx, [esi+90h]
0x696BA2: cmp     ebx, edi
0x696BA4: jz      short loc_696BC4
0x696BA6: lea     ecx, [ebx+4]
0x696BA9: push    ecx; lpAddend
0x696BAA: call    ebp ; InterlockedDecrement
0x696BAC: test    eax, eax
0x696BAE: jnz     short loc_696BBE
0x696BB0: cmp     ebx, edi
0x696BB2: jz      short loc_696BBE
0x696BB4: mov     edx, [ebx]
0x696BB6: mov     eax, [edx]
0x696BB8: push    1
0x696BBA: mov     ecx, ebx
0x696BBC: call    eax
0x696BBE: mov     [esi+90h], edi
0x696BC4: fldz
0x696BC6: mov     eax, esi
0x696BC8: fstp    dword ptr [esi+0A0h]
0x696BCE: mov     ecx, dword ptr [esp+24h+var_C]
0x696BD2: mov     large fs:0, ecx
0x696BD9: pop     ecx
0x696BDA: pop     edi
0x696BDB: pop     esi
0x696BDC: pop     ebp
0x696BDD: pop     ebx
0x696BDE: add     esp, 10h
0x696BE1: retn
