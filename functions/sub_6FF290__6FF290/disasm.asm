0x6FF290: push    0FFFFFFFFh
0x6FF292: push    offset SEH_8C8970
0x6FF297: mov     eax, large fs:0
0x6FF29D: push    eax
0x6FF29E: push    ecx
0x6FF29F: push    esi
0x6FF2A0: push    edi
0x6FF2A1: mov     eax, ds:0B30AACh
0x6FF2A6: xor     eax, esp
0x6FF2A8: push    eax
0x6FF2A9: lea     eax, [esp+1Ch+var_C]
0x6FF2AD: mov     large fs:0, eax
0x6FF2B3: mov     edi, ecx
0x6FF2B5: push    3Ch ; '<'; Size
0x6FF2B7: call    FormHeapAlloc
0x6FF2BC: add     esp, 4
0x6FF2BF: mov     [esp+1Ch+var_10], eax
0x6FF2C3: xor     esi, esi
0x6FF2C5: cmp     eax, esi
0x6FF2C7: mov     [esp+1Ch+var_4], esi
0x6FF2CB: jz      short loc_6FF2D6
0x6FF2CD: mov     ecx, eax
0x6FF2CF: call    sub_6FEEE0
0x6FF2D4: mov     esi, eax
0x6FF2D6: mov     eax, [esp+1Ch+arg_0]
0x6FF2DA: push    eax
0x6FF2DB: push    esi
0x6FF2DC: mov     ecx, edi
0x6FF2DE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6FF2E6: call    sub_752C40
0x6FF2EB: fld     dword ptr [edi+20h]
0x6FF2EE: fstp    dword ptr [esi+20h]
0x6FF2F1: mov     eax, esi
0x6FF2F3: mov     ecx, [esp+1Ch+var_C]
0x6FF2F7: mov     large fs:0, ecx
0x6FF2FE: pop     ecx
0x6FF2FF: pop     edi
0x6FF300: pop     esi
0x6FF301: add     esp, 10h
0x6FF304: retn    4
