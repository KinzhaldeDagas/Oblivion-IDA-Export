0x8C8170: push    0FFFFFFFFh
0x8C8172: push    offset SEH_8C8970
0x8C8177: mov     eax, large fs:0
0x8C817D: push    eax
0x8C817E: push    ecx
0x8C817F: push    esi
0x8C8180: push    edi
0x8C8181: mov     eax, ds:0B30AACh
0x8C8186: xor     eax, esp
0x8C8188: push    eax
0x8C8189: lea     eax, [esp+1Ch+var_C]
0x8C818D: mov     large fs:0, eax
0x8C8193: mov     esi, ecx
0x8C8195: push    offset stru_BA7C80; lpCriticalSection
0x8C819A: call    dword ptr ds:0A2806Ch
0x8C81A0: call    dword ptr ds:0A2808Ch
0x8C81A6: add     dword ptr ds:0BA7CFCh, 1
0x8C81AD: push    14h; Size
0x8C81AF: mov     ds:0BA7CF8h, eax
0x8C81B4: call    FormHeapAlloc
0x8C81B9: add     esp, 4
0x8C81BC: mov     [esp+1Ch+var_10], eax
0x8C81C0: test    eax, eax
0x8C81C2: mov     [esp+1Ch+var_4], 0
0x8C81CA: jz      short loc_8C81D7
0x8C81CC: mov     ecx, eax; this
0x8C81CE: call    ??0bhkCylinderShape@@QAE@XZ; bhkCylinderShape::bhkCylinderShape(void)
0x8C81D3: mov     edi, eax
0x8C81D5: jmp     short loc_8C81D9
0x8C81D7: xor     edi, edi
0x8C81D9: mov     ecx, [esp+1Ch+arg_0]
0x8C81DD: mov     eax, [esi]
0x8C81DF: mov     edx, [eax+80h]
0x8C81E5: push    ecx
0x8C81E6: push    edi
0x8C81E7: mov     ecx, esi
0x8C81E9: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8C81F1: call    edx
0x8C81F3: sub     dword ptr ds:0BA7CFCh, 1
0x8C81FA: jnz     short loc_8C8206
0x8C81FC: mov     dword ptr ds:0BA7CF8h, 0
0x8C8206: push    offset stru_BA7C80; lpCriticalSection
0x8C820B: call    dword ptr ds:0A28074h
0x8C8211: mov     eax, edi
0x8C8213: mov     ecx, dword ptr [esp+1Ch+var_C]
0x8C8217: mov     large fs:0, ecx
0x8C821E: pop     ecx
0x8C821F: pop     edi
0x8C8220: pop     esi
0x8C8221: add     esp, 10h
0x8C8224: retn    4
