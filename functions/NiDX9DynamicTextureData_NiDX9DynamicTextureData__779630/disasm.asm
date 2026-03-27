0x779630: push    ecx
0x779631: push    ebp
0x779632: push    esi
0x779633: push    edi
0x779634: mov     edi, ds:0B3F928h
0x77963A: push    68h ; 'h'; Size
0x77963C: call    FormHeapAlloc
0x779641: mov     ebp, [esp+14h+a2]
0x779645: mov     esi, eax
0x779647: add     esp, 4
0x77964A: test    esi, esi
0x77964C: jz      short loc_77966A
0x77964E: push    edi; a3
0x77964F: push    ebp; a2
0x779650: mov     ecx, esi; this
0x779652: call    NiDX9TextureData__NiDX9TextureData
0x779657: mov     dword ptr [esi], offset ??_7NiDX9DynamicTextureData@@6B@; const NiDX9DynamicTextureData::`vftable'
0x77965D: mov     dword ptr [esi+60h], 0
0x779664: mov     byte ptr [esi+64h], 0
0x779668: jmp     short loc_77966C
0x77966A: xor     esi, esi
0x77966C: mov     al, [edi+6E9h]
0x779672: mov     byte ptr [esp+10h+var_4], al
0x779676: mov     ecx, [esp+10h+var_4]
0x77967A: push    ecx
0x77967B: push    ebp
0x77967C: mov     ecx, esi
0x77967E: call    sub_7794B0
0x779683: test    eax, eax
0x779685: jnz     short loc_77969C
0x779687: test    esi, esi
0x779689: jz      short loc_779695
0x77968B: mov     edx, [esi]
0x77968D: mov     eax, [edx]
0x77968F: push    1
0x779691: mov     ecx, esi
0x779693: call    eax
0x779695: pop     edi
0x779696: pop     esi
0x779697: xor     eax, eax
0x779699: pop     ebp
0x77969A: pop     ecx
0x77969B: retn
0x77969C: mov     ecx, [esi+4]
0x77969F: pop     edi
0x7796A0: mov     [ecx+24h], esi
0x7796A3: mov     eax, esi
0x7796A5: pop     esi
0x7796A6: pop     ebp
0x7796A7: pop     ecx
0x7796A8: retn
