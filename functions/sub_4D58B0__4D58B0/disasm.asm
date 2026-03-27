0x4D58B0: push    0FFFFFFFFh
0x4D58B2: push    offset SEH_60EC60
0x4D58B7: mov     eax, large fs:0
0x4D58BD: push    eax
0x4D58BE: sub     esp, 8
0x4D58C1: push    ebx
0x4D58C2: push    ebp
0x4D58C3: push    esi
0x4D58C4: push    edi
0x4D58C5: mov     eax, ds:0B30AACh
0x4D58CA: xor     eax, esp
0x4D58CC: push    eax
0x4D58CD: lea     eax, [esp+28h+var_C]
0x4D58D1: mov     large fs:0, eax
0x4D58D7: mov     ebx, ecx
0x4D58D9: mov     eax, [ebx+54h]
0x4D58DC: xor     ebp, ebp
0x4D58DE: cmp     eax, ebp
0x4D58E0: jnz     loc_4D5A70
0x4D58E6: push    0DCh ; 'Ü'; Size
0x4D58EB: mov     byte ptr [ebx+26h], 2
0x4D58EF: call    FormHeapAlloc
0x4D58F4: add     esp, 4
0x4D58F7: mov     [esp+28h+var_10], eax
0x4D58FB: cmp     eax, ebp
0x4D58FD: mov     [esp+28h+var_4], ebp
0x4D5901: jz      short loc_4D590D
0x4D5903: push    ebp
0x4D5904: mov     ecx, eax; this
0x4D5906: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4D590B: mov     ebp, eax
0x4D590D: mov     eax, ds:0B3F9A8h
0x4D5912: mov     [ebp+54h], eax
0x4D5915: mov     ecx, ds:0B3F9ACh
0x4D591B: mov     [ebp+58h], ecx
0x4D591E: mov     edx, ds:0B3F9B0h
0x4D5924: mov     [ebp+5Ch], edx
0x4D5927: lea     edi, [ebp+30h]
0x4D592A: mov     ecx, 9
0x4D592F: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4D5934: push    0DCh ; 'Ü'; Size
0x4D5939: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4D5941: rep movsd
0x4D5943: call    FormHeapAlloc
0x4D5948: add     esp, 4
0x4D594B: mov     [esp+28h+var_10], eax
0x4D594F: test    eax, eax
0x4D5951: mov     [esp+28h+var_4], 1
0x4D5959: jz      short loc_4D5966
0x4D595B: push    0
0x4D595D: mov     ecx, eax; this
0x4D595F: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4D5964: jmp     short loc_4D5968
0x4D5966: xor     eax, eax
0x4D5968: mov     cl, ds:0B35C00h
0x4D596E: or      esi, 0FFFFFFFFh
0x4D5971: and     cl, 1
0x4D5974: mov     [esp+28h+var_4], esi
0x4D5978: mov     edi, 0FFFEh
0x4D597D: jz      short loc_4D5986
0x4D597F: or      word ptr [eax+18h], 1
0x4D5984: jmp     short loc_4D598A
0x4D5986: and     [eax+18h], di
0x4D598A: mov     edx, [ebp+0]
0x4D598D: push    0
0x4D598F: push    eax
0x4D5990: mov     eax, [edx+84h]
0x4D5996: mov     ecx, ebp
0x4D5998: call    eax
0x4D599A: push    0DCh ; 'Ü'; Size
0x4D599F: call    FormHeapAlloc
0x4D59A4: add     esp, 4
0x4D59A7: mov     [esp+28h+var_10], eax
0x4D59AB: test    eax, eax
0x4D59AD: mov     [esp+28h+var_4], 2
0x4D59B5: jz      short loc_4D59C2
0x4D59B7: push    0
0x4D59B9: mov     ecx, eax; this
0x4D59BB: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4D59C0: jmp     short loc_4D59C4
0x4D59C2: xor     eax, eax
0x4D59C4: mov     ecx, ds:0B35C00h
0x4D59CA: shr     ecx, 1
0x4D59CC: test    cl, 1
0x4D59CF: mov     [esp+28h+var_4], esi
0x4D59D3: jz      short loc_4D59DC
0x4D59D5: or      word ptr [eax+18h], 1
0x4D59DA: jmp     short loc_4D59E0
0x4D59DC: and     [eax+18h], di
0x4D59E0: mov     edx, [ebp+0]
0x4D59E3: push    0
0x4D59E5: push    eax
0x4D59E6: mov     eax, [edx+84h]
0x4D59EC: mov     ecx, ebp
0x4D59EE: call    eax
0x4D59F0: mov     cl, [ebx+24h]
0x4D59F3: and     cl, 1
0x4D59F6: neg     cl
0x4D59F8: sbb     ecx, ecx
0x4D59FA: and     ecx, 0FFFFFFFDh
0x4D59FD: add     ecx, 4
0x4D5A00: mov     esi, ecx
0x4D5A02: jz      short loc_4D5A20
0x4D5A04: mov     ecx, ebx
0x4D5A06: call    sub_4CA7A0
0x4D5A0B: mov     edx, [ebp+0]
0x4D5A0E: push    0
0x4D5A10: push    eax
0x4D5A11: mov     eax, [edx+84h]
0x4D5A17: mov     ecx, ebp
0x4D5A19: call    eax
0x4D5A1B: sub     esi, 1
0x4D5A1E: jnz     short loc_4D5A04
0x4D5A20: fldz
0x4D5A22: push    0; a3
0x4D5A24: push    ecx
0x4D5A25: fstp    [esp+30h+a2]; a2
0x4D5A28: mov     ecx, ebp; this
0x4D5A2A: call    NiAVObject_UpdateNiAVObject
0x4D5A2F: mov     esi, [ebx+54h]
0x4D5A32: cmp     esi, ebp
0x4D5A34: jz      short loc_4D5A63
0x4D5A36: test    esi, esi
0x4D5A38: jz      short loc_4D5A56
0x4D5A3A: lea     ecx, [esi+4]
0x4D5A3D: push    ecx; lpAddend
0x4D5A3E: call    dword ptr ds:0A2807Ch
0x4D5A44: test    eax, eax
0x4D5A46: jnz     short loc_4D5A56
0x4D5A48: test    esi, esi
0x4D5A4A: jz      short loc_4D5A56
0x4D5A4C: mov     edx, [esi]
0x4D5A4E: mov     eax, [edx]
0x4D5A50: push    1
0x4D5A52: mov     ecx, esi
0x4D5A54: call    eax
0x4D5A56: lea     ecx, [ebp+4]
0x4D5A59: push    ecx; lpAddend
0x4D5A5A: mov     [ebx+54h], ebp
0x4D5A5D: call    dword ptr ds:0A28078h
0x4D5A63: mov     ecx, ebx
0x4D5A65: call    sub_4D4A20
0x4D5A6A: mov     byte ptr [ebx+26h], 3
0x4D5A6E: mov     eax, ebp
0x4D5A70: mov     ecx, [esp+28h+var_C]
0x4D5A74: mov     large fs:0, ecx
0x4D5A7B: pop     ecx
0x4D5A7C: pop     edi
0x4D5A7D: pop     esi
0x4D5A7E: pop     ebp
0x4D5A7F: pop     ebx
0x4D5A80: add     esp, 14h
0x4D5A83: retn
