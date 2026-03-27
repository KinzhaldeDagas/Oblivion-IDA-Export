0x73A980: push    0FFFFFFFFh
0x73A982: push    offset SEH_8C8970
0x73A987: mov     eax, large fs:0
0x73A98D: push    eax
0x73A98E: push    ecx
0x73A98F: push    esi
0x73A990: push    edi
0x73A991: mov     eax, ds:0B30AACh
0x73A996: xor     eax, esp
0x73A998: push    eax
0x73A999: lea     eax, [esp+1Ch+var_C]
0x73A99D: mov     large fs:0, eax
0x73A9A3: mov     edi, ecx
0x73A9A5: push    144h; Size
0x73A9AA: call    FormHeapAlloc
0x73A9AF: add     esp, 4
0x73A9B2: mov     [esp+1Ch+var_10], eax
0x73A9B6: xor     esi, esi
0x73A9B8: cmp     eax, esi
0x73A9BA: mov     [esp+1Ch+var_4], esi
0x73A9BE: jz      short loc_73A9C9
0x73A9C0: mov     ecx, eax; this
0x73A9C2: call    ??0NiScreenSpaceCamera@@QAE@XZ; NiScreenSpaceCamera::NiScreenSpaceCamera(void)
0x73A9C7: mov     esi, eax
0x73A9C9: mov     eax, [esp+1Ch+arg_0]
0x73A9CD: push    eax
0x73A9CE: push    esi
0x73A9CF: mov     ecx, edi
0x73A9D1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73A9D9: call    sub_73A220
0x73A9DE: mov     eax, esi
0x73A9E0: mov     ecx, [esp+1Ch+var_C]
0x73A9E4: mov     large fs:0, ecx
0x73A9EB: pop     ecx
0x73A9EC: pop     edi
0x73A9ED: pop     esi
0x73A9EE: add     esp, 10h
0x73A9F1: retn    4
