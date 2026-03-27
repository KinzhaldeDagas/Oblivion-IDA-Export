0x555A80: push    0FFFFFFFFh
0x555A82: push    offset SEH_555A80
0x555A87: mov     eax, large fs:0
0x555A8D: push    eax
0x555A8E: sub     esp, 7Ch
0x555A91: push    ebx
0x555A92: push    ebp
0x555A93: push    esi
0x555A94: push    edi
0x555A95: mov     eax, ds:0B30AACh
0x555A9A: xor     eax, esp
0x555A9C: push    eax
0x555A9D: lea     eax, [esp+9Ch+var_C]
0x555AA4: mov     large fs:0, eax
0x555AAA: xor     ebx, ebx
0x555AAC: mov     [esp+9Ch+var_80], ebx
0x555AB0: mov     [esp+9Ch+var_7C], ebx
0x555AB4: mov     [esp+9Ch+var_4], ebx
0x555ABB: mov     [esp+9Ch+var_88], ebx
0x555ABF: xor     esi, esi
0x555AC1: mov     [esp+9Ch+var_78], ebx
0x555AC5: mov     [esp+9Ch+var_74], ebx
0x555AC9: mov     [esp+9Ch+var_60], esi
0x555ACD: mov     [esp+9Ch+var_5C], bx
0x555AD2: mov     [esp+9Ch+var_5A], bx
0x555AD7: mov     [esp+9Ch+var_50], ebx
0x555ADB: mov     [esp+9Ch+var_4C], bx
0x555AE0: mov     [esp+9Ch+var_4A], bx
0x555AE5: mov     [esp+9Ch+var_58], ebx
0x555AE9: mov     [esp+9Ch+var_54], bx
0x555AEE: mov     [esp+9Ch+var_52], bx
0x555AF3: mov     [esp+9Ch+var_40], ebx
0x555AF7: mov     [esp+9Ch+var_3C], bx
0x555AFC: mov     [esp+9Ch+var_3A], bx
0x555B01: mov     [esp+9Ch+var_38], ebx
0x555B05: mov     [esp+9Ch+var_34], bx
0x555B0A: mov     [esp+9Ch+var_32], bx
0x555B0F: mov     [esp+9Ch+var_48], ebx
0x555B13: mov     [esp+9Ch+var_44], bx
0x555B18: mov     [esp+9Ch+var_42], bx
0x555B1D: fld     dword ptr ds:0A3721Ch
0x555B23: push    ecx
0x555B24: lea     ecx, [esp+0A0h+var_30]
0x555B28: fstp    [esp+0A0h+var_A0]; float
0x555B2B: mov     byte ptr [esp+0A0h+var_4], 7
0x555B33: call    sub_70FD80
0x555B38: xor     ebp, ebp
0x555B3A: mov     [esp+9Ch+var_84], ebp
0x555B3E: mov     edi, edi
0x555B40: cmp     ebp, 2
0x555B43: jnz     short loc_555B51
0x555B45: mov     eax, [esp+9Ch+arg_8]
0x555B4C: cmp     [eax+70h], ebx
0x555B4F: jmp     short loc_555B60
0x555B51: cmp     ebp, 1
0x555B54: jnz     short loc_555B66
0x555B56: mov     ecx, [esp+9Ch+arg_8]
0x555B5D: cmp     [ecx+70h], ebp
0x555B60: jz      loc_556199
0x555B66: mov     edx, [esp+9Ch+arg_8]
0x555B6D: cmp     [edx+7Eh], bx
0x555B71: jz      loc_556199
0x555B77: mov     eax, edx
0x555B79: mov     ecx, [eax+78h]
0x555B7C: cmp     [ecx+ebp*4], ebx
0x555B7F: lea     eax, [ecx+ebp*4]
0x555B82: jz      loc_556199
0x555B88: mov     ecx, [eax]
0x555B8A: movzx   eax, word ptr [ecx+8]
0x555B8E: cmp     ax, 0FFFFh
0x555B92: jnz     short loc_555BAD
0x555B94: mov     eax, [ecx+4]
0x555B97: lea     edi, [eax+1]
0x555B9A: lea     ebx, [ebx+0]
0x555BA0: mov     dl, [eax]
0x555BA2: add     eax, 1
0x555BA5: cmp     dl, bl
0x555BA7: jnz     short loc_555BA0
0x555BA9: sub     eax, edi
0x555BAB: jmp     short loc_555BB0
0x555BAD: movzx   eax, ax
0x555BB0: cmp     eax, ebx
0x555BB2: jz      loc_556199
0x555BB8: mov     edx, [esp+9Ch+arg_8]
0x555BBF: cmp     [edx+8Eh], bx
0x555BC6: jz      loc_556199
0x555BCC: mov     eax, edx
0x555BCE: mov     edx, [eax+88h]
0x555BD4: cmp     [edx+ebp*4], ebx
0x555BD7: lea     eax, [edx+ebp*4]
0x555BDA: jz      loc_556199
0x555BE0: mov     eax, [eax]
0x555BE2: movzx   edx, word ptr [eax+8]
0x555BE6: cmp     dx, 0FFFFh
0x555BEB: jnz     short loc_555C00
0x555BED: mov     eax, [eax+4]
0x555BF0: lea     edi, [eax+1]
0x555BF3: mov     dl, [eax]
0x555BF5: add     eax, 1
0x555BF8: cmp     dl, bl
0x555BFA: jnz     short loc_555BF3
0x555BFC: sub     eax, edi
0x555BFE: jmp     short loc_555C03
0x555C00: movzx   eax, dx
0x555C03: cmp     eax, ebx
0x555C05: jz      loc_556199
0x555C0B: mov     eax, [ecx]
0x555C0D: mov     edx, [eax+14h]
0x555C10: call    edx
0x555C12: push    eax; ArgList
0x555C13: lea     eax, [esp+4+ArgList]
0x555C17: push    offset aMeshesS; "Meshes\\%s"
0x555C1C: push    eax; int
0x555C1D: call    BSStringT_Static_Format
0x555C22: mov     edi, [esp+0Ch+arg_A4]
0x555C29: add     esp, 0Ch
0x555C2C: cmp     [edi+0C0h], ebx
0x555C32: jnz     short loc_555C6C
0x555C34: cmp     ebp, ebx
0x555C36: jnz     short loc_555C6C
0x555C38: mov     esi, [esp+ArgList]
0x555C3C: lea     ecx, [esp+arg_50]
0x555C40: push    esi
0x555C41: push    ecx
0x555C42: call    sub_551B40
0x555C47: mov     edx, [esp+8+arg_50]
0x555C4B: push    0FFFFFFFFh
0x555C4D: push    ebx
0x555C4E: push    ebx
0x555C4F: push    edx
0x555C50: call    sub_42BDE0
0x555C55: add     esp, 18h
0x555C58: test    eax, eax
0x555C5A: jz      short loc_555C79
0x555C5C: lea     eax, [esp+ArgList]
0x555C60: push    esi
0x555C61: push    eax
0x555C62: call    sub_551B40
0x555C67: add     esp, 8
0x555C6A: jmp     short loc_555C75
0x555C6C: cmp     ebp, 6; switch 7 cases
0x555C6F: ja      def_555C79
0x555C75: mov     esi, [esp+ArgList]
0x555C79: jmp     ds:jpt_555C79[ebp*4]; switch jump
0x555C80: push    ebx; jumptable 00555C79 cases 0-2
0x555C81: push    1
0x555C83: lea     ecx, [esp+8+arg_58]
0x555C87: push    esi
0x555C88: push    ecx
0x555C89: call    sub_5500C0
0x555C8E: add     esp, 8
0x555C91: push    eax
0x555C92: lea     edx, [esp+0Ch+arg_40]
0x555C96: push    esi
0x555C97: push    edx
0x555C98: call    sub_550010
0x555C9D: add     esp, 8
0x555CA0: push    eax
0x555CA1: push    esi
0x555CA2: lea     eax, [esp+14h+arg_48]
0x555CA6: push    esi
0x555CA7: push    eax
0x555CA8: call    sub_54FEB0
0x555CAD: add     esp, 8
0x555CB0: push    eax
0x555CB1: call    sub_553620
0x555CB6: add     esp, 18h
0x555CB9: mov     [esp+arg_18], eax
0x555CBD: jmp     loc_555EDB
0x555CC2: lea     ecx, [esp+arg_40]; jumptable 00555C79 cases 3-6
0x555CC6: push    esi
0x555CC7: push    ecx
0x555CC8: call    sub_550010
0x555CCD: lea     edx, [esp+8+arg_48]
0x555CD1: push    esi
0x555CD2: push    edx
0x555CD3: mov     ebp, eax
0x555CD5: call    sub_54FEB0
0x555CDA: add     esp, 10h
0x555CDD: mov     edi, eax
0x555CDF: mov     [esp+arg_18], ebx
0x555CE3: cmp     edi, ebx
0x555CE5: mov     [esp+arg_94], 8
0x555CED: jnz     short loc_555D04
0x555CEF: mov     ebp, [esp+arg_14]
0x555CF3: mov     [esp+arg_94], 7
0x555CFB: mov     [esp+arg_18], ebx
0x555CFF: jmp     loc_556199
0x555D04: cmp     ds:0B39B80h, ebx
0x555D0A: jnz     short loc_555D11
0x555D0C: call    sub_553550
0x555D11: mov     eax, ds:0B39B80h
0x555D16: cmp     [eax+0DACh], ebx
0x555D1C: jnz     loc_555DAC
0x555D22: push    20h ; ' '; Size
0x555D24: call    FormHeapAlloc
0x555D29: add     esp, 4
0x555D2C: mov     [esp+arg_34], eax
0x555D30: cmp     eax, ebx
0x555D32: mov     [esp+arg_94], 9
0x555D3A: jz      short loc_555D47
0x555D3C: mov     ecx, eax; this
0x555D3E: call    ??0BSFaceGenModelMap@@QAE@XZ; BSFaceGenModelMap::BSFaceGenModelMap(void)
0x555D43: mov     esi, eax
0x555D45: jmp     short loc_555D49
0x555D47: xor     esi, esi
0x555D49: cmp     ds:0B39B80h, ebx
0x555D4F: mov     [esp+arg_94], 8
0x555D57: jnz     short loc_555D5E
0x555D59: call    sub_553550
0x555D5E: mov     ecx, ds:0B39B80h
0x555D64: mov     [ecx+0DACh], esi
0x555D6A: mov     edx, ds:0B39B80h
0x555D70: mov     ecx, [edx+0DACh]
0x555D76: mov     eax, ds:0B120ECh
0x555D7B: push    ebx
0x555D7C: mov     [ecx+18h], eax
0x555D7F: call    sub_5506B0
0x555D84: cmp     ds:0B39B80h, ebx
0x555D8A: mov     esi, ds:0B120F4h
0x555D90: jnz     short loc_555D97
0x555D92: call    sub_553550
0x555D97: mov     ecx, ds:0B39B80h
0x555D9D: mov     ecx, [ecx+0DACh]
0x555DA3: push    ebx
0x555DA4: mov     [ecx+1Ch], esi
0x555DA7: call    sub_5506B0
0x555DAC: cmp     ds:0B39B80h, ebx
0x555DB2: jnz     short loc_555DB9
0x555DB4: call    sub_553550
0x555DB9: mov     eax, ds:0B39B80h
0x555DBE: mov     ecx, [eax+0DACh]
0x555DC4: lea     edx, [esp+arg_18]
0x555DC8: push    edx
0x555DC9: push    edi
0x555DCA: call    sub_5515B0
0x555DCF: test    al, al
0x555DD1: jz      short loc_555E15
0x555DD3: mov     esi, [esp+arg_18]
0x555DD7: cmp     [esi+8], ebx
0x555DDA: jnz     short loc_555DEC
0x555DDC: mov     ecx, [esp+ArgList]
0x555DE0: push    ebx; char
0x555DE1: push    ebx; int
0x555DE2: push    ebp; int
0x555DE3: push    ecx; ArgList
0x555DE4: push    edi; int
0x555DE5: mov     ecx, esi
0x555DE7: call    sub_559B50
0x555DEC: lea     edx, [esi+4]
0x555DEF: push    edx; lpAddend
0x555DF0: mov     [esp+4+arg_94], 7
0x555DF8: call    dword ptr ds:0A2807Ch
0x555DFE: test    eax, eax
0x555E00: jnz     loc_555EC8
0x555E06: mov     eax, [esi]
0x555E08: mov     edx, [eax]
0x555E0A: push    1
0x555E0C: mov     ecx, esi
0x555E0E: call    edx
0x555E10: jmp     loc_555EC8
0x555E15: push    1Ch; Size
0x555E17: call    FormHeapAlloc
0x555E1C: add     esp, 4
0x555E1F: mov     [esp+arg_34], eax
0x555E23: cmp     eax, ebx
0x555E25: mov     [esp+arg_94], 0Ah
0x555E2D: jz      short loc_555E38
0x555E2F: mov     ecx, eax; this
0x555E31: call    ??0BSFaceGenModel@@QAE@XZ; BSFaceGenModel::BSFaceGenModel(void)
0x555E36: jmp     short loc_555E3A
0x555E38: xor     eax, eax
0x555E3A: push    eax; a2
0x555E3B: lea     ecx, [esp+4+arg_18]; this
0x555E3F: mov     [esp+4+arg_94], 8
0x555E47: call    NiSmartPointer_Set??
0x555E4C: mov     eax, [esp+ArgList]
0x555E50: mov     esi, [esp+arg_18]
0x555E54: push    ebx; char
0x555E55: push    ebx; int
0x555E56: push    ebp; int
0x555E57: push    eax; ArgList
0x555E58: push    edi; int
0x555E59: mov     ecx, esi
0x555E5B: call    sub_559B50
0x555E60: test    al, al
0x555E62: jz      short loc_555E86
0x555E64: cmp     ds:0B39B80h, ebx
0x555E6A: jnz     short loc_555E71
0x555E6C: call    sub_553550
0x555E71: mov     ecx, ds:0B39B80h
0x555E77: mov     ecx, [ecx+0DACh]
0x555E7D: push    esi
0x555E7E: push    edi
0x555E7F: call    sub_551450
0x555E84: jmp     short loc_555EA4
0x555E86: cmp     esi, ebx
0x555E88: jz      short loc_555EA4
0x555E8A: lea     edx, [esi+4]
0x555E8D: push    edx; lpAddend
0x555E8E: call    dword ptr ds:0A2807Ch
0x555E94: test    eax, eax
0x555E96: jnz     short loc_555EA2
0x555E98: mov     eax, [esi]
0x555E9A: mov     edx, [eax]
0x555E9C: push    1
0x555E9E: mov     ecx, esi
0x555EA0: call    edx
0x555EA2: xor     esi, esi
0x555EA4: cmp     esi, ebx
0x555EA6: mov     [esp+arg_94], 7
0x555EAE: jz      short loc_555EC8
0x555EB0: lea     eax, [esi+4]
0x555EB3: push    eax; lpAddend
0x555EB4: call    dword ptr ds:0A2807Ch
0x555EBA: test    eax, eax
0x555EBC: jnz     short loc_555EC8
0x555EBE: mov     edx, [esi]
0x555EC0: mov     eax, [edx]
0x555EC2: push    1
0x555EC4: mov     ecx, esi
0x555EC6: call    eax
0x555EC8: mov     edi, [esp+arg_A4]
0x555ECF: mov     ebp, [esp+arg_14]
0x555ED3: mov     [esp+arg_18], esi
