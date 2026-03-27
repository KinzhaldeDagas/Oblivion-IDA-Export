0x7E51F0: sub     esp, 28h
0x7E51F3: fld     [esp+28h+arg_0]
0x7E51F7: push    ebx
0x7E51F8: push    ebp
0x7E51F9: mov     ebp, ecx
0x7E51FB: fsub    dword ptr [ebp+0F8h]
0x7E5201: push    esi
0x7E5202: push    edi
0x7E5203: fstp    [esp+38h+var_20]
0x7E5207: fld     [esp+38h+var_20]
0x7E520B: fabs
0x7E520D: fstp    [esp+38h+var_20]
0x7E5211: fld     [esp+38h+var_20]
0x7E5215: fstp    [esp+38h+var_24]
0x7E5219: call    sub_7E2D60
0x7E521E: fld     dword ptr [ebp+80h]
0x7E5224: mov     ebx, eax
0x7E5226: mov     [esp+38h+var_20], ebx
0x7E522A: fimul   [esp+38h+var_20]
0x7E522E: call    Double_To_SInt32
0x7E5233: cmp     ebx, eax
0x7E5235: mov     [esp+38h+var_28], ebx
0x7E5239: jl      short loc_7E523F
0x7E523B: mov     [esp+38h+var_28], eax
0x7E523F: fld     [esp+38h+var_24]
0x7E5243: fdiv    dword ptr [ebp+84h]
0x7E5249: fimul   [esp+38h+var_28]
0x7E524D: call    Double_To_SInt32
0x7E5252: cmp     [esp+38h+arg_4], 0
0x7E5257: mov     ecx, ds:0B3F9ACh
0x7E525D: mov     edx, ds:0B3F9B0h
0x7E5263: mov     [esp+38h+var_24], eax
0x7E5267: mov     eax, ds:0B3F9A8h
0x7E526C: mov     dword ptr [esp+38h+var_18], eax
0x7E5270: mov     dword ptr [esp+38h+var_18+4], ecx
0x7E5274: mov     [esp+38h+var_10], edx
0x7E5278: jz      short loc_7E52F7
0x7E527A: mov     eax, [ebp+120h]
0x7E5280: mov     eax, [eax+1Ch]
0x7E5283: test    eax, eax
0x7E5285: jz      short loc_7E52F7
0x7E5287: jmp     short loc_7E5290
0x7E5289: align 10h
0x7E5290: mov     esi, [eax+8]
0x7E5293: mov     edi, offset aBip01; "Bip01"
0x7E5298: mov     ecx, 6
0x7E529D: xor     edx, edx
0x7E529F: repe cmpsb
0x7E52A1: jz      short loc_7E52AC
0x7E52A3: mov     eax, [eax+1Ch]
0x7E52A6: test    eax, eax
0x7E52A8: jnz     short loc_7E5290
0x7E52AA: jmp     short loc_7E52F7
0x7E52AC: mov     ecx, [eax+1Ch]
0x7E52AF: fld     dword ptr [eax+88h]
0x7E52B5: fsub    dword ptr [ecx+88h]
0x7E52BB: add     ecx, 88h ; 'ˆ'
0x7E52C1: fstp    dword ptr [esp+38h+var_C]
0x7E52C5: fld     dword ptr [eax+8Ch]
0x7E52CB: fsub    dword ptr [ecx+4]
0x7E52CE: fstp    dword ptr [esp+38h+var_C+4]
0x7E52D2: fld     dword ptr [eax+90h]
0x7E52D8: mov     eax, dword ptr [esp+38h+var_C]
0x7E52DC: fsub    dword ptr [ecx+8]
0x7E52DF: mov     ecx, dword ptr [esp+38h+var_C+4]
0x7E52E3: mov     dword ptr [esp+38h+var_18], eax
0x7E52E7: mov     dword ptr [esp+38h+var_18+4], ecx
0x7E52EB: fstp    [esp+38h+var_4]
0x7E52EF: mov     edx, [esp+38h+var_4]
0x7E52F3: mov     [esp+38h+var_10], edx
0x7E52F7: xor     edi, edi
0x7E52F9: test    ebx, ebx
0x7E52FB: jle     loc_7E543F
0x7E5301: fldz
0x7E5303: xor     esi, esi
0x7E5305: fld     dword ptr ds:0A32048h
0x7E530B: mov     ebx, 1
0x7E5310: mov     eax, [ebp+6Ch]
0x7E5313: fld     [esp+38h+arg_0]
0x7E5317: fsub    dword ptr [esi+eax+0Ch]
0x7E531B: lea     ecx, [esi+eax]
0x7E531E: fstp    [esp+38h+var_1C]
0x7E5322: fld     [esp+38h+var_1C]
0x7E5326: fcom    st(2)
0x7E5328: fnstsw  ax
0x7E532A: test    ah, 5
0x7E532D: jnp     short loc_7E5347
0x7E532F: fmul    dword ptr [ecx+1Ch]
0x7E5332: fld     dword ptr [ebp+84h]
0x7E5338: fcompp
0x7E533A: fnstsw  ax
0x7E533C: test    ah, 5
0x7E533F: jp      loc_7E542C
0x7E5345: jmp     short loc_7E5349
0x7E5347: fstp    st
0x7E5349: fld     dword ptr [ecx]
0x7E534B: fcomp   qword ptr ds:0A3A5B0h
0x7E5351: fnstsw  ax
0x7E5353: test    ah, 44h
0x7E5356: jnp     short loc_7E5392
0x7E5358: fst     dword ptr [ecx]
0x7E535A: mov     ecx, [ebp+6Ch]
0x7E535D: fst     dword ptr [esi+ecx+4]
0x7E5361: mov     edx, [ebp+6Ch]
0x7E5364: fst     dword ptr [esi+edx+8]
0x7E5368: mov     eax, [ebp+6Ch]
0x7E536B: fld     dword ptr ds:0A91F98h
0x7E5371: fstp    dword ptr [esi+eax+0Ch]
0x7E5375: mov     ecx, [ebp+6Ch]
0x7E5378: fxch    st(1)
0x7E537A: fst     dword ptr [esi+ecx+10h]
0x7E537E: mov     edx, [ebp+6Ch]
0x7E5381: fst     dword ptr [esi+edx+14h]
0x7E5385: mov     eax, [ebp+6Ch]
0x7E5388: fst     dword ptr [esi+eax+18h]
0x7E538C: add     dword ptr [ebp+7Ch], 0FFFFFFFFh
0x7E5390: fxch    st(1)
0x7E5392: cmp     [esp+38h+arg_8], 0
0x7E5397: jz      loc_7E542C
0x7E539D: cmp     [esp+38h+var_24], 0
0x7E53A2: jle     loc_7E542C
0x7E53A8: mov     ecx, [esp+38h+var_28]
0x7E53AC: cmp     [ebp+7Ch], ecx
0x7E53AF: jge     short loc_7E542C
0x7E53B1: mov     eax, [ebp+70h]
0x7E53B4: fstp    st
0x7E53B6: sub     eax, 0
0x7E53B9: jz      short loc_7E53DB
0x7E53BB: sub     eax, ebx
0x7E53BD: jz      short loc_7E53CF
0x7E53BF: sub     eax, ebx
0x7E53C1: jnz     short loc_7E53E7
0x7E53C3: push    edi
0x7E53C4: fstp    st
0x7E53C6: mov     ecx, ebp
0x7E53C8: call    sub_7E5020
0x7E53CD: jmp     short loc_7E53E5
0x7E53CF: push    edi
0x7E53D0: fstp    st
0x7E53D2: mov     ecx, ebp
0x7E53D4: call    sub_7E4D20
0x7E53D9: jmp     short loc_7E53E5
0x7E53DB: push    edi
0x7E53DC: fstp    st
0x7E53DE: mov     ecx, ebp
0x7E53E0: call    sub_7E4960
0x7E53E5: fldz
0x7E53E7: sub     [esp+38h+var_24], ebx
0x7E53EB: add     [ebp+7Ch], ebx
0x7E53EE: cmp     [esp+38h+arg_4], 0
0x7E53F3: jz      short loc_7E5426
0x7E53F5: mov     edx, [ebp+6Ch]
0x7E53F8: fld     dword ptr [esi+edx]
0x7E53FB: lea     eax, [esi+edx]
0x7E53FE: fsub    dword ptr [esp+38h+var_18]
0x7E5402: fstp    dword ptr [eax]
0x7E5404: mov     eax, [ebp+6Ch]
0x7E5407: fld     dword ptr [esi+eax+4]
0x7E540B: lea     eax, [esi+eax+4]
0x7E540F: fsub    dword ptr [esp+38h+var_18+4]
0x7E5413: fstp    dword ptr [eax]
0x7E5415: mov     ecx, [ebp+6Ch]
0x7E5418: fld     dword ptr [esi+ecx+8]
0x7E541C: lea     eax, [esi+ecx+8]
0x7E5420: fsub    [esp+38h+var_10]
0x7E5424: fstp    dword ptr [eax]
0x7E5426: fld     dword ptr ds:0A32048h
0x7E542C: add     edi, ebx
0x7E542E: add     esi, 20h ; ' '
0x7E5431: cmp     edi, [esp+38h+var_20]
0x7E5435: jl      loc_7E5310
0x7E543B: fstp    st(1)
0x7E543D: fstp    st
0x7E543F: fld     [esp+38h+arg_0]
0x7E5443: pop     edi
0x7E5444: pop     esi
0x7E5445: fstp    dword ptr [ebp+0F8h]
0x7E544B: pop     ebp
0x7E544C: pop     ebx
0x7E544D: add     esp, 28h
0x7E5450: retn    0Ch
