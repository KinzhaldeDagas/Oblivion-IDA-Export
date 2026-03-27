0x8E4590: push    ebp
0x8E4591: mov     ebp, esp
0x8E4593: and     esp, 0FFFFFFF0h
0x8E4596: sub     esp, 54h
0x8E4599: mov     eax, [ebp+arg_0]
0x8E459C: push    ebx
0x8E459D: push    esi
0x8E459E: mov     esi, ecx
0x8E45A0: mov     ecx, [ebp+arg_8]
0x8E45A3: lea     ecx, [eax+ecx*4]
0x8E45A6: cmp     eax, ecx
0x8E45A8: push    edi
0x8E45A9: mov     [esp+60h+var_4C], ecx
0x8E45AD: mov     [esp+60h+var_50], eax
0x8E45B1: jnb     loc_8E471E
0x8E45B7: jmp     short loc_8E45C0
0x8E45B9: align 10h
0x8E45C0: mov     eax, [ebp+arg_4]
0x8E45C3: movaps  xmm5, xmmword ptr [eax]
0x8E45C6: movaps  xmm4, xmmword ptr [esi+10h]
0x8E45CA: movaps  xmm0, xmmword ptr [esi+30h]
0x8E45CE: movaps  xmm3, xmmword ptr ds:0B2FC70h
0x8E45D5: movaps  xmm2, xmmword ptr ds:0A9A660h
0x8E45DC: movaps  xmm1, xmmword ptr ds:0A9A650h
0x8E45E3: addps   xmm5, xmm4
0x8E45E6: movaps  xmm4, xmmword ptr [esi+20h]
0x8E45EA: mulps   xmm5, xmm0
0x8E45ED: minps   xmm5, xmm3
0x8E45F0: maxps   xmm5, xmm2
0x8E45F3: addps   xmm5, xmm1
0x8E45F6: movaps  [esp+60h+var_40], xmm5
0x8E45FB: movaps  xmm5, xmmword ptr [eax+10h]
0x8E45FF: mov     ecx, dword ptr [esp+60h+var_40+4]
0x8E4603: mov     edx, dword ptr [esp+60h+var_40]
0x8E4607: shr     ecx, 7
0x8E460A: mov     word ptr [esp+60h+var_48+2], cx
0x8E460F: addps   xmm5, xmm4
0x8E4612: mulps   xmm5, xmm0
0x8E4615: minps   xmm5, xmm3
0x8E4618: maxps   xmm5, xmm2
0x8E461B: addps   xmm5, xmm1
0x8E461E: movaps  [esp+60h+var_30], xmm5
0x8E4623: mov     ecx, dword ptr [esp+60h+var_30+4]
0x8E4627: mov     edi, dword ptr [esp+60h+var_30+8]
0x8E462B: mov     eax, dword ptr [esp+60h+var_30]
0x8E462F: shr     ecx, 7
0x8E4632: movzx   ecx, cx
0x8E4635: or      ecx, 1
0x8E4638: mov     [esp+60h+var_C], ecx
0x8E463C: shr     edi, 7
0x8E463F: movzx   ecx, di
0x8E4642: shr     edx, 7
0x8E4645: or      ecx, 1
0x8E4648: mov     word ptr [esp+60h+var_48], dx
0x8E464D: mov     edx, dword ptr [esp+60h+var_40+8]
0x8E4651: mov     [esp+60h+var_8], ecx
0x8E4655: mov     ecx, [esp+60h+var_50]
0x8E4659: mov     ecx, [ecx]
0x8E465B: mov     edi, [ecx]
0x8E465D: mov     ecx, [ebp+arg_10]
0x8E4660: shr     edx, 7
0x8E4663: mov     word ptr [esp+60h+var_44], dx
0x8E4668: mov     ebx, [esp+60h+var_48+2]
0x8E466C: mov     edx, [esp+60h+var_48]
0x8E4670: push    ecx
0x8E4671: mov     ecx, [ebp+arg_C]
0x8E4674: shr     eax, 7
0x8E4677: and     ebx, 0FFFEh
0x8E467D: push    ecx
0x8E467E: movzx   eax, ax
0x8E4681: mov     [esp+68h+var_1C], ebx
0x8E4685: mov     ebx, [esp+68h+var_44]
0x8E4689: or      eax, 1
0x8E468C: push    eax
0x8E468D: and     edx, 0FFFEh
0x8E4693: push    edx
0x8E4694: and     ebx, 0FFFEh
0x8E469A: mov     [esp+70h+var_54], edi
0x8E469E: mov     edx, [esp+70h+var_54]
0x8E46A2: mov     [esp+70h+var_18], ebx
0x8E46A6: mov     ebx, [esi+40h]
0x8E46A9: shl     edi, 4
0x8E46AC: push    edx
0x8E46AD: add     edi, ebx
0x8E46AF: push    edi
0x8E46B0: push    ebx
0x8E46B1: push    esi
0x8E46B2: call    sub_8E3C30
0x8E46B7: mov     eax, [ebp+arg_10]
0x8E46BA: mov     ecx, [ebp+arg_C]
0x8E46BD: mov     edx, [esp+80h+var_C]
0x8E46C1: push    eax
0x8E46C2: mov     eax, [esp+84h+var_1C]
0x8E46C6: push    ecx
0x8E46C7: mov     ecx, [esp+88h+var_54]
0x8E46CB: push    edx
0x8E46CC: push    eax
0x8E46CD: push    ecx
0x8E46CE: push    edi
0x8E46CF: push    ebx
0x8E46D0: push    esi
0x8E46D1: call    sub_8E3E90
0x8E46D6: mov     edx, [ebp+arg_10]
0x8E46D9: mov     eax, [ebp+arg_C]
0x8E46DC: mov     ecx, [esp+0A0h+var_8]
0x8E46E3: add     esp, 40h
0x8E46E6: push    edx
0x8E46E7: mov     edx, [esp+64h+var_18]
0x8E46EB: push    eax
0x8E46EC: mov     eax, [esp+68h+var_54]
0x8E46F0: push    ecx
0x8E46F1: push    edx
0x8E46F2: push    eax
0x8E46F3: push    edi
0x8E46F4: push    ebx
0x8E46F5: push    esi
0x8E46F6: call    sub_8E4210
0x8E46FB: mov     eax, [esp+80h+var_50]
0x8E46FF: mov     edi, [ebp+arg_4]
0x8E4702: mov     ecx, [esp+80h+var_4C]
0x8E4706: add     eax, 4
0x8E4709: add     edi, 20h ; ' '
0x8E470C: add     esp, 20h
0x8E470F: cmp     eax, ecx
0x8E4711: mov     [ebp+arg_4], edi
0x8E4714: mov     [esp+60h+var_50], eax
0x8E4718: jb      loc_8E45C0
0x8E471E: pop     edi
0x8E471F: pop     esi
0x8E4720: pop     ebx
0x8E4721: mov     esp, ebp
0x8E4723: pop     ebp
0x8E4724: retn    14h
