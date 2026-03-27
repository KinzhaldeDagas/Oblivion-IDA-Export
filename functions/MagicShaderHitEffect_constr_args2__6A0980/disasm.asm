0x6A0980: push    0FFFFFFFFh
0x6A0982: push    offset MagicShaderHitEffect_constr_args_SEH
0x6A0987: mov     eax, large fs:0
0x6A098D: push    eax
0x6A098E: push    ecx
0x6A098F: push    ebx
0x6A0990: push    ebp
0x6A0991: push    esi
0x6A0992: push    edi
0x6A0993: mov     eax, ds:0B30AACh
0x6A0998: xor     eax, esp
0x6A099A: push    eax
0x6A099B: lea     eax, [esp+24h+var_C]
0x6A099F: mov     large fs:0, eax
0x6A09A5: mov     esi, ecx
0x6A09A7: mov     [esp+24h+var_10], esi
0x6A09AB: mov     eax, [esp+24h+arg_0]
0x6A09AF: xor     ebx, ebx
0x6A09B1: push    ebx
0x6A09B2: push    eax
0x6A09B3: call    MagicHitEffect_constr_args
0x6A09B8: mov     dword ptr [esi], offset ??_7MagicShaderHitEffect@@6B@; const MagicShaderHitEffect::`vftable'
0x6A09BE: mov     [esp+24h+var_4], ebx
0x6A09C2: mov     [esi+3Ch], ebx
0x6A09C5: mov     [esi+40h], ebx
0x6A09C8: mov     [esi+48h], ebx
0x6A09CB: fldz
0x6A09CD: mov     ecx, [esp+24h+arg_4]
0x6A09D1: fstp    dword ptr [esi+38h]
0x6A09D4: mov     ebp, ds:0A2807Ch
0x6A09DA: mov     [esi+34h], ecx
0x6A09DD: mov     edi, [esi+48h]
0x6A09E0: cmp     edi, ebx
0x6A09E2: mov     byte ptr [esp+24h+var_4], 3
0x6A09E7: jz      short loc_6A0A04
0x6A09E9: lea     edx, [edi+4]
0x6A09EC: push    edx; lpAddend
0x6A09ED: call    ebp ; InterlockedDecrement
0x6A09EF: test    eax, eax
0x6A09F1: jnz     short loc_6A0A01
0x6A09F3: cmp     edi, ebx
0x6A09F5: jz      short loc_6A0A01
0x6A09F7: mov     eax, [edi]
0x6A09F9: mov     edx, [eax]
0x6A09FB: push    1
0x6A09FD: mov     ecx, edi
0x6A09FF: call    edx
0x6A0A01: mov     [esi+48h], ebx
0x6A0A04: mov     edi, [esi+3Ch]
0x6A0A07: cmp     edi, ebx
0x6A0A09: jz      short loc_6A0A26
0x6A0A0B: lea     eax, [edi+4]
0x6A0A0E: push    eax; lpAddend
0x6A0A0F: call    ebp ; InterlockedDecrement
0x6A0A11: test    eax, eax
0x6A0A13: jnz     short loc_6A0A23
0x6A0A15: cmp     edi, ebx
0x6A0A17: jz      short loc_6A0A23
0x6A0A19: mov     edx, [edi]
0x6A0A1B: mov     eax, [edx]
0x6A0A1D: push    1
0x6A0A1F: mov     ecx, edi
0x6A0A21: call    eax
0x6A0A23: mov     [esi+3Ch], ebx
0x6A0A26: mov     edi, [esi+40h]
0x6A0A29: cmp     edi, ebx
0x6A0A2B: jz      short loc_6A0A48
0x6A0A2D: lea     ecx, [edi+4]
0x6A0A30: push    ecx; lpAddend
0x6A0A31: call    ebp ; InterlockedDecrement
0x6A0A33: test    eax, eax
0x6A0A35: jnz     short loc_6A0A45
0x6A0A37: cmp     edi, ebx
0x6A0A39: jz      short loc_6A0A45
0x6A0A3B: mov     edx, [edi]
0x6A0A3D: mov     eax, [edx]
0x6A0A3F: push    1
0x6A0A41: mov     ecx, edi
0x6A0A43: call    eax
0x6A0A45: mov     [esi+40h], ebx
0x6A0A48: mov     [esi+28h], bl
0x6A0A4B: mov     dword ptr [esi+2Ch], 0FFFFFFFFh
0x6A0A52: mov     [esi+30h], ebx
0x6A0A55: mov     ecx, ds:0B333C4h
0x6A0A5B: cmp     [esi+1Ch], ecx
0x6A0A5E: jnz     short loc_6A0A81
0x6A0A60: push    ebx
0x6A0A61: call    PlayerCharacter_GetPlayerNode
0x6A0A66: test    eax, eax
0x6A0A68: jz      short loc_6A0A81
0x6A0A6A: mov     ecx, ds:0B333C4h
0x6A0A70: push    ebx
0x6A0A71: call    PlayerCharacter_GetPlayerNode
0x6A0A76: test    byte ptr [eax+18h], 1
0x6A0A7A: jnz     short loc_6A0A81
0x6A0A7C: mov     ebx, 1
0x6A0A81: fldz
0x6A0A83: mov     [esi+44h], bl
0x6A0A86: fld     [esp+24h+arg_8]
0x6A0A8A: fcom    st(1)
0x6A0A8C: fnstsw  ax
0x6A0A8E: fstp    st(1)
0x6A0A90: test    ah, 5
0x6A0A93: mov     eax, esi
0x6A0A95: jp      short loc_6A0A9F
0x6A0A97: fstp    st
0x6A0A99: fld     dword ptr ds:0A32048h
0x6A0A9F: fstp    dword ptr [esi+8]
0x6A0AA2: mov     ecx, dword ptr [esp+24h+var_C]
0x6A0AA6: mov     large fs:0, ecx
0x6A0AAD: pop     ecx
0x6A0AAE: pop     edi
0x6A0AAF: pop     esi
0x6A0AB0: pop     ebp
0x6A0AB1: pop     ebx
0x6A0AB2: add     esp, 10h
0x6A0AB5: retn    0Ch
