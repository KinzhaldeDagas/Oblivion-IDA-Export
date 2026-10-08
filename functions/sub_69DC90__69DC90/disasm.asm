0x69DC90: push    esi
0x69DC91: mov     esi, ecx
0x69DC93: mov     ecx, [esi+1Ch]; this
0x69DC96: test    ecx, ecx
0x69DC98: jz      short loc_69DCFC
0x69DC9A: push    edi
0x69DC9B: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x69DCA0: mov     edi, [esp+8+arg_0]
0x69DCA4: test    edi, edi
0x69DCA6: mov     [esi+0Ch], eax
0x69DCA9: jz      short loc_69DCFB
0x69DCAB: test    eax, eax
0x69DCAD: jz      short loc_69DCFB
0x69DCAF: mov     ecx, eax; object
0x69DCB1: call    GetObjectPointerAt_054; Verified machine behavior is a raw pointer load from object+0x54. Cell-side callsites use TESObjectCELL+0x54 as NiNode*. TravelPath_AddRoadSegmentsForPath passes a TESWorldSpace, for which +0x54 is the owned TESRoad*. Keep the return interpretation dependent on the receiver type.
0x69DCB6: test    eax, eax
0x69DCB8: jz      short loc_69DCFB
0x69DCBA: mov     eax, [edi+1Ch]
0x69DCBD: test    eax, eax
0x69DCBF: jz      short loc_69DCD2
0x69DCC1: mov     ecx, [esi+0Ch]; object
0x69DCC4: push    ebx
0x69DCC5: mov     ebx, [eax+1Ch]
0x69DCC8: call    GetObjectPointerAt_054; Verified machine behavior is a raw pointer load from object+0x54. Cell-side callsites use TESObjectCELL+0x54 as NiNode*. TravelPath_AddRoadSegmentsForPath passes a TESWorldSpace, for which +0x54 is the owned TESRoad*. Keep the return interpretation dependent on the receiver type.
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
0x69DCE7: call    sub_441800; ODismemberment authority: loaded cell effect child lookup by quadrant/index; hit particles use index 3 after sub_4C9BE0(ref).
0x69DCEC: mov     edx, [eax]
0x69DCEE: push    1
0x69DCF0: mov     ecx, eax
0x69DCF2: mov     eax, [edx+84h]
0x69DCF8: push    edi
0x69DCF9: call    eax
0x69DCFB: pop     edi
0x69DCFC: pop     esi
0x69DCFD: retn    4
