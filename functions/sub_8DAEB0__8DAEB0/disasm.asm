0x8DAEB0: sub     esp, 34h
0x8DAEB3: mov     edx, [esp+34h+arg_0]
0x8DAEB7: mov     eax, [esp+34h+arg_8]
0x8DAEBB: push    ebx
0x8DAEBC: mov     ebx, [esp+38h+arg_4]
0x8DAEC0: cmp     ebx, eax
0x8DAEC2: push    ebp
0x8DAEC3: mov     ebp, ecx
0x8DAEC5: push    esi
0x8DAEC6: push    edi
0x8DAEC7: mov     byte ptr [ebp+1BF5h], 1
0x8DAECE: mov     ecx, 0Ch
0x8DAED3: mov     esi, edx
0x8DAED5: lea     edi, [esp+44h+var_34]
0x8DAED9: mov     dword ptr [ebp+1BFCh], 80h ; '€'
0x8DAEE3: mov     dword ptr [ebp+1BF8h], 200h
0x8DAEED: rep movsd
0x8DAEEF: mov     [esp+44h+var_4], 0
0x8DAEF7: jz      loc_8DAF8D
0x8DAEFD: mov     cl, [edx+2Dh]
0x8DAF00: test    cl, cl
0x8DAF02: jnz     loc_8DAF8D
0x8DAF08: mov     ecx, [ebp+0E90h]
0x8DAF0E: imul    ecx, 34h ; '4'
0x8DAF11: lea     edi, [ecx+ebp+1694h]
0x8DAF18: push    0
0x8DAF1A: mov     ecx, 0Dh
0x8DAF1F: lea     esi, [esp+48h+var_34]
0x8DAF23: mov     [esp+48h+var_4], 2
0x8DAF2B: rep movsd
0x8DAF2D: mov     edx, [ebp+1C18h]
0x8DAF33: push    edx
0x8DAF34: push    ebx
0x8DAF35: push    eax
0x8DAF36: push    ebx
0x8DAF37: push    eax
0x8DAF38: mov     eax, [ebp+0E90h]
0x8DAF3E: push    eax
0x8DAF3F: lea     ecx, [ebp+0E94h]
0x8DAF45: push    ecx
0x8DAF46: mov     ecx, ebp
0x8DAF48: call    sub_8DA580
0x8DAF4D: mov     al, [esp+44h+var_8]
0x8DAF51: test    al, al
0x8DAF53: jz      short loc_8DAF7B
0x8DAF55: mov     edx, [ebp+1C1Ch]
0x8DAF5B: mov     eax, [esp+44h+arg_8]
0x8DAF5F: push    0
0x8DAF61: push    edx
0x8DAF62: push    eax
0x8DAF63: push    ebx
0x8DAF64: push    eax
0x8DAF65: mov     eax, [ebp+0E90h]
0x8DAF6B: push    ebx
0x8DAF6C: push    eax
0x8DAF6D: lea     ecx, [ebp+1294h]
0x8DAF73: push    ecx
0x8DAF74: mov     ecx, ebp
0x8DAF76: call    sub_8DA580
0x8DAF7B: inc     dword ptr [ebp+0E90h]
0x8DAF81: mov     eax, [esp+44h+arg_8]
0x8DAF85: mov     [esp+44h+var_4], 1
0x8DAF8D: mov     edx, [ebp+0E90h]
0x8DAF93: imul    edx, 34h ; '4'
0x8DAF96: push    0
0x8DAF98: lea     edi, [edx+ebp+1694h]
0x8DAF9F: mov     ecx, 0Dh
0x8DAFA4: lea     esi, [esp+48h+var_34]
0x8DAFA8: rep movsd
0x8DAFAA: mov     ecx, [ebp+1C18h]
0x8DAFB0: mov     edx, [ebp+0E90h]
0x8DAFB6: push    ecx
0x8DAFB7: push    eax
0x8DAFB8: push    ebx
0x8DAFB9: push    eax
0x8DAFBA: push    ebx
0x8DAFBB: push    edx
0x8DAFBC: lea     eax, [ebp+0E94h]
0x8DAFC2: push    eax
0x8DAFC3: mov     ecx, ebp
0x8DAFC5: call    sub_8DA580
0x8DAFCA: mov     al, [esp+44h+var_8]
0x8DAFCE: test    al, al
0x8DAFD0: jz      short loc_8DAFF8
0x8DAFD2: mov     ecx, [ebp+1C1Ch]
0x8DAFD8: mov     eax, [esp+44h+arg_8]
0x8DAFDC: mov     edx, [ebp+0E90h]
0x8DAFE2: push    0
0x8DAFE4: push    ecx
0x8DAFE5: push    eax
0x8DAFE6: push    ebx
0x8DAFE7: push    eax
0x8DAFE8: push    ebx
0x8DAFE9: push    edx
0x8DAFEA: lea     eax, [ebp+1294h]
0x8DAFF0: push    eax
0x8DAFF1: mov     ecx, ebp
0x8DAFF3: call    sub_8DA580
0x8DAFF8: mov     eax, [ebp+0E90h]
0x8DAFFE: pop     edi
0x8DAFFF: lea     ecx, [eax+1]
0x8DB002: pop     esi
0x8DB003: mov     [ebp+0E90h], ecx
0x8DB009: pop     ebp
0x8DB00A: pop     ebx
0x8DB00B: add     esp, 34h
0x8DB00E: retn    0Ch
