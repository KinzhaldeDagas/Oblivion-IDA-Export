0x718ED0: push    0FFFFFFFFh
0x718ED2: push    offset SEH_8C8970
0x718ED7: mov     eax, large fs:0
0x718EDD: push    eax
0x718EDE: push    ecx
0x718EDF: push    esi
0x718EE0: push    edi
0x718EE1: mov     eax, ds:0B30AACh
0x718EE6: xor     eax, esp
0x718EE8: push    eax
0x718EE9: lea     eax, [esp+1Ch+var_C]
0x718EED: mov     large fs:0, eax
0x718EF3: mov     edi, ecx
0x718EF5: push    24h ; '$'; Size
0x718EF7: call    FormHeapAlloc
0x718EFC: mov     esi, eax
0x718EFE: add     esp, 4
0x718F01: mov     [esp+1Ch+var_10], esi
0x718F05: test    esi, esi
0x718F07: mov     [esp+1Ch+var_4], 0
0x718F0F: jz      short loc_718F34
0x718F11: mov     ecx, esi; this
0x718F13: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x718F18: mov     dword ptr [esi], offset ??_7NiStencilProperty@@6B@; const NiStencilProperty::`vftable'
0x718F1E: mov     dword ptr [esi+1Ch], 0
0x718F25: mov     dword ptr [esi+20h], 0FFFFFFFFh
0x718F2C: mov     word ptr [esi+18h], 4180h
0x718F32: jmp     short loc_718F36
0x718F34: xor     esi, esi
0x718F36: mov     eax, [esp+1Ch+arg_0]
0x718F3A: push    eax
0x718F3B: push    esi
0x718F3C: mov     ecx, edi
0x718F3E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x718F46: call    sub_700A60
0x718F4B: mov     cx, [edi+18h]
0x718F4F: mov     [esi+18h], cx
0x718F53: mov     edx, [edi+1Ch]
0x718F56: mov     [esi+1Ch], edx
0x718F59: mov     eax, [edi+20h]
0x718F5C: mov     [esi+20h], eax
0x718F5F: mov     eax, esi
0x718F61: mov     ecx, [esp+1Ch+var_C]
0x718F65: mov     large fs:0, ecx
0x718F6C: pop     ecx
0x718F6D: pop     edi
0x718F6E: pop     esi
0x718F6F: add     esp, 10h
0x718F72: retn    4
