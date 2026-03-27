0x8E5130: push    ebp
0x8E5131: mov     ebp, esp
0x8E5133: and     esp, 0FFFFFFF0h
0x8E5136: sub     esp, 94h
0x8E513C: mov     eax, [ebp+arg_4]
0x8E513F: push    ebx
0x8E5140: push    esi
0x8E5141: push    edi
0x8E5142: mov     edi, ecx
0x8E5144: cmp     dword ptr [eax+4], 1
0x8E5148: mov     [esp+0A0h+var_80], edi
0x8E514C: jl      loc_8E561D
0x8E5152: mov     ecx, [edi+44h]
0x8E5155: mov     edx, [ebp+arg_0]
0x8E5158: mov     esi, [edi+44h]
0x8E515B: mov     eax, [edi+48h]
0x8E515E: lea     ebx, [edi+40h]
0x8E5161: mov     [esp+0A0h+var_7C], ecx
0x8E5165: mov     ecx, [edx+4]
0x8E5168: add     esi, ecx
0x8E516A: and     eax, 3FFFFFFFh
0x8E516F: cmp     eax, esi
0x8E5171: mov     [esp+0A0h+var_84], ecx
0x8E5175: jge     short loc_8E518F
0x8E5177: add     eax, eax
0x8E5179: cmp     esi, eax
0x8E517B: jl      short loc_8E517F
0x8E517D: mov     eax, esi
0x8E517F: push    10h
0x8E5181: push    eax
0x8E5182: push    ebx
0x8E5183: call    sub_8A6E40
0x8E5188: mov     ecx, [esp+0ACh+var_84]
0x8E518C: add     esp, 0Ch
0x8E518F: mov     [ebx+4], esi
0x8E5192: mov     eax, [edi+50h]
0x8E5195: mov     edx, [edi+5Ch]
0x8E5198: mov     [esp+0A0h+var_4C], eax
0x8E519C: mov     eax, [edi+68h]
0x8E519F: lea     esi, [edi+4Ch]
0x8E51A2: mov     [esp+0A0h+var_44], eax
0x8E51A6: mov     eax, [esi+8]
0x8E51A9: add     ecx, ecx
0x8E51AB: mov     [esp+0A0h+var_48], edx
0x8E51AF: mov     edx, [esi+4]
0x8E51B2: lea     ebx, [ecx+edx]
0x8E51B5: and     eax, 3FFFFFFFh
0x8E51BA: cmp     eax, ebx
0x8E51BC: mov     [esp+0A0h+var_88], edx
0x8E51C0: mov     [esp+0A0h+var_8C], ecx
0x8E51C4: jge     short loc_8E51E2
0x8E51C6: add     eax, eax
0x8E51C8: cmp     ebx, eax
0x8E51CA: jl      short loc_8E51CE
0x8E51CC: mov     eax, ebx
0x8E51CE: push    4
0x8E51D0: push    eax
0x8E51D1: push    esi
0x8E51D2: call    sub_8A6E40
0x8E51D7: mov     ecx, [esp+0ACh+var_8C]
0x8E51DB: mov     edx, [esp+0ACh+var_88]
0x8E51DF: add     esp, 0Ch
0x8E51E2: mov     eax, [esi]
0x8E51E4: mov     [esi+4], ebx
0x8E51E7: lea     edx, [eax+edx*4]
0x8E51EA: mov     eax, [edi+60h]
0x8E51ED: lea     esi, [edi+58h]
0x8E51F0: mov     [esp+0A0h+var_6C], edx
0x8E51F4: mov     edx, [esi+4]
0x8E51F7: lea     ebx, [ecx+edx]
0x8E51FA: and     eax, 3FFFFFFFh
0x8E51FF: cmp     eax, ebx
0x8E5201: mov     [esp+0A0h+var_88], edx
0x8E5205: jge     short loc_8E5223
0x8E5207: add     eax, eax
0x8E5209: cmp     ebx, eax
0x8E520B: jl      short loc_8E520F
0x8E520D: mov     eax, ebx
0x8E520F: push    4
0x8E5211: push    eax
0x8E5212: push    esi
0x8E5213: call    sub_8A6E40
0x8E5218: mov     ecx, [esp+0ACh+var_8C]
0x8E521C: mov     edx, [esp+0ACh+var_88]
0x8E5220: add     esp, 0Ch
0x8E5223: mov     eax, [esi]
0x8E5225: mov     [esi+4], ebx
0x8E5228: lea     edx, [eax+edx*4]
0x8E522B: mov     eax, [edi+6Ch]
0x8E522E: lea     esi, [edi+64h]
0x8E5231: mov     [esp+0A0h+var_68], edx
0x8E5235: mov     edx, [esi+4]
0x8E5238: lea     ebx, [ecx+edx]
0x8E523B: and     eax, 3FFFFFFFh
0x8E5240: cmp     eax, ebx
0x8E5242: mov     [esp+0A0h+var_8C], edx
0x8E5246: jge     short loc_8E5260
0x8E5248: add     eax, eax
0x8E524A: cmp     ebx, eax
0x8E524C: jl      short loc_8E5250
0x8E524E: mov     eax, ebx
0x8E5250: push    4
0x8E5252: push    eax
0x8E5253: push    esi
0x8E5254: call    sub_8A6E40
0x8E5259: mov     edx, [esp+0ACh+var_8C]
0x8E525D: add     esp, 0Ch
0x8E5260: mov     eax, [esi]
0x8E5262: lea     ecx, [eax+edx*4]
0x8E5265: mov     eax, [esp+0A0h+var_84]
0x8E5269: mov     [esp+0A0h+var_64], ecx
0x8E526D: xor     ecx, ecx
0x8E526F: cmp     eax, ecx
0x8E5271: mov     [esi+4], ebx
0x8E5274: mov     [esp+0A0h+var_74], ecx
0x8E5278: jle     loc_8E5471
0x8E527E: mov     esi, [esp+0A0h+var_6C]
0x8E5282: mov     ebx, [esp+0A0h+var_68]
0x8E5286: mov     eax, [esp+0A0h+var_7C]
0x8E528A: mov     edx, [esp+0A0h+var_68]
0x8E528E: sub     ebx, esi
0x8E5290: mov     [esp+0A0h+var_8C], ecx
0x8E5294: mov     [esp+0A0h+var_50], ebx
0x8E5298: mov     ebx, [esp+0A0h+var_64]
0x8E529C: mov     ecx, eax
0x8E529E: shl     ecx, 4
0x8E52A1: sub     ebx, esi
0x8E52A3: mov     [esp+0A0h+var_88], ecx
0x8E52A7: lea     ecx, [esi+4]
0x8E52AA: mov     esi, [esp+0A0h+var_64]
0x8E52AE: mov     [esp+0A0h+var_78], ebx
0x8E52B2: mov     ebx, [esp+0A0h+var_68]
0x8E52B6: add     edx, 6
0x8E52B9: sub     esi, ebx
0x8E52BB: mov     [esp+0A0h+var_70], esi
0x8E52BF: nop
0x8E52C0: movaps  xmm4, xmmword ptr [edi+10h]
0x8E52C4: movaps  xmm0, xmmword ptr [edi+30h]
0x8E52C8: movaps  xmm3, xmmword ptr ds:0B2FC70h
0x8E52CF: movaps  xmm2, xmmword ptr ds:0A9A660h
0x8E52D6: movaps  xmm1, xmmword ptr ds:0A9A650h
0x8E52DD: mov     esi, [ebp+arg_4]
0x8E52E0: mov     esi, [esi]
0x8E52E2: mov     ebx, [esp+0A0h+var_8C]
0x8E52E6: movaps  xmm5, xmmword ptr [esi+ebx]
0x8E52EA: add     esi, ebx
0x8E52EC: addps   xmm5, xmm4
0x8E52EF: movaps  xmm4, xmmword ptr [edi+20h]
0x8E52F3: mulps   xmm5, xmm0
0x8E52F6: minps   xmm5, xmm3
0x8E52F9: maxps   xmm5, xmm2
0x8E52FC: addps   xmm5, xmm1
0x8E52FF: movaps  [esp+0A0h+var_20], xmm5
0x8E5307: movaps  xmm5, xmmword ptr [esi+10h]
0x8E530B: mov     ebx, dword ptr [esp+0A0h+var_20]
0x8E5312: shr     ebx, 7
0x8E5315: mov     word ptr [esp+0A0h+var_60], bx
0x8E531A: mov     ebx, dword ptr [esp+0A0h+var_20+4]
0x8E5321: shr     ebx, 7
0x8E5324: mov     word ptr [esp+0A0h+var_60+2], bx
0x8E5329: mov     ebx, dword ptr [esp+0A0h+var_20+8]
0x8E5330: shr     ebx, 7
0x8E5333: mov     word ptr [esp+0A0h+var_5C], bx
0x8E5338: addps   xmm5, xmm4
0x8E533B: mulps   xmm5, xmm0
0x8E533E: minps   xmm5, xmm3
0x8E5341: maxps   xmm5, xmm2
0x8E5344: addps   xmm5, xmm1
0x8E5347: movaps  [esp+0A0h+var_10], xmm5
0x8E534F: mov     esi, dword ptr [esp+0A0h+var_10]
0x8E5356: mov     ebx, dword ptr [esp+0A0h+var_10+4]
0x8E535D: shr     esi, 7
0x8E5360: shr     ebx, 7
0x8E5363: movzx   esi, si
0x8E5366: mov     [esp+0A0h+var_56], bx
0x8E536B: mov     ebx, dword ptr [esp+0A0h+var_10+8]
0x8E5372: or      esi, 1
0x8E5375: shr     ebx, 7
0x8E5378: mov     [esp+0A0h+var_30], esi
0x8E537C: movzx   esi, [esp+0A0h+var_56]
0x8E5381: mov     [esp+0A0h+var_54], bx
0x8E5386: mov     ebx, [esp+0A0h+var_60]
0x8E538A: or      esi, 1
0x8E538D: and     ebx, 0FFFEh
0x8E5393: mov     [esp+0A0h+var_2C], esi
0x8E5397: movzx   esi, [esp+0A0h+var_54]
0x8E539C: mov     [esp+0A0h+var_40], ebx
0x8E53A0: mov     ebx, [esp+0A0h+var_60+2]
0x8E53A4: and     ebx, 0FFFEh
0x8E53AA: or      esi, 1
0x8E53AD: mov     [esp+0A0h+var_3C], ebx
0x8E53B1: mov     ebx, [esp+0A0h+var_5C]
0x8E53B5: mov     [esp+0A0h+var_28], esi
0x8E53B9: mov     esi, [ebp+arg_0]
0x8E53BC: mov     esi, [esi]
0x8E53BE: and     ebx, 0FFFEh
0x8E53C4: mov     [esp+0A0h+var_38], ebx
0x8E53C8: mov     ebx, [esp+0A0h+var_74]
0x8E53CC: mov     esi, [esi+ebx*4]
0x8E53CF: mov     ebx, [esp+0A0h+var_88]
0x8E53D3: add     edi, 40h ; '@'
0x8E53D6: mov     edi, [edi]
0x8E53D8: mov     [edi+ebx+0Ch], esi
0x8E53DC: mov     edi, [esp+0A0h+var_50]
0x8E53E0: mov     [esi], eax
0x8E53E2: mov     si, word ptr [esp+0A0h+var_40]
0x8E53E7: mov     [ecx-4], si
0x8E53EB: mov     si, word ptr [esp+0A0h+var_30]
0x8E53F0: mov     [ecx-2], ax
0x8E53F4: mov     [ecx], si
0x8E53F7: mov     si, word ptr [esp+0A0h+var_3C]
0x8E53FC: mov     [ecx+2], ax
0x8E5400: mov     [edx-6], si
0x8E5404: mov     si, word ptr [esp+0A0h+var_2C]
0x8E5409: mov     [edx-4], ax
0x8E540D: mov     [edi+ecx], si
0x8E5411: mov     [edx], ax
0x8E5414: mov     edi, [esp+0A0h+var_64]
0x8E5418: mov     esi, [esp+0A0h+var_74]
0x8E541C: mov     bx, word ptr [esp+0A0h+var_38]
0x8E5421: mov     [edi+esi*8], bx
0x8E5425: mov     ebx, [esp+0A0h+var_78]
0x8E5429: mov     [edi+esi*8+2], ax
0x8E542E: mov     di, word ptr [esp+0A0h+var_28]
0x8E5433: mov     [ebx+ecx], di
0x8E5437: mov     edi, [esp+0A0h+var_70]
0x8E543B: mov     ebx, [esp+0A0h+var_88]
0x8E543F: mov     [edi+edx], ax
0x8E5443: mov     edi, [esp+0A0h+var_8C]
0x8E5447: add     edi, 20h ; ' '
0x8E544A: inc     esi
0x8E544B: add     ebx, 10h
0x8E544E: mov     [esp+0A0h+var_8C], edi
0x8E5452: mov     edi, [esp+0A0h+var_84]
0x8E5456: inc     eax
0x8E5457: add     ecx, 8
0x8E545A: add     edx, 8
0x8E545D: cmp     esi, edi
0x8E545F: mov     edi, [esp+0A0h+var_80]
0x8E5463: mov     [esp+0A0h+var_74], esi
0x8E5467: mov     [esp+0A0h+var_88], ebx
0x8E546B: jl      loc_8E52C0
0x8E5471: mov     edx, [edi+40h]
0x8E5474: mov     [esp+0A0h+var_78], edx
0x8E5478: xor     esi, esi
0x8E547A: lea     ebx, [ebx+0]
0x8E5480: mov     ebx, [esp+0A0h+var_84]
0x8E5484: add     ebx, ebx
0x8E5486: cmp     ebx, 1
0x8E5489: mov     byte ptr [esp+0A0h+var_70], 0
0x8E548E: jle     short loc_8E54A8
0x8E5490: mov     eax, [esp+0A0h+var_70]
0x8E5494: mov     edx, [esp+esi*4+0A0h+var_6C]
0x8E5498: push    eax
0x8E5499: lea     ecx, [ebx-1]
0x8E549C: push    ecx
0x8E549D: push    0
0x8E549F: push    edx
0x8E54A0: call    sub_8E1200
0x8E54A5: add     esp, 10h
0x8E54A8: inc     esi
0x8E54A9: cmp     esi, 3
0x8E54AC: jl      short loc_8E5480
0x8E54AE: mov     ecx, large fs:2Ch
0x8E54B5: mov     eax, ds:0BA9DE4h
0x8E54BA: mov     eax, [ecx+eax*4]
0x8E54BD: mov     ecx, [eax+19Ch]
0x8E54C3: mov     edx, [esp+0A0h+var_4C]
0x8E54C7: mov     [esp+0A0h+var_80], eax
0x8E54CB: lea     eax, ds:10h[edx*4]
0x8E54D2: mov     edx, [ecx+20h]
0x8E54D5: and     eax, 0FFFFFFF0h
0x8E54D8: lea     esi, [edx+eax]
0x8E54DB: cmp     esi, [ecx+2Ch]
0x8E54DE: ja      short loc_8E54E9
0x8E54E0: mov     [ecx+20h], esi
0x8E54E3: mov     [esp+0A0h+var_88], edx
0x8E54E7: jmp     short loc_8E54F3
0x8E54E9: mov     edx, [ecx]
0x8E54EB: push    eax
0x8E54EC: call    dword ptr [edx+0Ch]
0x8E54EF: mov     [esp+0A0h+var_88], eax
0x8E54F3: lea     eax, [edi+4Ch]
0x8E54F6: xor     esi, esi
0x8E54F8: mov     [esp+0A0h+var_8C], eax
0x8E54FC: lea     esp, [esp+0]
0x8E5500: mov     eax, [esp+0A0h+var_88]
0x8E5504: mov     ecx, [esp+esi*4+0A0h+var_4C]
0x8E5508: mov     edx, [esp+0A0h+var_78]
0x8E550C: push    eax
0x8E550D: push    esi
0x8E550E: push    ebx
0x8E550F: push    ecx
0x8E5510: mov     ecx, [esp+0B0h+var_8C]
0x8E5514: push    edx
0x8E5515: call    sub_8E0C90
0x8E551A: mov     ecx, [esp+0A0h+var_8C]
0x8E551E: inc     esi
0x8E551F: add     ecx, 0Ch
0x8E5522: cmp     esi, 3
0x8E5525: mov     [esp+0A0h+var_8C], ecx
0x8E5529: jl      short loc_8E5500
0x8E552B: mov     esi, [esp+0A0h+var_80]
0x8E552F: mov     ecx, [esi+19Ch]
0x8E5535: mov     eax, [esp+0A0h+var_88]
0x8E5539: cmp     eax, [ecx+28h]
0x8E553C: mov     [ecx+20h], eax
0x8E553F: jnz     short loc_8E5547
0x8E5541: mov     edx, [ecx]
0x8E5543: push    eax
0x8E5544: call    dword ptr [edx+10h]
0x8E5547: mov     eax, [edi+70h]
0x8E554A: test    eax, eax
0x8E554C: jz      short loc_8E5576
0x8E554E: xor     ecx, ecx
0x8E5550: test    eax, eax
0x8E5552: jle     short loc_8E5576
0x8E5554: xor     edx, edx
0x8E5556: mov     eax, [edi+78h]
0x8E5559: movzx   eax, word ptr [eax+edx]
0x8E555D: shl     eax, 4
0x8E5560: add     eax, [edi+40h]
0x8E5563: add     edx, 10h
0x8E5566: add     [eax+4], bx
0x8E556A: add     [eax+6], bx
0x8E556E: mov     eax, [edi+70h]
0x8E5571: inc     ecx
0x8E5572: cmp     ecx, eax
0x8E5574: jl      short loc_8E5556
0x8E5576: mov     eax, [edi+44h]
0x8E5579: mov     ecx, [esi+19Ch]
0x8E557F: mov     esi, [ecx+20h]
0x8E5582: mov     ebx, eax
0x8E5584: sar     eax, 5
0x8E5587: lea     eax, ds:30h[eax*4]
0x8E558E: and     eax, 0FFFFFFF0h
0x8E5591: lea     edx, [esi+eax]
0x8E5594: sar     ebx, 3
0x8E5597: cmp     edx, [ecx+2Ch]
0x8E559A: ja      short loc_8E55A1
0x8E559C: mov     [ecx+20h], edx
0x8E559F: jmp     short loc_8E55A9
0x8E55A1: mov     edx, [ecx]
0x8E55A3: push    eax
0x8E55A4: call    dword ptr [edx+0Ch]
0x8E55A7: mov     esi, eax
0x8E55A9: sar     ebx, 4
0x8E55AC: test    ebx, ebx
0x8E55AE: xorps   xmm0, xmm0
0x8E55B1: mov     eax, esi
0x8E55B3: jl      short loc_8E55C3
0x8E55B5: lea     edx, [ebx+1]
0x8E55B8: mov     ecx, eax
0x8E55BA: add     eax, 10h
0x8E55BD: dec     edx
0x8E55BE: movaps  xmmword ptr [ecx], xmm0
0x8E55C1: jnz     short loc_8E55B8
0x8E55C3: mov     eax, [esp+0A0h+var_84]
0x8E55C7: test    eax, eax
0x8E55C9: jle     short loc_8E55F3
0x8E55CB: mov     edx, [esp+0A0h+var_7C]
0x8E55CF: mov     [esp+0A0h+var_7C], eax
0x8E55D3: mov     ecx, edx
0x8E55D5: and     ecx, 1Fh
0x8E55D8: mov     eax, edx
0x8E55DA: sar     eax, 5
0x8E55DD: mov     ebx, 1
0x8E55E2: shl     ebx, cl
0x8E55E4: xor     [esi+eax*4], ebx
0x8E55E7: mov     eax, [esp+0A0h+var_7C]
0x8E55EB: inc     edx
0x8E55EC: dec     eax
0x8E55ED: mov     [esp+0A0h+var_7C], eax
0x8E55F1: jnz     short loc_8E55D3
0x8E55F3: push    ecx
0x8E55F4: mov     eax, esp
0x8E55F6: mov     byte ptr [eax], 1
0x8E55F9: mov     eax, [ebp+arg_8]
0x8E55FC: push    eax
0x8E55FD: push    esi
0x8E55FE: mov     ecx, edi
0x8E5600: call    sub_8E4BC0
0x8E5605: mov     ecx, [esp+0A0h+var_80]
0x8E5609: mov     ecx, [ecx+19Ch]
0x8E560F: cmp     esi, [ecx+28h]
0x8E5612: mov     [ecx+20h], esi
0x8E5615: jnz     short loc_8E561D
0x8E5617: mov     edx, [ecx]
0x8E5619: push    esi
0x8E561A: call    dword ptr [edx+10h]
0x8E561D: pop     edi
0x8E561E: pop     esi
0x8E561F: pop     ebx
0x8E5620: mov     esp, ebp
0x8E5622: pop     ebp
0x8E5623: retn    0Ch
