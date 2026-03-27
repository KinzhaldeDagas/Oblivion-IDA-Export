0x7AFBB0: push    0FFFFFFFFh
0x7AFBB2: push    offset SEH_8122A0
0x7AFBB7: mov     eax, large fs:0
0x7AFBBD: push    eax
0x7AFBBE: push    ecx
0x7AFBBF: push    ebx
0x7AFBC0: push    esi
0x7AFBC1: push    edi
0x7AFBC2: mov     eax, ds:0B30AACh
0x7AFBC7: xor     eax, esp
0x7AFBC9: push    eax
0x7AFBCA: lea     eax, [esp+20h+var_C]
0x7AFBCE: mov     large fs:0, eax
0x7AFBD4: push    8; Size
0x7AFBD6: call    FormHeapAlloc
0x7AFBDB: add     esp, 4
0x7AFBDE: mov     [esp+20h+var_10], eax
0x7AFBE2: xor     edi, edi
0x7AFBE4: cmp     eax, edi
0x7AFBE6: mov     [esp+20h+var_4], edi
0x7AFBEA: jz      short loc_7AFBF5
0x7AFBEC: mov     ecx, eax
0x7AFBEE: call    ShaderDefinition__Init
0x7AFBF3: mov     edi, eax
0x7AFBF5: mov     eax, ds:0B43104h
0x7AFBFA: push    1; StreamCount
0x7AFBFC: push    2; a2
0x7AFBFE: push    eax; a1
0x7AFBFF: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7AFC07: call    CreateDX9ShaderDeclaration
0x7AFC0C: mov     esi, [edi]
0x7AFC0E: mov     ebx, eax
0x7AFC10: add     esp, 0Ch
0x7AFC13: cmp     esi, ebx
0x7AFC15: jz      short loc_7AFC47
0x7AFC17: test    esi, esi
0x7AFC19: jz      short loc_7AFC37
0x7AFC1B: lea     ecx, [esi+4]
0x7AFC1E: push    ecx; lpAddend
0x7AFC1F: call    dword ptr ds:0A2807Ch
0x7AFC25: test    eax, eax
0x7AFC27: jnz     short loc_7AFC37
0x7AFC29: test    esi, esi
0x7AFC2B: jz      short loc_7AFC37
0x7AFC2D: mov     edx, [esi]
0x7AFC2F: mov     eax, [edx]
0x7AFC31: push    1
0x7AFC33: mov     ecx, esi
0x7AFC35: call    eax
0x7AFC37: test    ebx, ebx
0x7AFC39: mov     [edi], ebx
0x7AFC3B: jz      short loc_7AFC47
0x7AFC3D: add     ebx, 4
0x7AFC40: push    ebx; lpAddend
0x7AFC41: call    dword ptr ds:0A28078h
0x7AFC47: mov     ecx, [edi]
0x7AFC49: mov     edx, [ecx]
0x7AFC4B: mov     eax, [edx+50h]
0x7AFC4E: push    0
0x7AFC50: push    2
0x7AFC52: push    0
0x7AFC54: push    0
0x7AFC56: push    0
0x7AFC58: call    eax
0x7AFC5A: mov     ecx, [edi]
0x7AFC5C: mov     edx, [ecx]
0x7AFC5E: mov     eax, [edx+50h]
0x7AFC61: push    0
0x7AFC63: push    1
0x7AFC65: push    5
0x7AFC67: push    7
0x7AFC69: push    1
0x7AFC6B: call    eax
0x7AFC6D: mov     ecx, [edi]
0x7AFC6F: test    ecx, ecx
0x7AFC71: jz      short loc_7AFC8E
0x7AFC73: mov     edx, [ecx]
0x7AFC75: mov     eax, [edx+4]
0x7AFC78: call    eax
0x7AFC7A: test    eax, eax
0x7AFC7C: jz      short loc_7AFC8E
0x7AFC7E: mov     edi, edi
0x7AFC80: cmp     eax, offset dword_B3F684
0x7AFC85: jz      short loc_7AFC8E
0x7AFC87: mov     eax, [eax+4]
0x7AFC8A: test    eax, eax
0x7AFC8C: jnz     short loc_7AFC80
0x7AFC8E: push    0C4h ; 'Ä'; Size
0x7AFC93: call    FormHeapAlloc
0x7AFC98: add     esp, 4
0x7AFC9B: mov     [esp+20h+var_10], eax
0x7AFC9F: test    eax, eax
0x7AFCA1: mov     [esp+20h+var_4], 1
0x7AFCA9: jz      short loc_7AFCB6
0x7AFCAB: mov     ecx, eax; this
0x7AFCAD: call    ??0MapShader@@QAE@XZ; MapShader::MapShader(void)
0x7AFCB2: mov     esi, eax
0x7AFCB4: jmp     short loc_7AFCB8
0x7AFCB6: xor     esi, esi
0x7AFCB8: mov     edx, [esi]
0x7AFCBA: mov     eax, [edx+84h]
0x7AFCC0: mov     ecx, esi
0x7AFCC2: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7AFCCA: call    eax
0x7AFCCC: mov     edx, [esi]
0x7AFCCE: mov     eax, [edx+0B0h]
0x7AFCD4: mov     ecx, esi
0x7AFCD6: call    eax
0x7AFCD8: mov     edx, [esi]
0x7AFCDA: mov     eax, [edx+0B4h]
0x7AFCE0: mov     ecx, esi
0x7AFCE2: call    eax
0x7AFCE4: mov     ebx, [edi+4]
0x7AFCE7: cmp     ebx, esi
0x7AFCE9: jz      short loc_7AFD18
0x7AFCEB: test    ebx, ebx
0x7AFCED: jz      short loc_7AFD0B
0x7AFCEF: lea     ecx, [ebx+4]
0x7AFCF2: push    ecx; lpAddend
0x7AFCF3: call    dword ptr ds:0A2807Ch
0x7AFCF9: test    eax, eax
0x7AFCFB: jnz     short loc_7AFD0B
0x7AFCFD: test    ebx, ebx
0x7AFCFF: jz      short loc_7AFD0B
0x7AFD01: mov     edx, [ebx]
0x7AFD03: mov     eax, [edx]
0x7AFD05: push    1
0x7AFD07: mov     ecx, ebx
0x7AFD09: call    eax
0x7AFD0B: mov     [edi+4], esi
0x7AFD0E: add     esi, 4
0x7AFD11: push    esi; lpAddend
0x7AFD12: call    dword ptr ds:0A28078h
0x7AFD18: mov     ecx, [edi+4]
0x7AFD1B: mov     edx, [ecx]
0x7AFD1D: mov     eax, [edi]
0x7AFD1F: mov     edx, [edx+54h]
0x7AFD22: push    eax
0x7AFD23: call    edx
0x7AFD25: mov     eax, edi
0x7AFD27: mov     ecx, dword ptr [esp+20h+var_C]
0x7AFD2B: mov     large fs:0, ecx
0x7AFD32: pop     ecx
0x7AFD33: pop     edi
0x7AFD34: pop     esi
0x7AFD35: pop     ebx
0x7AFD36: add     esp, 10h
0x7AFD39: retn
