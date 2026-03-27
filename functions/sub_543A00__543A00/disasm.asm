0x543A00: sub     esp, 18h
0x543A03: push    ebx
0x543A04: push    esi
0x543A05: mov     esi, ecx
0x543A07: fld     dword ptr [esi+0F0h]
0x543A0D: xor     bl, bl
0x543A0F: fld     dword ptr ds:0B36658h
0x543A15: fcompp
0x543A17: fnstsw  ax
0x543A19: test    ah, 41h
0x543A1C: jnz     short loc_543A46
0x543A1E: cmp     ds:0B3667Dh, bl
0x543A24: jz      short loc_543A46
0x543A26: cmp     [esi+100h], bl
0x543A2C: jnz     short loc_543A46
0x543A2E: fld     [esp+20h+arg_0]
0x543A32: fadd    dword ptr [esi+0F0h]
0x543A38: fstp    dword ptr [esi+0F0h]
0x543A3E: pop     esi
0x543A3F: pop     ebx
0x543A40: add     esp, 18h
0x543A43: retn    4
0x543A46: fldz
0x543A48: push    ebp
0x543A49: mov     ebp, [esi+0DCh]
0x543A4F: fst     dword ptr [esi+0F0h]
0x543A55: mov     eax, ds:0B333A0h
0x543A5A: fst     [esp+24h+var_18]
0x543A5E: test    eax, eax
0x543A60: fst     [esp+24h+var_14]
0x543A64: fstp    [esp+24h+var_10]
0x543A68: jz      loc_543B16
0x543A6E: cmp     dword ptr [eax+34h], 0
0x543A72: jz      loc_543B16
0x543A78: mov     dword ptr [esi+0DCh], 2
0x543A82: call    sub_5418F0
0x543A87: mov     ecx, esi
0x543A89: call    sub_541DD0
0x543A8E: mov     ecx, [esi+20h]
0x543A91: test    ecx, ecx
0x543A93: jz      short loc_543AA5
0x543A95: mov     eax, [ecx]
0x543A97: fld     [esp+24h+arg_0]
0x543A9B: mov     edx, [eax+0Ch]
0x543A9E: push    ecx
0x543A9F: fstp    [esp+28h+var_28]
0x543AA2: push    esi
0x543AA3: call    edx
0x543AA5: mov     ecx, [esi+2Ch]
0x543AA8: test    ecx, ecx
0x543AAA: jz      short loc_543ABC
0x543AAC: mov     eax, [ecx]
0x543AAE: fld     [esp+24h+arg_0]
0x543AB2: mov     edx, [eax+0Ch]
0x543AB5: push    ecx
0x543AB6: fstp    [esp+28h+var_28]
0x543AB9: push    esi
0x543ABA: call    edx
0x543ABC: mov     eax, [esi+8]
0x543ABF: test    eax, eax
0x543AC1: jz      short loc_543ACE
0x543AC3: mov     bl, [eax+18h]
0x543AC6: and     bl, 1
0x543AC9: or      word ptr [eax+18h], 1
0x543ACE: mov     eax, ds:0B350DCh
0x543AD3: mov     ecx, ds:0B350E0h
0x543AD9: mov     edx, ds:0B350E4h
0x543ADF: mov     [esp+24h+var_18], eax
0x543AE3: mov     eax, [esi+9Ch]
0x543AE9: mov     [esp+24h+var_C], eax
0x543AED: mov     [esp+24h+var_14], ecx
0x543AF1: mov     ecx, [esi+0A0h]
0x543AF7: mov     [esp+24h+var_10], edx
0x543AFB: mov     edx, [esi+0A4h]
0x543B01: lea     eax, [esp+24h+var_C]
0x543B05: push    eax
0x543B06: mov     [esp+28h+var_8], ecx
0x543B0A: mov     [esp+28h+var_4], edx
0x543B0E: call    sub_498060
0x543B13: add     esp, 4
0x543B16: push    edi
0x543B17: push    0
0x543B19: call    GetShadowSceneNode
0x543B1E: movzx   edx, byte ptr [esi+100h]
0x543B25: mov     ecx, ds:0B333CCh
0x543B2B: mov     ecx, [ecx+0DCh]
0x543B31: mov     edi, [esi+4]
0x543B34: add     esp, 4
0x543B37: push    edx
0x543B38: push    ecx
0x543B39: push    edi
0x543B3A: mov     ecx, eax
0x543B3C: call    sub_7C6310
0x543B41: cmp     byte ptr [esi+100h], 0
0x543B48: mov     ds:0B3667Dh, al
0x543B4D: pop     edi
0x543B4E: jz      short loc_543B57
0x543B50: mov     byte ptr [esi+100h], 0
0x543B57: mov     eax, ds:0B333A0h
0x543B5C: test    eax, eax
0x543B5E: jz      short loc_543B9E
0x543B60: cmp     dword ptr [eax+34h], 0
0x543B64: jz      short loc_543B9E
0x543B66: fldz
0x543B68: push    ecx
0x543B69: mov     ecx, esi
0x543B6B: fstp    [esp+28h+var_28]; float
0x543B6E: mov     [esi+0DCh], ebp
0x543B74: call    sub_542F20
0x543B79: mov     esi, [esi+8]
0x543B7C: test    esi, esi
0x543B7E: jz      short loc_543B91
0x543B80: test    bl, bl
0x543B82: jz      short loc_543B8B
0x543B84: or      word ptr [esi+18h], 1
0x543B89: jmp     short loc_543B91
0x543B8B: and     word ptr [esi+18h], 0FFFEh
0x543B91: lea     eax, [esp+24h+var_18]
0x543B95: push    eax
0x543B96: call    sub_498060
0x543B9B: add     esp, 4
0x543B9E: pop     ebp
0x543B9F: pop     esi
0x543BA0: pop     ebx
0x543BA1: add     esp, 18h
0x543BA4: retn    4
