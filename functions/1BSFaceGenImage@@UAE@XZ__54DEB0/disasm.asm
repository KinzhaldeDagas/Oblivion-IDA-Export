0x54DEB0: push    0FFFFFFFFh
0x54DEB2: push    offset ??1BSFaceGenImage@@UAE@XZ_SEH
0x54DEB7: mov     eax, large fs:0
0x54DEBD: push    eax
0x54DEBE: sub     esp, 0Ch
0x54DEC1: push    ebx
0x54DEC2: push    ebp
0x54DEC3: push    esi
0x54DEC4: push    edi
0x54DEC5: mov     eax, ds:0B30AACh
0x54DECA: xor     eax, esp
0x54DECC: push    eax
0x54DECD: lea     eax, [esp+2Ch+var_C]
0x54DED1: mov     large fs:0, eax
0x54DED7: mov     ebp, ecx
0x54DED9: mov     [esp+2Ch+var_18], ebp
0x54DEDD: mov     dword ptr [ebp+0], offset ??_7BSFaceGenImage@@6B@; const BSFaceGenImage::`vftable'
0x54DEE4: mov     edi, [ebp+14h]
0x54DEE7: cmp     [ebp+10h], edi
0x54DEEA: lea     esi, [ebp+0Ch]
0x54DEED: mov     [esp+2Ch+var_4], 2
0x54DEF5: jbe     short loc_54DEFC
0x54DEF7: call    __invalid_parameter_noinfo
0x54DEFC: mov     ebx, [esi+4]
0x54DEFF: cmp     ebx, [esi+8]
0x54DF02: jbe     short loc_54DF09
0x54DF04: call    __invalid_parameter_noinfo
0x54DF09: push    edi
0x54DF0A: push    esi
0x54DF0B: push    ebx
0x54DF0C: push    esi
0x54DF0D: lea     eax, [esp+3Ch+var_14]
0x54DF11: push    eax
0x54DF12: mov     ecx, esi
0x54DF14: call    sub_6F14D0
0x54DF19: mov     edi, [ebp+8]
0x54DF1C: xor     ebx, ebx
0x54DF1E: cmp     edi, ebx
0x54DF20: jz      short loc_54DF41
0x54DF22: lea     ecx, [edi+4]
0x54DF25: push    ecx; lpAddend
0x54DF26: call    dword ptr ds:0A2807Ch
0x54DF2C: test    eax, eax
0x54DF2E: jnz     short loc_54DF3E
0x54DF30: cmp     edi, ebx
0x54DF32: jz      short loc_54DF3E
0x54DF34: mov     edx, [edi]
0x54DF36: mov     eax, [edx]
0x54DF38: push    1
0x54DF3A: mov     ecx, edi
0x54DF3C: call    eax
0x54DF3E: mov     [ebp+8], ebx
0x54DF41: mov     eax, [esi+4]
0x54DF44: cmp     eax, ebx
0x54DF46: jz      short loc_54DF51
0x54DF48: push    eax
0x54DF49: call    FormHeapFree
0x54DF4E: add     esp, 4
0x54DF51: mov     [esi+4], ebx
0x54DF54: mov     [esi+8], ebx
0x54DF57: mov     [esi+0Ch], ebx
0x54DF5A: mov     esi, [ebp+8]
0x54DF5D: cmp     esi, ebx
0x54DF5F: mov     byte ptr [esp+2Ch+var_4], bl
0x54DF63: jz      short loc_54DF81
0x54DF65: lea     ecx, [esi+4]
0x54DF68: push    ecx; lpAddend
0x54DF69: call    dword ptr ds:0A2807Ch
0x54DF6F: test    eax, eax
0x54DF71: jnz     short loc_54DF81
0x54DF73: cmp     esi, ebx
0x54DF75: jz      short loc_54DF81
0x54DF77: mov     edx, [esi]
0x54DF79: mov     eax, [edx]
0x54DF7B: push    1
0x54DF7D: mov     ecx, esi
0x54DF7F: call    eax
0x54DF81: push    offset NiRefObject_objcount; lpAddend
0x54DF86: mov     dword ptr [ebp+0], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x54DF8D: call    dword ptr ds:0A2807Ch
0x54DF93: mov     ecx, dword ptr [esp+2Ch+var_C]
0x54DF97: mov     large fs:0, ecx
0x54DF9E: pop     ecx
0x54DF9F: pop     edi
0x54DFA0: pop     esi
0x54DFA1: pop     ebp
0x54DFA2: pop     ebx
0x54DFA3: add     esp, 18h
0x54DFA6: retn
