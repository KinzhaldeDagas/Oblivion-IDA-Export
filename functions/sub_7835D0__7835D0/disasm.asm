0x7835D0: push    ebp
0x7835D1: mov     ebp, esp
0x7835D3: and     esp, 0FFFFFFF0h
0x7835D6: sub     esp, 84h
0x7835DC: push    ebx
0x7835DD: push    esi
0x7835DE: push    edi
0x7835DF: mov     edi, ecx
0x7835E1: cmp     dword ptr [edi+34h], 0
0x7835E5: jz      loc_78375A
0x7835EB: cmp     dword ptr [edi+1Ch], 0
0x7835EF: jz      loc_78375A
0x7835F5: cmp     byte ptr ds:0B4295Bh, 0
0x7835FC: mov     esi, [ebp+arg_0]
0x7835FF: mov     ebx, [esi+14h]
0x783602: jnz     short loc_783609
0x783604: call    sub_783C70
0x783609: and     ebx, 0FFh
0x78360F: cmp     dword ptr ds:0B428D8h[ebx*4], 8
0x783617: jz      short loc_78363E
0x783619: cmp     byte ptr ds:0B4295Bh, 0
0x783620: mov     ebx, [esi+14h]
0x783623: jnz     short loc_78362A
0x783625: call    sub_783C70
0x78362A: and     ebx, 0FFh
0x783630: cmp     dword ptr ds:0B428D8h[ebx*4], 9
0x783638: jnz     loc_78375A
0x78363E: cmp     [ebp+arg_4], 0
0x783642: jnz     short loc_78364A
0x783644: mov     eax, [esi+30h]
0x783647: mov     [ebp+arg_4], eax
0x78364A: mov     ebx, [esi+24h]
0x78364D: test    ebx, ebx
0x78364F: jnz     short loc_783654
0x783651: mov     ebx, [esi+0Ch]
0x783654: mov     eax, [edi+34h]
0x783657: mov     ecx, [eax]
0x783659: mov     edx, [ecx+24h]
0x78365C: push    ebx
0x78365D: push    0
0x78365F: push    eax
0x783660: call    edx
0x783662: mov     esi, eax
0x783664: test    esi, esi
0x783666: mov     [esp+90h+var_74], esi
0x78366A: jz      loc_783748
0x783670: mov     eax, [edi+34h]
0x783673: lea     edx, [esp+90h+var_78]
0x783677: push    edx
0x783678: lea     edx, [esp+94h+var_70]
0x78367C: push    edx
0x78367D: mov     [esp+98h+var_78], 1
0x783685: mov     ecx, [eax]
0x783687: push    esi
0x783688: push    eax
0x783689: mov     eax, [ecx+18h]
0x78368C: call    eax
0x78368E: cmp     [ebp+arg_10], 0
0x783692: mov     dword ptr [esp+90h+var_7C], eax
0x783696: jz      loc_78371E
0x78369C: xor     esi, esi
0x78369E: cmp     [ebp+arg_8], esi
0x7836A1: jbe     short loc_783713
0x7836A3: mov     ecx, [ebp+arg_10]
0x7836A6: movzx   ebx, word ptr [ecx+esi*2]
0x7836AA: mov     eax, [edi+34h]
0x7836AD: mov     ecx, [esp+90h+var_74]
0x7836B1: mov     edx, [eax]
0x7836B3: mov     edx, [edx+28h]
0x7836B6: push    esi
0x7836B7: push    ecx
0x7836B8: push    eax
0x7836B9: call    edx
0x7836BB: movzx   eax, bx
0x7836BE: imul    eax, [ebp+arg_C]
0x7836C2: shl     eax, 4
0x7836C5: add     eax, [ebp+arg_4]
0x7836C8: lea     ecx, [esp+90h+var_40]
0x7836CC: push    eax
0x7836CD: push    ecx
0x7836CE: call    D3DXMatrixTranspose_0
0x7836D3: mov     ecx, [esp+90h+var_64]
0x7836D7: mov     eax, [edi+24h]
0x7836DA: mov     eax, [eax+0FF8h]
0x7836E0: mov     edx, [eax]
0x7836E2: mov     edx, [edx+1B4h]
0x7836E8: push    ecx
0x7836E9: lea     ecx, [esp+94h+var_40]
0x7836ED: push    ecx
0x7836EE: mov     ecx, [esp+98h+var_68]
0x7836F2: push    ecx
0x7836F3: push    eax
0x7836F4: call    edx
0x7836F6: test    eax, eax
0x7836F8: jl      short loc_783704
0x7836FA: mov     dword ptr [esp+90h+var_7C], 0
0x783702: jmp     short loc_78370B
0x783704: cmp     dword ptr [esp+90h+var_7C], 0
0x783709: jl      short loc_78375A
0x78370B: add     esi, 1
0x78370E: cmp     esi, [ebp+arg_8]
0x783711: jb      short loc_7836A3
0x783713: mov     al, 1
0x783715: pop     edi
0x783716: pop     esi
0x783717: pop     ebx
0x783718: mov     esp, ebp
0x78371A: pop     ebp
0x78371B: retn    14h
0x78371E: mov     edx, [ebp+arg_8]
0x783721: mov     eax, [edi+34h]
0x783724: mov     ecx, [eax]
0x783726: push    edx
0x783727: mov     edx, [ebp+arg_4]
0x78372A: push    edx
0x78372B: mov     edx, [edi+1Ch]
0x78372E: push    esi
0x78372F: push    edx
0x783730: push    eax
0x783731: mov     eax, [ecx+58h]
0x783734: call    eax
0x783736: xor     ecx, ecx
0x783738: test    eax, eax
0x78373A: setnl   cl
0x78373D: mov     al, cl
0x78373F: pop     edi
0x783740: pop     esi
0x783741: pop     ebx
0x783742: mov     esp, ebp
0x783744: pop     ebp
0x783745: retn    14h
0x783748: mov     edx, [edi+8]
0x78374B: push    ebx
0x78374C: push    edx
0x78374D: push    offset aNid3dhlslpix_0; "NiD3DHLSLPixelShader::SetPixelShaderCon"...
0x783752: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x783757: add     esp, 0Ch
0x78375A: pop     edi
0x78375B: pop     esi
0x78375C: xor     al, al
0x78375E: pop     ebx
0x78375F: mov     esp, ebp
0x783761: pop     ebp
0x783762: retn    14h
