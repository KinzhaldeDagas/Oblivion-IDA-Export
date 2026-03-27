0x73E5B0: push    0FFFFFFFFh
0x73E5B2: push    offset SEH_8C8970
0x73E5B7: mov     eax, large fs:0
0x73E5BD: push    eax
0x73E5BE: push    ecx
0x73E5BF: push    esi
0x73E5C0: push    edi
0x73E5C1: mov     eax, ds:0B30AACh
0x73E5C6: xor     eax, esp
0x73E5C8: push    eax
0x73E5C9: lea     eax, [esp+1Ch+var_C]
0x73E5CD: mov     large fs:0, eax
0x73E5D3: mov     edi, ecx
0x73E5D5: push    20h ; ' '; Size
0x73E5D7: call    FormHeapAlloc
0x73E5DC: add     esp, 4
0x73E5DF: mov     [esp+1Ch+var_10], eax
0x73E5E3: xor     esi, esi
0x73E5E5: cmp     eax, esi
0x73E5E7: mov     [esp+1Ch+var_4], esi
0x73E5EB: jz      short loc_73E5F6
0x73E5ED: mov     ecx, eax; this
0x73E5EF: call    ??0NiScreenTexture@@QAE@XZ; NiScreenTexture::NiScreenTexture(void)
0x73E5F4: mov     esi, eax
0x73E5F6: mov     eax, [esp+1Ch+arg_0]
0x73E5FA: push    eax
0x73E5FB: push    esi
0x73E5FC: mov     ecx, edi
0x73E5FE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73E606: call    sub_73E150
0x73E60B: mov     eax, esi
0x73E60D: mov     ecx, [esp+1Ch+var_C]
0x73E611: mov     large fs:0, ecx
0x73E618: pop     ecx
0x73E619: pop     edi
0x73E61A: pop     esi
0x73E61B: add     esp, 10h
0x73E61E: retn    4
