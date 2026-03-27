0x7F5350: sub     esp, 2A4h
0x7F5356: mov     eax, ds:0B30AACh
0x7F535B: xor     eax, esp
0x7F535D: mov     [esp+2A4h+var_4], eax
0x7F5364: push    ebx
0x7F5365: push    esi
0x7F5366: push    edi
0x7F5367: push    44h ; 'D'
0x7F5369: lea     eax, [esp+2B4h+var_250]
0x7F536D: push    0
0x7F536F: push    eax
0x7F5370: mov     esi, ecx
0x7F5372: mov     [esp+2BCh+FullPath], offset aImagespace1xVB; "imagespace\\1x\\v\\base.v.hlsl"
0x7F537A: mov     [esp+2BCh+var_254], 0
0x7F5382: call    __memset
0x7F5387: push    44h ; 'D'
0x7F5389: lea     ecx, [esp+2C0h+var_29C]
0x7F538D: push    0
0x7F538F: push    ecx
0x7F5390: mov     [esp+2C8h+var_2A4], offset aImagespace1xPN; "imagespace\\1x\\p\\nighteye.p.hlsl"
0x7F5398: mov     [esp+2C8h+var_2A0], 0
0x7F53A0: call    __memset
0x7F53A5: mov     eax, [esp+2C8h+FullPath]
0x7F53A9: add     esp, 18h
0x7F53AC: test    eax, eax
0x7F53AE: jz      loc_7F543E
0x7F53B4: lea     edx, [esp+2B0h+FileName]
0x7F53BB: push    edx; int
0x7F53BC: push    eax; FullPath
0x7F53BD: call    sub_801030
0x7F53C2: push    0
0x7F53C4: lea     eax, [esp+2BCh+var_20C]
0x7F53CB: push    offset aNighteye03i_vs; "NIGHTEYE%03i.vso"
0x7F53D0: push    eax
0x7F53D1: call    __sprintf
0x7F53D6: add     esp, 14h
0x7F53D9: push    0; int
0x7F53DB: push    0; int
0x7F53DD: lea     ecx, [esp+2B8h+var_20C]
0x7F53E4: push    ecx; int
0x7F53E5: push    offset aVs_1_1; "vs_1_1"
0x7F53EA: lea     edx, [esp+2C0h+var_254]
0x7F53EE: push    edx; int
0x7F53EF: lea     eax, [esp+2C4h+FileName]
0x7F53F6: push    eax; lpFileName
0x7F53F7: mov     ecx, esi
0x7F53F9: call    CreateVertexShader
0x7F53FE: mov     edi, [esi+90h]
0x7F5404: mov     ebx, eax
0x7F5406: cmp     edi, ebx
0x7F5408: jz      short loc_7F543E
0x7F540A: test    edi, edi
0x7F540C: jz      short loc_7F542A
0x7F540E: lea     ecx, [edi+4]
0x7F5411: push    ecx; lpAddend
0x7F5412: call    dword ptr ds:0A2807Ch
0x7F5418: test    eax, eax
0x7F541A: jnz     short loc_7F542A
0x7F541C: test    edi, edi
0x7F541E: jz      short loc_7F542A
0x7F5420: mov     edx, [edi]
0x7F5422: mov     eax, [edx]
0x7F5424: push    1
0x7F5426: mov     ecx, edi
0x7F5428: call    eax
0x7F542A: test    ebx, ebx
0x7F542C: mov     [esi+90h], ebx
0x7F5432: jz      short loc_7F543E
0x7F5434: add     ebx, 4
0x7F5437: push    ebx; lpAddend
0x7F5438: call    dword ptr ds:0A28078h
0x7F543E: mov     eax, [esp+2B0h+var_2A4]
0x7F5442: test    eax, eax
0x7F5444: jz      loc_7F54D4
0x7F544A: lea     ecx, [esp+2B0h+FileName]
0x7F5451: push    ecx; int
0x7F5452: push    eax; FullPath
0x7F5453: call    sub_801030
0x7F5458: push    0
0x7F545A: lea     edx, [esp+2BCh+var_20C]
0x7F5461: push    offset aNighteye03i_ps; "NIGHTEYE%03i.pso"
0x7F5466: push    edx
0x7F5467: call    __sprintf
0x7F546C: add     esp, 14h
0x7F546F: push    0; int
0x7F5471: push    0; int
0x7F5473: lea     eax, [esp+2B8h+var_20C]
0x7F547A: push    eax; int
0x7F547B: push    offset aPs_1_3; "ps_1_3"
0x7F5480: lea     ecx, [esp+2C0h+var_2A0]
0x7F5484: push    ecx; int
0x7F5485: lea     edx, [esp+2C4h+FileName]
0x7F548C: push    edx; lpFileName
0x7F548D: mov     ecx, esi
0x7F548F: call    CreatePixelShader
0x7F5494: mov     edi, [esi+94h]
0x7F549A: mov     ebx, eax
0x7F549C: cmp     edi, ebx
0x7F549E: jz      short loc_7F54D4
0x7F54A0: test    edi, edi
0x7F54A2: jz      short loc_7F54C0
0x7F54A4: lea     eax, [edi+4]
0x7F54A7: push    eax; lpAddend
0x7F54A8: call    dword ptr ds:0A2807Ch
0x7F54AE: test    eax, eax
0x7F54B0: jnz     short loc_7F54C0
0x7F54B2: test    edi, edi
0x7F54B4: jz      short loc_7F54C0
0x7F54B6: mov     edx, [edi]
0x7F54B8: mov     eax, [edx]
0x7F54BA: push    1
0x7F54BC: mov     ecx, edi
0x7F54BE: call    eax
0x7F54C0: test    ebx, ebx
0x7F54C2: mov     [esi+94h], ebx
0x7F54C8: jz      short loc_7F54D4
0x7F54CA: add     ebx, 4
0x7F54CD: push    ebx; lpAddend
0x7F54CE: call    dword ptr ds:0A28078h
0x7F54D4: mov     ecx, [esp+2B0h+var_4]
0x7F54DB: pop     edi
0x7F54DC: pop     esi
0x7F54DD: pop     ebx
0x7F54DE: xor     ecx, esp
0x7F54E0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7F54E5: add     esp, 2A4h
0x7F54EB: retn
