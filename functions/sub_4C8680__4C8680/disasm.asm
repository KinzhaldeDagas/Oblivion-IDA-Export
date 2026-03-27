0x4C8680: push    ebp
0x4C8681: mov     ebp, esp
0x4C8683: and     esp, 0FFFFFFF8h
0x4C8686: mov     eax, 224Ch
0x4C868B: call    __alloca_probe
0x4C8690: mov     eax, ds:0B30AACh
0x4C8695: xor     eax, esp
0x4C8697: mov     [esp+224Ch+var_4], eax
0x4C869E: push    ebx
0x4C869F: push    esi
0x4C86A0: mov     esi, ecx
0x4C86A2: mov     ecx, [esi+1Ch]
0x4C86A5: test    cl, 7
0x4C86A8: push    edi
0x4C86A9: lea     edi, [esi+1Ch]
0x4C86AC: mov     [esp+2258h+var_223C], esi
0x4C86B0: jz      loc_4C8CE6
0x4C86B6: test    cl, 8
0x4C86B9: jnz     short loc_4C86E4
0x4C86BB: mov     eax, [esi+24h]
0x4C86BE: test    eax, eax
0x4C86C0: jz      loc_4C8CE6
0x4C86C6: cmp     dword ptr [eax+4], 0
0x4C86CA: jz      loc_4C8CE6
0x4C86D0: cmp     dword ptr [eax+8], 0
0x4C86D4: jz      loc_4C8CE6
0x4C86DA: cmp     dword ptr [eax+0Ch], 0
0x4C86DE: jz      loc_4C8CE6
0x4C86E4: test    cl, 10h
0x4C86E7: jnz     short loc_4C86F0
0x4C86E9: mov     ecx, esi
0x4C86EB: call    sub_4C8210
0x4C86F0: mov     ecx, esi; this
0x4C86F2: call    TESForm_InitializeFormRecord
0x4C86F7: push    4; Size
0x4C86F9: push    edi; Src
0x4C86FA: push    41544144h; int
0x4C86FF: call    TESForm_PutFormRecordChunkData
0x4C8704: add     esp, 0Ch
0x4C8707: test    byte ptr [edi], 1
0x4C870A: jz      loc_4C8996
0x4C8710: xor     ebx, ebx
0x4C8712: mov     eax, ebx
0x4C8714: cdq
0x4C8715: sub     eax, edx
0x4C8717: sar     eax, 1
0x4C8719: mov     edx, ebx
0x4C871B: and     edx, 80000001h
0x4C8721: mov     [esp+2258h+var_2238], eax
0x4C8725: jns     short loc_4C872C
0x4C8727: dec     edx
0x4C8728: or      edx, 0FFFFFFFEh
0x4C872B: inc     edx
0x4C872C: mov     ecx, eax
0x4C872E: shl     ecx, 5
0x4C8731: add     ecx, edx
0x4C8733: add     ecx, eax
0x4C8735: shl     ecx, 4
0x4C8738: xor     edi, edi
0x4C873A: mov     [esp+2258h+var_2240], ecx
0x4C873E: mov     [esp+2258h+var_2234], edx
0x4C8742: mov     [esp+2258h+var_2248], edi
0x4C8746: mov     ecx, edi
0x4C8748: jmp     short loc_4C8750
0x4C874A: align 10h
0x4C8750: mov     eax, 0F0F0F0F1h
0x4C8755: mul     ecx
0x4C8757: shr     edx, 4
0x4C875A: mov     esi, edx
0x4C875C: shl     esi, 4
0x4C875F: add     esi, ecx
0x4C8761: add     esi, [esp+2258h+var_2240]
0x4C8765: cmp     edx, 10h
0x4C8768: mov     [esp+2258h+var_2244], 0
0x4C8770: jnz     short loc_4C8789
0x4C8772: cmp     [esp+2258h+var_2238], 1
0x4C8777: mov     [esp+2258h+var_2244], 1
0x4C877F: jnz     short loc_4C8789
0x4C8781: mov     [esp+2258h+var_2244], 0
0x4C8789: mov     eax, edx
0x4C878B: shl     eax, 4
0x4C878E: add     eax, edx
0x4C8790: mov     edx, ecx
0x4C8792: sub     edx, eax
0x4C8794: cmp     edx, 10h
0x4C8797: jnz     short loc_4C87A0
0x4C8799: cmp     [esp+2258h+var_2234], 1
0x4C879E: jmp     short loc_4C87A5
0x4C87A0: cmp     [esp+2258h+var_2244], 0
0x4C87A5: jnz     loc_4C884D
0x4C87AB: mov     eax, [esp+2258h+var_223C]
0x4C87AF: mov     ecx, [eax+24h]
0x4C87B2: mov     edx, [ecx+4]
0x4C87B5: mov     ecx, [edx+ebx*4]
0x4C87B8: fld     dword ptr [ecx+edi+8]
0x4C87BC: fstp    [esp+2258h+var_2244]
0x4C87C0: fld     [esp+2258h+var_2244]
0x4C87C4: fistp   [esp+2258h+var_2230]
0x4C87C8: mov     eax, [eax+24h]
0x4C87CB: mov     ecx, [eax+8]
0x4C87CE: mov     edx, [esp+2258h+var_2230]
0x4C87D2: mov     ecx, [ecx+ebx*4]
0x4C87D5: sar     edx, 3
0x4C87D8: add     ecx, edi
0x4C87DA: mov     [esp+esi*4+2258h+var_1558], edx
0x4C87E1: call    sub_43F350
0x4C87E6: fstp    st
0x4C87E8: mov     edx, [esp+2258h+var_223C]
0x4C87EC: mov     eax, [edx+24h]
0x4C87EF: mov     eax, [eax+8]
0x4C87F2: mov     ecx, [eax+ebx*4]
0x4C87F5: fld     dword ptr [ecx+edi]
0x4C87F8: lea     esi, [esi+esi*2]
0x4C87FB: fld     qword ptr ds:0A46298h
0x4C8801: mov     [esp+2258h+var_2244], esi
0x4C8805: fmul    st(1), st
0x4C8807: fxch    st(1)
0x4C8809: call    Double_To_SInt32
0x4C880E: mov     edx, [esp+2258h+var_223C]
0x4C8812: mov     byte ptr [esp+esi+2258h+Src], al
0x4C8816: mov     esi, [edx+24h]
0x4C8819: mov     eax, [esi+8]
0x4C881C: mov     ecx, [eax+ebx*4]
0x4C881F: fld     dword ptr [ecx+edi+4]
0x4C8823: fmul    st, st(1)
0x4C8825: call    Double_To_SInt32
0x4C882A: mov     edx, [esp+2258h+var_2244]
0x4C882E: mov     byte ptr [esp+edx+2258h+Src+1], al
0x4C8832: mov     eax, [esi+8]
0x4C8835: mov     ecx, [eax+ebx*4]
0x4C8838: fmul    dword ptr [ecx+edi+8]
0x4C883C: call    Double_To_SInt32
0x4C8841: mov     edx, [esp+2258h+var_2244]
0x4C8845: mov     ecx, [esp+2258h+var_2248]
0x4C8849: mov     [esp+edx+2258h+var_221E], al
0x4C884D: add     ecx, 1
0x4C8850: add     edi, 0Ch
0x4C8853: cmp     edi, 0D8Ch
0x4C8859: mov     [esp+2258h+var_2248], ecx
0x4C885D: jl      loc_4C8750
0x4C8863: add     ebx, 1
0x4C8866: cmp     ebx, 4
0x4C8869: jl      loc_4C8712
0x4C886F: push    0CC3h; Size
0x4C8874: lea     eax, [esp+225Ch+Src]
0x4C8878: push    eax; Src
0x4C8879: push    4C4D4E56h; int
0x4C887E: call    TESForm_PutFormRecordChunkData
0x4C8883: fild    [esp+2264h+var_1558]
0x4C888A: mov     ebx, [esp+2264h+var_1558]
0x4C8891: add     esp, 0Ch
0x4C8894: fstp    [esp+2258h+var_450]
0x4C889B: mov     byte ptr [esp+2258h+var_2248], 0
0x4C88A0: xor     ecx, ecx
0x4C88A2: mov     esi, [esp+ecx*4+2258h+var_1558]
0x4C88A9: mov     eax, esi
0x4C88AB: sub     eax, ebx
0x4C88AD: cdq
0x4C88AE: xor     eax, edx
0x4C88B0: sub     eax, edx
0x4C88B2: cmp     eax, 80h ; '€'
0x4C88B7: jl      short loc_4C88D3
0x4C88B9: cmp     esi, ebx
0x4C88BB: mov     byte ptr [esp+2258h+var_2248], 1
0x4C88C0: lea     esi, [esp+ecx+2258h+var_44C]
0x4C88C7: jle     short loc_4C88CE
0x4C88C9: mov     byte ptr [esi], 7Fh
0x4C88CC: jmp     short loc_4C88E5
0x4C88CE: mov     byte ptr [esi], 81h
0x4C88D1: jmp     short loc_4C88E5
0x4C88D3: mov     dl, byte ptr [esp+ecx*4+2258h+var_1558]
0x4C88DA: lea     esi, [esp+ecx+2258h+var_44C]
0x4C88E1: sub     dl, bl
0x4C88E3: mov     [esi], dl
0x4C88E5: lea     eax, [ecx+1]
0x4C88E8: mov     [esp+2258h+var_2230], eax
0x4C88EC: cdq
0x4C88ED: mov     edi, 21h ; '!'
0x4C88F2: idiv    edi
0x4C88F4: test    edx, edx
0x4C88F6: jnz     short loc_4C8901
0x4C88F8: mov     ebx, [esp+ecx*4+2258h+var_15D8]
0x4C88FF: jmp     short loc_4C8916
0x4C8901: cmp     byte ptr [esp+2258h+var_2248], 0
0x4C8906: jnz     short loc_4C8911
0x4C8908: mov     ebx, [esp+ecx*4+2258h+var_1558]
0x4C890F: jmp     short loc_4C8916
0x4C8911: movsx   eax, byte ptr [esi]
0x4C8914: add     ebx, eax
0x4C8916: mov     ecx, [esp+2258h+var_2230]
0x4C891A: cmp     ecx, 441h
0x4C8920: jl      short loc_4C88A2
0x4C8922: push    448h; Size
0x4C8927: lea     ecx, [esp+225Ch+var_450]
0x4C892E: push    ecx; Src
0x4C892F: push    54474856h; int
0x4C8934: call    TESForm_PutFormRecordChunkData
0x4C8939: add     esp, 0Ch
0x4C893C: cmp     byte ptr [esp+2258h+var_2248], 0
0x4C8941: jz      short loc_4C8996
0x4C8943: mov     esi, [esp+2258h+var_223C]
0x4C8947: mov     eax, [esi+24h]
0x4C894A: test    eax, eax
0x4C894C: jz      short loc_4C8956
0x4C894E: mov     edi, [eax+9Ch]
0x4C8954: jmp     short loc_4C8968
0x4C8956: mov     ecx, [esi+20h]; this
0x4C8959: test    ecx, ecx
0x4C895B: jz      short loc_4C8966
0x4C895D: call    TESObjectCELL_GetYCoordinate
0x4C8962: mov     edi, eax
0x4C8964: jmp     short loc_4C8968
0x4C8966: xor     edi, edi
0x4C8968: mov     eax, [esi+24h]
0x4C896B: test    eax, eax
0x4C896D: jz      short loc_4C8977
0x4C896F: mov     eax, [eax+98h]
0x4C8975: jmp     short loc_4C8987
0x4C8977: mov     ecx, [esi+20h]; this
0x4C897A: test    ecx, ecx
0x4C897C: jz      short loc_4C8985
0x4C897E: call    TESObjectCELL_GetXCoordinate
0x4C8983: jmp     short loc_4C8987
0x4C8985: xor     eax, eax
0x4C8987: push    edi
0x4C8988: push    eax; ArgList
0x4C8989: push    offset aErrorSavingLan; "Error saving land height Data for cell "...
0x4C898E: call    PrintError
0x4C8993: add     esp, 0Ch
0x4C8996: mov     eax, [esp+2258h+var_223C]
0x4C899A: add     eax, 1Ch
0x4C899D: test    byte ptr [eax], 2
0x4C89A0: jz      loc_4C8B1F
0x4C89A6: fld     qword ptr ds:0A3DDD8h
0x4C89AC: xor     ebx, ebx
0x4C89AE: mov     [esp+2258h+var_2244], ebx
0x4C89B2: mov     eax, ebx
0x4C89B4: cdq
0x4C89B5: sub     eax, edx
0x4C89B7: sar     eax, 1
0x4C89B9: and     ebx, 80000001h
0x4C89BF: mov     [esp+2258h+var_2238], eax
0x4C89C3: jns     short loc_4C89CA
0x4C89C5: dec     ebx
0x4C89C6: or      ebx, 0FFFFFFFEh
0x4C89C9: inc     ebx
0x4C89CA: mov     ecx, eax
0x4C89CC: shl     ecx, 5
0x4C89CF: add     ecx, ebx
0x4C89D1: add     ecx, eax
0x4C89D3: shl     ecx, 4
0x4C89D6: xor     edi, edi
0x4C89D8: mov     [esp+2258h+var_2234], ebx
0x4C89DC: mov     [esp+2258h+var_2230], ecx
0x4C89E0: xor     esi, esi
0x4C89E2: mov     eax, 0F0F0F0F1h
0x4C89E7: mul     edi
0x4C89E9: shr     edx, 4
0x4C89EC: mov     eax, edx
0x4C89EE: shl     eax, 4
0x4C89F1: add     eax, edi
0x4C89F3: add     eax, ecx
0x4C89F5: cmp     edx, 10h
0x4C89F8: mov     [esp+2258h+var_2248], 0
0x4C8A00: jnz     short loc_4C8A19
0x4C8A02: cmp     [esp+2258h+var_2238], 1
0x4C8A07: mov     [esp+2258h+var_2248], 1
0x4C8A0F: jnz     short loc_4C8A19
0x4C8A11: mov     [esp+2258h+var_2248], 0
0x4C8A19: mov     ebx, edx
0x4C8A1B: shl     ebx, 4
0x4C8A1E: add     ebx, edx
0x4C8A20: mov     edx, edi
0x4C8A22: sub     edx, ebx
0x4C8A24: cmp     edx, 10h
0x4C8A27: jnz     short loc_4C8A30
0x4C8A29: cmp     [esp+2258h+var_2234], 1
0x4C8A2E: jmp     short loc_4C8A35
0x4C8A30: cmp     [esp+2258h+var_2248], 0
0x4C8A35: mov     ebx, [esp+2258h+var_2244]
0x4C8A39: jnz     loc_4C8AE4
0x4C8A3F: mov     ecx, [esp+2258h+var_223C]
0x4C8A43: fnstcw  word ptr [esp+2258h+var_2248]
0x4C8A47: mov     ecx, [ecx+24h]
0x4C8A4A: lea     edx, [eax+eax*2]
0x4C8A4D: mov     eax, [ecx+0Ch]
0x4C8A50: mov     eax, [eax+ebx*4]
0x4C8A53: fld     dword ptr [eax+esi]
0x4C8A56: movzx   eax, word ptr [esp+2258h+var_2248]
0x4C8A5B: or      eax, 0C00h
0x4C8A60: fmul    st, st(1)
0x4C8A62: mov     [esp+2258h+var_2240], eax
0x4C8A66: fldcw   word ptr [esp+2258h+var_2240]
0x4C8A6A: fistp   [esp+2258h+var_2240]
0x4C8A6E: movzx   eax, byte ptr [esp+2258h+var_2240]
0x4C8A73: mov     byte ptr [esp+edx+2258h+Src], al
0x4C8A77: mov     eax, [ecx+0Ch]
0x4C8A7A: fldcw   word ptr [esp+2258h+var_2248]
0x4C8A7E: mov     eax, [eax+ebx*4]
0x4C8A81: fld     dword ptr [eax+esi+4]
0x4C8A85: fnstcw  word ptr [esp+2258h+var_2248]
0x4C8A89: fmul    st, st(1)
0x4C8A8B: movzx   eax, word ptr [esp+2258h+var_2248]
0x4C8A90: or      eax, 0C00h
0x4C8A95: mov     [esp+2258h+var_2240], eax
0x4C8A99: fldcw   word ptr [esp+2258h+var_2240]
0x4C8A9D: fistp   [esp+2258h+var_2240]
0x4C8AA1: movzx   eax, byte ptr [esp+2258h+var_2240]
0x4C8AA6: mov     byte ptr [esp+edx+2258h+Src+1], al
0x4C8AAA: mov     ecx, [ecx+0Ch]
0x4C8AAD: fldcw   word ptr [esp+2258h+var_2248]
0x4C8AB1: mov     eax, [ecx+ebx*4]
0x4C8AB4: fld     dword ptr [eax+esi+8]
0x4C8AB8: fnstcw  word ptr [esp+2258h+var_2248]
0x4C8ABC: fmul    st, st(1)
0x4C8ABE: movzx   eax, word ptr [esp+2258h+var_2248]
0x4C8AC3: or      eax, 0C00h
0x4C8AC8: mov     [esp+2258h+var_2240], eax
0x4C8ACC: fldcw   word ptr [esp+2258h+var_2240]
0x4C8AD0: fistp   [esp+2258h+var_2240]
0x4C8AD4: mov     cl, byte ptr [esp+2258h+var_2240]
0x4C8AD8: mov     [esp+edx+2258h+var_221E], cl
0x4C8ADC: mov     ecx, [esp+2258h+var_2230]
0x4C8AE0: fldcw   word ptr [esp+2258h+var_2248]
0x4C8AE4: add     esi, 10h
0x4C8AE7: add     edi, 1
0x4C8AEA: cmp     esi, 1210h
0x4C8AF0: jl      loc_4C89E2
0x4C8AF6: add     ebx, 1
0x4C8AF9: cmp     ebx, 4
0x4C8AFC: mov     [esp+2258h+var_2244], ebx
0x4C8B00: jl      loc_4C89B2
0x4C8B06: push    0CC3h; Size
0x4C8B0B: fstp    st
0x4C8B0D: lea     edx, [esp+225Ch+Src]
0x4C8B11: push    edx; Src
0x4C8B12: push    524C4356h; int
0x4C8B17: call    TESForm_PutFormRecordChunkData
0x4C8B1C: add     esp, 0Ch
0x4C8B1F: mov     eax, [esp+2258h+var_223C]
0x4C8B23: add     eax, 1Ch
0x4C8B26: test    byte ptr [eax], 4
0x4C8B29: jz      loc_4C8CD8
0x4C8B2F: mov     ecx, [esp+2258h+var_223C]
0x4C8B33: call    sub_4C0290
0x4C8B38: mov     [esp+2258h+var_2248], 0
0x4C8B40: mov     [esp+2258h+var_2244], 20h ; ' '
0x4C8B48: jmp     short loc_4C8B50
0x4C8B4A: align 10h
0x4C8B50: mov     edi, [esp+2258h+var_223C]
0x4C8B54: mov     eax, [edi+24h]
0x4C8B57: mov     esi, [esp+2258h+var_2244]
0x4C8B5B: mov     ecx, [eax+esi]
0x4C8B5E: add     eax, esi
0x4C8B60: test    ecx, ecx
0x4C8B62: jz      short loc_4C8B98
0x4C8B64: cmp     ecx, ds:0B35BE4h
0x4C8B6A: jz      short loc_4C8B98
0x4C8B6C: mov     cl, byte ptr [esp+2258h+var_2248]
0x4C8B70: mov     [esp+2258h+var_222C], cl
0x4C8B74: mov     [esp+2258h+var_222A], 0FFFFh
0x4C8B7B: mov     edx, [eax]
0x4C8B7D: mov     eax, [edx+0Ch]
0x4C8B80: push    8; Size
0x4C8B82: lea     ecx, [esp+225Ch+var_2230]
0x4C8B86: push    ecx; Src
0x4C8B87: push    54585442h; int
0x4C8B8C: mov     [esp+2264h+var_2230], eax
0x4C8B90: call    TESForm_PutFormRecordChunkData
0x4C8B95: add     esp, 0Ch
0x4C8B98: mov     edx, [edi+24h]
0x4C8B9B: cmp     dword ptr [esi+edx+10h], 0
0x4C8BA0: jz      loc_4C8CBF
0x4C8BA6: xor     ebx, ebx
0x4C8BA8: mov     [esp+2258h+var_2238], ebx
0x4C8BAC: lea     esp, [esp+0]
0x4C8BB0: mov     eax, [esp+2258h+var_223C]
0x4C8BB4: mov     ecx, [eax+24h]
0x4C8BB7: mov     edx, [esp+2258h+var_2244]
0x4C8BBB: mov     eax, [edx+ecx+10h]
0x4C8BBF: mov     eax, [eax+ebx*4]
0x4C8BC2: test    eax, eax
0x4C8BC4: jz      loc_4C8CAF
0x4C8BCA: cmp     eax, ds:0B35BE4h
0x4C8BD0: mov     cl, byte ptr [esp+2258h+var_2248]
0x4C8BD4: mov     [esp+2258h+var_2224], cl
0x4C8BD8: movzx   ecx, bx
0x4C8BDB: mov     [esp+2258h+var_2222], cx
0x4C8BE0: jz      short loc_4C8BE7
0x4C8BE2: mov     eax, [eax+0Ch]
0x4C8BE5: jmp     short loc_4C8BE9
0x4C8BE7: xor     eax, eax
0x4C8BE9: push    8; Size
0x4C8BEB: lea     edx, [esp+225Ch+var_2228]
0x4C8BEF: push    edx; Src
0x4C8BF0: push    54585441h; int
0x4C8BF5: mov     [esp+2264h+var_2228], eax
0x4C8BF9: call    TESForm_PutFormRecordChunkData
0x4C8BFE: fldz
0x4C8C00: mov     eax, [esp+2264h+var_223C]
0x4C8C04: mov     edx, [eax+24h]
0x4C8C07: add     esp, 0Ch
0x4C8C0A: xor     esi, esi
0x4C8C0C: mov     [esp+2258h+var_2234], esi
0x4C8C10: mov     ecx, [esp+2258h+var_2244]
0x4C8C14: cmp     dword ptr [edx+ecx+20h], 0
0x4C8C19: jz      short loc_4C8C7D
0x4C8C1B: mov     al, byte ptr [esp+2258h+var_2248]
0x4C8C1F: cmp     al, 4
0x4C8C21: jnb     short loc_4C8C7D
0x4C8C23: movzx   ecx, word ptr [esp+2258h+var_2234]
0x4C8C28: cmp     cx, 121h
0x4C8C2D: jnb     short loc_4C8C7D
0x4C8C2F: movzx   edi, bx
0x4C8C32: cmp     di, 8
0x4C8C36: jnb     short loc_4C8C7D
0x4C8C38: test    edx, edx
0x4C8C3A: jz      short loc_4C8C7D
0x4C8C3C: movzx   eax, al
0x4C8C3F: cmp     dword ptr [edx+eax*4+40h], 0
0x4C8C44: lea     eax, [edx+eax*4+40h]
0x4C8C48: jz      short loc_4C8C7D
0x4C8C4A: mov     eax, [eax]
0x4C8C4C: movzx   ebx, cx
0x4C8C4F: mov     eax, [eax+ebx*4]
0x4C8C52: mov     ebx, [esp+2258h+var_2238]
0x4C8C56: movzx   edi, di
0x4C8C59: fld     dword ptr [eax+edi*4]
0x4C8C5C: fstp    [esp+2258h+var_2240]
0x4C8C60: fld     [esp+2258h+var_2240]
0x4C8C64: fcom    st(1)
0x4C8C66: fnstsw  ax
0x4C8C68: test    ah, 41h
0x4C8C6B: jnz     short loc_4C8C7B
0x4C8C6D: fstp    [esp+esi*8+2258h+var_221C]
0x4C8C71: mov     [esp+esi*8+2258h+Src], cx
0x4C8C76: add     esi, 1
0x4C8C79: jmp     short loc_4C8C7D
0x4C8C7B: fstp    st
0x4C8C7D: mov     eax, [esp+2258h+var_2234]
0x4C8C81: add     eax, 1
0x4C8C84: cmp     eax, 121h
0x4C8C89: mov     [esp+2258h+var_2234], eax
0x4C8C8D: jl      short loc_4C8C10
0x4C8C8F: test    esi, esi
0x4C8C91: fstp    st
0x4C8C93: jz      short loc_4C8CAF
0x4C8C95: lea     ecx, ds:0[esi*8]
0x4C8C9C: push    ecx; Size
0x4C8C9D: lea     edx, [esp+225Ch+Src]
0x4C8CA1: push    edx; Src
0x4C8CA2: push    54585456h; int
0x4C8CA7: call    TESForm_PutFormRecordChunkData
0x4C8CAC: add     esp, 0Ch
0x4C8CAF: add     ebx, 1
0x4C8CB2: cmp     ebx, 8
0x4C8CB5: mov     [esp+2258h+var_2238], ebx
0x4C8CB9: jl      loc_4C8BB0
0x4C8CBF: mov     eax, [esp+2258h+var_2244]
0x4C8CC3: add     [esp+2258h+var_2248], 1
0x4C8CC8: add     eax, 4
0x4C8CCB: cmp     eax, 30h ; '0'
0x4C8CCE: mov     [esp+2258h+var_2244], eax
0x4C8CD2: jl      loc_4C8B50
0x4C8CD8: mov     ecx, [esp+2258h+var_223C]; this
0x4C8CDC: call    TESForm_FinalizeFormRecord
0x4C8CE1: call    sub_46B370
0x4C8CE6: mov     ecx, [esp+2258h+var_4]
0x4C8CED: pop     edi
0x4C8CEE: pop     esi
0x4C8CEF: pop     ebx
0x4C8CF0: xor     ecx, esp
0x4C8CF2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4C8CF7: mov     esp, ebp
0x4C8CF9: pop     ebp
0x4C8CFA: retn
