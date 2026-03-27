0x78BE70: push    ebp
0x78BE71: mov     ebp, esp
0x78BE73: push    0FFFFFFFFh
0x78BE75: push    offset SEH_78BE70
0x78BE7A: mov     eax, large fs:0
0x78BE80: push    eax
0x78BE81: sub     esp, 40h
0x78BE84: push    ebx
0x78BE85: push    esi
0x78BE86: push    edi
0x78BE87: mov     eax, ds:0B30AACh
0x78BE8C: xor     eax, ebp
0x78BE8E: push    eax
0x78BE8F: lea     eax, [ebp+var_C]
0x78BE92: mov     large fs:0, eax
0x78BE98: mov     [ebp+var_10], esp
0x78BE9B: cmp     byte ptr [ecx+45h], 0
0x78BE9F: mov     [ebp+var_4], 0
0x78BEA6: jnz     short loc_78BF00
0x78BEA8: mov     eax, [ebp+arg_0]
0x78BEAB: mov     edx, [ebp+arg_4]
0x78BEAE: movzx   edi, word ptr ds:0B42A10h
0x78BEB5: lea     esi, [eax+edx-1]
0x78BEB9: cmp     esi, edi
0x78BEBB: jnb     short loc_78BEDB
0x78BEBD: mov     ecx, [ecx+10h]
0x78BEC0: push    edx
0x78BEC1: push    eax
0x78BEC2: call    sub_793C40
0x78BEC7: mov     ecx, [ebp+var_C]
0x78BECA: mov     large fs:0, ecx
0x78BED1: pop     ecx
0x78BED2: pop     edi
0x78BED3: pop     esi
0x78BED4: pop     ebx
0x78BED5: mov     esp, ebp
0x78BED7: pop     ebp
0x78BED8: retn    8
0x78BEDB: push    3Ch ; '<'; MaxCount
0x78BEDD: push    offset aSetlocalmatric; "SetLocalMatrices() parameters exceed av"...
0x78BEE2: mov     ecx, offset dword_B2B614
0x78BEE7: call    sub_414500
0x78BEEC: mov     ecx, [ebp+var_C]
0x78BEEF: mov     large fs:0, ecx
0x78BEF6: pop     ecx
0x78BEF7: pop     edi
0x78BEF8: pop     esi
0x78BEF9: pop     ebx
0x78BEFA: mov     esp, ebp
0x78BEFC: pop     ebp
0x78BEFD: retn    8
0x78BF00: push    40h ; '@'
0x78BF02: push    offset aSetlocalmatr_0; "SetLocalMatrices() has no effect after "...
0x78BF07: jmp     short loc_78BEE2
0x78BF09: mov     ecx, [ebp+var_14]
0x78BF0C: mov     eax, [ecx]
0x78BF0E: mov     edx, [eax+4]
0x78BF11: call    edx
0x78BF13: push    eax
0x78BF14: push    offset aCspeedtreer_10; "CSpeedTreeRT::SetLocalMatrices"
0x78BF19: push    offset aSFailedS; "%s - failed [%s]"
0x78BF1E: lea     esi, [ebp+var_30]
0x78BF21: call    sub_7A54A0
0x78BF26: add     esp, 0Ch
0x78BF29: cmp     dword ptr [eax+18h], 10h
0x78BF2D: mov     byte ptr [ebp+var_4], 2
0x78BF31: jb      short loc_78BF38
0x78BF33: mov     eax, [eax+4]
0x78BF36: jmp     short loc_78BF3B
0x78BF38: add     eax, 4
0x78BF3B: push    eax; Src
0x78BF3C: call    sub_7895E0
0x78BF41: add     esp, 4
0x78BF44: lea     ecx, [ebp+var_30]
0x78BF47: call    sub_79AB00
0x78BF4C: mov     eax, offset loc_78BF52
0x78BF51: retn
0x78BF52: mov     ecx, [ebp+var_C]
0x78BF55: mov     large fs:0, ecx
0x78BF5C: pop     ecx
0x78BF5D: pop     edi
0x78BF5E: pop     esi
0x78BF5F: pop     ebx
0x78BF60: mov     esp, ebp
0x78BF62: pop     ebp
0x78BF63: retn    8
0x78BF66: push    offset aCspeedtreer_10; "CSpeedTreeRT::SetLocalMatrices"
0x78BF6B: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78BF70: lea     esi, [ebp+var_4C]
0x78BF73: call    sub_7A54A0
0x78BF78: add     esp, 8
0x78BF7B: cmp     dword ptr [eax+18h], 10h
0x78BF7F: mov     byte ptr [ebp+var_4], 3
0x78BF83: jb      short loc_78BF8A
0x78BF85: mov     eax, [eax+4]
0x78BF88: jmp     short loc_78BF8D
0x78BF8A: add     eax, 4
0x78BF8D: push    eax; Src
0x78BF8E: call    sub_7895E0
0x78BF93: add     esp, 4
0x78BF96: lea     ecx, [ebp+var_4C]
0x78BF99: call    sub_79AB00
0x78BF9E: mov     eax, offset loc_78BEEC
0x78BFA3: retn
