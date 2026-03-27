0x8C5340: push    0FFFFFFFFh
0x8C5342: push    offset SEH_8C5340
0x8C5347: mov     eax, large fs:0
0x8C534D: push    eax
0x8C534E: push    ebx
0x8C534F: push    esi
0x8C5350: push    edi
0x8C5351: mov     eax, ds:0B30AACh
0x8C5356: xor     eax, esp
0x8C5358: push    eax
0x8C5359: lea     eax, [esp+1Ch+var_C]
0x8C535D: mov     large fs:0, eax
0x8C5363: mov     edi, ecx
0x8C5365: mov     ebx, [esp+1Ch+arg_0]
0x8C5369: test    ebx, ebx
0x8C536B: jz      short loc_8C53D5
0x8C536D: mov     ecx, ds:0BA7D98h
0x8C5373: mov     eax, [ecx]
0x8C5375: mov     edx, [eax+10h]
0x8C5378: push    24h ; '$'
0x8C537A: push    40h ; '@'
0x8C537C: call    edx
0x8C537E: mov     word ptr [eax+4], 40h ; '@'
0x8C5384: mov     [esp+1Ch+arg_0], eax
0x8C5388: push    ebx
0x8C5389: mov     ecx, eax; this
0x8C538B: mov     [esp+20h+var_4], 0
0x8C5393: call    ??0hkPackedNiTriStripsShape@@QAE@XZ; hkPackedNiTriStripsShape::hkPackedNiTriStripsShape(void)
0x8C5398: mov     esi, eax
0x8C539A: mov     eax, [edi]
0x8C539C: mov     edx, [eax+4Ch]
0x8C539F: push    esi
0x8C53A0: mov     ecx, edi
0x8C53A2: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8C53AA: call    edx
0x8C53AC: cmp     word ptr [esi+4], 0
0x8C53B1: jz      short loc_8C53CB
0x8C53B3: add     word ptr [esi+6], 0FFFFh
0x8C53B8: movzx   eax, word ptr [esi+6]
0x8C53BC: test    ax, ax
0x8C53BF: jnz     short loc_8C53CB
0x8C53C1: mov     eax, [esi]
0x8C53C3: mov     edx, [eax]
0x8C53C5: push    1
0x8C53C7: mov     ecx, esi
0x8C53C9: call    edx
0x8C53CB: mov     eax, [edi]
0x8C53CD: mov     edx, [eax+7Ch]
0x8C53D0: push    ebx
0x8C53D1: mov     ecx, edi
0x8C53D3: call    edx
0x8C53D5: mov     ecx, [esp+1Ch+var_C]
0x8C53D9: mov     large fs:0, ecx
0x8C53E0: pop     ecx
0x8C53E1: pop     edi
0x8C53E2: pop     esi
0x8C53E3: pop     ebx
0x8C53E4: add     esp, 0Ch
0x8C53E7: retn    4
