0x534A40: push    ecx
0x534A41: mov     ecx, ds:0B34D90h
0x534A47: push    ebx
0x534A48: push    ebp
0x534A49: push    esi
0x534A4A: push    edi; ArgList
0x534A4B: lea     eax, [esp+14h+var_4]
0x534A4F: push    eax
0x534A50: mov     [esp+18h+var_4], 0
0x534A58: call    sub_494410
0x534A5D: mov     ebx, [esp+14h+arg_C]
0x534A61: mov     ecx, ebx
0x534A63: mov     ebp, eax
0x534A65: mov     edx, ecx
0x534A67: mov     al, [ecx]
0x534A69: add     ecx, 1
0x534A6C: test    al, al
0x534A6E: jnz     short loc_534A67
0x534A70: sub     ecx, edx
0x534A72: mov     esi, edx
0x534A74: mov     edx, ecx
0x534A76: mov     ecx, [ebp+8]
0x534A79: lea     edi, [ecx+ebp+10h]
0x534A7D: add     edi, 0FFFFFFFFh
0x534A80: mov     cl, [edi+1]
0x534A83: add     edi, 1
0x534A86: test    cl, cl
0x534A88: jnz     short loc_534A80
0x534A8A: mov     ecx, edx
0x534A8C: shr     ecx, 2
0x534A8F: rep movsd
0x534A91: mov     ecx, edx
0x534A93: and     ecx, 3
0x534A96: mov     eax, ebx
0x534A98: rep movsb
0x534A9A: lea     ecx, [eax+1]
0x534A9D: lea     ecx, [ecx+0]
0x534AA0: mov     dl, [eax]
0x534AA2: add     eax, 1
0x534AA5: test    dl, dl
0x534AA7: jnz     short loc_534AA0
0x534AA9: sub     eax, ecx
0x534AAB: add     [ebp+8], eax
0x534AAE: mov     eax, [ebp+8]
0x534AB1: push    3Ah ; ':'
0x534AB3: lea     edx, [eax+ebp+10h]
0x534AB7: push    offset aC_2; "%c"
0x534ABC: push    edx
0x534ABD: call    __sprintf
0x534AC2: mov     ecx, [esp+20h+arg_10]
0x534AC6: add     [ebp+8], eax
0x534AC9: mov     eax, [ebp+8]
0x534ACC: push    ecx
0x534ACD: lea     edx, [eax+ebp+10h]
0x534AD1: push    offset aD_0; "%d"
0x534AD6: push    edx
0x534AD7: call    __sprintf
0x534ADC: add     [ebp+8], eax
0x534ADF: mov     eax, [ebp+8]
0x534AE2: lea     eax, [eax+ebp+10h]
0x534AE6: add     esp, 18h
0x534AE9: add     eax, 0FFFFFFFFh
0x534AEC: lea     esp, [esp+0]
0x534AF0: mov     cl, [eax+1]
0x534AF3: add     eax, 1
0x534AF6: test    cl, cl
0x534AF8: jnz     short loc_534AF0
0x534AFA: mov     cx, ds:0A56274h
0x534B01: mov     ebx, [esp+14h+arg_0]
0x534B05: mov     [eax], cx
0x534B08: mov     dl, ds:0A56276h
0x534B0E: mov     [eax+2], dl
0x534B11: add     dword ptr [ebp+8], 2
0x534B15: mov     edi, [ebp+8]
0x534B18: mov     eax, ebx
0x534B1A: mov     ecx, ebx
0x534B1C: lea     esp, [esp+0]
0x534B20: mov     dl, [eax]
0x534B22: add     eax, 1
0x534B25: test    dl, dl
0x534B27: jnz     short loc_534B20
0x534B29: lea     edi, [edi+ebp+10h]
0x534B2D: sub     eax, ecx
0x534B2F: mov     esi, ecx
0x534B31: add     edi, 0FFFFFFFFh
0x534B34: mov     cl, [edi+1]
0x534B37: add     edi, 1
0x534B3A: test    cl, cl
0x534B3C: jnz     short loc_534B34
0x534B3E: mov     ecx, eax
0x534B40: shr     ecx, 2
0x534B43: rep movsd
0x534B45: mov     ecx, eax
0x534B47: and     ecx, 3
0x534B4A: mov     eax, ebx
0x534B4C: rep movsb
0x534B4E: lea     edx, [eax+1]
0x534B51: mov     cl, [eax]
0x534B53: add     eax, 1
0x534B56: test    cl, cl
0x534B58: jnz     short loc_534B51
0x534B5A: sub     eax, edx
0x534B5C: add     [ebp+8], eax
0x534B5F: mov     eax, [ebp+8]
0x534B62: lea     edi, [eax+ebp+10h]
0x534B66: add     edi, 0FFFFFFFFh
0x534B69: lea     esp, [esp+0]
0x534B70: mov     al, [edi+1]
0x534B73: add     edi, 1
0x534B76: test    al, al
0x534B78: jnz     short loc_534B70
0x534B7A: mov     eax, ds:0A5626Ch
0x534B7F: mov     ebx, [esp+14h+arg_8]
0x534B83: mov     [edi], eax
0x534B85: add     dword ptr [ebp+8], 3
0x534B89: mov     edi, [ebp+8]
0x534B8C: mov     eax, ebx
0x534B8E: mov     ecx, ebx
0x534B90: mov     dl, [eax]
0x534B92: add     eax, 1
0x534B95: test    dl, dl
0x534B97: jnz     short loc_534B90
0x534B99: lea     edi, [edi+ebp+10h]
0x534B9D: sub     eax, ecx
0x534B9F: mov     esi, ecx
0x534BA1: add     edi, 0FFFFFFFFh
0x534BA4: mov     cl, [edi+1]
0x534BA7: add     edi, 1
0x534BAA: test    cl, cl
0x534BAC: jnz     short loc_534BA4
0x534BAE: mov     ecx, eax
0x534BB0: shr     ecx, 2
0x534BB3: rep movsd
0x534BB5: mov     ecx, eax
0x534BB7: and     ecx, 3
0x534BBA: mov     eax, ebx
0x534BBC: rep movsb
0x534BBE: lea     edx, [eax+1]
0x534BC1: mov     cl, [eax]
0x534BC3: add     eax, 1
0x534BC6: test    cl, cl
0x534BC8: jnz     short loc_534BC1
0x534BCA: sub     eax, edx
0x534BCC: add     [ebp+8], eax
0x534BCF: mov     eax, [ebp+8]
0x534BD2: lea     edi, [eax+ebp+10h]
0x534BD6: add     edi, 0FFFFFFFFh
0x534BD9: lea     esp, [esp+0]
0x534BE0: mov     al, [edi+1]
0x534BE3: add     edi, 1
0x534BE6: test    al, al
0x534BE8: jnz     short loc_534BE0
0x534BEA: mov     cx, ds:0A56270h
0x534BF1: lea     esi, [ebp+10h]
0x534BF4: push    esi; Format
0x534BF5: mov     [edi], cx
0x534BF8: add     dword ptr [ebp+8], 1
0x534BFC: push    1; int
0x534BFE: call    sub_533D30
0x534C03: add     esp, 8
0x534C06: pop     edi
0x534C07: mov     byte ptr [esi], 0
0x534C0A: pop     esi
0x534C0B: mov     [ebp+0Ch], eax
0x534C0E: mov     dword ptr [ebp+8], 0
0x534C15: pop     ebp
0x534C16: pop     ebx
0x534C17: pop     ecx
0x534C18: retn    14h
