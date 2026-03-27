0x8E4210: mov     eax, [esp+arg_0]
0x8E4214: mov     ecx, [eax+64h]
0x8E4217: push    ebx
0x8E4218: push    ebp
0x8E4219: push    esi
0x8E421A: mov     esi, [esp+0Ch+arg_8]
0x8E421E: movzx   ebp, word ptr [esi+2]
0x8E4222: movzx   eax, word ptr [ecx+ebp*4-4]
0x8E4227: lea     ebx, [ecx+ebp*4]
0x8E422A: cmp     [esp+0Ch+arg_10], eax
0x8E422E: push    edi
0x8E422F: jnb     loc_8E42E0
0x8E4235: movzx   ecx, word ptr [ebx-2]
0x8E4239: mov     edx, [esp+10h+arg_4]
0x8E423D: mov     edi, ecx
0x8E423F: shl     edi, 4
0x8E4242: add     edi, edx
0x8E4244: test    al, 1
0x8E4246: mov     [ebx], ax
0x8E4249: mov     [ebx+2], cx
0x8E424D: jz      short loc_8E42BF
0x8E424F: xor     edx, edx
0x8E4251: mov     dx, [edi+0Ah]
0x8E4255: sub     dx, [esi+8]
0x8E4259: xor     eax, eax
0x8E425B: mov     ax, [esi+0Ah]
0x8E425F: sub     ax, [edi+8]
0x8E4263: xor     ecx, ecx
0x8E4265: mov     cx, [edi+4]
0x8E4269: sub     cx, [esi]
0x8E426C: or      eax, edx
0x8E426E: xor     edx, edx
0x8E4270: mov     dx, [esi+4]
0x8E4274: sub     dx, [edi]
0x8E4277: or      eax, ecx
0x8E4279: mov     [edi+6], bp
0x8E427D: or      eax, edx
0x8E427F: test    ah, ah
0x8E4281: js      short loc_8E42C3
0x8E4283: mov     eax, [esp+10h+arg_18]
0x8E4287: mov     ecx, [eax+8]
0x8E428A: mov     edx, [eax+4]
0x8E428D: and     ecx, 3FFFFFFFh
0x8E4293: cmp     edx, ecx
0x8E4295: jnz     short loc_8E42A6
0x8E4297: push    8
0x8E4299: push    eax
0x8E429A: call    sub_8A6EE0
0x8E429F: mov     eax, [esp+18h+arg_18]
0x8E42A3: add     esp, 8
0x8E42A6: mov     ecx, [eax+4]
0x8E42A9: mov     edx, [eax]
0x8E42AB: lea     edx, [edx+ecx*8]
0x8E42AE: inc     ecx
0x8E42AF: mov     [eax+4], ecx
0x8E42B2: mov     eax, [esi+0Ch]
0x8E42B5: mov     [edx], eax
0x8E42B7: mov     ecx, [edi+0Ch]
0x8E42BA: mov     [edx+4], ecx
0x8E42BD: jmp     short loc_8E42C3
0x8E42BF: mov     [edi+2], bp
0x8E42C3: mov     dx, [esp+10h+arg_C]
0x8E42C8: mov     ecx, [esp+10h+arg_10]
0x8E42CC: add     ebx, 0FFFFFFFCh
0x8E42CF: mov     [ebx+2], dx
0x8E42D3: movzx   eax, word ptr [ebx-4]
0x8E42D7: dec     ebp
0x8E42D8: cmp     ecx, eax
0x8E42DA: jb      loc_8E4235
0x8E42E0: mov     ax, word ptr [esp+10h+arg_10]
0x8E42E5: mov     edx, [esp+10h+arg_0]
0x8E42E9: mov     [esi+2], bp
0x8E42ED: mov     [ebx], ax
0x8E42F0: movzx   ecx, word ptr [esi+6]
0x8E42F4: mov     eax, [edx+64h]
0x8E42F7: mov     edx, [esp+10h+arg_14]
0x8E42FB: lea     ebx, [eax+ecx*4]
0x8E42FE: movzx   eax, word ptr [ebx+4]
0x8E4302: add     ebx, 4
0x8E4305: cmp     edx, eax
0x8E4307: mov     [esp+10h+arg_8], 0
0x8E430F: jbe     loc_8E43C0
0x8E4315: mov     edi, [esp+10h+arg_8]
0x8E4319: mov     ecx, [ebx]
0x8E431B: mov     ebp, [esp+10h+arg_4]
0x8E431F: inc     edi
0x8E4320: mov     [esp+10h+arg_8], edi
0x8E4324: movzx   edi, word ptr [ebx+2]
0x8E4328: shl     edi, 4
0x8E432B: mov     [ebx-4], ecx
0x8E432E: mov     cx, [esp+10h+arg_C]
0x8E4333: add     edi, ebp
0x8E4335: test    al, 1
0x8E4337: mov     [ebx+2], cx
0x8E433B: jnz     short loc_8E43AD
0x8E433D: xor     ecx, ecx
0x8E433F: mov     cx, [edi+0Ah]
0x8E4343: sub     cx, [esi+8]
0x8E4347: xor     eax, eax
0x8E4349: mov     ax, [esi+0Ah]
0x8E434D: sub     ax, [edi+8]
0x8E4351: or      eax, ecx
0x8E4353: xor     ecx, ecx
0x8E4355: mov     cx, [edi+4]
0x8E4359: sub     cx, [esi]
0x8E435C: or      eax, ecx
0x8E435E: xor     ecx, ecx
0x8E4360: mov     cx, [esi+4]
0x8E4364: sub     cx, [edi]
0x8E4367: or      eax, ecx
0x8E4369: dec     word ptr [edi+2]
0x8E436D: test    ah, ah
0x8E436F: js      short loc_8E43B1
0x8E4371: mov     ebp, [esp+10h+arg_18]
0x8E4375: mov     eax, [ebp+8]
0x8E4378: mov     ecx, [ebp+4]
0x8E437B: and     eax, 3FFFFFFFh
0x8E4380: cmp     ecx, eax
0x8E4382: jnz     short loc_8E4393
0x8E4384: push    8
0x8E4386: push    ebp
0x8E4387: call    sub_8A6EE0
0x8E438C: mov     edx, [esp+18h+arg_14]
0x8E4390: add     esp, 8
0x8E4393: mov     eax, [ebp+4]
0x8E4396: mov     ecx, [ebp+0]
0x8E4399: lea     ecx, [ecx+eax*8]
0x8E439C: inc     eax
0x8E439D: mov     [ebp+4], eax
0x8E43A0: mov     eax, [esi+0Ch]
0x8E43A3: mov     [ecx], eax
0x8E43A5: mov     eax, [edi+0Ch]
0x8E43A8: mov     [ecx+4], eax
0x8E43AB: jmp     short loc_8E43B1
0x8E43AD: dec     word ptr [edi+6]
0x8E43B1: movzx   eax, word ptr [ebx+4]
0x8E43B5: add     ebx, 4
0x8E43B8: cmp     edx, eax
0x8E43BA: ja      loc_8E4315
0x8E43C0: mov     cx, word ptr [esp+10h+arg_8]
0x8E43C5: add     [esi+6], cx
0x8E43C9: movzx   eax, word ptr [esi+6]
0x8E43CD: mov     ecx, [esp+10h+arg_0]
0x8E43D1: mov     ecx, [ecx+64h]
0x8E43D4: mov     ebp, [esp+10h+arg_1C]
0x8E43D8: lea     ebx, [ecx+eax*4]
0x8E43DB: movzx   eax, word ptr [ebx-4]
0x8E43DF: cmp     edx, eax
0x8E43E1: mov     [esp+10h+arg_8], 0
0x8E43E9: jnb     loc_8E4497
0x8E43EF: nop
0x8E43F0: mov     edi, [esp+10h+arg_8]
0x8E43F4: mov     ecx, [esp+10h+arg_4]
0x8E43F8: add     ebx, 0FFFFFFFCh
0x8E43FB: dec     edi
0x8E43FC: mov     [esp+10h+arg_8], edi
0x8E4400: movzx   edi, word ptr [ebx+2]
0x8E4404: shl     edi, 4
0x8E4407: add     edi, ecx
0x8E4409: test    al, 1
0x8E440B: mov     ecx, [ebx]
0x8E440D: mov     [ebx+4], ecx
0x8E4410: mov     cx, [esp+10h+arg_C]
0x8E4415: mov     [ebx+2], cx
0x8E4419: jnz     short loc_8E4487
0x8E441B: xor     ecx, ecx
0x8E441D: mov     cx, [edi+0Ah]
0x8E4421: sub     cx, [esi+8]
0x8E4425: xor     eax, eax
0x8E4427: mov     ax, [esi+0Ah]
0x8E442B: sub     ax, [edi+8]
0x8E442F: or      eax, ecx
0x8E4431: xor     ecx, ecx
0x8E4433: mov     cx, [edi+4]
0x8E4437: sub     cx, [esi]
0x8E443A: or      eax, ecx
0x8E443C: xor     ecx, ecx
0x8E443E: mov     cx, [esi+4]
0x8E4442: sub     cx, [edi]
0x8E4445: or      eax, ecx
0x8E4447: inc     word ptr [edi+2]
0x8E444B: test    ah, ah
0x8E444D: js      short loc_8E448B
0x8E444F: mov     eax, [ebp+8]
0x8E4452: mov     ecx, [ebp+4]
0x8E4455: and     eax, 3FFFFFFFh
0x8E445A: cmp     ecx, eax
0x8E445C: jnz     short loc_8E446D
0x8E445E: push    8
0x8E4460: push    ebp
0x8E4461: call    sub_8A6EE0
0x8E4466: mov     edx, [esp+18h+arg_14]
0x8E446A: add     esp, 8
0x8E446D: mov     eax, [ebp+4]
0x8E4470: mov     ecx, [ebp+0]
0x8E4473: lea     ecx, [ecx+eax*8]
0x8E4476: inc     eax
0x8E4477: mov     [ebp+4], eax
0x8E447A: mov     eax, [esi+0Ch]
0x8E447D: mov     [ecx], eax
0x8E447F: mov     eax, [edi+0Ch]
0x8E4482: mov     [ecx+4], eax
0x8E4485: jmp     short loc_8E448B
0x8E4487: inc     word ptr [edi+6]
0x8E448B: movzx   eax, word ptr [ebx-4]
0x8E448F: cmp     edx, eax
0x8E4491: jb      loc_8E43F0
0x8E4497: mov     cx, word ptr [esp+10h+arg_8]
0x8E449C: add     [esi+6], cx
0x8E44A0: mov     eax, [esp+10h+arg_0]
0x8E44A4: mov     [ebx], dx
0x8E44A7: movzx   edx, word ptr [esi+2]
0x8E44AB: mov     ecx, [eax+64h]
0x8E44AE: mov     ebx, [esp+10h+arg_10]
0x8E44B2: lea     edi, [ecx+edx*4]
0x8E44B5: movzx   ecx, word ptr [edi+4]
0x8E44B9: lea     eax, [edi+4]
0x8E44BC: xor     edx, edx
0x8E44BE: cmp     ebx, ecx
0x8E44C0: jbe     loc_8E457F
0x8E44C6: mov     ebx, eax
0x8E44C8: movzx   edi, word ptr [ebx+2]
0x8E44CC: mov     eax, [esp+10h+arg_4]
0x8E44D0: shl     edi, 4
0x8E44D3: add     edi, eax
0x8E44D5: mov     eax, [ebx]
0x8E44D7: inc     edx
0x8E44D8: test    cl, 1
0x8E44DB: mov     [ebx-4], eax
0x8E44DE: mov     ax, [esp+10h+arg_C]
0x8E44E3: mov     [esp+10h+arg_0], edx
0x8E44E7: mov     [ebx+2], ax
0x8E44EB: jz      short loc_8E4559
0x8E44ED: xor     ecx, ecx
0x8E44EF: mov     cx, [edi+0Ah]
0x8E44F3: sub     cx, [esi+8]
0x8E44F7: xor     eax, eax
0x8E44F9: mov     ax, [esi+0Ah]
0x8E44FD: sub     ax, [edi+8]
0x8E4501: or      eax, ecx
0x8E4503: xor     ecx, ecx
0x8E4505: mov     cx, [esi+4]
0x8E4509: sub     cx, [edi]
0x8E450C: or      eax, ecx
0x8E450E: xor     ecx, ecx
0x8E4510: mov     cx, [edi+4]
0x8E4514: sub     cx, [esi]
0x8E4517: or      eax, ecx
0x8E4519: dec     word ptr [edi+6]
0x8E451D: test    ah, ah
0x8E451F: js      short loc_8E455D
0x8E4521: mov     eax, [ebp+8]
0x8E4524: mov     ecx, [ebp+4]
0x8E4527: and     eax, 3FFFFFFFh
0x8E452C: cmp     ecx, eax
0x8E452E: jnz     short loc_8E453F
0x8E4530: push    8
0x8E4532: push    ebp
0x8E4533: call    sub_8A6EE0
0x8E4538: mov     edx, [esp+18h+arg_0]
0x8E453C: add     esp, 8
0x8E453F: mov     eax, [ebp+4]
0x8E4542: mov     ecx, [ebp+0]
0x8E4545: lea     ecx, [ecx+eax*8]
0x8E4548: inc     eax
0x8E4549: mov     [ebp+4], eax
0x8E454C: mov     eax, [esi+0Ch]
0x8E454F: mov     [ecx], eax
0x8E4551: mov     eax, [edi+0Ch]
0x8E4554: mov     [ecx+4], eax
0x8E4557: jmp     short loc_8E455D
0x8E4559: dec     word ptr [edi+2]
0x8E455D: movzx   ecx, word ptr [ebx+4]
0x8E4561: mov     edi, [esp+10h+arg_10]
0x8E4565: cmp     edi, ecx
0x8E4567: lea     eax, [ebx+4]
0x8E456A: ja      loc_8E44C6
0x8E4570: add     [esi+2], dx
0x8E4574: mov     cx, di
0x8E4577: pop     edi
0x8E4578: pop     esi
0x8E4579: pop     ebp
0x8E457A: mov     [ebx], cx
0x8E457D: pop     ebx
0x8E457E: retn
0x8E457F: add     [esi+2], dx
0x8E4583: mov     [edi], bx
0x8E4586: pop     edi
0x8E4587: pop     esi
0x8E4588: pop     ebp
0x8E4589: pop     ebx
0x8E458A: retn
