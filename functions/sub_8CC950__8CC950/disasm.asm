0x8CC950: push    ebp
0x8CC951: mov     ebp, esp
0x8CC953: and     esp, 0FFFFFFF0h
0x8CC956: sub     esp, 34h
0x8CC959: mov     ecx, large fs:2Ch
0x8CC960: mov     eax, ds:0BA9DE4h
0x8CC965: mov     eax, [ecx+eax*4]
0x8CC968: mov     ecx, [eax+19Ch]
0x8CC96E: push    ebx
0x8CC96F: mov     ebx, [ebp+arg_0]
0x8CC972: xor     edx, edx
0x8CC974: cmp     ecx, edx
0x8CC976: push    esi
0x8CC977: mov     esi, [ebx+2A4h]
0x8CC97D: push    edi
0x8CC97E: mov     [esp+40h+var_30], edx
0x8CC982: mov     [esp+40h+var_2C], edx
0x8CC986: mov     [esp+40h+var_28], 80000000h
0x8CC98E: mov     [esp+40h+var_34], eax
0x8CC992: jnz     short loc_8CC99A
0x8CC994: mov     ecx, ds:0BA7D9Ch
0x8CC99A: mov     eax, [ecx+20h]
0x8CC99D: lea     edx, ds:10h[esi*8]
0x8CC9A4: and     edx, 0FFFFFFF0h
0x8CC9A7: lea     edi, [eax+edx]
0x8CC9AA: cmp     edi, [ecx+2Ch]
0x8CC9AD: ja      short loc_8CC9B4
0x8CC9AF: mov     [ecx+20h], edi
0x8CC9B2: jmp     short loc_8CC9BA
0x8CC9B4: mov     eax, [ecx]
0x8CC9B6: push    edx
0x8CC9B7: call    dword ptr [eax+0Ch]
0x8CC9BA: or      esi, 80000000h
0x8CC9C0: mov     [esp+40h+var_30], eax
0x8CC9C4: mov     [esp+40h+var_28], esi
0x8CC9C8: mov     esi, [ebp+arg_4]
0x8CC9CB: mov     edx, [esi]
0x8CC9CD: mov     [esp+40h+var_24], eax
0x8CC9D1: lea     eax, [esp+40h+var_20]
0x8CC9D5: push    eax
0x8CC9D6: mov     ecx, esi
0x8CC9D8: call    dword ptr [edx+14h]
0x8CC9DB: mov     ecx, [ebx+64h]
0x8CC9DE: mov     edx, [ecx]
0x8CC9E0: lea     eax, [esp+40h+var_30]
0x8CC9E4: push    eax
0x8CC9E5: lea     eax, [esp+44h+var_20]
0x8CC9E9: push    eax
0x8CC9EA: add     esi, 28h ; '('
0x8CC9ED: push    esi
0x8CC9EE: call    dword ptr [edx+8]
0x8CC9F1: mov     ecx, [esp+40h+var_2C]
0x8CC9F5: test    ecx, ecx
0x8CC9F7: jz      short loc_8CCA16
0x8CC9F9: mov     eax, [ebx+78h]
0x8CC9FC: test    eax, eax
0x8CC9FE: jz      short loc_8CCA05
0x8CCA00: add     eax, 8
0x8CCA03: jmp     short loc_8CCA07
0x8CCA05: xor     eax, eax
0x8CCA07: push    eax
0x8CCA08: push    ecx
0x8CCA09: mov     ecx, [esp+48h+var_30]
0x8CCA0D: push    ecx
0x8CCA0E: mov     ecx, [ebx+68h]
0x8CCA11: call    sub_8D8370
0x8CCA16: mov     esi, [esp+40h+var_34]
0x8CCA1A: mov     ecx, [esi+19Ch]
0x8CCA20: test    ecx, ecx
0x8CCA22: mov     eax, [esp+40h+var_24]
0x8CCA26: jnz     short loc_8CCA2E
0x8CCA28: mov     ecx, ds:0BA7D9Ch
0x8CCA2E: cmp     eax, [ecx+28h]
0x8CCA31: mov     [ecx+20h], eax
0x8CCA34: jnz     short loc_8CCA3C
0x8CCA36: mov     edx, [ecx]
0x8CCA38: push    eax
0x8CCA39: call    dword ptr [edx+10h]
0x8CCA3C: mov     edx, [esp+40h+var_28]
0x8CCA40: test    edx, edx
0x8CCA42: js      short loc_8CCA6B
0x8CCA44: mov     eax, [esi+19Ch]
0x8CCA4A: test    eax, eax
0x8CCA4C: jnz     short loc_8CCA53
0x8CCA4E: mov     eax, ds:0BA7D9Ch
0x8CCA53: mov     ecx, [esp+40h+var_30]
0x8CCA57: and     edx, 3FFFFFFFh
0x8CCA5D: push    14h
0x8CCA5F: shl     edx, 3
0x8CCA62: push    edx
0x8CCA63: push    ecx
0x8CCA64: mov     ecx, eax
0x8CCA66: call    sub_8A75D0
0x8CCA6B: pop     edi
0x8CCA6C: pop     esi
0x8CCA6D: pop     ebx
0x8CCA6E: mov     esp, ebp
0x8CCA70: pop     ebp
0x8CCA71: retn
