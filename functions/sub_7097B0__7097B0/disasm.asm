0x7097B0: push    0FFFFFFFFh
0x7097B2: push    offset SEH_8C8970
0x7097B7: mov     eax, large fs:0
0x7097BD: push    eax
0x7097BE: push    ecx
0x7097BF: push    esi
0x7097C0: push    edi
0x7097C1: mov     eax, ds:0B30AACh
0x7097C6: xor     eax, esp
0x7097C8: push    eax
0x7097C9: lea     eax, [esp+1Ch+var_C]
0x7097CD: mov     large fs:0, eax
0x7097D3: mov     edi, ecx
0x7097D5: push    5Ch ; '\'; Size
0x7097D7: call    FormHeapAlloc
0x7097DC: add     esp, 4
0x7097DF: mov     [esp+1Ch+var_10], eax
0x7097E3: xor     esi, esi
0x7097E5: cmp     eax, esi
0x7097E7: mov     [esp+1Ch+var_4], esi
0x7097EB: jz      short loc_7097F6
0x7097ED: mov     ecx, eax; this
0x7097EF: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x7097F4: mov     esi, eax
0x7097F6: mov     eax, [esp+1Ch+arg_0]
0x7097FA: push    eax
0x7097FB: push    esi
0x7097FC: mov     ecx, edi
0x7097FE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x709806: call    sub_7096A0
0x70980B: mov     eax, esi
0x70980D: mov     ecx, [esp+1Ch+var_C]
0x709811: mov     large fs:0, ecx
0x709818: pop     ecx
0x709819: pop     edi
0x70981A: pop     esi
0x70981B: add     esp, 10h
0x70981E: retn    4
