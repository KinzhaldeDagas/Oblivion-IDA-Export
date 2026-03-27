0x5E4440: push    esi
0x5E4441: push    edi
0x5E4442: mov     edi, [esp+8+arg_0]
0x5E4446: test    edi, edi
0x5E4448: mov     esi, ecx
0x5E444A: jz      short loc_5E44AC
0x5E444C: test    byte ptr [edi+88h], 1
0x5E4453: jz      short loc_5E44AC
0x5E4455: cmp     dword ptr [edi+64h], 0
0x5E4459: jz      short loc_5E44AC
0x5E445B: mov     eax, [esi]
0x5E445D: mov     edx, [eax+100h]
0x5E4463: push    0
0x5E4465: push    1
0x5E4467: push    0
0x5E4469: push    0
0x5E446B: push    0
0x5E446D: push    0
0x5E446F: push    0
0x5E4471: push    1
0x5E4473: push    0
0x5E4475: push    edi
0x5E4476: call    edx
0x5E4478: call    sub_5C1900
0x5E447D: mov     edi, [edi+64h]
0x5E4480: test    edi, edi
0x5E4482: jz      short loc_5E4489
0x5E4484: lea     eax, [edi+18h]
0x5E4487: jmp     short loc_5E448B
0x5E4489: xor     eax, eax
0x5E448B: mov     ecx, [esp+8+arg_4]
0x5E448F: push    0
0x5E4491: push    ecx
0x5E4492: push    eax
0x5E4493: lea     ecx, [esi+5Ch]
0x5E4496: call    MagicCaster_CastMagicItem
0x5E449B: mov     ecx, ds:0B333C4h
0x5E44A1: cmp     esi, ecx
0x5E44A3: jnz     short loc_5E44AC
0x5E44A5: push    0
0x5E44A7: call    sub_664850
0x5E44AC: pop     edi
0x5E44AD: pop     esi
0x5E44AE: retn    8
