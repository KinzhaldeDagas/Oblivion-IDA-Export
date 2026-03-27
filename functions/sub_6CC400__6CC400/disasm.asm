0x6CC400: push    0FFFFFFFFh
0x6CC402: push    offset SEH_8C8970
0x6CC407: mov     eax, large fs:0
0x6CC40D: push    eax
0x6CC40E: push    ecx
0x6CC40F: push    esi
0x6CC410: push    edi
0x6CC411: mov     eax, ds:0B30AACh
0x6CC416: xor     eax, esp
0x6CC418: push    eax
0x6CC419: lea     eax, [esp+1Ch+var_C]
0x6CC41D: mov     large fs:0, eax
0x6CC423: mov     edi, ecx
0x6CC425: push    30h ; '0'; Size
0x6CC427: call    FormHeapAlloc
0x6CC42C: mov     esi, eax
0x6CC42E: add     esp, 4
0x6CC431: mov     [esp+1Ch+var_10], esi
0x6CC435: test    esi, esi
0x6CC437: mov     [esp+1Ch+var_4], 0
0x6CC43F: jz      short loc_6CC450
0x6CC441: mov     ecx, esi
0x6CC443: call    sub_6CC4E0
0x6CC448: mov     dword ptr [esi], offset ??_7NiBlendTransformInterpolator@@6B@; const NiBlendTransformInterpolator::`vftable'
0x6CC44E: jmp     short loc_6CC452
0x6CC450: xor     esi, esi
0x6CC452: mov     eax, [esp+1Ch+arg_0]
0x6CC456: push    eax
0x6CC457: push    esi
0x6CC458: mov     ecx, edi
0x6CC45A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6CC462: call    sub_6CD3D0
0x6CC467: mov     eax, esi
0x6CC469: mov     ecx, [esp+1Ch+var_C]
0x6CC46D: mov     large fs:0, ecx
0x6CC474: pop     ecx
0x6CC475: pop     edi
0x6CC476: pop     esi
0x6CC477: add     esp, 10h
0x6CC47A: retn    4
