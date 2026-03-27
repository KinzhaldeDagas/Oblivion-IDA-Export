0x4D5600: sub     esp, 0Ch
0x4D5603: mov     eax, ds:0B3F9A8h
0x4D5608: mov     ecx, ds:0B3F9ACh
0x4D560E: mov     edx, ds:0B3F9B0h
0x4D5614: mov     dword ptr [esp+0Ch+var_C], eax
0x4D5617: lea     eax, [esp+0Ch+var_C]
0x4D561A: push    esi
0x4D561B: push    eax
0x4D561C: mov     dword ptr [esp+14h+var_C+4], ecx
0x4D5620: mov     [esp+14h+var_4], edx
0x4D5624: mov     dword ptr ds:0B35C00h, 0
0x4D562E: call    sub_4D5000
0x4D5633: mov     esi, eax
0x4D5635: mov     eax, ds:0B35C24h
0x4D563A: add     esp, 4
0x4D563D: cmp     eax, esi
0x4D563F: jz      short loc_4D5679
0x4D5641: test    eax, eax
0x4D5643: jz      short loc_4D5665
0x4D5645: push    edi
0x4D5646: mov     edi, eax
0x4D5648: add     eax, 4
0x4D564B: push    eax; lpAddend
0x4D564C: call    dword ptr ds:0A2807Ch
0x4D5652: test    eax, eax
0x4D5654: jnz     short loc_4D5664
0x4D5656: test    edi, edi
0x4D5658: jz      short loc_4D5664
0x4D565A: mov     edx, [edi]
0x4D565C: mov     eax, [edx]
0x4D565E: push    1
0x4D5660: mov     ecx, edi
0x4D5662: call    eax
0x4D5664: pop     edi
0x4D5665: test    esi, esi
0x4D5667: mov     ds:0B35C24h, esi
0x4D566D: jz      short loc_4D5679
0x4D566F: add     esi, 4
0x4D5672: push    esi; lpAddend
0x4D5673: call    dword ptr ds:0A28078h
0x4D5679: fld     dword ptr ds:0A2FF44h
0x4D567F: pop     esi
0x4D5680: fcom    dword ptr ds:0B35C14h
0x4D5686: fnstsw  ax
0x4D5688: test    ah, 5
0x4D568B: jp      short loc_4D5697
0x4D568D: fstp    dword ptr ds:0B35C14h
0x4D5693: add     esp, 0Ch
0x4D5696: retn
0x4D5697: fstp    st
0x4D5699: add     esp, 0Ch
0x4D569C: retn
