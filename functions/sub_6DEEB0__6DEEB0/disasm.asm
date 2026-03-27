0x6DEEB0: push    0FFFFFFFFh
0x6DEEB2: push    offset SEH_8C8970
0x6DEEB7: mov     eax, large fs:0
0x6DEEBD: push    eax
0x6DEEBE: push    ecx
0x6DEEBF: push    esi
0x6DEEC0: push    edi
0x6DEEC1: mov     eax, ds:0B30AACh
0x6DEEC6: xor     eax, esp
0x6DEEC8: push    eax
0x6DEEC9: lea     eax, [esp+1Ch+var_C]
0x6DEECD: mov     large fs:0, eax
0x6DEED3: mov     edi, ecx
0x6DEED5: push    44h ; 'D'; Size
0x6DEED7: call    FormHeapAlloc
0x6DEEDC: mov     esi, eax
0x6DEEDE: add     esp, 4
0x6DEEE1: mov     [esp+1Ch+var_10], esi
0x6DEEE5: test    esi, esi
0x6DEEE7: mov     [esp+1Ch+var_4], 0
0x6DEEEF: jz      short loc_6DEF06
0x6DEEF1: mov     ecx, esi
0x6DEEF3: call    sub_6ECC00
0x6DEEF8: mov     dword ptr [esi], offset ??_7NiMaterialColorController@@6B@; const NiMaterialColorController::`vftable'
0x6DEEFE: mov     word ptr [esi+40h], 0
0x6DEF04: jmp     short loc_6DEF08
0x6DEF06: xor     esi, esi
0x6DEF08: mov     eax, [esp+1Ch+arg_0]
0x6DEF0C: push    eax
0x6DEF0D: push    esi
0x6DEF0E: mov     ecx, edi
0x6DEF10: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6DEF18: call    sub_6ECB60
0x6DEF1D: mov     cx, [edi+40h]
0x6DEF21: mov     [esi+40h], cx
0x6DEF25: mov     eax, esi
0x6DEF27: mov     ecx, [esp+1Ch+var_C]
0x6DEF2B: mov     large fs:0, ecx
0x6DEF32: pop     ecx
0x6DEF33: pop     edi
0x6DEF34: pop     esi
0x6DEF35: add     esp, 10h
0x6DEF38: retn    4
