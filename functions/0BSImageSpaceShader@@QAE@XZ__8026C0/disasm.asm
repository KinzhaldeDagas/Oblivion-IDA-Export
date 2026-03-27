0x8026C0: push    0FFFFFFFFh
0x8026C2: push    offset ??0BSImageSpaceShader@@QAE@XZ_SEH
0x8026C7: mov     eax, large fs:0
0x8026CD: push    eax
0x8026CE: push    ecx
0x8026CF: push    esi
0x8026D0: push    edi
0x8026D1: mov     eax, ds:0B30AACh
0x8026D6: xor     eax, esp
0x8026D8: push    eax
0x8026D9: lea     eax, [esp+1Ch+var_C]
0x8026DD: mov     large fs:0, eax
0x8026E3: mov     esi, ecx
0x8026E5: mov     [esp+1Ch+var_10], esi
0x8026E9: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x8026EE: mov     dword ptr [esi], offset ??_7BSImageSpaceShader@@6B@; const BSImageSpaceShader::`vftable'
0x8026F4: mov     [esp+1Ch+var_4], 0
0x8026FC: mov     dword ptr [esi+7Ch], 0
0x802703: mov     edi, [esi+7Ch]
0x802706: test    edi, edi
0x802708: mov     byte ptr [esp+1Ch+var_4], 1
0x80270D: jz      short loc_802732
0x80270F: lea     eax, [edi+4]
0x802712: push    eax; lpAddend
0x802713: call    dword ptr ds:0A2807Ch
0x802719: test    eax, eax
0x80271B: jnz     short loc_80272B
0x80271D: test    edi, edi
0x80271F: jz      short loc_80272B
0x802721: mov     edx, [edi]
0x802723: mov     eax, [edx]
0x802725: push    1
0x802727: mov     ecx, edi
0x802729: call    eax
0x80272B: mov     dword ptr [esi+7Ch], 0
0x802732: xor     eax, eax
0x802734: mov     [esi+80h], eax
0x80273A: mov     [esi+84h], eax
0x802740: mov     [esi+88h], eax
0x802746: mov     [esi+8Ch], eax
0x80274C: mov     eax, esi
0x80274E: mov     ecx, dword ptr [esp+1Ch+var_C]
0x802752: mov     large fs:0, ecx
0x802759: pop     ecx
0x80275A: pop     edi
0x80275B: pop     esi
0x80275C: add     esp, 10h
0x80275F: retn
