0x730C20: push    0FFFFFFFFh
0x730C22: push    offset SEH_8C8970
0x730C27: mov     eax, large fs:0
0x730C2D: push    eax
0x730C2E: push    ecx
0x730C2F: push    esi
0x730C30: push    edi
0x730C31: mov     eax, ds:0B30AACh
0x730C36: xor     eax, esp
0x730C38: push    eax
0x730C39: lea     eax, [esp+1Ch+var_C]
0x730C3D: mov     large fs:0, eax
0x730C43: mov     edi, ecx
0x730C45: push    0Ch; Size
0x730C47: call    FormHeapAlloc
0x730C4C: mov     esi, eax
0x730C4E: add     esp, 4
0x730C51: mov     [esp+1Ch+var_10], esi
0x730C55: test    esi, esi
0x730C57: mov     [esp+1Ch+var_4], 0
0x730C5F: jz      short loc_730C70
0x730C61: mov     ecx, esi
0x730C63: call    sub_721350
0x730C68: mov     dword ptr [esi], offset ??_7NiVertWeightsExtraData@@6B@; const NiVertWeightsExtraData::`vftable'
0x730C6E: jmp     short loc_730C72
0x730C70: xor     esi, esi
0x730C72: mov     eax, [esp+1Ch+arg_0]
0x730C76: push    eax
0x730C77: push    esi
0x730C78: mov     ecx, edi
0x730C7A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x730C82: call    sub_7214A0
0x730C87: mov     eax, esi
0x730C89: mov     ecx, [esp+1Ch+var_C]
0x730C8D: mov     large fs:0, ecx
0x730C94: pop     ecx
0x730C95: pop     edi
0x730C96: pop     esi
0x730C97: add     esp, 10h
0x730C9A: retn    4
