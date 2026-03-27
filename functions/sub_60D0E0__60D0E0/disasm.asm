0x60D0E0: push    esi
0x60D0E1: push    edi
0x60D0E2: mov     edi, ecx
0x60D0E4: mov     ecx, ds:0B33B00h
0x60D0EA: xor     esi, esi
0x60D0EC: call    sub_45A170
0x60D0F1: test    al, al
0x60D0F3: jz      short loc_60D0FA
0x60D0F5: mov     esi, 6
0x60D0FA: mov     eax, [edi+8]
0x60D0FD: add     esi, 4
0x60D100: test    eax, eax
0x60D102: jz      short loc_60D14D
0x60D104: mov     eax, [eax+0Ch]
0x60D107: push    ebx
0x60D108: mov     ebx, [esp+0Ch+arg_0]
0x60D10C: test    ebx, 20000h
0x60D112: jz      short loc_60D149
0x60D114: mov     ecx, ds:0B33A98h
0x60D11A: push    eax; _DWORD
0x60D11B: call    TESDataHandler_IsFormIDCreated?
0x60D120: test    al, al
0x60D122: jz      short loc_60D149
0x60D124: add     esi, 1
0x60D127: test    ebx, 10000h
0x60D12D: mov     [esp+0Ch+arg_0], esi
0x60D131: jnz     short loc_60D149
0x60D133: mov     ecx, [edi+8]
0x60D136: mov     eax, [ecx]
0x60D138: mov     edx, [eax+0DCh]
0x60D13E: call    edx
0x60D140: add     word ptr [esp+0Ch+arg_0], ax
0x60D145: mov     esi, [esp+0Ch+arg_0]
0x60D149: add     esi, 4
0x60D14C: pop     ebx
0x60D14D: add     esi, 8
0x60D150: cmp     byte ptr ds:0B05BACh, 0
0x60D157: mov     [esp+8+arg_0], esi
0x60D15B: jz      short loc_60D1DB
0x60D15D: mov     eax, ds:0B33B00h
0x60D162: mov     esi, [eax+84h]
0x60D168: test    esi, esi
0x60D16A: jz      short loc_60D1B3
0x60D16C: mov     ecx, [esi]
0x60D16E: push    ecx; a1
0x60D16F: call    TESForm_LookupByFormID
0x60D174: mov     edx, [esi+5]
0x60D177: add     esp, 4
0x60D17A: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D17F: push    0FEh ; 'þ'
0x60D184: push    edx
0x60D185: mov     edx, [eax]
0x60D187: mov     ecx, eax
0x60D189: mov     eax, [edx+0D4h]
0x60D18F: call    eax
0x60D191: mov     ecx, [esi]
0x60D193: mov     si, word ptr [esp+14h+arg_0]
0x60D198: push    eax
0x60D199: movzx   edx, si
0x60D19C: push    ecx
0x60D19D: push    edx; ArgList
0x60D19E: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x60D1A3: call    sub_40FEC0
0x60D1A8: add     esp, 1Ch
0x60D1AB: pop     edi
0x60D1AC: mov     ax, si
0x60D1AF: pop     esi
0x60D1B0: retn    8
0x60D1B3: mov     si, word ptr [esp+8+arg_0]
0x60D1B8: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D1BD: movzx   eax, si
0x60D1C0: push    0FEh ; 'þ'
0x60D1C5: push    eax; ArgList
0x60D1C6: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x60D1CB: call    sub_40FEC0
0x60D1D0: add     esp, 10h
0x60D1D3: pop     edi
0x60D1D4: mov     ax, si
0x60D1D7: pop     esi
0x60D1D8: retn    8
0x60D1DB: mov     ax, word ptr [esp+8+arg_0]
0x60D1E0: pop     edi
0x60D1E1: pop     esi
0x60D1E2: retn    8
