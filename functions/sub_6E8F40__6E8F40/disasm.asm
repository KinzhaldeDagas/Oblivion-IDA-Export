0x6E8F40: push    0FFFFFFFFh
0x6E8F42: push    offset SEH_8C8970
0x6E8F47: mov     eax, large fs:0
0x6E8F4D: push    eax
0x6E8F4E: push    ecx
0x6E8F4F: push    esi
0x6E8F50: push    edi
0x6E8F51: mov     eax, ds:0B30AACh
0x6E8F56: xor     eax, esp
0x6E8F58: push    eax
0x6E8F59: lea     eax, [esp+1Ch+var_C]
0x6E8F5D: mov     large fs:0, eax
0x6E8F63: mov     edi, ecx
0x6E8F65: push    70h ; 'p'; Size
0x6E8F67: call    FormHeapAlloc
0x6E8F6C: add     esp, 4
0x6E8F6F: mov     [esp+1Ch+var_10], eax
0x6E8F73: xor     esi, esi
0x6E8F75: cmp     eax, esi
0x6E8F77: mov     [esp+1Ch+var_4], esi
0x6E8F7B: jz      short loc_6E8F86
0x6E8F7D: mov     ecx, eax; this
0x6E8F7F: call    ??0NiBoneLODController@@QAE@XZ; NiBoneLODController::NiBoneLODController(void)
0x6E8F84: mov     esi, eax
0x6E8F86: mov     eax, [esp+1Ch+arg_0]
0x6E8F8A: push    eax
0x6E8F8B: push    esi
0x6E8F8C: mov     ecx, edi
0x6E8F8E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E8F96: call    sub_715D80
0x6E8F9B: mov     ecx, [edi+3Ch]
0x6E8F9E: mov     [esi+3Ch], ecx
0x6E8FA1: mov     edx, [edi+40h]
0x6E8FA4: mov     [esi+40h], edx
0x6E8FA7: mov     eax, esi
0x6E8FA9: mov     ecx, [esp+1Ch+var_C]
0x6E8FAD: mov     large fs:0, ecx
0x6E8FB4: pop     ecx
0x6E8FB5: pop     edi
0x6E8FB6: pop     esi
0x6E8FB7: add     esp, 10h
0x6E8FBA: retn    4
