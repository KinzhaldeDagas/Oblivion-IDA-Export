0x6A5390: push    esi
0x6A5391: mov     esi, ecx
0x6A5393: mov     ecx, [esi+20h]; this
0x6A5396: test    ecx, ecx
0x6A5398: push    edi
0x6A5399: jz      short loc_6A53A4
0x6A539B: call    MagicTarget_GetParentActor
0x6A53A0: mov     edi, eax
0x6A53A2: jmp     short loc_6A53A6
0x6A53A4: xor     edi, edi
0x6A53A6: mov     eax, [esi+3Ch]
0x6A53A9: test    eax, eax
0x6A53AB: jz      loc_6A5442
0x6A53B1: test    edi, edi
0x6A53B3: jz      loc_6A5442
0x6A53B9: mov     ecx, [eax+58h]
0x6A53BC: test    ecx, ecx
0x6A53BE: jz      short loc_6A541D
0x6A53C0: mov     eax, [ecx]
0x6A53C2: mov     edx, [eax+8]
0x6A53C5: call    edx
0x6A53C7: test    eax, eax
0x6A53C9: jnz     short loc_6A541D
0x6A53CB: mov     ecx, [esi+3Ch]
0x6A53CE: mov     eax, [ecx]
0x6A53D0: mov     edx, [eax+198h]
0x6A53D6: push    0
0x6A53D8: call    edx
0x6A53DA: test    al, al
0x6A53DC: jnz     short loc_6A5400
0x6A53DE: mov     ecx, [esi+3Ch]
0x6A53E1: push    0
0x6A53E3: push    50525453h
0x6A53E8: add     ecx, 68h ; 'h'
0x6A53EB: call    sub_6A24B0
0x6A53F0: fldz
0x6A53F2: push    ecx
0x6A53F3: fstp    [esp+0Ch+var_C]; int
0x6A53F6: mov     ecx, [esi+3Ch]; int
0x6A53F9: push    0; int
0x6A53FB: call    Actor_Kill
0x6A5400: mov     eax, [esi+3Ch]
0x6A5403: mov     ecx, [eax+58h]
0x6A5406: push    eax
0x6A5407: call    sub_633130
0x6A540C: mov     eax, [esi+3Ch]
0x6A540F: push    1
0x6A5411: push    edi
0x6A5412: push    eax
0x6A5413: call    sub_692660
0x6A5418: add     esp, 0Ch
0x6A541B: jmp     short loc_6A543B
0x6A541D: mov     ecx, [esi+3Ch]
0x6A5420: push    1
0x6A5422: push    edi
0x6A5423: push    ecx
0x6A5424: call    sub_692660
0x6A5429: mov     ecx, [esi+3Ch]
0x6A542C: mov     edx, [ecx]
0x6A542E: mov     eax, [edx+8Ch]
0x6A5434: add     esp, 0Ch
0x6A5437: push    1
0x6A5439: call    eax
0x6A543B: mov     dword ptr [esi+3Ch], 0
0x6A5442: cmp     byte ptr [esi+61h], 0
0x6A5446: jz      short loc_6A545A
0x6A5448: mov     ecx, [esi+8]
0x6A544B: test    ecx, ecx
0x6A544D: jz      short loc_6A545A
0x6A544F: push    0
0x6A5451: call    sub_419F10
0x6A5456: mov     byte ptr [esi+61h], 0
0x6A545A: pop     edi
0x6A545B: pop     esi
0x6A545C: retn
