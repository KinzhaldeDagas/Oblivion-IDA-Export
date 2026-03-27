0x423B10: push    0FFFFFFFFh
0x423B12: push    offset SEH_6E3250
0x423B17: mov     eax, large fs:0
0x423B1D: push    eax
0x423B1E: push    esi
0x423B1F: push    edi
0x423B20: mov     eax, ___security_cookie
0x423B25: xor     eax, esp
0x423B27: push    eax
0x423B28: lea     eax, [esp+18h+var_C]
0x423B2C: mov     large fs:0, eax
0x423B32: mov     esi, ecx
0x423B34: push    5Bh ; '['; a2
0x423B36: call    BaseExtraList_GetExtraData
0x423B3B: test    eax, eax
0x423B3D: jz      short loc_423B7C
0x423B3F: mov     ecx, [esp+18h+arg_0]
0x423B43: test    ecx, ecx
0x423B45: jnz     short loc_423B65
0x423B47: push    1
0x423B49: push    eax
0x423B4A: mov     ecx, esi
0x423B4C: call    BaseExtraList_RemoveExtraByPtr
0x423B51: mov     ecx, [esp+18h+var_C]
0x423B55: mov     large fs:0, ecx
0x423B5C: pop     ecx
0x423B5D: pop     edi
0x423B5E: pop     esi
0x423B5F: add     esp, 0Ch
0x423B62: retn    4
0x423B65: mov     [eax+0Ch], ecx
0x423B68: mov     ecx, [esp+18h+var_C]
0x423B6C: mov     large fs:0, ecx
0x423B73: pop     ecx
0x423B74: pop     edi
0x423B75: pop     esi
0x423B76: add     esp, 0Ch
0x423B79: retn    4
0x423B7C: mov     edi, [esp+18h+arg_0]
0x423B80: test    edi, edi
0x423B82: jz      short loc_423BBA
0x423B84: push    10h; Size
0x423B86: call    FormHeapAlloc
0x423B8B: add     esp, 4
0x423B8E: mov     [esp+18h+arg_0], eax
0x423B92: test    eax, eax
0x423B94: mov     [esp+18h+var_4], 0
0x423B9C: jz      short loc_423BA8
0x423B9E: push    edi
0x423B9F: mov     ecx, eax; this
0x423BA1: call    ??0ExtraSound@@QAE@XZ; ExtraSound::ExtraSound(void)
0x423BA6: jmp     short loc_423BAA
0x423BA8: xor     eax, eax
0x423BAA: push    eax; BSExtraData *
0x423BAB: mov     ecx, esi; ExtraDataList *
0x423BAD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x423BB5: call    BaseExtraList_AddExtra
0x423BBA: mov     ecx, [esp+18h+var_C]
0x423BBE: mov     large fs:0, ecx
0x423BC5: pop     ecx
0x423BC6: pop     edi
0x423BC7: pop     esi
0x423BC8: add     esp, 0Ch
0x423BCB: retn    4
