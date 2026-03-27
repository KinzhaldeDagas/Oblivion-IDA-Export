0x694B40: push    0FFFFFFFFh
0x694B42: push    offset SEH_8C8970
0x694B47: mov     eax, large fs:0
0x694B4D: push    eax
0x694B4E: push    ecx
0x694B4F: push    esi
0x694B50: push    edi
0x694B51: mov     eax, ds:0B30AACh
0x694B56: xor     eax, esp
0x694B58: push    eax
0x694B59: lea     eax, [esp+1Ch+var_C]
0x694B5D: mov     large fs:0, eax
0x694B63: mov     esi, ecx
0x694B65: push    38h ; '8'; Size
0x694B67: call    FormHeapAlloc
0x694B6C: mov     edi, eax
0x694B6E: add     esp, 4
0x694B71: mov     [esp+1Ch+var_10], edi
0x694B75: test    edi, edi
0x694B77: mov     [esp+1Ch+var_4], 0
0x694B7F: jz      short loc_694B9C
0x694B81: mov     eax, [esi+0Ch]
0x694B84: mov     ecx, [esi+8]
0x694B87: mov     edx, [esi+24h]
0x694B8A: push    eax
0x694B8B: push    ecx
0x694B8C: push    edx
0x694B8D: mov     ecx, edi; this
0x694B8F: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x694B94: mov     dword ptr [edi], offset ??_7LockEffect@@6B@; const LockEffect::`vftable'
0x694B9A: jmp     short loc_694B9E
0x694B9C: xor     edi, edi
0x694B9E: mov     eax, [esi]
0x694BA0: mov     edx, [eax+2Ch]
0x694BA3: push    edi
0x694BA4: mov     ecx, esi
0x694BA6: mov     [esp+20h+var_4], 0FFFFFFFFh
0x694BAE: call    edx
0x694BB0: mov     eax, edi
0x694BB2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x694BB6: mov     large fs:0, ecx
0x694BBD: pop     ecx
0x694BBE: pop     edi
0x694BBF: pop     esi
0x694BC0: add     esp, 10h
0x694BC3: retn
