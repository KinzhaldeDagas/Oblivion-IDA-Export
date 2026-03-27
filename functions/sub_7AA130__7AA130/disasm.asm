0x7AA130: push    0FFFFFFFFh
0x7AA132: push    offset SEH_7AA130
0x7AA137: mov     eax, large fs:0
0x7AA13D: push    eax
0x7AA13E: sub     esp, 10h
0x7AA141: push    ebx
0x7AA142: push    ebp
0x7AA143: push    esi
0x7AA144: push    edi
0x7AA145: mov     eax, ds:0B30AACh
0x7AA14A: xor     eax, esp
0x7AA14C: push    eax
0x7AA14D: lea     eax, [esp+30h+var_C]
0x7AA151: mov     large fs:0, eax
0x7AA157: mov     ebx, ecx
0x7AA159: cmp     byte ptr [ebx+0C0h], 0
0x7AA160: jnz     loc_7AA260
0x7AA166: mov     eax, [esp+30h+arg_4]
0x7AA16A: cmp     eax, 3
0x7AA16D: jnb     loc_7AA260
0x7AA173: lea     ecx, [eax+eax*4]
0x7AA176: cmp     byte ptr [ebx+ecx*4+0CCh], 0
0x7AA17E: lea     ebp, [ebx+ecx*4]
0x7AA181: jnz     loc_7AA260
0x7AA187: lea     edx, [eax+eax*4+32h]
0x7AA18B: cmp     dword ptr [ebx+edx*4], 0
0x7AA18F: lea     edi, [ebx+edx*4]
0x7AA192: jnz     short loc_7AA1B6
0x7AA194: mov     eax, ds:0B43104h
0x7AA199: mov     eax, [eax+280h]
0x7AA19F: mov     ecx, [eax]
0x7AA1A1: mov     edx, [ecx+1D8h]
0x7AA1A7: push    edi
0x7AA1A8: push    9
0x7AA1AA: push    eax
0x7AA1AB: call    edx
0x7AA1AD: cmp     dword ptr [edi], 0
0x7AA1B0: jz      loc_7AA247
0x7AA1B6: push    1; a1
0x7AA1B8: call    GetShaderDefinition
0x7AA1BD: mov     esi, [eax+4]
0x7AA1C0: add     eax, 4
0x7AA1C3: push    0
0x7AA1C5: push    3
0x7AA1C7: call    sub_7D1320
0x7AA1CC: mov     ecx, [esi+30h]
0x7AA1CF: mov     eax, [ecx]
0x7AA1D1: mov     edx, [eax+48h]
0x7AA1D4: add     esp, 0Ch
0x7AA1D7: call    edx
0x7AA1D9: mov     ecx, [esi+2Ch]
0x7AA1DC: mov     eax, [ecx]
0x7AA1DE: mov     edx, [eax+48h]
0x7AA1E1: call    edx
0x7AA1E3: mov     eax, [edi]
0x7AA1E5: mov     ecx, [eax]
0x7AA1E7: mov     edx, [ecx+18h]
0x7AA1EA: push    2
0x7AA1EC: push    eax
0x7AA1ED: call    edx
0x7AA1EF: mov     eax, [esp+30h+arg_0]
0x7AA1F3: xor     esi, esi
0x7AA1F5: push    esi
0x7AA1F6: push    esi
0x7AA1F7: push    1
0x7AA1F9: push    3
0x7AA1FB: push    eax
0x7AA1FC: lea     ecx, [esp+44h+var_1C]
0x7AA200: push    ecx
0x7AA201: call    sub_7E2370
0x7AA206: add     esp, 18h
0x7AA209: push    3; float
0x7AA20B: lea     edx, [esp+34h+var_1C]
0x7AA20F: push    edx; int
0x7AA210: mov     ecx, ebx
0x7AA212: mov     [esp+38h+var_4], esi
0x7AA216: call    sub_7A9820
0x7AA21B: mov     eax, [edi]
0x7AA21D: mov     ecx, [eax]
0x7AA21F: mov     edx, [ecx+18h]
0x7AA222: push    1
0x7AA224: push    eax
0x7AA225: call    edx
0x7AA227: lea     ecx, [esp+30h+var_1C]
0x7AA22B: mov     byte ptr [ebp+0CCh], 1
0x7AA232: mov     [ebp+0D8h], esi
0x7AA238: mov     [esp+30h+var_4], 0FFFFFFFFh
0x7AA240: call    sub_7E2400
0x7AA245: jmp     short loc_7AA260
0x7AA247: fldz
0x7AA249: mov     byte ptr [ebp+0CCh], 0
0x7AA250: fstp    dword ptr [ebp+0D0h]
0x7AA256: mov     dword ptr [ebp+0D8h], 0
0x7AA260: mov     ecx, dword ptr [esp+30h+var_C]
0x7AA264: mov     large fs:0, ecx
0x7AA26B: pop     ecx
0x7AA26C: pop     edi
0x7AA26D: pop     esi
0x7AA26E: pop     ebp
0x7AA26F: pop     ebx
0x7AA270: add     esp, 1Ch
0x7AA273: retn    8
