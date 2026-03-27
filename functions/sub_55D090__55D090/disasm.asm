0x55D090: sub     esp, 0Ch
0x55D093: cmp     [esp+0Ch+arg_0], 0
0x55D098: push    edi
0x55D099: mov     edi, ecx
0x55D09B: mov     [esp+10h+var_C], edi
0x55D09F: jz      loc_55D17C
0x55D0A5: movzx   eax, word ptr [edi+0B6h]
0x55D0AC: push    esi
0x55D0AD: xor     esi, esi
0x55D0AF: test    eax, eax
0x55D0B1: mov     [esp+14h+var_4], eax
0x55D0B5: mov     [esp+14h+var_8], esi
0x55D0B9: jbe     loc_55D17B
0x55D0BF: push    ebx
0x55D0C0: push    ebp
0x55D0C1: movzx   eax, word ptr [edi+0B6h]
0x55D0C8: cmp     eax, esi
0x55D0CA: jbe     loc_55D168
0x55D0D0: mov     ecx, [edi+0B0h]
0x55D0D6: mov     ecx, [ecx+esi*4]
0x55D0D9: test    ecx, ecx
0x55D0DB: jz      loc_55D168
0x55D0E1: mov     edx, [ecx]
0x55D0E3: mov     eax, [edx+10h]
0x55D0E6: call    eax
0x55D0E8: test    eax, eax
0x55D0EA: jz      loc_55D168
0x55D0F0: mov     ebp, [eax+0B8h]
0x55D0F6: test    ebp, ebp
0x55D0F8: jz      short loc_55D168
0x55D0FA: mov     eax, [ebp+8]
0x55D0FD: test    eax, eax
0x55D0FF: jz      short loc_55D168
0x55D101: mov     edi, [ebp+14h]
0x55D104: test    edi, edi
0x55D106: mov     ebx, [eax+40h]
0x55D109: jz      short loc_55D164
0x55D10B: test    ebx, ebx
0x55D10D: jz      short loc_55D164
0x55D10F: xor     esi, esi
0x55D111: test    ebx, ebx
0x55D113: jbe     short loc_55D155
0x55D115: mov     ecx, [edi+esi*4]
0x55D118: mov     eax, [ecx+8]
0x55D11B: mov     ecx, [esp+1Ch+arg_0]
0x55D11F: mov     edx, [ecx]
0x55D121: push    eax
0x55D122: mov     eax, [edx+58h]
0x55D125: call    eax
0x55D127: test    eax, eax
0x55D129: jz      short loc_55D133
0x55D12B: mov     ecx, [ebp+14h]
0x55D12E: mov     [ecx+esi*4], eax
0x55D131: jmp     short loc_55D14E
0x55D133: cmp     [esp+1Ch+arg_4], 0
0x55D138: jz      short loc_55D14E
0x55D13A: mov     edx, [edi+esi*4]
0x55D13D: mov     eax, [edx+8]
0x55D140: push    eax; ArgList
0x55D141: push    offset aCouldNotFindBo; "Could not find bone \"%s\" for the head"...
0x55D146: call    PrintError
0x55D14B: add     esp, 8
0x55D14E: add     esi, 1
0x55D151: cmp     esi, ebx
0x55D153: jb      short loc_55D115
0x55D155: mov     ecx, [esp+1Ch+var_C]
0x55D159: mov     esi, [esp+1Ch+var_8]
0x55D15D: mov     [ebp+10h], ecx
0x55D160: mov     edi, ecx
0x55D162: jmp     short loc_55D168
0x55D164: mov     edi, [esp+1Ch+var_C]
0x55D168: add     esi, 1
0x55D16B: cmp     esi, [esp+1Ch+var_4]
0x55D16F: mov     [esp+1Ch+var_8], esi
0x55D173: jb      loc_55D0C1
0x55D179: pop     ebp
0x55D17A: pop     ebx
0x55D17B: pop     esi
0x55D17C: pop     edi
0x55D17D: add     esp, 0Ch
0x55D180: retn    8
