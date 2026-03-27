0x69DC90: push    esi
0x69DC91: mov     esi, ecx
0x69DC93: mov     ecx, [esi+1Ch]; this
0x69DC96: test    ecx, ecx
0x69DC98: jz      short loc_69DCFC
0x69DC9A: push    edi
0x69DC9B: call    TESObjectREFR_GetParentCell
0x69DCA0: mov     edi, [esp+8+arg_0]
0x69DCA4: test    edi, edi
0x69DCA6: mov     [esi+0Ch], eax
0x69DCA9: jz      short loc_69DCFB
0x69DCAB: test    eax, eax
0x69DCAD: jz      short loc_69DCFB
0x69DCAF: mov     ecx, eax; this
0x69DCB1: call    TESObjectCELL_GetNiNode?
0x69DCB6: test    eax, eax
0x69DCB8: jz      short loc_69DCFB
0x69DCBA: mov     eax, [edi+1Ch]
0x69DCBD: test    eax, eax
0x69DCBF: jz      short loc_69DCD2
0x69DCC1: mov     ecx, [esi+0Ch]; this
0x69DCC4: push    ebx
0x69DCC5: mov     ebx, [eax+1Ch]
0x69DCC8: call    TESObjectCELL_GetNiNode?
0x69DCCD: cmp     eax, ebx
0x69DCCF: pop     ebx
0x69DCD0: jz      short loc_69DCFB
0x69DCD2: mov     ecx, [esi+0Ch]
0x69DCD5: lea     eax, [edi+88h]
0x69DCDB: push    eax
0x69DCDC: call    sub_4C9C80
0x69DCE1: mov     ecx, [esi+0Ch]
0x69DCE4: push    3
0x69DCE6: push    eax
0x69DCE7: call    sub_441800
0x69DCEC: mov     edx, [eax]
0x69DCEE: push    1
0x69DCF0: mov     ecx, eax
0x69DCF2: mov     eax, [edx+84h]
0x69DCF8: push    edi
0x69DCF9: call    eax
0x69DCFB: pop     edi
0x69DCFC: pop     esi
0x69DCFD: retn    4
