0x73FE50: push    0FFFFFFFFh
0x73FE52: push    offset SEH_8C8970
0x73FE57: mov     eax, large fs:0
0x73FE5D: push    eax
0x73FE5E: push    ecx
0x73FE5F: push    esi
0x73FE60: push    edi
0x73FE61: mov     eax, ds:0B30AACh
0x73FE66: xor     eax, esp
0x73FE68: push    eax
0x73FE69: lea     eax, [esp+1Ch+var_C]
0x73FE6D: mov     large fs:0, eax
0x73FE73: mov     edi, ecx
0x73FE75: push    18h; Size
0x73FE77: call    FormHeapAlloc
0x73FE7C: mov     esi, eax
0x73FE7E: add     esp, 4
0x73FE81: mov     [esp+1Ch+var_10], esi
0x73FE85: test    esi, esi
0x73FE87: mov     [esp+1Ch+var_4], 0
0x73FE8F: jz      short loc_73FEA0
0x73FE91: mov     ecx, esi; this
0x73FE93: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x73FE98: mov     dword ptr [esi], offset ??_7NiRendererSpecificProperty@@6B@; const NiRendererSpecificProperty::`vftable'
0x73FE9E: jmp     short loc_73FEA2
0x73FEA0: xor     esi, esi
0x73FEA2: mov     eax, [esp+1Ch+arg_0]
0x73FEA6: push    eax
0x73FEA7: push    esi
0x73FEA8: mov     ecx, edi
0x73FEAA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73FEB2: call    sub_700A60
0x73FEB7: mov     eax, esi
0x73FEB9: mov     ecx, [esp+1Ch+var_C]
0x73FEBD: mov     large fs:0, ecx
0x73FEC4: pop     ecx
0x73FEC5: pop     edi
0x73FEC6: pop     esi
0x73FEC7: add     esp, 10h
0x73FECA: retn    4
