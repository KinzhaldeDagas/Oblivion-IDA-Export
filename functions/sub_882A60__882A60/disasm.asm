0x882A60: push    0FFFFFFFFh
0x882A62: push    offset SEH_8C8970
0x882A67: mov     eax, large fs:0
0x882A6D: push    eax
0x882A6E: push    ecx
0x882A6F: push    esi
0x882A70: push    edi
0x882A71: mov     eax, ds:0B30AACh
0x882A76: xor     eax, esp
0x882A78: push    eax
0x882A79: lea     eax, [esp+1Ch+var_C]
0x882A7D: mov     large fs:0, eax
0x882A83: mov     edi, ecx
0x882A85: push    170h; Size
0x882A8A: call    FormHeapAlloc
0x882A8F: add     esp, 4
0x882A92: mov     [esp+1Ch+var_10], eax
0x882A96: xor     esi, esi
0x882A98: cmp     eax, esi
0x882A9A: mov     [esp+1Ch+var_4], esi
0x882A9E: jz      short loc_882AA9
0x882AA0: mov     ecx, eax; this
0x882AA2: call    ??0HairShaderProperty@@QAE@XZ; HairShaderProperty::HairShaderProperty(void)
0x882AA7: mov     esi, eax
0x882AA9: mov     eax, [esp+1Ch+arg_0]
0x882AAD: push    eax
0x882AAE: push    esi
0x882AAF: mov     ecx, edi
0x882AB1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x882AB9: call    sub_8827E0
0x882ABE: mov     eax, esi
0x882AC0: mov     ecx, [esp+1Ch+var_C]
0x882AC4: mov     large fs:0, ecx
0x882ACB: pop     ecx
0x882ACC: pop     edi
0x882ACD: pop     esi
0x882ACE: add     esp, 10h
0x882AD1: retn    4
